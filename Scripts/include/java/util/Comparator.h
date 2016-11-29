//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Comparator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilComparator")
#ifdef RESTRICT_JavaUtilComparator
#define INCLUDE_ALL_JavaUtilComparator 0
#else
#define INCLUDE_ALL_JavaUtilComparator 1
#endif
#undef RESTRICT_JavaUtilComparator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilComparator_) && (INCLUDE_ALL_JavaUtilComparator || defined(INCLUDE_JavaUtilComparator))
#define JavaUtilComparator_

/*!
 @brief A <code>Comparator</code> is used to compare two objects to determine their ordering with
 respect to each other.
 On a given <code>Collection</code>, a <code>Comparator</code> can be used to
 obtain a sorted <code>Collection</code> which is <i>totally ordered</i>. For a <code>Comparator</code>
 to be <i>consistent with equals</i>, its {code #compare(Object, Object)}
 method has to return zero for each pair of elements (a,b) where a.equals(b)
 holds true. It is recommended that a <code>Comparator</code> implements
 <code>java.io.Serializable</code>.
 @since 1.2
 */
@protocol JavaUtilComparator < JavaObject >

/*!
 @brief Compares the two specified objects to determine their relative ordering.
 The ordering
 implied by the return value of this method for all possible pairs of
 <code>(lhs, rhs)</code> should form an <i>equivalence relation</i>.
 This means that
 <ul>
 <li><code>compare(a,a)</code> returns zero for all <code>a</code></li>
 <li>the sign of <code>compare(a,b)</code> must be the opposite of the sign of <code>compare(b,a)</code>
  for all pairs of (a,b)</li>
 <li>From <code>compare(a,b) > 0</code> and <code>compare(b,c) > 0</code> it must
 follow <code>compare(a,c) > 0</code> for all possible combinations of <code>(a,b,c)</code>
 </li>
 </ul>
 @param lhs
 an <code>Object</code>.
 @param rhs
 a second <code>Object</code> to compare with <code>lhs</code>.
 @return an integer < 0 if <code>lhs</code> is less than <code>rhs</code>, 0 if they are
 equal, and > 0 if <code>lhs</code> is greater than <code>rhs</code>.
 @throws ClassCastException
 if objects are not of the correct type.
 */
- (jint)compareWithId:(id)lhs
               withId:(id)rhs;

/*!
 @brief Compares this <code>Comparator</code> with the specified <code>Object</code> and indicates whether they
 are equal.
 In order to be equal, <code>object</code> must represent the same object
 as this instance using a class-specific comparison.
 <p>
 A <code>Comparator</code> never needs to override this method, but may choose so for
 performance reasons.
 @param object
 the <code>Object</code> to compare with this comparator.
 @return boolean <code>true</code> if specified <code>Object</code> is the same as this
 <code>Object</code>, and <code>false</code> otherwise.
 - seealso: Object#hashCode
 - seealso: Object#equals
 */
- (jboolean)isEqual:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilComparator)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilComparator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilComparator")
