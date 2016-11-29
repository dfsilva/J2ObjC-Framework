//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/InvocationContainerImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingInvocationContainerImpl")
#ifdef RESTRICT_OrgMockitoInternalStubbingInvocationContainerImpl
#define INCLUDE_ALL_OrgMockitoInternalStubbingInvocationContainerImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingInvocationContainerImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingInvocationContainerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingInvocationContainerImpl_) && (INCLUDE_ALL_OrgMockitoInternalStubbingInvocationContainerImpl || defined(INCLUDE_OrgMockitoInternalStubbingInvocationContainerImpl))
#define OrgMockitoInternalStubbingInvocationContainerImpl_

#define RESTRICT_OrgMockitoInternalStubbingInvocationContainer 1
#define INCLUDE_OrgMockitoInternalStubbingInvocationContainer 1
#include "../../../../org/mockito/internal/stubbing/InvocationContainer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalStubbingStubbedInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalProgressMockingProgress;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingInvocationContainerImpl : NSObject < OrgMockitoInternalStubbingInvocationContainer, JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalProgressMockingProgress:(id<OrgMockitoInternalProgressMockingProgress>)mockingProgress;

- (void)addAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (void)addAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer
                                  withBoolean:(jboolean)isConsecutive;

- (void)addAnswerForVoidMethodWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (void)addConsecutiveAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (OrgMockitoInternalStubbingStubbedInvocationMatcher *)findAnswerForWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (OrgMockitoInternalInvocationInvocationMatcher *)getInvocationForStubbing;

- (id<JavaUtilList>)getInvocations;

- (id<JavaUtilList>)getStubbedInvocations;

- (jboolean)hasAnswersForStubbing;

- (jboolean)hasInvocationForPotentialStubbing;

- (id)invokedMock;

- (void)resetInvocationForPotentialStubbingWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocationMatcher;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (void)setInvocationForPotentialStubbingWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocation;

- (void)setMethodForStubbingWithOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)invocation;

- (NSString *)description;

#pragma mark Package-Private

- (id)answerToWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingInvocationContainerImpl)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingInvocationContainerImpl_initWithOrgMockitoInternalProgressMockingProgress_(OrgMockitoInternalStubbingInvocationContainerImpl *self, id<OrgMockitoInternalProgressMockingProgress> mockingProgress);

FOUNDATION_EXPORT OrgMockitoInternalStubbingInvocationContainerImpl *new_OrgMockitoInternalStubbingInvocationContainerImpl_initWithOrgMockitoInternalProgressMockingProgress_(id<OrgMockitoInternalProgressMockingProgress> mockingProgress) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingInvocationContainerImpl *create_OrgMockitoInternalStubbingInvocationContainerImpl_initWithOrgMockitoInternalProgressMockingProgress_(id<OrgMockitoInternalProgressMockingProgress> mockingProgress);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingInvocationContainerImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingInvocationContainerImpl")
