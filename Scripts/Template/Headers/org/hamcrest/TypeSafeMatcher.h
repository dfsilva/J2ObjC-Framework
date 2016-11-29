//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/hamcrest/TypeSafeMatcher.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestTypeSafeMatcher")
#ifdef RESTRICT_OrgHamcrestTypeSafeMatcher
#define INCLUDE_ALL_OrgHamcrestTypeSafeMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestTypeSafeMatcher 1
#endif
#undef RESTRICT_OrgHamcrestTypeSafeMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestTypeSafeMatcher_) && (INCLUDE_ALL_OrgHamcrestTypeSafeMatcher || defined(INCLUDE_OrgHamcrestTypeSafeMatcher))
#define OrgHamcrestTypeSafeMatcher_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "../../org/hamcrest/BaseMatcher.h"

@class IOSClass;
@class OrgHamcrestInternalReflectiveTypeFinder;
@protocol OrgHamcrestDescription;

/*!
 @brief Convenient base class for Matchers that require a non-null value of a specific type.
 This simply implements the null check, checks the type and then casts.
 @author Joe Walnes
 @author Steve Freeman
 @author Nat Pryce
 */
@interface OrgHamcrestTypeSafeMatcher : OrgHamcrestBaseMatcher

#pragma mark Public

- (void)describeMismatchWithId:(id)item
    withOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

/*!
 @brief Methods made final to prevent accidental override.
 If you need to override this, there's no point on extending TypeSafeMatcher.
 Instead, extend the <code>BaseMatcher</code>.
 */
- (jboolean)matchesWithId:(id)item;

#pragma mark Protected

/*!
 @brief The default constructor for simple sub types
 */
- (instancetype)init;

/*!
 @brief Use this constructor if the subclass that implements <code>matchesSafely</code> 
 is <em>not</em> the class that binds &lt;T&gt; to a type.
 @param expectedType The expectedType of the actual value.
 */
- (instancetype)initWithIOSClass:(IOSClass *)expectedType;

/*!
 @brief Use this constructor if the subclass that implements <code>matchesSafely</code> 
 is <em>not</em> the class that binds &lt;T&gt; to a type.
 @param typeFinder A type finder to extract the type
 */
- (instancetype)initWithOrgHamcrestInternalReflectiveTypeFinder:(OrgHamcrestInternalReflectiveTypeFinder *)typeFinder;

/*!
 @brief Subclasses should override this.
 The item will already have been checked for
 the specific type and will never be null.
 */
- (void)describeMismatchSafelyWithId:(id)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

/*!
 @brief Subclasses should implement this.
 The item will already have been checked for
 the specific type and will never be null.
 */
- (jboolean)matchesSafelyWithId:(id)item;

@end

J2OBJC_STATIC_INIT(OrgHamcrestTypeSafeMatcher)

FOUNDATION_EXPORT void OrgHamcrestTypeSafeMatcher_init(OrgHamcrestTypeSafeMatcher *self);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeMatcher_initWithIOSClass_(OrgHamcrestTypeSafeMatcher *self, IOSClass *expectedType);

FOUNDATION_EXPORT void OrgHamcrestTypeSafeMatcher_initWithOrgHamcrestInternalReflectiveTypeFinder_(OrgHamcrestTypeSafeMatcher *self, OrgHamcrestInternalReflectiveTypeFinder *typeFinder);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestTypeSafeMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestTypeSafeMatcher")
