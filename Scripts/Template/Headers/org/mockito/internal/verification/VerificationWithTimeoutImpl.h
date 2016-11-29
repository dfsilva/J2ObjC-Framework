//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/VerificationWithTimeoutImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWithTimeoutImpl")
#ifdef RESTRICT_OrgMockitoInternalVerificationVerificationWithTimeoutImpl
#define INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWithTimeoutImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWithTimeoutImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationVerificationWithTimeoutImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationVerificationWithTimeoutImpl_) && (INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWithTimeoutImpl || defined(INCLUDE_OrgMockitoInternalVerificationVerificationWithTimeoutImpl))
#define OrgMockitoInternalVerificationVerificationWithTimeoutImpl_

@protocol OrgMockitoInternalVerificationApiVerificationData;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalVerificationVerificationWithTimeoutImpl : NSObject {
 @public
  id<OrgMockitoVerificationVerificationMode> delegate_;
  jint timeout_;
  jint treshhold_;
}

#pragma mark Public

- (instancetype)initWithInt:(jint)treshhold
                    withInt:(jint)millis
withOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)delegate;

- (id<OrgMockitoVerificationVerificationMode>)getDelegate;

- (jint)getTimeout;

- (jint)getTreshhold;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

#pragma mark Package-Private

- (void)sleepWithInt:(jint)sleep;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

J2OBJC_FIELD_SETTER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl, delegate_, id<OrgMockitoVerificationVerificationMode>)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationVerificationWithTimeoutImpl_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(OrgMockitoInternalVerificationVerificationWithTimeoutImpl *self, jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationWithTimeoutImpl *new_OrgMockitoInternalVerificationVerificationWithTimeoutImpl_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationVerificationWithTimeoutImpl *create_OrgMockitoInternalVerificationVerificationWithTimeoutImpl_initWithInt_withInt_withOrgMockitoVerificationVerificationMode_(jint treshhold, jint millis, id<OrgMockitoVerificationVerificationMode> delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationVerificationWithTimeoutImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationVerificationWithTimeoutImpl")
