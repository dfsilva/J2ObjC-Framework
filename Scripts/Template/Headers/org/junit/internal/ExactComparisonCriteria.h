//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/internal/ExactComparisonCriteria.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalExactComparisonCriteria")
#ifdef RESTRICT_OrgJunitInternalExactComparisonCriteria
#define INCLUDE_ALL_OrgJunitInternalExactComparisonCriteria 0
#else
#define INCLUDE_ALL_OrgJunitInternalExactComparisonCriteria 1
#endif
#undef RESTRICT_OrgJunitInternalExactComparisonCriteria

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalExactComparisonCriteria_) && (INCLUDE_ALL_OrgJunitInternalExactComparisonCriteria || defined(INCLUDE_OrgJunitInternalExactComparisonCriteria))
#define OrgJunitInternalExactComparisonCriteria_

#define RESTRICT_OrgJunitInternalComparisonCriteria 1
#define INCLUDE_OrgJunitInternalComparisonCriteria 1
#include "../../../org/junit/internal/ComparisonCriteria.h"

@interface OrgJunitInternalExactComparisonCriteria : OrgJunitInternalComparisonCriteria

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (void)assertElementsEqualWithId:(id)expected
                           withId:(id)actual;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalExactComparisonCriteria)

FOUNDATION_EXPORT void OrgJunitInternalExactComparisonCriteria_init(OrgJunitInternalExactComparisonCriteria *self);

FOUNDATION_EXPORT OrgJunitInternalExactComparisonCriteria *new_OrgJunitInternalExactComparisonCriteria_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalExactComparisonCriteria *create_OrgJunitInternalExactComparisonCriteria_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalExactComparisonCriteria)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalExactComparisonCriteria")
