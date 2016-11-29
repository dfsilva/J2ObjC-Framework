//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/internal/runners/ClassRoadie.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalRunnersClassRoadie")
#ifdef RESTRICT_OrgJunitInternalRunnersClassRoadie
#define INCLUDE_ALL_OrgJunitInternalRunnersClassRoadie 0
#else
#define INCLUDE_ALL_OrgJunitInternalRunnersClassRoadie 1
#endif
#undef RESTRICT_OrgJunitInternalRunnersClassRoadie

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalRunnersClassRoadie_) && (INCLUDE_ALL_OrgJunitInternalRunnersClassRoadie || defined(INCLUDE_OrgJunitInternalRunnersClassRoadie))
#define OrgJunitInternalRunnersClassRoadie_

@class OrgJunitInternalRunnersTestClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol JavaLangRunnable;

/*!
 */
__attribute__((deprecated))
@interface OrgJunitInternalRunnersClassRoadie : NSObject

#pragma mark Public

- (instancetype)initWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier
                         withOrgJunitInternalRunnersTestClass:(OrgJunitInternalRunnersTestClass *)testClass
                                withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                                         withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

- (void)runProtected;

#pragma mark Protected

- (void)addFailureWithNSException:(NSException *)targetException;

- (void)runUnprotected;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalRunnersClassRoadie)

FOUNDATION_EXPORT void OrgJunitInternalRunnersClassRoadie_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitInternalRunnersTestClass_withOrgJunitRunnerDescription_withJavaLangRunnable_(OrgJunitInternalRunnersClassRoadie *self, OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitInternalRunnersTestClass *testClass, OrgJunitRunnerDescription *description_, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT OrgJunitInternalRunnersClassRoadie *new_OrgJunitInternalRunnersClassRoadie_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitInternalRunnersTestClass_withOrgJunitRunnerDescription_withJavaLangRunnable_(OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitInternalRunnersTestClass *testClass, OrgJunitRunnerDescription *description_, id<JavaLangRunnable> runnable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalRunnersClassRoadie *create_OrgJunitInternalRunnersClassRoadie_initWithOrgJunitRunnerNotificationRunNotifier_withOrgJunitInternalRunnersTestClass_withOrgJunitRunnerDescription_withJavaLangRunnable_(OrgJunitRunnerNotificationRunNotifier *notifier, OrgJunitInternalRunnersTestClass *testClass, OrgJunitRunnerDescription *description_, id<JavaLangRunnable> runnable);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalRunnersClassRoadie)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalRunnersClassRoadie")
