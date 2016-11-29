//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/util/logging/IOSLogHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLoggingIOSLogHandler")
#ifdef RESTRICT_JavaUtilLoggingIOSLogHandler
#define INCLUDE_ALL_JavaUtilLoggingIOSLogHandler 0
#else
#define INCLUDE_ALL_JavaUtilLoggingIOSLogHandler 1
#endif
#undef RESTRICT_JavaUtilLoggingIOSLogHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilLoggingIOSLogHandler_) && (INCLUDE_ALL_JavaUtilLoggingIOSLogHandler || defined(INCLUDE_JavaUtilLoggingIOSLogHandler))
#define JavaUtilLoggingIOSLogHandler_

#define RESTRICT_JavaUtilLoggingHandler 1
#define INCLUDE_JavaUtilLoggingHandler 1
#include "java/util/logging/Handler.h"

@class JavaUtilLoggingLogRecord;

/*!
 @brief Handler implementation that calls iOS asl_log().
 @author Tom Ball
 */
@interface JavaUtilLoggingIOSLogHandler : JavaUtilLoggingHandler

+ (NSString *)IOS_LOG_MANAGER_DEFAULTS;

#pragma mark Public

- (instancetype)init;

- (void)close;

- (void)flush;

- (void)publishWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingIOSLogHandler)

inline NSString *JavaUtilLoggingIOSLogHandler_get_IOS_LOG_MANAGER_DEFAULTS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaUtilLoggingIOSLogHandler_IOS_LOG_MANAGER_DEFAULTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilLoggingIOSLogHandler, IOS_LOG_MANAGER_DEFAULTS, NSString *)

FOUNDATION_EXPORT void JavaUtilLoggingIOSLogHandler_init(JavaUtilLoggingIOSLogHandler *self);

FOUNDATION_EXPORT JavaUtilLoggingIOSLogHandler *new_JavaUtilLoggingIOSLogHandler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingIOSLogHandler *create_JavaUtilLoggingIOSLogHandler_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingIOSLogHandler)

#endif

#if !defined (JavaUtilLoggingIOSLogHandler_IOSLogFormatter_) && (INCLUDE_ALL_JavaUtilLoggingIOSLogHandler || defined(INCLUDE_JavaUtilLoggingIOSLogHandler_IOSLogFormatter))
#define JavaUtilLoggingIOSLogHandler_IOSLogFormatter_

#define RESTRICT_JavaUtilLoggingFormatter 1
#define INCLUDE_JavaUtilLoggingFormatter 1
#include "java/util/logging/Formatter.h"

@class JavaUtilLoggingLogRecord;

@interface JavaUtilLoggingIOSLogHandler_IOSLogFormatter : JavaUtilLoggingFormatter

#pragma mark Public

/*!
 @brief Very simple formatter, since asl_log adds its own text.
 */
- (NSString *)formatWithJavaUtilLoggingLogRecord:(JavaUtilLoggingLogRecord *)record;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLoggingIOSLogHandler_IOSLogFormatter)

FOUNDATION_EXPORT void JavaUtilLoggingIOSLogHandler_IOSLogFormatter_init(JavaUtilLoggingIOSLogHandler_IOSLogFormatter *self);

FOUNDATION_EXPORT JavaUtilLoggingIOSLogHandler_IOSLogFormatter *new_JavaUtilLoggingIOSLogHandler_IOSLogFormatter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLoggingIOSLogHandler_IOSLogFormatter *create_JavaUtilLoggingIOSLogHandler_IOSLogFormatter_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLoggingIOSLogHandler_IOSLogFormatter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLoggingIOSLogHandler")
