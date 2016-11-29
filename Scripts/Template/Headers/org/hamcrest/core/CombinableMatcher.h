//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/hamcrest/core/CombinableMatcher.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher")
#ifdef RESTRICT_OrgHamcrestCoreCombinableMatcher
#define INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher 1
#endif
#undef RESTRICT_OrgHamcrestCoreCombinableMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreCombinableMatcher_) && (INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher || defined(INCLUDE_OrgHamcrestCoreCombinableMatcher))
#define OrgHamcrestCoreCombinableMatcher_

#define RESTRICT_OrgHamcrestTypeSafeDiagnosingMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeDiagnosingMatcher 1
#include "../../../org/hamcrest/TypeSafeDiagnosingMatcher.h"

@class OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher;
@class OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreCombinableMatcher : OrgHamcrestTypeSafeDiagnosingMatcher

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)and__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

/*!
 @brief Creates a matcher that matches when both of the specified matchers match the examined object.
 <p/>
 For example:
 @code
assertThat("fab", both(containsString("a")).and(containsString("b")))
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *)bothWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Creates a matcher that matches when either of the specified matchers match the examined object.
 <p/>
 For example:
 @code
assertThat("fan", either(containsString("a")).and(containsString("b")))
@endcode
 */
+ (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *)eitherWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)or__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

#pragma mark Protected

- (jboolean)matchesSafelyWithId:(id)item
     withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher *new_OrgHamcrestCoreCombinableMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher *create_OrgHamcrestCoreCombinableMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *OrgHamcrestCoreCombinableMatcher_bothWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *OrgHamcrestCoreCombinableMatcher_eitherWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher)

#endif

#if !defined (OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_) && (INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher || defined(INCLUDE_OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher))
#define OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_

@class OrgHamcrestCoreCombinableMatcher;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher : NSObject

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)and__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *new_OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher *create_OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher_CombinableBothMatcher)

#endif

#if !defined (OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_) && (INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher || defined(INCLUDE_OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher))
#define OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_

@class OrgHamcrestCoreCombinableMatcher;
@protocol OrgHamcrestMatcher;

@interface OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher : NSObject

#pragma mark Public

- (instancetype)initWithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

- (OrgHamcrestCoreCombinableMatcher *)or__WithOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)other;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher)

FOUNDATION_EXPORT void OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_initWithOrgHamcrestMatcher_(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *self, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *new_OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher *create_OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher_initWithOrgHamcrestMatcher_(id<OrgHamcrestMatcher> matcher);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreCombinableMatcher_CombinableEitherMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreCombinableMatcher")
