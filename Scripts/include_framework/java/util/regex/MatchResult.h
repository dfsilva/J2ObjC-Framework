//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/regex/MatchResult.java
//

#include "J2ObjC_header.h"

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
 @brief The result of a match operation.
 <p>This interface contains query methods used to determine the
  results of a match against a regular expression. The match boundaries,
  groups and group boundaries can be seen but not modified through
  a <code>MatchResult</code>.
 @author Michael McCloskey
 - seealso: Matcher
 @since 1.5
 */
@protocol JavaUtilRegexMatchResult < JavaObject >

/*!
 @brief Returns the start index of the match.
 @return The index of the first character matched
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (jint)start;

/*!
 @brief Returns the start index of the subsequence captured by the given group
  during this match.
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <i>m.</i><tt>start(0)</tt> is equivalent to 
 <i>m.</i><tt>start()</tt>.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The index of the first character captured by the group,
           or <tt>-1</tt> if the match was successful but the group
           itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (jint)startWithInt:(jint)group;

/*!
 @brief Returns the offset after the last character matched.
 </p>
 @return The offset after the last character matched
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (jint)end;

/*!
 @brief Returns the offset after the last character of the subsequence
  captured by the given group during this match.
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <i>m.</i><tt>end(0)</tt> is equivalent to 
 <i>m.</i><tt>end()</tt>.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The offset after the last character captured by the group,
           or <tt>-1</tt> if the match was successful
           but the group itself did not match anything
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (jint)endWithInt:(jint)group;

/*!
 @brief Returns the input subsequence matched by the previous match.
 <p> For a matcher <i>m</i> with input sequence <i>s</i>,
  the expressions <i>m.</i><tt>group()</tt> and 
 <i>s.</i><tt>substring(</tt><i>m.</i><tt>start(),</tt>&nbsp;<i>m.</i><tt>end())</tt>
  are equivalent.  </p>
  
 <p> Note that some patterns, for example <tt>a*</tt>, match the empty
  string.  This method will return the empty string when the pattern
  successfully matches the empty string in the input.  </p>
 @return The (possibly empty) subsequence matched by the previous match,
          in string form
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 */
- (NSString *)group;

/*!
 @brief Returns the input subsequence captured by the given group during the
  previous match operation.
 <p> For a matcher <i>m</i>, input sequence <i>s</i>, and group index 
 <i>g</i>, the expressions <i>m.</i><tt>group(</tt><i>g</i><tt>)</tt> and 
 <i>s.</i><tt>substring(</tt><i>m.</i><tt>start(</tt><i>g</i><tt>),</tt>&nbsp;<i>m.</i><tt>end(</tt><i>g</i><tt>))</tt>
  are equivalent.  </p>
  
 <p> <a href="Pattern.html#cg">Capturing groups</a> are indexed from left
  to right, starting at one.  Group zero denotes the entire pattern, so
  the expression <tt>m.group(0)</tt> is equivalent to <tt>m.group()</tt>.
  </p>
  
 <p> If the match was successful but the group specified failed to match
  any part of the input sequence, then <tt>null</tt> is returned. Note
  that some groups, for example <tt>(a*)</tt>, match the empty string.
  This method will return the empty string when such a group successfully
  matches the empty string in the input.  </p>
 @param group The index of a capturing group in this matcher's pattern
 @return The (possibly empty) subsequence captured by the group
           during the previous match, or <tt>null</tt> if the group
           failed to match part of the input
 @throw IllegalStateException
 If no match has yet been attempted,
           or if the previous match operation failed
 @throw IndexOutOfBoundsException
 If there is no capturing group in the pattern
           with the given index
 */
- (NSString *)groupWithInt:(jint)group;

/*!
 @brief Returns the number of capturing groups in this match result's pattern.
 <p> Group zero denotes the entire pattern by convention. It is not
  included in this count. 
 <p> Any non-negative integer smaller than or equal to the value
  returned by this method is guaranteed to be a valid group index for
  this matcher.  </p>
 @return The number of capturing groups in this matcher's pattern
 */
- (jint)groupCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRegexMatchResult)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRegexMatchResult)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilRegexMatchResult")
