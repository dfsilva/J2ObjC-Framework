//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/experimental/theories/internal/Assignments.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAssignments")
#ifdef RESTRICT_OrgJunitExperimentalTheoriesInternalAssignments
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAssignments 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAssignments 1
#endif
#undef RESTRICT_OrgJunitExperimentalTheoriesInternalAssignments

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalTheoriesInternalAssignments_) && (INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAssignments || defined(INCLUDE_OrgJunitExperimentalTheoriesInternalAssignments))
#define OrgJunitExperimentalTheoriesInternalAssignments_

@class IOSObjectArray;
@class JavaLangReflectMethod;
@class OrgJunitExperimentalTheoriesParameterSignature;
@class OrgJunitExperimentalTheoriesParameterSupplier;
@class OrgJunitExperimentalTheoriesPotentialAssignment;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

/*!
 @brief A potentially incomplete list of value assignments for a method's formal
 parameters
 */
@interface OrgJunitExperimentalTheoriesInternalAssignments : NSObject

#pragma mark Public

/*!
 @brief Returns a new assignment list for <code>testMethod</code>, with no params
 assigned.
 */
+ (OrgJunitExperimentalTheoriesInternalAssignments *)allUnassignedWithJavaLangReflectMethod:(JavaLangReflectMethod *)testMethod
                                                          withOrgJunitRunnersModelTestClass:(OrgJunitRunnersModelTestClass *)testClass;

- (OrgJunitExperimentalTheoriesInternalAssignments *)assignNextWithOrgJunitExperimentalTheoriesPotentialAssignment:(OrgJunitExperimentalTheoriesPotentialAssignment *)source;

- (IOSObjectArray *)getActualValuesWithInt:(jint)start
                                   withInt:(jint)stop
                               withBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getAllArgumentsWithBoolean:(jboolean)nullsOk;

- (OrgJunitExperimentalTheoriesParameterSupplier *)getAnnotatedSupplierWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)unassigned;

- (IOSObjectArray *)getArgumentStringsWithBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getConstructorArgumentsWithBoolean:(jboolean)nullsOk;

- (IOSObjectArray *)getMethodArgumentsWithBoolean:(jboolean)nullsOk;

- (OrgJunitExperimentalTheoriesParameterSupplier *)getSupplierWithOrgJunitExperimentalTheoriesParameterSignature:(OrgJunitExperimentalTheoriesParameterSignature *)unassigned;

- (jboolean)isComplete;

- (OrgJunitExperimentalTheoriesParameterSignature *)nextUnassigned;

- (id<JavaUtilList>)potentialsForNextUnassigned;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalTheoriesInternalAssignments)

FOUNDATION_EXPORT OrgJunitExperimentalTheoriesInternalAssignments *OrgJunitExperimentalTheoriesInternalAssignments_allUnassignedWithJavaLangReflectMethod_withOrgJunitRunnersModelTestClass_(JavaLangReflectMethod *testMethod, OrgJunitRunnersModelTestClass *testClass);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalTheoriesInternalAssignments)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalTheoriesInternalAssignments")
