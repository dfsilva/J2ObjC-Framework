//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/X509Certificate.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertX509Certificate")
#ifdef RESTRICT_JavaSecurityCertX509Certificate
#define INCLUDE_ALL_JavaSecurityCertX509Certificate 0
#else
#define INCLUDE_ALL_JavaSecurityCertX509Certificate 1
#endif
#undef RESTRICT_JavaSecurityCertX509Certificate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertX509Certificate_) && (INCLUDE_ALL_JavaSecurityCertX509Certificate || defined(INCLUDE_JavaSecurityCertX509Certificate))
#define JavaSecurityCertX509Certificate_

#define RESTRICT_JavaSecurityCertCertificate 1
#define INCLUDE_JavaSecurityCertCertificate 1
#include "../../../java/security/cert/Certificate.h"

#define RESTRICT_JavaSecurityCertX509Extension 1
#define INCLUDE_JavaSecurityCertX509Extension 1
#include "../../../java/security/cert/X509Extension.h"

@class IOSBooleanArray;
@class IOSByteArray;
@class JavaMathBigInteger;
@class JavaUtilDate;
@class JavaxSecurityAuthX500X500Principal;
@protocol JavaSecurityPrincipal;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

/*!
 @brief Abstract base class for X.509 certificates.
 <p>
 This represents a standard way for accessing the attributes of X.509
 certificates.
 <p>
 The basic X.509 v3 format described in ASN.1:
 @code

  Certificate  ::=  SEQUENCE  {
     tbsCertificate       TBSCertificate,
     signatureAlgorithm   AlgorithmIdentifier,
     signature            BIT STRING  }
  TBSCertificate  ::=  SEQUENCE  {
      version         [0]  EXPLICIT Version DEFAULT v1,
      serialNumber         CertificateSerialNumber,
      signature            AlgorithmIdentifier,
      issuer               Name,
      validity             Validity,
      subject              Name,
      subjectPublicKeyInfo SubjectPublicKeyInfo,
      issuerUniqueID  [1]  IMPLICIT UniqueIdentifier OPTIONAL,
                           -- If present, version must be v2 or v3
      subjectUniqueID [2]  IMPLICIT UniqueIdentifier OPTIONAL,
                           -- If present, version must be v2 or v3
      extensions      [3]  EXPLICIT Extensions OPTIONAL
                           -- If present, version must be v3
      }
  
@endcode
 <p>
 For more information consult RFC 2459
 "Internet X.509 Public Key Infrastructure Certificate and CRL Profile" at <a
 href
 ="http://www.ietf.org/rfc/rfc2459.txt">http://www.ietf.org/rfc/rfc2459.txt
 </a> .
 */
@interface JavaSecurityCertX509Certificate : JavaSecurityCertCertificate < JavaSecurityCertX509Extension >

#pragma mark Public

/*!
 @brief Checks whether the certificate is currently valid.
 <p>
 The validity defined in ASN.1:
 @code

  validity             Validity
  Validity ::= SEQUENCE {
      notBefore       CertificateValidityDate,
      notAfter        CertificateValidityDate }
  CertificateValidityDate ::= CHOICE {
      utcTime         UTCTime,
      generalTime     GeneralizedTime }
  
@endcode
 @throws CertificateExpiredException
 if the certificate has expired.
 @throws CertificateNotYetValidException
 if the certificate is not yet valid.
 */
- (void)checkValidity;

/*!
 @brief Checks whether the certificate is valid at the specified date.
 @param date
 the date to check the validity against.
 @throws CertificateExpiredException
 if the certificate has expired.
 @throws CertificateNotYetValidException
 if the certificate is not yet valid.
 - seealso: #checkValidity()
 */
- (void)checkValidityWithJavaUtilDate:(JavaUtilDate *)date;

/*!
 @brief Returns the path length of the certificate constraints from the <code>BasicContraints</code>
  extension.
 If the certificate has no basic constraints or is not a
 certificate authority, <code>-1</code> is returned. If the
 certificate is a certificate authority without a path length,
 <code>Integer.MAX_VALUE</code> is returned. Otherwise, the
 certificate authority's path length is returned.
 */
- (jint)getBasicConstraints;

/*!
 @brief Returns a read-only list of OID strings representing the <code>ExtKeyUsageSyntax</code>
  field of the extended key usage extension.
 @return the extended key usage extension, or <code>null</code> if there's none
 in the certificate.
 @throws CertificateParsingException
 if the extension decoding fails.
 */
- (id<JavaUtilList>)getExtendedKeyUsage;

/*!
 @brief Returns a read-only list of the issuer alternative names from the <code>IssuerAltName</code>
  extension.
 <p>
 The ASN.1 definition of <code>IssuerAltName</code>:
 @code

  IssuerAltName ::= GeneralNames
  GeneralNames ::= SEQUENCE SIZE (1..MAX) OF GeneralName
  GeneralName ::= CHOICE {
      otherName                       [0]     AnotherName,
      rfc822Name                      [1]     IA5String,
      dNSName                         [2]     IA5String,
      x400Address                     [3]     ORAddress,
      directoryName                   [4]     Name,
      ediPartyName                    [5]     EDIPartyName,
      uniformResourceIdentifier       [6]     IA5String,
      iPAddress                       [7]     OCTET STRING,
      registeredID                    [8]     OBJECT IDENTIFIER }
  
@endcode
 @return the issuer alternative names of <code>null</code> if there are none in
 the certificate.
 @throws CertificateParsingException
 if decoding of the extension fails.
 */
- (id<JavaUtilCollection>)getIssuerAlternativeNames;

/*!
 @brief Returns the <code>issuer</code> (issuer distinguished name) as an
 implementation specific <code>Principal</code> object.
 <p>
 The ASN.1 definition of <code>issuer</code>:
 @code

  issuer      Name
  Name ::= CHOICE {
      RDNSequence }
    RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
    RelativeDistinguishedName ::= SET OF AttributeTypeAndValue
    AttributeTypeAndValue ::= SEQUENCE {
      type     AttributeType,
      value    AttributeValue }
    AttributeType ::= OBJECT IDENTIFIER
    AttributeValue ::= ANY DEFINED BY AttributeType
  
@endcode
 <b>replaced by:</b> <code>getIssuerX500Principal()</code>.
 @return the <code>issuer</code> as an implementation specific <code>Principal</code>
 .
 */
- (id<JavaSecurityPrincipal>)getIssuerDN;

/*!
 @brief Returns the <code>issuerUniqueID</code> from the certificate.
 @return the <code>issuerUniqueID</code> or <code>null</code> if there's none in the
 certificate.
 */
- (IOSBooleanArray *)getIssuerUniqueID;

/*!
 @brief Returns the <code>issuer</code> (issuer distinguished name) as an <code>X500Principal</code>
 .
 @return the <code>issuer</code> (issuer distinguished name).
 */
- (JavaxSecurityAuthX500X500Principal *)getIssuerX500Principal;

/*!
 @brief Returns the <code>KeyUsage</code> extension as a <code>boolean</code> array.
 <p>
 The ASN.1 definition of <code>KeyUsage</code>:
 @code

  KeyUsage ::= BIT STRING {
      digitalSignature        (0),
      nonRepudiation          (1),
      keyEncipherment         (2),
      dataEncipherment        (3),
      keyAgreement            (4),
      keyCertSign             (5),
      cRLSign                 (6),
      encipherOnly            (7),
      decipherOnly            (8) }
  
@endcode
 @return the <code>KeyUsage</code> extension or <code>null</code> if there's none in
 the certificate.
 */
- (IOSBooleanArray *)getKeyUsage;

/*!
 @brief Returns the <code>notAfter</code> date of the validity period of the
 certificate.
 @return the end of the validity period.
 */
- (JavaUtilDate *)getNotAfter;

/*!
 @brief Returns the <code>notBefore</code> date from the validity period of the
 certificate.
 @return the start of the validity period.
 */
- (JavaUtilDate *)getNotBefore;

/*!
 @brief Returns the <code>serialNumber</code> of the certificate.
 <p>
 The ASN.1 definition of <code>serialNumber</code>:
 @code

  CertificateSerialNumber  ::=  INTEGER
  
@endcode
 @return the serial number.
 */
- (JavaMathBigInteger *)getSerialNumber;

/*!
 @brief Returns the name of the algorithm for the certificate signature.
 @return the signature algorithm name.
 */
- (NSString *)getSigAlgName;

/*!
 @brief Returns the OID of the signature algorithm from the certificate.
 @return the OID of the signature algorithm.
 */
- (NSString *)getSigAlgOID;

/*!
 @brief Returns the parameters of the signature algorithm in DER-encoded format.
 @return the parameters of the signature algorithm, or <code>null</code> if
 none are used.
 */
- (IOSByteArray *)getSigAlgParams;

/*!
 @brief Returns the raw signature bits from the certificate.
 @return the raw signature bits from the certificate.
 */
- (IOSByteArray *)getSignature;

/*!
 @brief Returns a read-only list of the subject alternative names from the
 <code>SubjectAltName</code> extension.
 <p>
 The ASN.1 definition of <code>SubjectAltName</code>:
 @code

  SubjectAltName ::= GeneralNames
  GeneralNames ::= SEQUENCE SIZE (1..MAX) OF GeneralName
  GeneralName ::= CHOICE {
      otherName                       [0]     AnotherName,
      rfc822Name                      [1]     IA5String,
      dNSName                         [2]     IA5String,
      x400Address                     [3]     ORAddress,
      directoryName                   [4]     Name,
      ediPartyName                    [5]     EDIPartyName,
      uniformResourceIdentifier       [6]     IA5String,
      iPAddress                       [7]     OCTET STRING,
      registeredID                    [8]     OBJECT IDENTIFIER }
  
@endcode
 @return the subject alternative names or <code>null</code> if there are none
 in the certificate.
 @throws CertificateParsingException
 if decoding of the extension fails.
 */
- (id<JavaUtilCollection>)getSubjectAlternativeNames;

/*!
 @brief Returns the <code>subject</code> (subject distinguished name) as an
 implementation specific <code>Principal</code> object.
 <p>
 The ASN.1 definition of <code>subject</code>:
 @code

  subject      Name
  Name ::= CHOICE {
      RDNSequence }
    RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
    RelativeDistinguishedName ::= SET OF AttributeTypeAndValue
    AttributeTypeAndValue ::= SEQUENCE {
      type     AttributeType,
      value    AttributeValue }
    AttributeType ::= OBJECT IDENTIFIER
    AttributeValue ::= ANY DEFINED BY AttributeType
  
@endcode
 <p>
 <b>replaced by:</b> <code>getSubjectX500Principal()</code>.
 @return the <code>subject</code> (subject distinguished name).
 */
- (id<JavaSecurityPrincipal>)getSubjectDN;

/*!
 @brief Returns the <code>subjectUniqueID</code> from the certificate.
 @return the <code>subjectUniqueID</code> or null if there's none in the
 certificate.
 */
- (IOSBooleanArray *)getSubjectUniqueID;

/*!
 @brief Returns the <code>subject</code> (subject distinguished name) as an <code>X500Principal</code>
 .
 @return the <code>subject</code> (subject distinguished name)
 */
- (JavaxSecurityAuthX500X500Principal *)getSubjectX500Principal;

/*!
 @brief Returns the <code>tbsCertificate</code> information from this certificate in
 DER-encoded format.
 @return the DER-encoded certificate information.
 @throws CertificateEncodingException
 if an error occurs in encoding
 */
- (IOSByteArray *)getTBSCertificate;

/*!
 @brief Returns the certificates <code>version</code> (version number).
 <p>
 The version defined is ASN.1:
 @code

  Version ::=  INTEGER  {  v1(0), v2(1), v3(2)  }
  
@endcode
 @return the version number.
 */
- (jint)getVersion;

#pragma mark Protected

/*!
 @brief Creates a new <code>X509Certificate</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertX509Certificate)

FOUNDATION_EXPORT void JavaSecurityCertX509Certificate_init(JavaSecurityCertX509Certificate *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509Certificate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertX509Certificate")
