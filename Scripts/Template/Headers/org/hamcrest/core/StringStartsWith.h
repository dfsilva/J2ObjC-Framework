//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/hamcrest/core/StringStartsWith.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreStringStartsWith")
#ifdef RESTRICT_OrgHamcrestCoreStringStartsWith
#define INCLUDE_ALL_OrgHamcrestCoreStringStartsWith 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreStringStartsWith 1
#endif
#undef RESTRICT_OrgHamcrestCoreStringStartsWith

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreStringStartsWith_) && (INCLUDE_ALL_OrgHamcrestCoreStringStartsWith || defined(INCLUDE_OrgHamcrestCoreStringStartsWith))
#define OrgHamcrestCoreStringStartsWith_

#define RESTRICT_OrgHamcrestCoreSubstringMatcher 1
#define INCLUDE_OrgHamcrestCoreSubstringMatcher 1
#include "../../../org/hamcrest/core/SubstringMatcher.h"

@protocol OrgHamcrestMatcher;

/*!
 @brief Tests if the argument is a string that contains a substring.
 */
@interface OrgHamcrestCoreStringStartsWith : OrgHamcrestCoreSubstringMatcher

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)substring;

/*!
 @brief Creates a matcher that matches if the examined <code>String</code> starts with the specified
 <code>String</code>.
 <p/>
 For example:
 @code
assertThat("myStringOfNote", startsWith("my"))
@endcode
 @param prefix
 the substring that the returned matcher will expect at the start of any examined string
 */
+ (id<OrgHamcrestMatcher>)startsWithWithNSString:(NSString *)prefix;

#pragma mark Protected

- (jboolean)evalSubstringOfWithNSString:(NSString *)s;

- (NSString *)relationship;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreStringStartsWith)

FOUNDATION_EXPORT void OrgHamcrestCoreStringStartsWith_initWithNSString_(OrgHamcrestCoreStringStartsWith *self, NSString *substring);

FOUNDATION_EXPORT OrgHamcrestCoreStringStartsWith *new_OrgHamcrestCoreStringStartsWith_initWithNSString_(NSString *substring) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreStringStartsWith *create_OrgHamcrestCoreStringStartsWith_initWithNSString_(NSString *substring);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreStringStartsWith_startsWithWithNSString_(NSString *prefix);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreStringStartsWith)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreStringStartsWith")
