//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsMocks.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMocks")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsMocks
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMocks 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMocks 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsMocks

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingDefaultanswersReturnsMocks_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMocks || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersReturnsMocks))
#define OrgMockitoInternalStubbingDefaultanswersReturnsMocks_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "../../../../../org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class IOSClass;
@protocol OrgMockitoInvocationInvocationOnMock;

@interface OrgMockitoInternalStubbingDefaultanswersReturnsMocks : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

#pragma mark Package-Private

- (id)returnValueForWithIOSClass:(IOSClass *)clazz;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsMocks)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init(OrgMockitoInternalStubbingDefaultanswersReturnsMocks *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsMocks *new_OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsMocks *create_OrgMockitoInternalStubbingDefaultanswersReturnsMocks_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsMocks)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsMocks")
