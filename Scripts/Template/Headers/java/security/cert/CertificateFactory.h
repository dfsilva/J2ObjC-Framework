//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertificateFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateFactory")
#ifdef RESTRICT_JavaSecurityCertCertificateFactory
#define INCLUDE_ALL_JavaSecurityCertCertificateFactory 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateFactory 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertificateFactory_) && (INCLUDE_ALL_JavaSecurityCertCertificateFactory || defined(INCLUDE_JavaSecurityCertCertificateFactory))
#define JavaSecurityCertCertificateFactory_

@class JavaIoInputStream;
@class JavaSecurityCertCRL;
@class JavaSecurityCertCertPath;
@class JavaSecurityCertCertificate;
@class JavaSecurityCertCertificateFactorySpi;
@class JavaSecurityProvider;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

/*!
 @brief This class defines the functionality of a certificate factory, which is
  used to generate certificate, certification path (<code>CertPath</code>)
  and certificate revocation list (CRL) objects from their encodings.
 <p>For encodings consisting of multiple certificates, use 
 <code>generateCertificates</code> when you want to
  parse a collection of possibly unrelated certificates. Otherwise,
  use <code>generateCertPath</code> when you want to generate
  a <code>CertPath</code> (a certificate chain) and subsequently
  validate it with a <code>CertPathValidator</code>.
  
 <p>A certificate factory for X.509 must return certificates that are an
  instance of <code>java.security.cert.X509Certificate</code>, and CRLs
  that are an instance of <code>java.security.cert.X509CRL</code>.
  
 <p>The following example reads a file with Base64 encoded certificates,
  which are each bounded at the beginning by -----BEGIN CERTIFICATE-----, and
  bounded at the end by -----END CERTIFICATE-----. We convert the 
 <code>FileInputStream</code> (which does not support <code>mark</code>
  and <code>reset</code>) to a <code>BufferedInputStream</code> (which
  supports those methods), so that each call to 
 <code>generateCertificate</code> consumes only one certificate, and the
  read position of the input stream is positioned to the next certificate in
  the file:<p>
  
 @code

  FileInputStream fis = new FileInputStream(filename);
  BufferedInputStream bis = new BufferedInputStream(fis);
  CertificateFactory cf = CertificateFactory.getInstance("X.509");
  while (bis.available() > 0) {
     Certificate cert = cf.generateCertificate(bis);
     System.out.println(cert.toString());
  } 
  
@endcode
  
 <p>The following example parses a PKCS#7-formatted certificate reply stored
  in a file and extracts all the certificates from it:<p>
  
 @code

  FileInputStream fis = new FileInputStream(filename);
  CertificateFactory cf = CertificateFactory.getInstance("X.509");
  Collection c = cf.generateCertificates(fis);
  Iterator i = c.iterator();
  while (i.hasNext()) {
     Certificate cert = (Certificate)i.next();
     System.out.println(cert);
  } 
  
@endcode
  
 <p> Android provides the following <code>CertificateFactory</code> types: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>X.509</td>
              <td>1+</td>
          </tr>
      </tbody>
  </table>
  and the following <code>CertPath</code> encodings: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>PKCS7</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>PkiPath</td>
              <td>1+</td>
          </tr>
      </tbody>
  </table>
  The type and encodings are described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertificateFactory">
  CertificateFactory section</a> and the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathEncodings">
  CertPath Encodings section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Hemma Prafullchandra
 @author Jan Luehe
 @author Sean Mullan
 - seealso: Certificate
 - seealso: X509Certificate
 - seealso: CertPath
 - seealso: CRL
 - seealso: X509CRL
 @since 1.2
 */
@interface JavaSecurityCertCertificateFactory : NSObject

#pragma mark Public

/*!
 @brief Generates a certificate object and initializes it with
  the data read from the input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized certificate format
  supported by this certificate factory,
  the returned certificate object can be typecast to the corresponding
  certificate class. For example, if this certificate
  factory implements X.509 certificates, the returned certificate object
  can be typecast to the <code>X509Certificate</code> class. 
 <p>In the case of a certificate factory for X.509 certificates, the
  certificate provided in <code>inStream</code> must be DER-encoded and
  may be supplied in binary or printable (Base64) encoding. If the
  certificate is provided in Base64 encoding, it must be bounded at
  the beginning by -----BEGIN CERTIFICATE-----, and must be bounded at
  the end by -----END CERTIFICATE-----. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream. Otherwise, each call to this
  method consumes one certificate and the read position of the
  input stream is positioned to the next available byte after
  the inherent end-of-certificate marker. If the data in the input stream
  does not contain an inherent end-of-certificate marker (other
  than EOF) and there is trailing data after the certificate is parsed, a 
 <code>CertificateException</code> is thrown.
 @param inStream an input stream with the certificate data.
 @return a certificate object initialized with the data
  from the input stream.
 @throw CertificateExceptionon parsing errors.
 */
- (JavaSecurityCertCertificate *)generateCertificateWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns a (possibly empty) collection view of the certificates read
  from the given input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized certificate format
  supported by this certificate factory, each element in
  the returned collection view can be typecast to the corresponding
  certificate class. For example, if this certificate
  factory implements X.509 certificates, the elements in the returned
  collection can be typecast to the <code>X509Certificate</code> class. 
 <p>In the case of a certificate factory for X.509 certificates, 
 <code>inStream</code> may contain a sequence of DER-encoded certificates
  in the formats described for 
 <code>generateCertificate</code>.
  In addition, <code>inStream</code> may contain a PKCS#7 certificate
  chain. This is a PKCS#7 <i>SignedData</i> object, with the only
  significant field being <i>certificates</i>. In particular, the
  signature and the contents are ignored. This format allows multiple
  certificates to be downloaded at once. If no certificates are present,
  an empty collection is returned. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream.
 @param inStream the input stream with the certificates.
 @return a (possibly empty) collection view of
  java.security.cert.Certificate objects
  initialized with the data from the input stream.
 @throw CertificateExceptionon parsing errors.
 */
- (id<JavaUtilCollection>)generateCertificatesWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  the data read from the <code>InputStream</code> inStream.The data
  is assumed to be in the default encoding.
 The name of the default
  encoding is the first element of the <code>Iterator</code> returned by
  the <code>getCertPathEncodings</code> method.
 @param inStream an  <code> InputStream </code>  containing the data
 @return a <code>CertPath</code> initialized with the data from the
    <code>InputStream</code>
 @throw CertificateExceptionif an exception occurs while decoding
 @since 1.4
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  the data read from the <code>InputStream</code> inStream.The data
  is assumed to be in the specified encoding.
 See
  the CertPath Encodings section in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertPathEncodings">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard encoding names and their formats.
 @param inStream an  <code> InputStream </code>  containing the data
 @param encoding the encoding used for the data
 @return a <code>CertPath</code> initialized with the data from the
    <code>InputStream</code>
 @throw CertificateExceptionif an exception occurs while decoding or
    the encoding requested is not supported
 @since 1.4
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaIoInputStream:(JavaIoInputStream *)inStream
                                                       withNSString:(NSString *)encoding;

/*!
 @brief Generates a <code>CertPath</code> object and initializes it with
  a <code>List</code> of <code>Certificate</code>s.
 <p>
  The certificates supplied must be of a type supported by the 
 <code>CertificateFactory</code>. They will be copied out of the supplied 
 <code>List</code> object.
 @param certificates a  <code> List </code>  of  <code> Certificate </code>
  s
 @return a <code>CertPath</code> initialized with the supplied list of
    certificates
 @throw CertificateExceptionif an exception occurs
 @since 1.4
 */
- (JavaSecurityCertCertPath *)generateCertPathWithJavaUtilList:(id<JavaUtilList>)certificates;

/*!
 @brief Generates a certificate revocation list (CRL) object and initializes it
  with the data read from the input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized CRL format
  supported by this certificate factory,
  the returned CRL object can be typecast to the corresponding
  CRL class. For example, if this certificate
  factory implements X.509 CRLs, the returned CRL object
  can be typecast to the <code>X509CRL</code> class. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream. Otherwise, each call to this
  method consumes one CRL and the read position of the input stream
  is positioned to the next available byte after the inherent
  end-of-CRL marker. If the data in the
  input stream does not contain an inherent end-of-CRL marker (other
  than EOF) and there is trailing data after the CRL is parsed, a 
 <code>CRLException</code> is thrown.
 @param inStream an input stream with the CRL data.
 @return a CRL object initialized with the data
  from the input stream.
 @throw CRLExceptionon parsing errors.
 */
- (JavaSecurityCertCRL *)generateCRLWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns a (possibly empty) collection view of the CRLs read
  from the given input stream <code>inStream</code>.
 <p>In order to take advantage of the specialized CRL format
  supported by this certificate factory, each element in
  the returned collection view can be typecast to the corresponding
  CRL class. For example, if this certificate
  factory implements X.509 CRLs, the elements in the returned
  collection can be typecast to the <code>X509CRL</code> class. 
 <p>In the case of a certificate factory for X.509 CRLs, 
 <code>inStream</code> may contain a sequence of DER-encoded CRLs.
  In addition, <code>inStream</code> may contain a PKCS#7 CRL
  set. This is a PKCS#7 <i>SignedData</i> object, with the only
  significant field being <i>crls</i>. In particular, the
  signature and the contents are ignored. This format allows multiple
  CRLs to be downloaded at once. If no CRLs are present,
  an empty collection is returned. 
 <p>Note that if the given input stream does not support 
 <code>mark</code> and 
 <code>reset</code>, this method will
  consume the entire input stream.
 @param inStream the input stream with the CRLs.
 @return a (possibly empty) collection view of
  java.security.cert.CRL objects initialized with the data from the input
  stream.
 @throw CRLExceptionon parsing errors.
 */
- (id<JavaUtilCollection>)generateCRLsWithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Returns an iteration of the <code>CertPath</code> encodings supported
  by this certificate factory, with the default encoding first.See
  the CertPath Encodings section in the <a href="{@@docRoot}openjdk-redirect.html?
 v=8&path=/technotes/guides/security/StandardNames.html#CertPathEncodings">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard encoding names and their formats. 
 <p>
  Attempts to modify the returned <code>Iterator</code> via its 
 <code>remove</code> method result in an 
 <code>UnsupportedOperationException</code>.
 @return an <code>Iterator</code> over the names of the supported
          <code>CertPath</code> encodings (as <code>String</code>s)
 @since 1.4
 */
- (id<JavaUtilIterator>)getCertPathEncodings;

/*!
 @brief Returns a certificate factory object that implements the
  specified certificate type.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new CertificateFactory object encapsulating the
  CertificateFactorySpi implementation from the first
  Provider that supports the specified type is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param type the name of the requested certificate type.  See the CertificateFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertificateFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard certificate types.
 @return a certificate factory object for the specified type.
 @throw CertificateExceptionif no Provider supports a
           CertificateFactorySpi implementation for the
           specified type.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type;

/*!
 @brief Returns a certificate factory object for the specified
  certificate type.
 <p> A new CertificateFactory object encapsulating the
  CertificateFactorySpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param type the certificate type.  See the CertificateFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertificateFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard certificate types.
 @param provider the provider.
 @return a certificate factory object for the specified type.
 @throw CertificateExceptionif a CertificateFactorySpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the <code>provider</code> is
           null.
 - seealso: java.security.Provider
 @since 1.4
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type
                                       withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a certificate factory object for the specified
  certificate type.
 <p> A new CertificateFactory object encapsulating the
  CertificateFactorySpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param type the certificate type.  See the CertificateFactory section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#CertificateFactory">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard certificate types.
 @param provider the name of the provider.
 @return a certificate factory object for the specified type.
 @throw CertificateExceptionif a CertificateFactorySpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null
           or empty.
 - seealso: java.security.Provider
 */
+ (JavaSecurityCertCertificateFactory *)getInstanceWithNSString:(NSString *)type
                                                   withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this certificate factory.
 @return the provider of this certificate factory.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Returns the name of the certificate type associated with this
  certificate factory.
 @return the name of the certificate type associated with this
  certificate factory.
 */
- (NSString *)getType;

#pragma mark Protected

/*!
 @brief Creates a CertificateFactory object of the given type, and encapsulates
  the given provider implementation (SPI object) in it.
 @param certFacSpi the provider implementation.
 @param provider the provider.
 @param type the certificate type.
 */
- (instancetype)initWithJavaSecurityCertCertificateFactorySpi:(JavaSecurityCertCertificateFactorySpi *)certFacSpi
                                     withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                                 withNSString:(NSString *)type;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateFactory)

FOUNDATION_EXPORT void JavaSecurityCertCertificateFactory_initWithJavaSecurityCertCertificateFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertificateFactory *self, JavaSecurityCertCertificateFactorySpi *certFacSpi, JavaSecurityProvider *provider, NSString *type);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *new_JavaSecurityCertCertificateFactory_initWithJavaSecurityCertCertificateFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertificateFactorySpi *certFacSpi, JavaSecurityProvider *provider, NSString *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *create_JavaSecurityCertCertificateFactory_initWithJavaSecurityCertCertificateFactorySpi_withJavaSecurityProvider_withNSString_(JavaSecurityCertCertificateFactorySpi *certFacSpi, JavaSecurityProvider *provider, NSString *type);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_(NSString *type);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_withNSString_(NSString *type, NSString *provider);

FOUNDATION_EXPORT JavaSecurityCertCertificateFactory *JavaSecurityCertCertificateFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *type, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateFactory")
