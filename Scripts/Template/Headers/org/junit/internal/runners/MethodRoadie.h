//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/internal/runners/MethodRoadie.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersMethodRoadie")
#ifdef RESTRICT_OrgJunitInternalRunnersMethodRoadie
#define INCLUDE_ALL_OrgJunitInternalRunnersMethodRoadie 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersMethodRoadie 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersMethodRoadie

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersMethodRoadie_) && (INCLUDE_ALL_OrgJunitInternalRunnersMethodRoadie || defined(INCLUDE_OrgJunitInternalRunnersMethodRoadie))
#define OrgJunitInternalRunnersMethodRoadie_

@class OrgJunitInternalRunnersTestMethod;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JavaLangRunnable;

/*!
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersMethodRoadie : NSObject

#pragma mark Public

- (instancetype)initWithId:(id)test
withOrgJunitInternalRunnersTestMethod:(OrgJunitInternalRunnersTestMethod *)method
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier
withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (void)run;

- (void)runBeforesThenTestThenAftersWithJavaLangRunnable:(id<JavaLangRunnable>)test;

- (void)runTest;

#pragma mark Protected

- (void)addFailureWithNSException:(NSException *)e;

- (void)runTestMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersMethodRoadie)

FOUNDATION_EXPORT void OrgJunitInternalRunnersMethodRoadie_initWithId_withOrgJunitInternalRunnersTestMethod_withOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(OrgJunitInternalRunnersMethodRoadie *self, id test, OrgJunitInternalRunnersTestMethod *method, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_);

FOUNDATION_EXPORT OrgJunitInternalRunnersMethodRoadie *new_OrgJunitInternalRunnersMethodRoadie_initWithId_withOrgJunitInternalRunnersTestMethod_withOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(id test, OrgJunitInternalRunnersTestMethod *method, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersMethodRoadie *create_OrgJunitInternalRunnersMethodRoadie_initWithId_withOrgJunitInternalRunnersTestMethod_withOrgJunitRunnerNotificationRunNotifier_withOrgJunitRunnerDescription_(id test, OrgJunitInternalRunnersTestMethod *method, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitRunnerDescription *description_);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersMethodRoadie)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersMethodRoadie")
