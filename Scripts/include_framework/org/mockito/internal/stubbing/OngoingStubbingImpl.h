//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/OngoingStubbingImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl")
#ifdef RESTRICT_OrgMockitoInternalStubbingOngoingStubbingImpl
#define INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingOngoingStubbingImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingOngoingStubbingImpl_) && (INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl || defined(INCLUDE_OrgMockitoInternalStubbingOngoingStubbingImpl))
#define OrgMockitoInternalStubbingOngoingStubbingImpl_

#define RESTRICT_OrgMockitoInternalStubbingBaseStubbing 1
#define INCLUDE_OrgMockitoInternalStubbingBaseStubbing 1
#include "../../../../org/mockito/internal/stubbing/BaseStubbing.h"

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol JavaUtilList;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingDeprecatedOngoingStubbing;
@protocol OrgMockitoStubbingOngoingStubbing;

@interface OrgMockitoInternalStubbingOngoingStubbingImpl : OrgMockitoInternalStubbingBaseStubbing

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id)getMock;

- (id<JavaUtilList>)getRegisteredInvocations;

- (id<OrgMockitoStubbingOngoingStubbing>)thenWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingOngoingStubbing>)thenAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingOngoingStubbingImpl)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingOngoingStubbingImpl *self, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

FOUNDATION_EXPORT OrgMockitoInternalStubbingOngoingStubbingImpl *new_OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingOngoingStubbingImpl *create_OrgMockitoInternalStubbingOngoingStubbingImpl_initWithOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingOngoingStubbingImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingOngoingStubbingImpl")
