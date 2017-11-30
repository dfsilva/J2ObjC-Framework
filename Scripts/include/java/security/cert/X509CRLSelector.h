//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/X509CRLSelector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertX509CRLSelector")
#ifdef RESTRICT_JavaSecurityCertX509CRLSelector
#define INCLUDE_ALL_JavaSecurityCertX509CRLSelector 0
#else
#define INCLUDE_ALL_JavaSecurityCertX509CRLSelector 1
#endif
#undef RESTRICT_JavaSecurityCertX509CRLSelector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertX509CRLSelector_) && (INCLUDE_ALL_JavaSecurityCertX509CRLSelector || defined(INCLUDE_JavaSecurityCertX509CRLSelector))
#define JavaSecurityCertX509CRLSelector_

#define RESTRICT_JavaSecurityCertCRLSelector 1
#define INCLUDE_JavaSecurityCertCRLSelector 1
#include "java/security/cert/CRLSelector.h"

@class IOSByteArray;
@class JavaMathBigInteger;
@class JavaSecurityCertCRL;
@class JavaSecurityCertX509Certificate;
@class JavaUtilDate;
@class JavaxSecurityAuthX500X500Principal;
@protocol JavaUtilCollection;

/*!
 @brief A <code>CRLSelector</code> that selects <code>X509CRLs</code> that
  match all specified criteria.This class is particularly useful when
  selecting CRLs from a <code>CertStore</code> to check revocation status
  of a particular certificate.
 <p>
  When first constructed, an <code>X509CRLSelector</code> has no criteria
  enabled and each of the <code>get</code> methods return a default
  value (<code>null</code>). Therefore, the <code>match</code> method
  would return <code>true</code> for any <code>X509CRL</code>. Typically,
  several criteria are enabled (by calling <code>setIssuers</code>
  or <code>setDateAndTime</code>, for instance) and then the 
 <code>X509CRLSelector</code> is passed to 
 <code>CertStore.getCRLs</code> or some similar
  method. 
 <p>
  Please refer to <a href="http://www.ietf.org/rfc/rfc3280.txt">RFC 3280:
  Internet X.509 Public Key Infrastructure Certificate and CRL Profile</a>
  for definitions of the X.509 CRL fields and extensions mentioned below. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Unless otherwise specified, the methods defined in this class are not
  thread-safe. Multiple threads that need to access a single
  object concurrently should synchronize amongst themselves and
  provide the necessary locking. Multiple threads each manipulating
  separate objects need not synchronize.
 - seealso: CRLSelector
 - seealso: X509CRL
 @since 1.4
 @author Steve Hanna
 */
@interface JavaSecurityCertX509CRLSelector : NSObject < JavaSecurityCertCRLSelector >

#pragma mark Public

/*!
 @brief Creates an <code>X509CRLSelector</code>.Initially, no criteria are set
  so any <code>X509CRL</code> will match.
 */
- (instancetype)init;

/*!
 @brief Adds a name to the issuerNames criterion.The issuer distinguished
  name in the <code>X509CRL</code> must match at least one of the specified
  distinguished names.
 <p>
  This method allows the caller to add a name to the set of issuer names
  which <code>X509CRLs</code> may contain. The specified name is added to
  any previous value for the issuerNames criterion.
  If the specified name is a duplicate, it may be ignored.
 @param issuer the issuer as X500Principal
 @since 1.5
 */
- (void)addIssuerWithJavaxSecurityAuthX500X500Principal:(JavaxSecurityAuthX500X500Principal *)issuer;

/*!
 @brief Adds a name to the issuerNames criterion.The issuer distinguished
  name in the <code>X509CRL</code> must match at least one of the specified
  distinguished names.
 <p>
  This method allows the caller to add a name to the set of issuer names
  which <code>X509CRLs</code> may contain. The specified name is added to
  any previous value for the issuerNames criterion. If the specified name
  is a duplicate, it may be ignored.
  If a name is specified as a byte array, it should contain a single DER
  encoded distinguished name, as defined in X.501. The ASN.1 notation for
  this structure is as follows. 
 <p>
  The name is provided as a byte array. This byte array should contain
  a single DER encoded distinguished name, as defined in X.501. The ASN.1
  notation for this structure appears in the documentation for 
 <code>names)</code>.
  <p>
  Note that the byte array supplied here is cloned to protect against
  subsequent modifications.
 @param name a byte array containing the name in ASN.1 DER encoded form
 @throw IOExceptionif a parsing error occurs
 */
- (void)addIssuerNameWithByteArray:(IOSByteArray *)name;

/*!
 @brief <strong>Denigrated</strong>, use 
 addIssuer(X500Principal) or 
 addIssuerName(byte[]) instead.This method should not be
  relied on as it can fail to match some CRLs because of a loss of
  encoding information in the RFC 2253 String form of some distinguished
  names.
 <p>
  Adds a name to the issuerNames criterion. The issuer distinguished
  name in the <code>X509CRL</code> must match at least one of the specified
  distinguished names. 
 <p>
  This method allows the caller to add a name to the set of issuer names
  which <code>X509CRLs</code> may contain. The specified name is added to
  any previous value for the issuerNames criterion.
  If the specified name is a duplicate, it may be ignored.
 @param name the name in RFC 2253 form
 @throw IOExceptionif a parsing error occurs
 */
- (void)addIssuerNameWithNSString:(NSString *)name;

/*!
 @brief Returns a copy of this object.
 @return the copy
 */
- (id)java_clone;

/*!
 @brief Returns the certificate being checked.This is not a criterion.
 Rather,
  it is optional information that may help a <code>CertStore</code>
  find CRLs that would be relevant when checking revocation for the
  specified certificate. If the value returned is <code>null</code>, then
  no such optional information is provided.
 @return the certificate being checked (or <code>null</code>)
 - seealso: #setCertificateChecking
 */
- (JavaSecurityCertX509Certificate *)getCertificateChecking;

/*!
 @brief Returns the dateAndTime criterion.The specified date must be
  equal to or later than the value of the thisUpdate component of the 
 <code>X509CRL</code> and earlier than the value of the
  nextUpdate component.
 There is no match if the 
 <code>X509CRL</code> does not contain a nextUpdate component.
  If <code>null</code>, no dateAndTime check will be done. 
 <p>
  Note that the <code>Date</code> returned is cloned to protect against
  subsequent modifications.
 @return the <code>Date</code> to match against (or <code>null</code>)
 - seealso: #setDateAndTime
 */
- (JavaUtilDate *)getDateAndTime;

/*!
 @brief Returns a copy of the issuerNames criterion.The issuer distinguished
  name in the <code>X509CRL</code> must match at least one of the specified
  distinguished names.
 If the value returned is <code>null</code>, any
  issuer distinguished name will do. 
 <p>
  If the value returned is not <code>null</code>, it is a 
 <code>Collection</code> of names. Each name is a <code>String</code>
  or a byte array representing a distinguished name (in RFC 2253 or
  ASN.1 DER encoded form, respectively).  Note that the 
 <code>Collection</code> returned may contain duplicate names. 
 <p>
  If a name is specified as a byte array, it should contain a single DER
  encoded distinguished name, as defined in X.501. The ASN.1 notation for
  this structure is given in the documentation for 
 <code>names)</code>.
  <p>
  Note that a deep copy is performed on the <code>Collection</code> to
  protect against subsequent modifications.
 @return a <code>Collection</code> of names (or <code>null</code>)
 - seealso: #setIssuerNames
 */
- (id<JavaUtilCollection>)getIssuerNames;

/*!
 @brief Returns the issuerNames criterion.The issuer distinguished
  name in the <code>X509CRL</code> must match at least one of the specified
  distinguished names.
 If the value returned is <code>null</code>, any
  issuer distinguished name will do. 
 <p>
  If the value returned is not <code>null</code>, it is a
  unmodifiable <code>Collection</code> of <code>X500Principal</code>s.
 @return an unmodifiable <code>Collection</code> of names
    (or <code>null</code>)
 - seealso: #setIssuers
 @since 1.5
 */
- (id<JavaUtilCollection>)getIssuers;

/*!
 @brief Returns the maxCRLNumber criterion.The <code>X509CRL</code> must have a
  CRL number extension whose value is less than or equal to the
  specified value.
 If <code>null</code>, no maxCRLNumber check will be
  done.
 @return the maximum CRL number accepted (or <code>null</code>)
 */
- (JavaMathBigInteger *)getMaxCRL;

/*!
 @brief Returns the minCRLNumber criterion.The <code>X509CRL</code> must have a
  CRL number extension whose value is greater than or equal to the
  specified value.
 If <code>null</code>, no minCRLNumber check will be done.
 @return the minimum CRL number accepted (or <code>null</code>)
 */
- (JavaMathBigInteger *)getMinCRL;

/*!
 @brief Decides whether a <code>CRL</code> should be selected.
 @param crl the  <code> CRL </code>  to be checked
 @return <code>true</code> if the <code>CRL</code> should be selected,
          <code>false</code> otherwise
 */
- (jboolean)matchWithJavaSecurityCertCRL:(JavaSecurityCertCRL *)crl;

/*!
 @brief Sets the certificate being checked.This is not a criterion.
 Rather,
  it is optional information that may help a <code>CertStore</code>
  find CRLs that would be relevant when checking revocation for the
  specified certificate. If <code>null</code> is specified, then no
  such optional information is provided.
 @param cert the  <code> X509Certificate </code>  being checked
               (or  <code> null </code> )
 - seealso: #getCertificateChecking
 */
- (void)setCertificateCheckingWithJavaSecurityCertX509Certificate:(JavaSecurityCertX509Certificate *)cert;

/*!
 @brief Sets the dateAndTime criterion.The specified date must be
  equal to or later than the value of the thisUpdate component of the 
 <code>X509CRL</code> and earlier than the value of the
  nextUpdate component.
 There is no match if the <code>X509CRL</code>
  does not contain a nextUpdate component.
  If <code>null</code>, no dateAndTime check will be done. 
 <p>
  Note that the <code>Date</code> supplied here is cloned to protect
  against subsequent modifications.
 @param dateAndTime the  <code> Date </code>  to match against
                      (or  <code> null </code> )
 - seealso: #getDateAndTime
 */
- (void)setDateAndTimeWithJavaUtilDate:(JavaUtilDate *)dateAndTime;

/*!
 @brief <strong>Note:</strong> use setIssuers(Collection) instead
  or only specify the byte array form of distinguished names when using
  this method.See <code>addIssuerName(String)</code> for more information.
 <p>
  Sets the issuerNames criterion. The issuer distinguished name in the 
 <code>X509CRL</code> must match at least one of the specified
  distinguished names. If <code>null</code>, any issuer distinguished name
  will do. 
 <p>
  This method allows the caller to specify, with a single method call,
  the complete set of issuer names which <code>X509CRLs</code> may contain.
  The specified value replaces the previous value for the issuerNames
  criterion. 
 <p>
  The <code>names</code> parameter (if not <code>null</code>) is a 
 <code>Collection</code> of names. Each name is a <code>String</code>
  or a byte array representing a distinguished name (in 
 <a href="http://www.ietf.org/rfc/rfc2253.txt">RFC 2253</a> or
  ASN.1 DER encoded form, respectively). If <code>null</code> is supplied
  as the value for this argument, no issuerNames check will be performed. 
 <p>
  Note that the <code>names</code> parameter can contain duplicate
  distinguished names, but they may be removed from the 
 <code>Collection</code> of names returned by the 
 <code>getIssuerNames</code> method. 
 <p>
  If a name is specified as a byte array, it should contain a single DER
  encoded distinguished name, as defined in X.501. The ASN.1 notation for
  this structure is as follows. 
 @code
<code>
  Name ::= CHOICE {
    RDNSequence }
  RDNSequence ::= SEQUENCE OF RelativeDistinguishedName
  RelativeDistinguishedName ::=
    SET SIZE (1 .. MAX) OF AttributeTypeAndValue
  AttributeTypeAndValue ::= SEQUENCE {
    type     AttributeType,
    value    AttributeValue }
  AttributeType ::= OBJECT IDENTIFIER
  AttributeValue ::= ANY DEFINED BY AttributeType
  ....
  DirectoryString ::= CHOICE {
        teletexString           TeletexString (SIZE (1..MAX)),
        printableString         PrintableString (SIZE (1..MAX)),
        universalString         UniversalString (SIZE (1..MAX)),
        utf8String              UTF8String (SIZE (1.. MAX)),
        bmpString               BMPString (SIZE (1..MAX)) } 
  </code>
@endcode
  <p>
  Note that a deep copy is performed on the <code>Collection</code> to
  protect against subsequent modifications.
 @param names a  <code> Collection </code>  of names (or  <code> null </code>
  )
 @throw IOExceptionif a parsing error occurs
 - seealso: #getIssuerNames
 */
- (void)setIssuerNamesWithJavaUtilCollection:(id<JavaUtilCollection>)names;

/*!
 @brief Sets the issuerNames criterion.The issuer distinguished name in the 
 <code>X509CRL</code> must match at least one of the specified
  distinguished names.
 If <code>null</code>, any issuer distinguished name
  will do. 
 <p>
  This method allows the caller to specify, with a single method call,
  the complete set of issuer names which <code>X509CRLs</code> may contain.
  The specified value replaces the previous value for the issuerNames
  criterion. 
 <p>
  The <code>names</code> parameter (if not <code>null</code>) is a 
 <code>Collection</code> of <code>X500Principal</code>s.
  <p>
  Note that the <code>names</code> parameter can contain duplicate
  distinguished names, but they may be removed from the 
 <code>Collection</code> of names returned by the 
 <code>getIssuers</code> method. 
 <p>
  Note that a copy is performed on the <code>Collection</code> to
  protect against subsequent modifications.
 @param issuers a  <code> Collection </code>  of X500Principals
     (or  <code> null </code> )
 - seealso: #getIssuers
 @since 1.5
 */
- (void)setIssuersWithJavaUtilCollection:(id<JavaUtilCollection>)issuers;

/*!
 @brief Sets the maxCRLNumber criterion.The <code>X509CRL</code> must have a
  CRL number extension whose value is less than or equal to the
  specified value.
 If <code>null</code>, no maxCRLNumber check will be
  done.
 @param maxCRL the maximum CRL number accepted (or  <code> null </code>
  )
 */
- (void)setMaxCRLNumberWithJavaMathBigInteger:(JavaMathBigInteger *)maxCRL;

/*!
 @brief Sets the minCRLNumber criterion.The <code>X509CRL</code> must have a
  CRL number extension whose value is greater than or equal to the
  specified value.
 If <code>null</code>, no minCRLNumber check will be
  done.
 @param minCRL the minimum CRL number accepted (or  <code> null </code>
  )
 */
- (void)setMinCRLNumberWithJavaMathBigInteger:(JavaMathBigInteger *)minCRL;

/*!
 @brief Returns a printable representation of the <code>X509CRLSelector</code>.
 @return a <code>String</code> describing the contents of the
          <code>X509CRLSelector</code>.
 */
- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Sets the dateAndTime criterion and allows for the specified clock skew
  (in milliseconds) when checking against the validity period of the CRL.
 */
- (void)setDateAndTimeWithJavaUtilDate:(JavaUtilDate *)dateAndTime
                              withLong:(jlong)skew;

@end

J2OBJC_STATIC_INIT(JavaSecurityCertX509CRLSelector)

FOUNDATION_EXPORT void JavaSecurityCertX509CRLSelector_init(JavaSecurityCertX509CRLSelector *self);

FOUNDATION_EXPORT JavaSecurityCertX509CRLSelector *new_JavaSecurityCertX509CRLSelector_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertX509CRLSelector *create_JavaSecurityCertX509CRLSelector_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertX509CRLSelector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertX509CRLSelector")
