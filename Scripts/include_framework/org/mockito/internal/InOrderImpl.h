//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/InOrderImpl.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInOrderImpl")
#ifdef RESTRICT_OrgMockitoInternalInOrderImpl
#define INCLUDE_ALL_OrgMockitoInternalInOrderImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInOrderImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalInOrderImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInOrderImpl_) && (INCLUDE_ALL_OrgMockitoInternalInOrderImpl || defined(INCLUDE_OrgMockitoInternalInOrderImpl))
#define OrgMockitoInternalInOrderImpl_

#define RESTRICT_OrgMockitoInOrder 1
#define INCLUDE_OrgMockitoInOrder 1
#include "../../../org/mockito/InOrder.h"

#define RESTRICT_OrgMockitoInternalVerificationApiInOrderContext 1
#define INCLUDE_OrgMockitoInternalVerificationApiInOrderContext 1
#include "../../../org/mockito/internal/verification/api/InOrderContext.h"

@protocol JavaUtilList;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoVerificationVerificationMode;

/*!
 @brief Allows verifying in order.
 This class should not be exposed, hence default access.
 */
@interface OrgMockitoInternalInOrderImpl : NSObject < OrgMockitoInOrder, OrgMockitoInternalVerificationApiInOrderContext >

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)mocksToBeVerifiedInOrder;

- (id<JavaUtilList>)getMocksToBeVerifiedInOrder;

- (jboolean)isVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

- (id)verifyWithId:(id)mock;

- (id)verifyWithId:(id)mock
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)mode;

- (void)verifyNoMoreInteractions;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInOrderImpl)

FOUNDATION_EXPORT void OrgMockitoInternalInOrderImpl_initWithJavaUtilList_(OrgMockitoInternalInOrderImpl *self, id<JavaUtilList> mocksToBeVerifiedInOrder);

FOUNDATION_EXPORT OrgMockitoInternalInOrderImpl *new_OrgMockitoInternalInOrderImpl_initWithJavaUtilList_(id<JavaUtilList> mocksToBeVerifiedInOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInOrderImpl *create_OrgMockitoInternalInOrderImpl_initWithJavaUtilList_(id<JavaUtilList> mocksToBeVerifiedInOrder);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInOrderImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInOrderImpl")
