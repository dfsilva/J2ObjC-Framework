//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/GeneralSecurityException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityGeneralSecurityException")
#ifdef RESTRICT_JavaSecurityGeneralSecurityException
#define INCLUDE_ALL_JavaSecurityGeneralSecurityException 0
#else
#define INCLUDE_ALL_JavaSecurityGeneralSecurityException 1
#endif
#undef RESTRICT_JavaSecurityGeneralSecurityException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityGeneralSecurityException_) && (INCLUDE_ALL_JavaSecurityGeneralSecurityException || defined(INCLUDE_JavaSecurityGeneralSecurityException))
#define JavaSecurityGeneralSecurityException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

/*!
 @brief <code>GeneralSecurityException</code> is a general security exception and the
 superclass for all security specific exceptions.
 */
@interface JavaSecurityGeneralSecurityException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 given message and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new instance of <code>GeneralSecurityException</code> with the
 cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityGeneralSecurityException)

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_(JavaSecurityGeneralSecurityException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_init(JavaSecurityGeneralSecurityException *self);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_init();

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSString_withNSException_(JavaSecurityGeneralSecurityException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityGeneralSecurityException_initWithNSException_(JavaSecurityGeneralSecurityException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *new_JavaSecurityGeneralSecurityException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityGeneralSecurityException *create_JavaSecurityGeneralSecurityException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityGeneralSecurityException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityGeneralSecurityException")
