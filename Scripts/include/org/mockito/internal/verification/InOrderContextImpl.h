//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/InOrderContextImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationInOrderContextImpl")
#ifdef RESTRICT_OrgMockitoInternalVerificationInOrderContextImpl
#define INCLUDE_ALL_OrgMockitoInternalVerificationInOrderContextImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationInOrderContextImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationInOrderContextImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationInOrderContextImpl_) && (INCLUDE_ALL_OrgMockitoInternalVerificationInOrderContextImpl || defined(INCLUDE_OrgMockitoInternalVerificationInOrderContextImpl))
#define OrgMockitoInternalVerificationInOrderContextImpl_

#define RESTRICT_OrgMockitoInternalVerificationApiInOrderContext 1
#define INCLUDE_OrgMockitoInternalVerificationApiInOrderContext 1
#include "org/mockito/internal/verification/api/InOrderContext.h"

@class OrgMockitoInternalUtilCollectionsIdentitySet;
@protocol OrgMockitoInvocationInvocation;

@interface OrgMockitoInternalVerificationInOrderContextImpl : NSObject < OrgMockitoInternalVerificationApiInOrderContext > {
 @public
  OrgMockitoInternalUtilCollectionsIdentitySet *verified_;
}

#pragma mark Public

- (instancetype)init;

- (jboolean)isVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)markVerifiedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)i;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationInOrderContextImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationInOrderContextImpl, verified_, OrgMockitoInternalUtilCollectionsIdentitySet *)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationInOrderContextImpl_init(OrgMockitoInternalVerificationInOrderContextImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationInOrderContextImpl *new_OrgMockitoInternalVerificationInOrderContextImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationInOrderContextImpl *create_OrgMockitoInternalVerificationInOrderContextImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationInOrderContextImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationInOrderContextImpl")
