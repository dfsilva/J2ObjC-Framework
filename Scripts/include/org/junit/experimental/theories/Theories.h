//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/Theories.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesTheories
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesTheories

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalTheoriesTheories_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories || defined(INCLUDE_OrgJunitExperimentalTheoriesTheories))
#define OrgJunitExperimentalTheoriesTheories_

#define RESTRICT_OrgJunitRunnersBlockJUnit4ClassRunner 1
#define INCLUDE_OrgJunitRunnersBlockJUnit4ClassRunner 1
#include "org/junit/runners/BlockJUnit4ClassRunner.h"

@class IOSClass;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelStatement;
@protocol JavaUtilList;

@interface OrgJunitExperimentalTheoriesTheories : OrgJunitRunnersBlockJUnit4ClassRunner

#pragma mark Public

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (OrgJunitRunnersModelStatement *)methodBlockWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method;

#pragma mark Protected

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (id<JavaUtilList>)computeTestMethods;

- (void)validateConstructorWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateTestMethodsWithJavaUtilList:(id<JavaUtilList>)errors;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesTheories)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesTheories_initWithIOSClass_(OrgJunitExperimentalTheoriesTheories *self, IOSClass *klass);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories *new_OrgJunitExperimentalTheoriesTheories_initWithIOSClass_(IOSClass *klass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories *create_OrgJunitExperimentalTheoriesTheories_initWithIOSClass_(IOSClass *klass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesTheories)

#endif

#if !defined (OrgJunitExperimentalTheoriesTheories_TheoryAnchor_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories || defined(INCLUDE_OrgJunitExperimentalTheoriesTheories_TheoryAnchor))
#define OrgJunitExperimentalTheoriesTheories_TheoryAnchor_

#define RESTRICT_OrgJunitRunnersModelStatement 1
#define INCLUDE_OrgJunitRunnersModelStatement 1
#include "org/junit/runners/model/Statement.h"

@class IOSObjectArray;
@class OrgJunitExperimentalTheoriesInternalAssignments;
@class OrgJunitInternalAssumptionViolatedException;
@class OrgJunitRunnersModelFrameworkMethod;
@class OrgJunitRunnersModelTestClass;

@interface OrgJunitExperimentalTheoriesTheories_TheoryAnchor : OrgJunitRunnersModelStatement

#pragma mark Public

- (instancetype)initWithOrgJunitRunnersModelFrameworkMethod:(OrgJunitRunnersModelFrameworkMethod *)method
                          withOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

- (void)evaluate;

#pragma mark Protected

- (void)handleAssumptionViolationWithOrgJunitInternalAssumptionViolatedException:(OrgJunitInternalAssumptionViolatedException *)e;

- (void)handleDataPointSuccess;

- (void)reportParameterizedErrorWithNSException:(NSException *)e
                              withNSObjectArray:(IOSObjectArray *)params;

- (void)runWithAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)parameterAssignment;

- (void)runWithCompleteAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)complete;

- (void)runWithIncompleteAssignmentWithOrgJunitExperimentalTheoriesInternalAssignments:(OrgJunitExperimentalTheoriesInternalAssignments *)incomplete;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesTheories_TheoryAnchor)

FOUNDATION_EXPORT void OrgJunitExperimentalTheoriesTheories_TheoryAnchor_initWithOrgJunitRunnersModelFrameworkMethod_withOrgJunitRunnersModelTestClass_(OrgJunitExperimentalTheoriesTheories_TheoryAnchor *self, OrgJunitRunnersModelFrameworkMethod *method, OrgJunitRunnersModelTestClass *testClass);

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories_TheoryAnchor *new_OrgJunitExperimentalTheoriesTheories_TheoryAnchor_initWithOrgJunitRunnersModelFrameworkMethod_withOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelFrameworkMethod *method, OrgJunitRunnersModelTestClass *testClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesTheories_TheoryAnchor *create_OrgJunitExperimentalTheoriesTheories_TheoryAnchor_initWithOrgJunitRunnersModelFrameworkMethod_withOrgJunitRunnersModelTestClass_(OrgJunitRunnersModelFrameworkMethod *method, OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesTheories_TheoryAnchor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesTheories")
