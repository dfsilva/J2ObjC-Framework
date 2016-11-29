//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/Error.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangError")
#ifdef RESTRICT_JavaLangError
#define INCLUDE_ALL_JavaLangError 0
#else
#define INCLUDE_ALL_JavaLangError 1
#endif
#undef RESTRICT_JavaLangError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangError_) && (INCLUDE_ALL_JavaLangError || defined(INCLUDE_JavaLangError))
#define JavaLangError_

/*!
 @brief An <code>Error</code> is a subclass of <code>Throwable</code>
 that indicates serious problems that a reasonable application
 should not try to catch.
 Most such errors are abnormal conditions.
 The <code>ThreadDeath</code> error, though a "normal" condition,
 is also a subclass of <code>Error</code> because most applications
 should not try to catch it.
 <p>
 A method is not required to declare in its <code>throws</code>
 clause any subclasses of <code>Error</code> that might be thrown
 during the execution of the method but not caught, since these
 errors are abnormal conditions that should never occur.
 That is, <code>Error</code> and its subclasses are regarded as unchecked
 exceptions for the purposes of compile-time checking of exceptions.
 @author Frank Yellin
 - seealso: java.lang.ThreadDeath
  11.2 Compile-Time Checking of Exceptions
 @since JDK1.0
 */
@interface JavaLangError : NSException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a new error with <code>null</code> as its detail message.
 The cause is not initialized, and may subsequently be initialized by a
 call to <code>initCause</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new error with the specified detail message.
 The
 cause is not initialized, and may subsequently be initialized by
 a call to <code>initCause</code>.
 @param message   the detail message. The detail message is saved for
 later retrieval by the <code>getMessage()</code> method.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new error with the specified detail message and
 cause.
 <p>Note that the detail message associated with
 <code>cause</code> is <i>not</i> automatically incorporated in
 this error's detail message.
 @param message the detail message (which is saved for later retrieval
 by the <code>getMessage()</code> method).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <code>null</code> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.4
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new error with the specified cause and a detail
 message of <code>(cause==null ?
 null : cause.toString())</code> (which
 typically contains the class and detail message of <code>cause</code>).
 This constructor is useful for errors that are little more than
 wrappers for other throwables.
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <code>null</code> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.4
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Protected

/*!
 @brief Constructs a new error with the specified detail message,
 cause, suppression enabled or disabled, and writable stack
 trace enabled or disabled.
 @param message the detail message.
 @param cause the cause.  (A <code>null</code> value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @param enableSuppression whether or not suppression is enabled
 or disabled
 @param writableStackTrace whether or not the stack trace should
 be writable
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangError)

inline jlong JavaLangError_get_serialVersionUID();
#define JavaLangError_serialVersionUID 4980196508277280342LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangError, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangError_init(JavaLangError *self);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangError *create_JavaLangError_init();

FOUNDATION_EXPORT void JavaLangError_initWithNSString_(JavaLangError *self, NSString *message);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangError *create_JavaLangError_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangError_initWithNSString_withNSException_(JavaLangError *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangError *create_JavaLangError_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaLangError_initWithNSException_(JavaLangError *self, NSException *cause);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangError *create_JavaLangError_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaLangError_initWithNSString_withNSException_withBoolean_withBoolean_(JavaLangError *self, NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangError *new_JavaLangError_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangError *create_JavaLangError_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangError")
