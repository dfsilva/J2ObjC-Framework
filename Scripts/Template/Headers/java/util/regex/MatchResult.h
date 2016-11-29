//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/regex/MatchResult.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilRegexMatchResult")
#ifdef RESTRICT_JavaUtilRegexMatchResult
#define INCLUDE_ALL_JavaUtilRegexMatchResult 0
#else
#define INCLUDE_ALL_JavaUtilRegexMatchResult 1
#endif
#undef RESTRICT_JavaUtilRegexMatchResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilRegexMatchResult_) && (INCLUDE_ALL_JavaUtilRegexMatchResult || defined(INCLUDE_JavaUtilRegexMatchResult))
#define JavaUtilRegexMatchResult_

/*!
 @brief Holds the results of a successful match of a <code>Pattern</code> against a
 given string.
 The result is divided into groups, with one group for each
 pair of parentheses in the regular expression and an additional group for
 the whole regular expression. The start, end, and contents of each group
 can be queried.
 - seealso: Matcher
 - seealso: Matcher#toMatchResult()
 */
@protocol JavaUtilRegexMatchResult < JavaObject >

/*!
 @brief Returns the index of the first character following the text that matched
 the whole regular expression.
 @return the character index.
 */
- (jint)end;

/*!
 @brief Returns the index of the first character following the text that matched
 a given group.
 @param group
 the group, ranging from 0 to groupCount() - 1, with 0
 representing the whole pattern.
 @return the character index.
 */
- (jint)endWithInt:(jint)group;

/*!
 @brief Returns the text that matched the whole regular expression.
 @return the text.
 */
- (NSString *)group;

/*!
 @brief Returns the text that matched a given group of the regular expression.
 @param group
 the group, ranging from 0 to groupCount() - 1, with 0
 representing the whole pattern.
 @return the text that matched the group.
 */
- (NSString *)groupWithInt:(jint)group;

/*!
 @brief Returns the number of groups in the result, which is always equal to
 the number of groups in the original regular expression.
 @return the number of groups.
 */
- (jint)groupCount;

/*!
 @brief Returns the index of the first character of the text that matched
 the whole regular expression.
 @return the character index.
 */
- (jint)start;

/*!
 @brief Returns the index of the first character of the text that matched a given
 group.
 @param group
 the group, ranging from 0 to groupCount() - 1, with 0
 representing the whole pattern.
 @return the character index.
 */
- (jint)startWithInt:(jint)group;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexMatchResult)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatchResult)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilRegexMatchResult")
