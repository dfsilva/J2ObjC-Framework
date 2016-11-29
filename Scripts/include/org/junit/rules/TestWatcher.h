//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/rules/TestWatcher.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesTestWatcher")
#ifdef RESTRICT_OrgJunitRulesTestWatcher
#define INCLUDE_ALL_OrgJunitRulesTestWatcher 0
#else
#define INCLUDE_ALL_OrgJunitRulesTestWatcher 1
#endif
#undef RESTRICT_OrgJunitRulesTestWatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesTestWatcher_) && (INCLUDE_ALL_OrgJunitRulesTestWatcher || defined(INCLUDE_OrgJunitRulesTestWatcher))
#define OrgJunitRulesTestWatcher_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class OrgJunitInternalAssumptionViolatedException;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief TestWatcher is a base class for Rules that take note of the testing
 action, without modifying it.
 For example, this class will keep a log of each
 passing and failing test:
 @code

  public static class WatchmanTest {
  private static String watchedLog;
  &#064;Rule
  public TestWatcher watchman= new TestWatcher() {
      &#064;Override
      protected void failed(Throwable e, Description description) {
          watchedLog+= description + &quot;\n&quot;;
      }
      &#064;Override
      protected void succeeded(Description description) {
          watchedLog+= description + &quot; &quot; + &quot;success!\n&quot;;
         }
     };
  &#064;Test
  public void fails() {
      fail();
  }
  &#064;Test
  public void succeeds() {
     }
  }
  
@endcode
 @since 4.9
 */
@interface OrgJunitRulesTestWatcher : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

#pragma mark Protected

/*!
 @brief Invoked when a test fails
 */
- (void)failedWithNSException:(NSException *)e
withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Invoked when a test method finishes (whether passing or failing)
 */
- (void)finishedWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Invoked when a test is skipped due to a failed assumption.
 */
- (void)skippedWithOrgJunitInternalAssumptionViolatedException:(OrgJunitInternalAssumptionViolatedException *)e
                                 withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Invoked when a test is about to start
 */
- (void)startingWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Invoked when a test succeeds
 */
- (void)succeededWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTestWatcher)

FOUNDATION_EXPORT void OrgJunitRulesTestWatcher_init(OrgJunitRulesTestWatcher *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTestWatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesTestWatcher")
