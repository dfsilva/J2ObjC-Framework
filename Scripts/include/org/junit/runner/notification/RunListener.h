//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/runner/notification/RunListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerNotificationRunListener")
#ifdef RESTRICT_OrgJunitRunnerNotificationRunListener
#define INCLUDE_ALL_OrgJunitRunnerNotificationRunListener 0
#else
#define INCLUDE_ALL_OrgJunitRunnerNotificationRunListener 1
#endif
#undef RESTRICT_OrgJunitRunnerNotificationRunListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerNotificationRunListener_) && (INCLUDE_ALL_OrgJunitRunnerNotificationRunListener || defined(INCLUDE_OrgJunitRunnerNotificationRunListener))
#define OrgJunitRunnerNotificationRunListener_

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationFailure;
@class OrgJunitRunnerResult;

/*!
 @brief <p>If you need to respond to the events during a test run, extend <code>RunListener</code>
 and override the appropriate methods.
 If a listener throws an exception while processing a
 test event, it will be removed for the remainder of the test run.</p>
 <p>For example, suppose you have a <code>Cowbell</code>
 class that you want to make a noise whenever a test fails. You could write:
 @code

  public class RingingListener extends RunListener {
    public void testFailure(Failure failure) {
       Cowbell.ring();
    }
  }
  
@endcode
 </p>
 <p>To invoke your listener, you need to run your tests through <code>JUnitCore</code>.
 @code

  public void main(String... args) {
    JUnitCore core= new JUnitCore();
    core.addListener(new RingingListener());
    core.run(MyTestClass.class);
  }
  
@endcode
 </p>
 - seealso: org.junit.runner.JUnitCore
 @since 4.0
 */
@interface OrgJunitRunnerNotificationRunListener : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Called when an atomic test flags that it assumes a condition that is
 false
 @param failure describes the test that failed and the
 <code>AssumptionViolatedException</code> that was thrown
 */
- (void)testAssumptionFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

/*!
 @brief Called when an atomic test fails.
 @param failure describes the test that failed and the exception that was thrown
 */
- (void)testFailureWithOrgJunitRunnerNotificationFailure:(OrgJunitRunnerNotificationFailure *)failure;

/*!
 @brief Called when an atomic test has finished, whether the test succeeds or fails.
 @param description_ the description of the test that just ran
 */
- (void)testFinishedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Called when a test will not be run, generally because a test method is annotated
 with <code>org.junit.Ignore</code>.
 @param description_ describes the test that will not be run
 */
- (void)testIgnoredWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Called when all tests have finished
 @param result the summary of the test run, including all the tests that failed
 */
- (void)testRunFinishedWithOrgJunitRunnerResult:(OrgJunitRunnerResult *)result;

/*!
 @brief Called before any tests have been run.
 @param description_ describes the tests to be run
 */
- (void)testRunStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Called when an atomic test is about to be started.
 @param description_ the description of the test that is about to be run
 (generally a class and method name)
 */
- (void)testStartedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerNotificationRunListener)

FOUNDATION_EXPORT void OrgJunitRunnerNotificationRunListener_init(OrgJunitRunnerNotificationRunListener *self);

FOUNDATION_EXPORT OrgJunitRunnerNotificationRunListener *new_OrgJunitRunnerNotificationRunListener_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRunnerNotificationRunListener *create_OrgJunitRunnerNotificationRunListener_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerNotificationRunListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerNotificationRunListener")
