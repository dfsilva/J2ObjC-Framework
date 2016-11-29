//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/runner/notification/StoppedByUserException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerNotificationStoppedByUserException")
#ifdef RESTRICT_OrgJunitRunnerNotificationStoppedByUserException
#define INCLUDE_ALL_OrgJunitRunnerNotificationStoppedByUserException 0
#else
#define INCLUDE_ALL_OrgJunitRunnerNotificationStoppedByUserException 1
#endif
#undef RESTRICT_OrgJunitRunnerNotificationStoppedByUserException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerNotificationStoppedByUserException_) && (INCLUDE_ALL_OrgJunitRunnerNotificationStoppedByUserException || defined(INCLUDE_OrgJunitRunnerNotificationStoppedByUserException))
#define OrgJunitRunnerNotificationStoppedByUserException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown when a user has requested that the test run stop.
 Writers of
 test running GUIs should be prepared to catch a <code>StoppedByUserException</code>.
 - seealso: org.junit.runner.notification.RunNotifier
 @since 4.0
 */
@interface OrgJunitRunnerNotificationStoppedByUserException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationStoppedByUserException)

FOUNDATION_EXPORT void OrgJunitRunnerNotificationStoppedByUserException_init(OrgJunitRunnerNotificationStoppedByUserException *self);

FOUNDATION_EXPORT OrgJunitRunnerNotificationStoppedByUserException *new_OrgJunitRunnerNotificationStoppedByUserException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerNotificationStoppedByUserException *create_OrgJunitRunnerNotificationStoppedByUserException_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationStoppedByUserException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerNotificationStoppedByUserException")
