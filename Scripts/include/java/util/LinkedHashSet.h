//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/LinkedHashSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilLinkedHashSet")
#ifdef RESTRICT_JavaUtilLinkedHashSet
#define INCLUDE_ALL_JavaUtilLinkedHashSet 0
#else
#define INCLUDE_ALL_JavaUtilLinkedHashSet 1
#endif
#undef RESTRICT_JavaUtilLinkedHashSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilLinkedHashSet_) && (INCLUDE_ALL_JavaUtilLinkedHashSet || defined(INCLUDE_JavaUtilLinkedHashSet))
#define JavaUtilLinkedHashSet_

#define RESTRICT_JavaUtilHashSet 1
#define INCLUDE_JavaUtilHashSet 1
#include "java/util/HashSet.h"

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "java/util/Set.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@protocol JavaUtilCollection;
@protocol JavaUtilSpliterator;

/*!
 @brief <p>Hash table and linked list implementation of the <tt>Set</tt> interface,
  with predictable iteration order.
 This implementation differs from 
 <tt>HashSet</tt> in that it maintains a doubly-linked list running through
  all of its entries.  This linked list defines the iteration ordering,
  which is the order in which elements were inserted into the set
  (<i>insertion-order</i>).  Note that insertion order is <i>not</i> affected
  if an element is <i>re-inserted</i> into the set.  (An element <tt>e</tt>
  is reinserted into a set <tt>s</tt> if <tt>s.add(e)</tt> is invoked when 
 <tt>s.contains(e)</tt> would return <tt>true</tt> immediately prior to
  the invocation.) 
 <p>This implementation spares its clients from the unspecified, generally
  chaotic ordering provided by <code>HashSet</code>, without incurring the
  increased cost associated with <code>TreeSet</code>.  It can be used to
  produce a copy of a set that has the same order as the original, regardless
  of the original set's implementation: 
 @code

      void foo(Set s) {
          Set copy = new LinkedHashSet(s);
          ...
      } 
  
@endcode
  This technique is particularly useful if a module takes a set on input,
  copies it, and later returns results whose order is determined by that of
  the copy.  (Clients generally appreciate having things returned in the same
  order they were presented.) 
 <p>This class provides all of the optional <tt>Set</tt> operations, and
  permits null elements.  Like <tt>HashSet</tt>, it provides constant-time
  performance for the basic operations (<tt>add</tt>, <tt>contains</tt> and 
 <tt>remove</tt>), assuming the hash function disperses elements
  properly among the buckets.  Performance is likely to be just slightly
  below that of <tt>HashSet</tt>, due to the added expense of maintaining the
  linked list, with one exception: Iteration over a <tt>LinkedHashSet</tt>
  requires time proportional to the <i>size</i> of the set, regardless of
  its capacity.  Iteration over a <tt>HashSet</tt> is likely to be more
  expensive, requiring time proportional to its <i>capacity</i>.
  
 <p>A linked hash set has two parameters that affect its performance: 
 <i>initial capacity</i> and <i>load factor</i>.  They are defined precisely
  as for <tt>HashSet</tt>.  Note, however, that the penalty for choosing an
  excessively high value for initial capacity is less severe for this class
  than for <tt>HashSet</tt>, as iteration times for this class are unaffected
  by capacity. 
 <p><strong>Note that this implementation is not synchronized.</strong>
  If multiple threads access a linked hash set concurrently, and at least
  one of the threads modifies the set, it <em>must</em> be synchronized
  externally.  This is typically accomplished by synchronizing on some
  object that naturally encapsulates the set.
  If no such object exists, the set should be "wrapped" using the 
 <code>Collections.synchronizedSet</code>
  method.  This is best done at creation time, to prevent accidental
  unsynchronized access to the set: @code

    Set s = Collections.synchronizedSet(new LinkedHashSet(...));
@endcode
  
 <p>The iterators returned by this class's <tt>iterator</tt> method are 
 <em>fail-fast</em>: if the set is modified at any time after the iterator
  is created, in any way except through the iterator's own <tt>remove</tt>
  method, the iterator will throw a <code>ConcurrentModificationException</code>.
  Thus, in the face of concurrent modification, the iterator fails quickly
  and cleanly, rather than risking arbitrary, non-deterministic behavior at
  an undetermined time in the future. 
 <p>Note that the fail-fast behavior of an iterator cannot be guaranteed
  as it is, generally speaking, impossible to make any hard guarantees in the
  presence of unsynchronized concurrent modification.  Fail-fast iterators
  throw <tt>ConcurrentModificationException</tt> on a best-effort basis.
  Therefore, it would be wrong to write a program that depended on this
  exception for its correctness:   <i>the fail-fast behavior of iterators
  should be used only to detect bugs.</i>
  
 <p>This class is a member of the 
 <a href="{@@docRoot}/../technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: Object#hashCode()
 - seealso: Collection
 - seealso: Set
 - seealso: HashSet
 - seealso: TreeSet
 - seealso: Hashtable
 @since 1.4
 */
@interface JavaUtilLinkedHashSet : JavaUtilHashSet < JavaUtilSet, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new, empty linked hash set with the default initial
  capacity (16) and load factor (0.75).
 */
- (instancetype)init;

/*!
 @brief Constructs a new linked hash set with the same elements as the
  specified collection.The linked hash set is created with an initial
  capacity sufficient to hold the elements in the specified collection
  and the default load factor (0.75).
 @param c the collection whose elements are to be placed into            this set
 @throw NullPointerExceptionif the specified collection is null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Constructs a new, empty linked hash set with the specified initial
  capacity and the default load factor (0.75).
 @param initialCapacity the initial capacity of the LinkedHashSet
 @throw IllegalArgumentExceptionif the initial capacity is less
               than zero
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Constructs a new, empty linked hash set with the specified initial
  capacity and load factor.
 @param initialCapacity the initial capacity of the linked hash set
 @param loadFactor the load factor of the linked hash set
 @throw IllegalArgumentExceptionif the initial capacity is less
                than zero, or if the load factor is nonpositive
 */
- (instancetype)initWithInt:(jint)initialCapacity
                  withFloat:(jfloat)loadFactor;

/*!
 @brief Creates a <em><a href="Spliterator.html#binding">late-binding</a></em>
  and <em>fail-fast</em> <code>Spliterator</code> over the elements in this set.
 <p>The <code>Spliterator</code> reports <code>Spliterator.SIZED</code>,
  <code>Spliterator.DISTINCT</code>, and <code>ORDERED</code>.  Implementations
  should document the reporting of additional characteristic values.
 @return a <code>Spliterator</code> over the elements in this set
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0
                  withFloat:(jfloat)arg1
                withBoolean:(jboolean)arg2 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilLinkedHashSet)

FOUNDATION_EXPORT void JavaUtilLinkedHashSet_initWithInt_withFloat_(JavaUtilLinkedHashSet *self, jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT JavaUtilLinkedHashSet *new_JavaUtilLinkedHashSet_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLinkedHashSet *create_JavaUtilLinkedHashSet_initWithInt_withFloat_(jint initialCapacity, jfloat loadFactor);

FOUNDATION_EXPORT void JavaUtilLinkedHashSet_initWithInt_(JavaUtilLinkedHashSet *self, jint initialCapacity);

FOUNDATION_EXPORT JavaUtilLinkedHashSet *new_JavaUtilLinkedHashSet_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLinkedHashSet *create_JavaUtilLinkedHashSet_initWithInt_(jint initialCapacity);

FOUNDATION_EXPORT void JavaUtilLinkedHashSet_init(JavaUtilLinkedHashSet *self);

FOUNDATION_EXPORT JavaUtilLinkedHashSet *new_JavaUtilLinkedHashSet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLinkedHashSet *create_JavaUtilLinkedHashSet_init(void);

FOUNDATION_EXPORT void JavaUtilLinkedHashSet_initWithJavaUtilCollection_(JavaUtilLinkedHashSet *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilLinkedHashSet *new_JavaUtilLinkedHashSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilLinkedHashSet *create_JavaUtilLinkedHashSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilLinkedHashSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilLinkedHashSet")
