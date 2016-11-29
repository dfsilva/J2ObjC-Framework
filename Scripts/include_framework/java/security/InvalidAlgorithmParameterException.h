//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/InvalidAlgorithmParameterException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInvalidAlgorithmParameterException")
#ifdef RESTRICT_JavaSecurityInvalidAlgorithmParameterException
#define INCLUDE_ALL_JavaSecurityInvalidAlgorithmParameterException 0
#else
#define INCLUDE_ALL_JavaSecurityInvalidAlgorithmParameterException 1
#endif
#undef RESTRICT_JavaSecurityInvalidAlgorithmParameterException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInvalidAlgorithmParameterException_) && (INCLUDE_ALL_JavaSecurityInvalidAlgorithmParameterException || defined(INCLUDE_JavaSecurityInvalidAlgorithmParameterException))
#define JavaSecurityInvalidAlgorithmParameterException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief <code>InvalidAlgorithmParameterException</code> indicates the occurrence of
 invalid algorithm parameters.
 */
@interface JavaSecurityInvalidAlgorithmParameterException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>
 with the given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new instance of <code>InvalidAlgorithmParameterException</code>
 with the cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInvalidAlgorithmParameterException)

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithNSString_(JavaSecurityInvalidAlgorithmParameterException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *create_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_init(JavaSecurityInvalidAlgorithmParameterException *self);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *create_JavaSecurityInvalidAlgorithmParameterException_init();

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithNSString_withNSException_(JavaSecurityInvalidAlgorithmParameterException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *create_JavaSecurityInvalidAlgorithmParameterException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityInvalidAlgorithmParameterException_initWithNSException_(JavaSecurityInvalidAlgorithmParameterException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *new_JavaSecurityInvalidAlgorithmParameterException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidAlgorithmParameterException *create_JavaSecurityInvalidAlgorithmParameterException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInvalidAlgorithmParameterException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInvalidAlgorithmParameterException")
