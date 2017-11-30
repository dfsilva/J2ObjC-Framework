//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/PKCS8EncodedKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec")
#ifdef RESTRICT_JavaSecuritySpecPKCS8EncodedKeySpec
#define INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecPKCS8EncodedKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecPKCS8EncodedKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec || defined(INCLUDE_JavaSecuritySpecPKCS8EncodedKeySpec))
#define JavaSecuritySpecPKCS8EncodedKeySpec_

#define RESTRICT_JavaSecuritySpecEncodedKeySpec 1
#define INCLUDE_JavaSecuritySpecEncodedKeySpec 1
#include "java/security/spec/EncodedKeySpec.h"

@class IOSByteArray;

/*!
 @brief This class represents the ASN.1 encoding of a private key,
  encoded according to the ASN.1 type <code>PrivateKeyInfo</code>.
 The <code>PrivateKeyInfo</code> syntax is defined in the PKCS#8 standard
  as follows: 
 @code

  PrivateKeyInfo ::= SEQUENCE {
    version Version,
    privateKeyAlgorithm PrivateKeyAlgorithmIdentifier,
    privateKey PrivateKey,
    attributes [0] IMPLICIT Attributes OPTIONAL }
  Version ::= INTEGER
  PrivateKeyAlgorithmIdentifier ::= AlgorithmIdentifier
  PrivateKey ::= OCTET STRING
  Attributes ::= SET OF Attribute 
  
@endcode
 @author Jan Luehe
 - seealso: java.security.Key
 - seealso: java.security.KeyFactory
 - seealso: KeySpec
 - seealso: EncodedKeySpec
 - seealso: X509EncodedKeySpec
 @since 1.2
 */
@interface JavaSecuritySpecPKCS8EncodedKeySpec : JavaSecuritySpecEncodedKeySpec

#pragma mark Public

/*!
 @brief Creates a new PKCS8EncodedKeySpec with the given encoded key.
 @param encodedKey the key, which is assumed to be  encoded according to the PKCS #8 standard. The contents of
   the array are copied to protect against subsequent modification.
 @throw NullPointerExceptionif <code>encodedKey</code>
  is null.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

/*!
 @brief Returns the key bytes, encoded according to the PKCS #8 standard.
 @return the PKCS #8 encoding of the key. Returns a new array
  each time this method is called.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the name of the encoding format associated with this
  key specification.
 @return the string <code>"PKCS#8"</code>.
 */
- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecPKCS8EncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(JavaSecuritySpecPKCS8EncodedKeySpec *self, IOSByteArray *encodedKey);

FOUNDATION_EXPORT JavaSecuritySpecPKCS8EncodedKeySpec *new_JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecPKCS8EncodedKeySpec *create_JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecPKCS8EncodedKeySpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec")
