//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/progress/ArgumentMatcherStorage.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage")
#ifdef RESTRICT_OrgMockitoInternalProgressArgumentMatcherStorage
#define INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressArgumentMatcherStorage

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalProgressArgumentMatcherStorage_) && (INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage || defined(INCLUDE_OrgMockitoInternalProgressArgumentMatcherStorage))
#define OrgMockitoInternalProgressArgumentMatcherStorage_

@class OrgMockitoInternalProgressHandyReturnValues;
@protocol JavaUtilList;
@protocol OrgHamcrestMatcher;

@protocol OrgMockitoInternalProgressArgumentMatcherStorage < JavaObject >

- (OrgMockitoInternalProgressHandyReturnValues *)reportMatcherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (id<JavaUtilList>)pullLocalizedMatchers;

- (OrgMockitoInternalProgressHandyReturnValues *)reportAnd;

- (OrgMockitoInternalProgressHandyReturnValues *)reportNot;

- (OrgMockitoInternalProgressHandyReturnValues *)reportOr;

- (void)validateState;

- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalProgressArgumentMatcherStorage)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressArgumentMatcherStorage)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressArgumentMatcherStorage")
