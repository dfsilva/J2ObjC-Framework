//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/internal/matchers/TypeSafeMatcher.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalMatchersTypeSafeMatcher")
#ifdef RESTRICT_OrgJunitInternalMatchersTypeSafeMatcher
#define INCLUDE_ALL_OrgJunitInternalMatchersTypeSafeMatcher 0
#else
#define INCLUDE_ALL_OrgJunitInternalMatchersTypeSafeMatcher 1
#endif
#undef RESTRICT_OrgJunitInternalMatchersTypeSafeMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalMatchersTypeSafeMatcher_) && (INCLUDE_ALL_OrgJunitInternalMatchersTypeSafeMatcher || defined(INCLUDE_OrgJunitInternalMatchersTypeSafeMatcher))
#define OrgJunitInternalMatchersTypeSafeMatcher_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "../../../../org/hamcrest/BaseMatcher.h"

@class IOSClass;

/*!
 @brief Convenient base class for Matchers that require a non-null value of a specific type.
 This simply implements the null check, checks the type and then casts.
 @author Joe Walnes
 */
__attribute__((deprecated))
@interface OrgJunitInternalMatchersTypeSafeMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

/*!
 @brief Method made final to prevent accidental override.
 If you need to override this, there's no point on extending TypeSafeMatcher.
 Instead, extend the <code>BaseMatcher</code>.
 */
- (jboolean)matchesWithId:(id)item;

/*!
 @brief Subclasses should implement this.
 The item will already have been checked for
 the specific type and will never be null.
 */
- (jboolean)matchesSafelyWithId:(id)item;

#pragma mark Protected

- (instancetype)init;

- (instancetype)initWithIOSClass:(IOSClass *)expectedType;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalMatchersTypeSafeMatcher)

FOUNDATION_EXPORT void OrgJunitInternalMatchersTypeSafeMatcher_init(OrgJunitInternalMatchersTypeSafeMatcher *self);

FOUNDATION_EXPORT void OrgJunitInternalMatchersTypeSafeMatcher_initWithIOSClass_(OrgJunitInternalMatchersTypeSafeMatcher *self, IOSClass *expectedType);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalMatchersTypeSafeMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalMatchersTypeSafeMatcher")
