//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Spliterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSpliterator")
#ifdef RESTRICT_JavaUtilSpliterator
#define INCLUDE_ALL_JavaUtilSpliterator 0
#else
#define INCLUDE_ALL_JavaUtilSpliterator 1
#endif
#undef RESTRICT_JavaUtilSpliterator
#ifdef INCLUDE_JavaUtilSpliterator_OfDouble
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfLong
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfInt
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfPrimitive
#define INCLUDE_JavaUtilSpliterator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSpliterator_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator))
#define JavaUtilSpliterator_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief An object for traversing and partitioning elements of a source.The source
  of elements covered by a Spliterator could be, for example, an array, a 
 <code>Collection</code>, an IO channel, or a generator function.
 <p>A Spliterator may traverse elements individually (<code>tryAdvance()</code>
 ) or sequentially in bulk
  (<code>forEachRemaining()</code>).
  
 <p>A Spliterator may also partition off some of its elements (using 
 <code>trySplit</code>) as another Spliterator, to be used in
  possibly-parallel operations.  Operations using a Spliterator that
  cannot split, or does so in a highly imbalanced or inefficient
  manner, are unlikely to benefit from parallelism.  Traversal
  and splitting exhaust elements; each Spliterator is useful for only a single
  bulk computation. 
 <p>A Spliterator also reports a set of <code>characteristics()</code> of its
  structure, source, and elements from among <code>ORDERED</code>,
  <code>DISTINCT</code>, <code>SORTED</code>, <code>SIZED</code>, <code>NONNULL</code>,
  <code>IMMUTABLE</code>, <code>CONCURRENT</code>, and <code>SUBSIZED</code>. These may
  be employed by Spliterator clients to control, specialize or simplify
  computation.  For example, a Spliterator for a <code>Collection</code> would
  report <code>SIZED</code>, a Spliterator for a <code>Set</code> would report 
 <code>DISTINCT</code>, and a Spliterator for a <code>SortedSet</code> would also
  report <code>SORTED</code>.  Characteristics are reported as a simple unioned bit
  set.
  Some characteristics additionally constrain method behavior; for example if 
 <code>ORDERED</code>, traversal methods must conform to their documented ordering.
  New characteristics may be defined in the future, so implementors should not
  assign meanings to unlisted values. 
 <p><a name="binding">A Spliterator that does not report <code>IMMUTABLE</code> or 
 <code>CONCURRENT</code> is expected to have a documented policy concerning:
  when the spliterator <em>binds</em> to the element source; and detection of
  structural interference of the element source detected after binding.</a>  A 
 <em>late-binding</em> Spliterator binds to the source of elements at the
  point of first traversal, first split, or first query for estimated size,
  rather than at the time the Spliterator is created.  A Spliterator that is
  not <em>late-binding</em> binds to the source of elements at the point of
  construction or first invocation of any method.  Modifications made to the
  source prior to binding are reflected when the Spliterator is traversed.
  After binding a Spliterator should, on a best-effort basis, throw 
 <code>ConcurrentModificationException</code> if structural interference is
  detected.  Spliterators that do this are called <em>fail-fast</em>.  The
  bulk traversal method (<code>forEachRemaining()</code>) of a
  Spliterator may optimize traversal and check for structural interference
  after all elements have been traversed, rather than checking per-element and
  failing immediately. 
 <p>Spliterators can provide an estimate of the number of remaining elements
  via the <code>estimateSize</code> method.  Ideally, as reflected in characteristic 
 <code>SIZED</code>, this value corresponds exactly to the number of elements
  that would be encountered in a successful traversal.  However, even when not
  exactly known, an estimated value value may still be useful to operations
  being performed on the source, such as helping to determine whether it is
  preferable to split further or traverse the remaining elements sequentially. 
 <p>Despite their obvious utility in parallel algorithms, spliterators are not
  expected to be thread-safe; instead, implementations of parallel algorithms
  using spliterators should ensure that the spliterator is only used by one
  thread at a time.  This is generally easy to attain via <em>serial
  thread-confinement</em>, which often is a natural consequence of typical
  parallel algorithms that work by recursive decomposition.  A thread calling 
 <code>trySplit()</code> may hand over the returned Spliterator to another thread,
  which in turn may traverse or further split that Spliterator.  The behaviour
  of splitting and traversal is undefined if two or more threads operate
  concurrently on the same spliterator.  If the original thread hands a
  spliterator off to another thread for processing, it is best if that handoff
  occurs before any elements are consumed with <code>tryAdvance()</code>
 , as certain guarantees (such as the accuracy of 
 <code>estimateSize()</code> for <code>SIZED</code> spliterators) are only valid before
  traversal has begun. 
 <p>Primitive subtype specializations of <code>Spliterator</code> are provided for 
 <code>int</code>, <code>long</code>, and <code>double</code> values.
  The subtype default implementations of 
 <code>Spliterator.tryAdvance(java.util.function.Consumer)</code>
  and <code>Spliterator.forEachRemaining(java.util.function.Consumer)</code> box
  primitive values to instances of their corresponding wrapper class.  Such
  boxing may undermine any performance advantages gained by using the primitive
  specializations.  To avoid boxing, the corresponding primitive-based methods
  should be used.  For example, 
 <code>Spliterator.OfInt</code>
  and <code>Spliterator.OfInt</code>
  should be used in preference to 
 <code>Spliterator.OfInt</code> and 
 <code>Spliterator.OfInt</code>.
  Traversal of primitive values using boxing-based methods 
 <code>tryAdvance()</code> and 
 <code>forEachRemaining()</code>
  does not affect the order in which the values, transformed to boxed values,
  are encountered.
 - seealso: Collection
 @since 1.8
 */
@protocol JavaUtilSpliterator < JavaObject >

/*!
 @brief If a remaining element exists, performs the given action on it,
  returning <code>true</code>; else returns <code>false</code>.If this
  Spliterator is <code>ORDERED</code> the action is performed on the
  next element in encounter order.
 Exceptions thrown by the
  action are relayed to the caller.
 @param action The action
 @return <code>false</code> if no remaining elements existed
  upon entry to this method, else <code>true</code>.
 @throw NullPointerExceptionif the specified action is null
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 @brief Performs the given action for each remaining element, sequentially in
  the current thread, until all elements have been processed or the action
  throws an exception.If this Spliterator is <code>ORDERED</code>, actions
  are performed in encounter order.
 Exceptions thrown by the action
  are relayed to the caller.
 @param action The action
 @throw NullPointerExceptionif the specified action is null
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 @brief If this spliterator can be partitioned, returns a Spliterator
  covering elements, that will, upon return from this method, not
  be covered by this Spliterator.
 <p>If this Spliterator is <code>ORDERED</code>, the returned Spliterator
  must cover a strict prefix of the elements. 
 <p>Unless this Spliterator covers an infinite number of elements,
  repeated calls to <code>trySplit()</code> must eventually return <code>null</code>.
  Upon non-null return: 
 <ul>
  <li>the value reported for <code>estimateSize()</code> before splitting,
  must, after splitting, be greater than or equal to <code>estimateSize()</code>
  for this and the returned Spliterator; and</li>
  <li>if this Spliterator is <code>SUBSIZED</code>, then <code>estimateSize()</code>
  for this spliterator before splitting must be equal to the sum of 
 <code>estimateSize()</code> for this and the returned Spliterator after
  splitting.</li>
  </ul>
  
 <p>This method may return <code>null</code> for any reason,
  including emptiness, inability to split after traversal has
  commenced, data structure constraints, and efficiency
  considerations.
 @return a <code>Spliterator</code> covering some portion of the
  elements, or <code>null</code> if this spliterator cannot be split
 */
- (id<JavaUtilSpliterator>)trySplit;

/*!
 @brief Returns an estimate of the number of elements that would be
  encountered by a <code>forEachRemaining</code> traversal, or returns <code>Long.MAX_VALUE</code>
  if infinite, unknown, or too expensive to compute.
 <p>If this Spliterator is <code>SIZED</code> and has not yet been partially
  traversed or split, or this Spliterator is <code>SUBSIZED</code> and has
  not yet been partially traversed, this estimate must be an accurate
  count of elements that would be encountered by a complete traversal.
  Otherwise, this estimate may be arbitrarily inaccurate, but must decrease
  as specified across invocations of <code>trySplit</code>.
 @return the estimated size, or <code>Long.MAX_VALUE</code> if infinite,
          unknown, or too expensive to compute.
 */
- (jlong)estimateSize;

/*!
 @brief Convenience method that returns <code>estimateSize()</code> if this
  Spliterator is <code>SIZED</code>, else <code>-1</code>.
 @return the exact size, if known, else <code>-1</code>.
 */
- (jlong)getExactSizeIfKnown;

/*!
 @brief Returns a set of characteristics of this Spliterator and its
  elements.The result is represented as ORed values from <code>ORDERED</code>
 , <code>DISTINCT</code>, <code>SORTED</code>, <code>SIZED</code>,
  <code>NONNULL</code>, <code>IMMUTABLE</code>, <code>CONCURRENT</code>,
  <code>SUBSIZED</code>.
 Repeated calls to <code>characteristics()</code> on
  a given spliterator, prior to or in-between calls to <code>trySplit</code>,
  should always return the same result. 
 <p>If a Spliterator reports an inconsistent set of
  characteristics (either those returned from a single invocation
  or across multiple invocations), no guarantees can be made
  about any computation using this Spliterator.
 @return a representation of characteristics
 */
- (jint)characteristics;

/*!
 @brief Returns <code>true</code> if this Spliterator's <code>characteristics</code>
  contain all of the given characteristics.
 @param characteristics the characteristics to check for
 @return <code>true</code> if all the specified characteristics are present,
  else <code>false</code>
 */
- (jboolean)hasCharacteristicsWithInt:(jint)characteristics;

/*!
 @brief If this Spliterator's source is <code>SORTED</code> by a <code>Comparator</code>,
  returns that <code>Comparator</code>.If the source is <code>SORTED</code> in 
 order, returns <code>null</code>.
 Otherwise,
  if the source is not <code>SORTED</code>, throws <code>IllegalStateException</code>.
 @return a Comparator, or <code>null</code> if the elements are sorted in the
  natural order.
 @throw IllegalStateExceptionif the spliterator does not report
          a characteristic of <code>SORTED</code>.
 */
- (id<JavaUtilComparator>)getComparator;

@end

@interface JavaUtilSpliterator : NSObject

+ (jint)ORDERED;

+ (jint)DISTINCT;

+ (jint)SORTED;

+ (jint)SIZED;

+ (jint)NONNULL;

+ (jint)IMMUTABLE;

+ (jint)CONCURRENT;

+ (jint)SUBSIZED;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator)

/*!
 @brief Characteristic value signifying that an encounter order is defined for
  elements.If so, this Spliterator guarantees that method 
 <code>trySplit</code> splits a strict prefix of elements, that method 
 <code>tryAdvance</code> steps by one element in prefix order, and that 
 <code>forEachRemaining</code> performs actions in encounter order.
 <p>A <code>Collection</code> has an encounter order if the corresponding 
 <code>Collection.iterator</code> documents an order. If so, the encounter
  order is the same as the documented order. Otherwise, a collection does
  not have an encounter order.
 */
inline jint JavaUtilSpliterator_get_ORDERED(void);
#define JavaUtilSpliterator_ORDERED 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, ORDERED, jint)

/*!
 @brief Characteristic value signifying that, for each pair of
  encountered elements <code>x, y</code>, <code>!
 x.equals(y)</code>.This
  applies for example, to a Spliterator based on a <code>Set</code>.
 */
inline jint JavaUtilSpliterator_get_DISTINCT(void);
#define JavaUtilSpliterator_DISTINCT 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, DISTINCT, jint)

/*!
 @brief Characteristic value signifying that encounter order follows a defined
  sort order.If so, method <code>getComparator()</code> returns the associated
  Comparator, or <code>null</code> if all elements are <code>Comparable</code> and
  are sorted by their natural ordering.
 <p>A Spliterator that reports <code>SORTED</code> must also report 
 <code>ORDERED</code>.
 */
inline jint JavaUtilSpliterator_get_SORTED(void);
#define JavaUtilSpliterator_SORTED 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SORTED, jint)

/*!
 @brief Characteristic value signifying that the value returned from 
 <code>estimateSize()</code> prior to traversal or splitting represents a
  finite size that, in the absence of structural source modification,
  represents an exact count of the number of elements that would be
  encountered by a complete traversal.
 */
inline jint JavaUtilSpliterator_get_SIZED(void);
#define JavaUtilSpliterator_SIZED 64
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SIZED, jint)

/*!
 @brief Characteristic value signifying that the source guarantees that
  encountered elements will not be <code>null</code>.
 (This applies,
  for example, to most concurrent collections, queues, and maps.)
 */
inline jint JavaUtilSpliterator_get_NONNULL(void);
#define JavaUtilSpliterator_NONNULL 256
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, NONNULL, jint)

/*!
 @brief Characteristic value signifying that the element source cannot be
  structurally modified; that is, elements cannot be added, replaced, or
  removed, so such changes cannot occur during traversal.A Spliterator
  that does not report <code>IMMUTABLE</code> or <code>CONCURRENT</code> is expected
  to have a documented policy (for example throwing 
 <code>ConcurrentModificationException</code>) concerning structural
  interference detected during traversal.
 */
inline jint JavaUtilSpliterator_get_IMMUTABLE(void);
#define JavaUtilSpliterator_IMMUTABLE 1024
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, IMMUTABLE, jint)

/*!
 @brief Characteristic value signifying that the element source may be safely
  concurrently modified (allowing additions, replacements, and/or removals)
  by multiple threads without external synchronization.If so, the
  Spliterator is expected to have a documented policy concerning the impact
  of modifications during traversal.
 <p>A top-level Spliterator should not report both <code>CONCURRENT</code> and 
 <code>SIZED</code>, since the finite size, if known, may change if the source
  is concurrently modified during traversal. Such a Spliterator is
  inconsistent and no guarantees can be made about any computation using
  that Spliterator. Sub-spliterators may report <code>SIZED</code> if the
  sub-split size is known and additions or removals to the source are not
  reflected when traversing.
 */
inline jint JavaUtilSpliterator_get_CONCURRENT(void);
#define JavaUtilSpliterator_CONCURRENT 4096
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, CONCURRENT, jint)

/*!
 @brief Characteristic value signifying that all Spliterators resulting from 
 <code>trySplit()</code> will be both <code>SIZED</code> and <code>SUBSIZED</code>.
 (This means that all child Spliterators, whether direct or indirect, will
  be <code>SIZED</code>.)
  
 <p>A Spliterator that does not report <code>SIZED</code> as required by 
 <code>SUBSIZED</code> is inconsistent and no guarantees can be made about any
  computation using that Spliterator.
 */
inline jint JavaUtilSpliterator_get_SUBSIZED(void);
#define JavaUtilSpliterator_SUBSIZED 16384
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SUBSIZED, jint)

FOUNDATION_EXPORT void JavaUtilSpliterator_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT jlong JavaUtilSpliterator_getExactSizeIfKnown(id<JavaUtilSpliterator> self);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_hasCharacteristicsWithInt_(id<JavaUtilSpliterator> self, jint characteristics);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilSpliterator_getComparator(id<JavaUtilSpliterator> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator)

#endif

#if !defined (JavaUtilSpliterator_OfPrimitive_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfPrimitive))
#define JavaUtilSpliterator_OfPrimitive_

/*!
 @brief A Spliterator specialized for primitive values.
 - seealso: Spliterator.OfInt
 - seealso: Spliterator.OfLong
 - seealso: Spliterator.OfDouble
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfPrimitive < JavaUtilSpliterator, JavaObject >

- (id<JavaUtilSpliterator_OfPrimitive>)trySplit;

/*!
 @brief If a remaining element exists, performs the given action on it,
  returning <code>true</code>; else returns <code>false</code>.If this
  Spliterator is <code>ORDERED</code> the action is performed on the
  next element in encounter order.
 Exceptions thrown by the
  action are relayed to the caller.
 @param action The action
 @return <code>false</code> if no remaining elements existed
  upon entry to this method, else <code>true</code>.
 @throw NullPointerExceptionif the specified action is null
 */
- (jboolean)tryAdvanceWithId:(id)action;

/*!
 @brief Performs the given action for each remaining element, sequentially in
  the current thread, until all elements have been processed or the
  action throws an exception.If this Spliterator is <code>ORDERED</code>,
  actions are performed in encounter order.
 Exceptions thrown by the
  action are relayed to the caller.
 @param action The action
 @throw NullPointerExceptionif the specified action is null
 */
- (void)forEachRemainingWithId:(id)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfPrimitive)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfPrimitive_forEachRemainingWithId_(id<JavaUtilSpliterator_OfPrimitive> self, id action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfPrimitive)

#endif

#if !defined (JavaUtilSpliterator_OfInt_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfInt))
#define JavaUtilSpliterator_OfInt_

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionIntConsumer;

/*!
 @brief A Spliterator specialized for <code>int</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfInt < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfInt>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionIntConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionIntConsumer>)action;

/*!
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfInt)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfInt_forEachRemainingWithJavaUtilFunctionIntConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionIntConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfInt_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfInt_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfInt)

#endif

#if !defined (JavaUtilSpliterator_OfLong_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfLong))
#define JavaUtilSpliterator_OfLong_

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionLongConsumer;

/*!
 @brief A Spliterator specialized for <code>long</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfLong < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfLong>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionLongConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfLong)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfLong_forEachRemainingWithJavaUtilFunctionLongConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionLongConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfLong_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfLong_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfLong)

#endif

#if !defined (JavaUtilSpliterator_OfDouble_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfDouble))
#define JavaUtilSpliterator_OfDouble_

@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionDoubleConsumer;

/*!
 @brief A Spliterator specialized for <code>double</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfDouble < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfDouble>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

/*!
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfDouble)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfDouble_forEachRemainingWithJavaUtilFunctionDoubleConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionDoubleConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfDouble_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfDouble_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfDouble)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSpliterator")
