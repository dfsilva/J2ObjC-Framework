//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/BaseStubbing.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingBaseStubbing")
#ifdef RESTRICT_OrgMockitoInternalStubbingBaseStubbing
#define INCLUDE_ALL_OrgMockitoInternalStubbingBaseStubbing 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingBaseStubbing 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingBaseStubbing

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingBaseStubbing_) && (INCLUDE_ALL_OrgMockitoInternalStubbingBaseStubbing || defined(INCLUDE_OrgMockitoInternalStubbingBaseStubbing))
#define OrgMockitoInternalStubbingBaseStubbing_

#define RESTRICT_OrgMockitoStubbingOngoingStubbing 1
#define INCLUDE_OrgMockitoStubbingOngoingStubbing 1
#include "org/mockito/stubbing/OngoingStubbing.h"

#define RESTRICT_OrgMockitoStubbingDeprecatedOngoingStubbing 1
#define INCLUDE_OrgMockitoStubbingDeprecatedOngoingStubbing 1
#include "org/mockito/stubbing/DeprecatedOngoingStubbing.h"

@class IOSObjectArray;

@interface OrgMockitoInternalStubbingBaseStubbing : NSObject < OrgMockitoStubbingOngoingStubbing, OrgMockitoStubbingDeprecatedOngoingStubbing >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoStubbingOngoingStubbing>)thenCallRealMethod;

- (id<OrgMockitoStubbingOngoingStubbing>)thenReturnWithId:(id)value;

- (id<OrgMockitoStubbingOngoingStubbing>)thenReturnWithId:(id)value
                                        withNSObjectArray:(IOSObjectArray *)values;

- (id<OrgMockitoStubbingOngoingStubbing>)thenThrowWithIOSClassArray:(IOSObjectArray *)throwableClasses;

- (id<OrgMockitoStubbingOngoingStubbing>)thenThrowWithNSExceptionArray:(IOSObjectArray *)throwables;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toReturnWithId:(id)value;

- (id<OrgMockitoStubbingDeprecatedOngoingStubbing>)toThrowWithNSException:(NSException *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingBaseStubbing)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingBaseStubbing_init(OrgMockitoInternalStubbingBaseStubbing *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingBaseStubbing)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingBaseStubbing")
