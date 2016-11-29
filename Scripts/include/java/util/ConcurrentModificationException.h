//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/ConcurrentModificationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentModificationException")
#ifdef RESTRICT_JavaUtilConcurrentModificationException
#define INCLUDE_ALL_JavaUtilConcurrentModificationException 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentModificationException 1
#endif
#undef RESTRICT_JavaUtilConcurrentModificationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentModificationException_) && (INCLUDE_ALL_JavaUtilConcurrentModificationException || defined(INCLUDE_JavaUtilConcurrentModificationException))
#define JavaUtilConcurrentModificationException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief An <code>ConcurrentModificationException</code> is thrown when a Collection is
 modified and an existing iterator on the Collection is used to modify the
 Collection as well.
 - seealso: java.lang.RuntimeException
 */
@interface JavaUtilConcurrentModificationException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>ConcurrentModificationException</code> with the current
 stack trace filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ConcurrentModificationException</code> with the current
 stack trace and message filled in.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

/*!
 @brief Constructs a new <code>ConcurrentModificationException</code> with the given detail
 message and cause.
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)detailMessage
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new <code>ConcurrentModificationException</code> with the given cause.
 @since 1.7
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentModificationException)

FOUNDATION_EXPORT void JavaUtilConcurrentModificationException_init(JavaUtilConcurrentModificationException *self);

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *new_JavaUtilConcurrentModificationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *create_JavaUtilConcurrentModificationException_init();

FOUNDATION_EXPORT void JavaUtilConcurrentModificationException_initWithNSString_(JavaUtilConcurrentModificationException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *new_JavaUtilConcurrentModificationException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *create_JavaUtilConcurrentModificationException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaUtilConcurrentModificationException_initWithNSString_withNSException_(JavaUtilConcurrentModificationException *self, NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *new_JavaUtilConcurrentModificationException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *create_JavaUtilConcurrentModificationException_initWithNSString_withNSException_(NSString *detailMessage, NSException *cause);

FOUNDATION_EXPORT void JavaUtilConcurrentModificationException_initWithNSException_(JavaUtilConcurrentModificationException *self, NSException *cause);

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *new_JavaUtilConcurrentModificationException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentModificationException *create_JavaUtilConcurrentModificationException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentModificationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentModificationException")
