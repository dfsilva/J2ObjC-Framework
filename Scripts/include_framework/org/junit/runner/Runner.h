//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/runner/Runner.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerRunner")
#ifdef RESTRICT_OrgJunitRunnerRunner
#define INCLUDE_ALL_OrgJunitRunnerRunner 0
#else
#define INCLUDE_ALL_OrgJunitRunnerRunner 1
#endif
#undef RESTRICT_OrgJunitRunnerRunner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerRunner_) && (INCLUDE_ALL_OrgJunitRunnerRunner || defined(INCLUDE_OrgJunitRunnerRunner))
#define OrgJunitRunnerRunner_

#define RESTRICT_OrgJunitRunnerDescribable 1
#define INCLUDE_OrgJunitRunnerDescribable 1
#include "../../../org/junit/runner/Describable.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

/*!
 @brief A <code>Runner</code> runs tests and notifies a <code>org.junit.runner.notification.RunNotifier</code>
 of significant events as it does so.
 You will need to subclass <code>Runner</code>
 when using <code>org.junit.runner.RunWith</code> to invoke a custom runner. When creating
 a custom runner, in addition to implementing the abstract methods here you must
 also provide a constructor that takes as an argument the <code>Class</code> containing
 the tests.
 <p/>
 The default runner implementation guarantees that the instances of the test case
 class will be constructed immediately before running the test and that the runner
 will retain no reference to the test case instances, generally making them
 available for garbage collection.
 - seealso: org.junit.runner.Description
 - seealso: org.junit.runner.RunWith
 @since 4.0
 */
@interface OrgJunitRunnerRunner : NSObject < OrgJunitRunnerDescribable >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerDescription *)getDescription;

/*!
 @brief Run the tests for this runner.
 @param notifier will be notified of events while tests are being run--tests being
 started, finishing, and failing
 */
- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

/*!
 @return the number of tests to be run by the receiver
 */
- (jint)testCount;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerRunner)

FOUNDATION_EXPORT void OrgJunitRunnerRunner_init(OrgJunitRunnerRunner *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerRunner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerRunner")
