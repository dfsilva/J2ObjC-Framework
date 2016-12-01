//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/handler/NullResultGuardian.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian")
#ifdef RESTRICT_OrgMockitoInternalHandlerNullResultGuardian
#define INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian 0
#else
#define INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian 1
#endif
#undef RESTRICT_OrgMockitoInternalHandlerNullResultGuardian

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalHandlerNullResultGuardian_) && (INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian || defined(INCLUDE_OrgMockitoInternalHandlerNullResultGuardian))
#define OrgMockitoInternalHandlerNullResultGuardian_

#define RESTRICT_OrgMockitoInternalInternalMockHandler 1
#define INCLUDE_OrgMockitoInternalInternalMockHandler 1
#include "../../../../org/mockito/internal/InternalMockHandler.h"

@protocol JavaUtilList;
@protocol OrgMockitoInternalStubbingInvocationContainer;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoMockMockCreationSettings;
@protocol OrgMockitoStubbingVoidMethodStubbable;

/*!
 @brief Protects the results from delegate MockHandler.
 Makes sure the results are valid.
 by Szczepan Faber, created at: 5/22/12
 */
@interface OrgMockitoInternalHandlerNullResultGuardian : NSObject < OrgMockitoInternalInternalMockHandler >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalInternalMockHandler:(id<OrgMockitoInternalInternalMockHandler>)delegate;

- (id<OrgMockitoInternalStubbingInvocationContainer>)getInvocationContainer;

- (id<OrgMockitoMockMockCreationSettings>)getMockSettings;

- (id)handleWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)setAnswersForStubbingWithJavaUtilList:(id<JavaUtilList>)answers;

- (id<OrgMockitoStubbingVoidMethodStubbable>)voidMethodStubbableWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalHandlerNullResultGuardian)

FOUNDATION_EXPORT void OrgMockitoInternalHandlerNullResultGuardian_initWithOrgMockitoInternalInternalMockHandler_(OrgMockitoInternalHandlerNullResultGuardian *self, id<OrgMockitoInternalInternalMockHandler> delegate);

FOUNDATION_EXPORT OrgMockitoInternalHandlerNullResultGuardian *new_OrgMockitoInternalHandlerNullResultGuardian_initWithOrgMockitoInternalInternalMockHandler_(id<OrgMockitoInternalInternalMockHandler> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalHandlerNullResultGuardian *create_OrgMockitoInternalHandlerNullResultGuardian_initWithOrgMockitoInternalInternalMockHandler_(id<OrgMockitoInternalInternalMockHandler> delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalHandlerNullResultGuardian)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalHandlerNullResultGuardian")
