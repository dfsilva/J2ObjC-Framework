//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/ExemptionMechanismException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanismException")
#ifdef RESTRICT_JavaxCryptoExemptionMechanismException
#define INCLUDE_ALL_JavaxCryptoExemptionMechanismException 0
#else
#define INCLUDE_ALL_JavaxCryptoExemptionMechanismException 1
#endif
#undef RESTRICT_JavaxCryptoExemptionMechanismException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoExemptionMechanismException_) && (INCLUDE_ALL_JavaxCryptoExemptionMechanismException || defined(INCLUDE_JavaxCryptoExemptionMechanismException))
#define JavaxCryptoExemptionMechanismException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This is the generic ExemptionMechanism exception.
 @since 1.4
 */
@interface JavaxCryptoExemptionMechanismException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a ExemptionMechanismException with no detailed message.
 (A detailed message is a String that describes this particular
  exception.)
 */
- (instancetype)init;

/*!
 @brief Constructs a ExemptionMechanismException with the specified
  detailed message.
 (A detailed message is a String that describes
  this particular exception.)
 @param msg the detailed message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoExemptionMechanismException)

FOUNDATION_EXPORT void JavaxCryptoExemptionMechanismException_init(JavaxCryptoExemptionMechanismException *self);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanismException *new_JavaxCryptoExemptionMechanismException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoExemptionMechanismException *create_JavaxCryptoExemptionMechanismException_init(void);

FOUNDATION_EXPORT void JavaxCryptoExemptionMechanismException_initWithNSString_(JavaxCryptoExemptionMechanismException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoExemptionMechanismException *new_JavaxCryptoExemptionMechanismException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoExemptionMechanismException *create_JavaxCryptoExemptionMechanismException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoExemptionMechanismException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoExemptionMechanismException")