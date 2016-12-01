//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/ShortcutCombination.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreShortcutCombination")
#ifdef RESTRICT_OrgHamcrestCoreShortcutCombination
#define INCLUDE_ALL_OrgHamcrestCoreShortcutCombination 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreShortcutCombination 1
#endif
#undef RESTRICT_OrgHamcrestCoreShortcutCombination

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreShortcutCombination_) && (INCLUDE_ALL_OrgHamcrestCoreShortcutCombination || defined(INCLUDE_OrgHamcrestCoreShortcutCombination))
#define OrgHamcrestCoreShortcutCombination_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "../../../org/hamcrest/BaseMatcher.h"

@protocol JavaLangIterable;
@protocol OrgHamcrestDescription;

@interface OrgHamcrestCoreShortcutCombination : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)matchers;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_
                                withNSString:(NSString *)operator_;

- (jboolean)matchesWithId:(id)o;

#pragma mark Protected

- (jboolean)matchesWithId:(id)o
              withBoolean:(jboolean)shortcut;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreShortcutCombination)

FOUNDATION_EXPORT void OrgHamcrestCoreShortcutCombination_initWithJavaLangIterable_(OrgHamcrestCoreShortcutCombination *self, id<JavaLangIterable> matchers);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreShortcutCombination)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreShortcutCombination")
