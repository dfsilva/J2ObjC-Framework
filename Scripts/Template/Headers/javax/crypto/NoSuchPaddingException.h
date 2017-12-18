//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/NoSuchPaddingException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoNoSuchPaddingException")
#ifdef RESTRICT_JavaxCryptoNoSuchPaddingException
#define INCLUDE_ALL_JavaxCryptoNoSuchPaddingException 0
#else
#define INCLUDE_ALL_JavaxCryptoNoSuchPaddingException 1
#endif
#undef RESTRICT_JavaxCryptoNoSuchPaddingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoNoSuchPaddingException_) && (INCLUDE_ALL_JavaxCryptoNoSuchPaddingException || defined(INCLUDE_JavaxCryptoNoSuchPaddingException))
#define JavaxCryptoNoSuchPaddingException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This exception is thrown when a particular padding mechanism is
  requested but is not available in the environment.
 @author Jan Luehe
 @since 1.4
 */
@interface JavaxCryptoNoSuchPaddingException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a NoSuchPaddingException with no detail
  message.A detail message is a String that describes this
  particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a NoSuchPaddingException with the specified
  detail message.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoNoSuchPaddingException)

FOUNDATION_EXPORT void JavaxCryptoNoSuchPaddingException_init(JavaxCryptoNoSuchPaddingException *self);

FOUNDATION_EXPORT JavaxCryptoNoSuchPaddingException *new_JavaxCryptoNoSuchPaddingException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoNoSuchPaddingException *create_JavaxCryptoNoSuchPaddingException_init(void);

FOUNDATION_EXPORT void JavaxCryptoNoSuchPaddingException_initWithNSString_(JavaxCryptoNoSuchPaddingException *self, NSString *msg);

FOUNDATION_EXPORT JavaxCryptoNoSuchPaddingException *new_JavaxCryptoNoSuchPaddingException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoNoSuchPaddingException *create_JavaxCryptoNoSuchPaddingException_initWithNSString_(NSString *msg);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoNoSuchPaddingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoNoSuchPaddingException")