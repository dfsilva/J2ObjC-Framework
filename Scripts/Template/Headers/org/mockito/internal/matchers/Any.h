//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/matchers/Any.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAny")
#ifdef RESTRICT_OrgMockitoInternalMatchersAny
#define INCLUDE_ALL_OrgMockitoInternalMatchersAny 0
#else
#define INCLUDE_ALL_OrgMockitoInternalMatchersAny 1
#endif
#undef RESTRICT_OrgMockitoInternalMatchersAny

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalMatchersAny_) && (INCLUDE_ALL_OrgMockitoInternalMatchersAny || defined(INCLUDE_OrgMockitoInternalMatchersAny))
#define OrgMockitoInternalMatchersAny_

#define RESTRICT_OrgMockitoArgumentMatcher 1
#define INCLUDE_OrgMockitoArgumentMatcher 1
#include "../../../../org/mockito/ArgumentMatcher.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@protocol OrgHamcrestDescription;

@interface OrgMockitoInternalMatchersAny : OrgMockitoArgumentMatcher < JavaIoSerializable >

+ (OrgMockitoInternalMatchersAny *)ANY;

#pragma mark Public

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)actual;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalMatchersAny)

inline OrgMockitoInternalMatchersAny *OrgMockitoInternalMatchersAny_get_ANY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgMockitoInternalMatchersAny *OrgMockitoInternalMatchersAny_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgMockitoInternalMatchersAny, ANY, OrgMockitoInternalMatchersAny *)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalMatchersAny)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalMatchersAny")
