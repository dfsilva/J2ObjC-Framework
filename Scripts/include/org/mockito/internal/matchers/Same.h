//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Same.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersSame")
#ifdef RESTRICT_OrgMockitoInternalMatchersSame
#define INCLUDE_ALL_OrgMockitoInternalMatchersSame 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersSame 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersSame

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersSame_) && (INCLUDE_ALL_OrgMockitoInternalMatchersSame || defined(INCLUDE_OrgMockitoInternalMatchersSame))
#define OrgMockitoInternalMatchersSame_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersSame : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithId:(id)wanted;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersSame)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersSame_initWithId_(OrgMockitoInternalMatchersSame *self, id wanted);

FOUNDATION_EXPORT OrgMockitoInternalMatchersSame *new_OrgMockitoInternalMatchersSame_initWithId_(id wanted) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersSame *create_OrgMockitoInternalMatchersSame_initWithId_(id wanted);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersSame)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersSame")
