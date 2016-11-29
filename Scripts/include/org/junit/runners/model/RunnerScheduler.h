//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/runners/model/RunnerScheduler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler")
#ifdef RESTRICT_OrgJunitRunnersModelRunnerScheduler
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler 1
#endif
#undef RESTRICT_OrgJunitRunnersModelRunnerScheduler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnersModelRunnerScheduler_) && (INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler || defined(INCLUDE_OrgJunitRunnersModelRunnerScheduler))
#define OrgJunitRunnersModelRunnerScheduler_

@protocol JavaLangRunnable;

/*!
 @brief Represents a strategy for scheduling when individual test methods
 should be run (in serial or parallel)
 WARNING: still experimental, may go away.
 @since 4.7
 */
@protocol OrgJunitRunnersModelRunnerScheduler < JavaObject >

/*!
 @brief Schedule a child statement to run
 */
- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;

/*!
 @brief Override to implement any behavior that must occur
 after all children have been scheduled (for example,
 waiting for them all to finish)
 */
- (void)finished;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelRunnerScheduler)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelRunnerScheduler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelRunnerScheduler")
