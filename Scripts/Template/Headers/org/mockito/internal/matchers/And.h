//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/And.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnd")
#ifdef RESTRICT_OrgMockitoInternalMatchersAnd
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnd 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersAnd 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersAnd

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersAnd_) && (INCLUDE_ALL_OrgMockitoInternalMatchersAnd || defined(INCLUDE_OrgMockitoInternalMatchersAnd))
#define OrgMockitoInternalMatchersAnd_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol JavaUtilList;
@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersAnd : OrgMockitoArgumentMatcher < JavaIoSerializable >

#pragma mark Public

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)matchers;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalMatchersAnd)

FOUNDATION_EXPORT void OrgMockitoInternalMatchersAnd_initWithJavaUtilList_(OrgMockitoInternalMatchersAnd *self, id<JavaUtilList> matchers);

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnd *new_OrgMockitoInternalMatchersAnd_initWithJavaUtilList_(id<JavaUtilList> matchers) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalMatchersAnd *create_OrgMockitoInternalMatchersAnd_initWithJavaUtilList_(id<JavaUtilList> matchers);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAnd)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAnd")
