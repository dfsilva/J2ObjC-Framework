//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/CompareTo.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersCompareTo")
#ifdef RESTRICT_OrgMockitoInternalMatchersCompareTo
#define INCLUDE_ALL_OrgMockitoInternalMatchersCompareTo 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersCompareTo 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersCompareTo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersCompareTo_) && (INCLUDE_ALL_OrgMockitoInternalMatchersCompareTo || defined(INCLUDE_OrgMockitoInternalMatchersCompareTo))
#define OrgMockitoInternalMatchersCompareTo_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

@protocol JavaLangComparable;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersCompareTo : OrgMockitoArgumentMatcher

#pragma mark Public

- (instancetype)initWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

#pragma mark Protected

- (NSString *)getName;

- (jboolean)matchResultWithInt:(jint)result;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersCompareTo)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersCompareTo_initWithJavaLangComparable_(OrgMockitoInternalMatchersCompareTo *self, id<JavaLangComparable> value);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersCompareTo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersCompareTo")
