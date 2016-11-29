//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/Extension.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertExtension")
#ifdef RESTRICT_JavaSecurityCertExtension
#define INCLUDE_ALL_JavaSecurityCertExtension 0
#else
#define INCLUDE_ALL_JavaSecurityCertExtension 1
#endif
#undef RESTRICT_JavaSecurityCertExtension

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertExtension_) && (INCLUDE_ALL_JavaSecurityCertExtension || defined(INCLUDE_JavaSecurityCertExtension))
#define JavaSecurityCertExtension_

@class IOSByteArray;
@class JavaIoOutputStream;

/*!
 @brief The Extension part of an X.509 certificate (as specified in <a
 href="http://www.ietf.org/rfc/rfc3280.txt">RFC 3280 &mdash; Internet X.509
 Public Key Infrastructure: Certificate and Certificate Revocation List (CRL)
 Profile</p>):
 @code

  Extension  ::=  SEQUENCE  {
       extnID      OBJECT IDENTIFIER,
       critical    BOOLEAN DEFAULT FALSE,
       extnValue   OCTET STRING
  }
  
@endcode
 @since 1.7
 */
@protocol JavaSecurityCertExtension < JavaObject >

/*!
 @brief Returns the OID (Object Identifier) for this extension encoded as a
 string (e.g., "2.5.29.15").
 */
- (NSString *)getId;

/*!
 @brief Returns <code>true</code> if this extension is critical.
 If this is true and
 an implementation does not understand this extension, it must reject it.
 See RFC 3280 section 4.2 for more information.
 */
- (jboolean)isCritical;

/*!
 @brief The DER-encoded value of this extension.
 */
- (IOSByteArray *)getValue;

/*!
 @brief Writes the DER-encoded extension to <code>out</code>.
 @throws IOException when there is an encoding error or error writing to
 <code>out</code>
 */
- (void)encodeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertExtension)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertExtension)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertExtension")
