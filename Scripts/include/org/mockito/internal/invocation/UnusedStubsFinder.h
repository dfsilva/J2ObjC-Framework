//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/UnusedStubsFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationUnusedStubsFinder")
#ifdef RESTRICT_OrgMockitoInternalInvocationUnusedStubsFinder
#define INCLUDE_ALL_OrgMockitoInternalInvocationUnusedStubsFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationUnusedStubsFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationUnusedStubsFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationUnusedStubsFinder_) && (INCLUDE_ALL_OrgMockitoInternalInvocationUnusedStubsFinder || defined(INCLUDE_OrgMockitoInternalInvocationUnusedStubsFinder))
#define OrgMockitoInternalInvocationUnusedStubsFinder_

@protocol JavaUtilList;

@interface OrgMockitoInternalInvocationUnusedStubsFinder : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Finds all unused stubs for given mocks
 @param mocks
 */
- (id<JavaUtilList>)findWithJavaUtilList:(id<JavaUtilList>)mocks;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationUnusedStubsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationUnusedStubsFinder_init(OrgMockitoInternalInvocationUnusedStubsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationUnusedStubsFinder *new_OrgMockitoInternalInvocationUnusedStubsFinder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationUnusedStubsFinder *create_OrgMockitoInternalInvocationUnusedStubsFinder_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationUnusedStubsFinder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationUnusedStubsFinder")