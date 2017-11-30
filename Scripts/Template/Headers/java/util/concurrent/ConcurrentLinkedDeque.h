//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/ConcurrentLinkedDeque.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque")
#ifdef RESTRICT_JavaUtilConcurrentConcurrentLinkedDeque
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque 1
#endif
#undef RESTRICT_JavaUtilConcurrentConcurrentLinkedDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentConcurrentLinkedDeque_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedDeque))
#define JavaUtilConcurrentConcurrentLinkedDeque_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../../java/util/AbstractCollection.h"

#define RESTRICT_JavaUtilDeque 1
#define INCLUDE_JavaUtilDeque 1
#include "../../../java/util/Deque.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilConcurrentConcurrentLinkedDeque_Node;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief An unbounded concurrent deque based on linked nodes.
 Concurrent insertion, removal, and access operations execute safely
  across multiple threads.
  A <code>ConcurrentLinkedDeque</code> is an appropriate choice when
  many threads will share access to a common collection.
  Like most other concurrent collection implementations, this class
  does not permit the use of <code>null</code> elements. 
 <p>Iterators and spliterators are 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
  
 <p>Beware that, unlike in most collections, the <code>size</code> method
  is <em>NOT</em> a constant-time operation. Because of the
  asynchronous nature of these deques, determining the current number
  of elements requires a traversal of the elements, and so may report
  inaccurate results if this collection is modified during traversal.
  Additionally, the bulk operations <code>addAll</code>,
  <code>removeAll</code>, <code>retainAll</code>, <code>containsAll</code>,
  <code>equals</code>, and <code>toArray</code> are <em>not</em> guaranteed
  to be performed atomically. For example, an iterator operating
  concurrently with an <code>addAll</code> operation might view only some
  of the added elements. 
 <p>This class and its iterator implement all of the <em>optional</em>
  methods of the <code>Deque</code> and <code>Iterator</code> interfaces. 
 <p>Memory consistency effects: As with other concurrent collections,
  actions in a thread prior to placing an object into a 
 <code>ConcurrentLinkedDeque</code>
  <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
  actions subsequent to the access or removal of that element from the 
 <code>ConcurrentLinkedDeque</code> in another thread.
 @since 1.7
 @author Doug Lea
 @author Martin Buchholz
 */
@interface JavaUtilConcurrentConcurrentLinkedDeque : JavaUtilAbstractCollection < JavaUtilDeque, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs an empty deque.
 */
- (instancetype)init;

/*!
 @brief Constructs a deque initially containing the elements of
  the given collection, added in traversal order of the
  collection's iterator.
 @param c the collection of elements to initially contain
 @throw NullPointerExceptionif the specified collection or any
          of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element at the tail of this deque.
 As the deque is unbounded, this method will never throw 
 <code>IllegalStateException</code> or return <code>false</code>.
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Appends all of the elements in the specified collection to the end of
  this deque, in the order that they are returned by the specified
  collection's iterator.Attempts to <code>addAll</code> of a deque to
  itself result in <code>IllegalArgumentException</code>.
 @param c the elements to be inserted into this deque
 @return <code>true</code> if this deque changed as a result of the call
 @throw NullPointerExceptionif the specified collection or any
          of its elements are null
 @throw IllegalArgumentExceptionif the collection is this deque
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Inserts the specified element at the front of this deque.
 As the deque is unbounded, this method will never throw 
 <code>IllegalStateException</code>.
 @throw NullPointerExceptionif the specified element is null
 */
- (void)addFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque.
 As the deque is unbounded, this method will never throw 
 <code>IllegalStateException</code>.
  
 <p>This method is equivalent to <code>add</code>.
 @throw NullPointerExceptionif the specified element is null
 */
- (void)addLastWithId:(id)e;

/*!
 @brief Removes all of the elements from this deque.
 */
- (void)clear;

/*!
 @brief Returns <code>true</code> if this deque contains the specified element.
 More formally, returns <code>true</code> if and only if this deque contains
  at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o element whose presence in this deque is to be tested
 @return <code>true</code> if this deque contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this deque in reverse
  sequential order.The elements will be returned in order from
  last (tail) to first (head).
 <p>The returned iterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
 @return an iterator over the elements in this deque in reverse order
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 @throw NoSuchElementException
 */
- (id)element;

/*!
 @throw NoSuchElementException
 */
- (id)getFirst;

/*!
 @throw NoSuchElementException
 */
- (id)getLast;

/*!
 @brief Returns <code>true</code> if this collection contains no elements.
 @return <code>true</code> if this collection contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements in this deque in proper sequence.
 The elements will be returned in order from first (head) to last (tail). 
 <p>The returned iterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
 @return an iterator over the elements in this deque in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Inserts the specified element at the tail of this deque.
 As the deque is unbounded, this method will never return <code>false</code>.
 @return <code>true</code> (as specified by <code>Queue.offer</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element at the front of this deque.
 As the deque is unbounded, this method will never return <code>false</code>.
 @return <code>true</code> (as specified by <code>Deque.offerFirst</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerFirstWithId:(id)e;

/*!
 @brief Inserts the specified element at the end of this deque.
 As the deque is unbounded, this method will never return <code>false</code>.
  
 <p>This method is equivalent to <code>add</code>.
 @return <code>true</code> (as specified by <code>Deque.offerLast</code>)
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)offerLastWithId:(id)e;

- (id)peek;

- (id)peekFirst;

- (id)peekLast;

- (id)poll;

- (id)pollFirst;

- (id)pollLast;

/*!
 @throw NoSuchElementException
 */
- (id)pop;

/*!
 @throw NullPointerException
 */
- (void)pushWithId:(id)e;

/*!
 @throw NoSuchElementException
 */
- (id)remove;

/*!
 @brief Removes the first occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call). 
 <p>This method is equivalent to <code>removeFirstOccurrence(Object)</code>.
 @param o element to be removed from this deque, if present
 @return <code>true</code> if the deque contained the specified element
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)removeWithId:(id)o;

/*!
 @throw NoSuchElementException
 */
- (id)removeFirst;

/*!
 @brief Removes the first occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the first element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if the deque contained the specified element
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)removeFirstOccurrenceWithId:(id)o;

/*!
 @throw NoSuchElementException
 */
- (id)removeLast;

/*!
 @brief Removes the last occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
  More formally, removes the last element <code>e</code> such that 
 <code>o.equals(e)</code> (if such an element exists).
  Returns <code>true</code> if this deque contained the specified element
  (or equivalently, if this deque changed as a result of the call).
 @param o element to be removed from this deque, if present
 @return <code>true</code> if the deque contained the specified element
 @throw NullPointerExceptionif the specified element is null
 */
- (jboolean)removeLastOccurrenceWithId:(id)o;

/*!
 @brief Returns the number of elements in this deque.If this deque
  contains more than <code>Integer.MAX_VALUE</code> elements, it
  returns <code>Integer.MAX_VALUE</code>.
 <p>Beware that, unlike in most collections, this method is 
 <em>NOT</em> a constant-time operation. Because of the
  asynchronous nature of these deques, determining the current
  number of elements requires traversing them all to count them.
  Additionally, it is possible for the size to change during
  execution of this method, in which case the returned result
  will be inaccurate. Thus, this method is typically not very
  useful in concurrent applications.
 @return the number of elements in this deque
 */
- (jint)size;

/*!
 @brief Returns a <code>Spliterator</code> over the elements in this deque.
 <p>The returned spliterator is 
 <a href="package-summary.html#Weakly"><i>weakly consistent</i></a>.
  
 <p>The <code>Spliterator</code> reports <code>Spliterator.CONCURRENT</code>,
  <code>Spliterator.ORDERED</code>, and <code>Spliterator.NONNULL</code>.
 @return a <code>Spliterator</code> over the elements in this deque
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns an array containing all of the elements in this deque, in
  proper sequence (from first to last element).
 <p>The returned array will be "safe" in that no references to it are
  maintained by this deque.  (In other words, this method must allocate
  a new array).  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all of the elements in this deque
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this deque,
  in proper sequence (from first to last element); the runtime
  type of the returned array is that of the specified array.If
  the deque fits in the specified array, it is returned therein.
 Otherwise, a new array is allocated with the runtime type of
  the specified array and the size of this deque. 
 <p>If this deque fits in the specified array with room to spare
  (i.e., the array has more elements than this deque), the element in
  the array immediately following the end of the deque is set to 
 <code>null</code>.
  
 <p>Like the <code>toArray()</code> method, this method acts as
  bridge between array-based and collection-based APIs.  Further,
  this method allows precise control over the runtime type of the
  output array, and may, under certain circumstances, be used to
  save allocation costs. 
 <p>Suppose <code>x</code> is a deque known to contain only strings.
  The following code can be used to dump the deque into a newly
  allocated array of <code>String</code>:
  
 @code
 String[] y = x.toArray(new String[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of the deque are to           be stored, if it is big enough; otherwise, a new array of the
            same runtime type is allocated for this purpose
 @return an array containing all of the elements in this deque
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in
          this deque
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Protected

- (void)java_finalize;

#pragma mark Package-Private

/*!
 @brief Returns the first node, the unique node p for which:
      p.prev == null && p.next !
 = p
  The returned node may or may not be logically deleted.
 Guarantees that head is set to the returned node.
 */
- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)first;

/*!
 @brief Returns the last node, the unique node p for which:
      p.next == null && p.prev !
 = p
  The returned node may or may not be logically deleted.
 Guarantees that tail is set to the returned node.
 */
- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)last;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)nextTerminator;

/*!
 @brief Returns the predecessor of p, or the last node if p.prev has been
  linked to self, which will only be true if traversing with a
  stale pointer that is now off the list.
 */
- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)predWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)prevTerminator;

- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)sentinel;

/*!
 @brief Returns the successor of p, or the first node if p.next has been
  linked to self, which will only be true if traversing with a
  stale pointer that is now off the list.
 */
- (JavaUtilConcurrentConcurrentLinkedDeque_Node *)succWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)p;

/*!
 @brief Unlinks non-null node x.
 */
- (void)unlinkWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)x;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque)

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedDeque_init(JavaUtilConcurrentConcurrentLinkedDeque *self);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque *new_JavaUtilConcurrentConcurrentLinkedDeque_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque *create_JavaUtilConcurrentConcurrentLinkedDeque_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedDeque_initWithJavaUtilCollection_(JavaUtilConcurrentConcurrentLinkedDeque *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque *new_JavaUtilConcurrentConcurrentLinkedDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque *create_JavaUtilConcurrentConcurrentLinkedDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque)

#endif

#if !defined (JavaUtilConcurrentConcurrentLinkedDeque_Node_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedDeque_Node))
#define JavaUtilConcurrentConcurrentLinkedDeque_Node_

@interface JavaUtilConcurrentConcurrentLinkedDeque_Node : NSObject {
 @public
  volatile_id prev_;
  volatile_id item_;
  volatile_id next_;
}

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Constructs a new node.Uses relaxed write because item can
  only be seen after publication via casNext or casPrev.
 */
- (instancetype)initWithId:(id)item;

- (jboolean)casItemWithId:(id)cmp
                   withId:(id)val;

- (jboolean)casNextWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)cmp
                   withJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (jboolean)casPrevWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)cmp
                   withJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (void)lazySetNextWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

- (void)lazySetPrevWithJavaUtilConcurrentConcurrentLinkedDeque_Node:(JavaUtilConcurrentConcurrentLinkedDeque_Node *)val;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_Node)

J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, prev_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, item_, id)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_Node, next_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedDeque_Node_init(JavaUtilConcurrentConcurrentLinkedDeque_Node *self);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *new_JavaUtilConcurrentConcurrentLinkedDeque_Node_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *create_JavaUtilConcurrentConcurrentLinkedDeque_Node_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedDeque_Node_initWithId_(JavaUtilConcurrentConcurrentLinkedDeque_Node *self, id item);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *new_JavaUtilConcurrentConcurrentLinkedDeque_Node_initWithId_(id item) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_Node *create_JavaUtilConcurrentConcurrentLinkedDeque_Node_initWithId_(id item);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_Node)

#endif

#if !defined (JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque || defined(INCLUDE_JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator))
#define JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_

#define RESTRICT_JavaUtilSpliterator 1
#define INCLUDE_JavaUtilSpliterator 1
#include "../../../java/util/Spliterator.h"

@class JavaUtilConcurrentConcurrentLinkedDeque;
@class JavaUtilConcurrentConcurrentLinkedDeque_Node;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief A customized variant of Spliterators.IteratorSpliterator
 */
@interface JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator : NSObject < JavaUtilSpliterator > {
 @public
  JavaUtilConcurrentConcurrentLinkedDeque *queue_;
  JavaUtilConcurrentConcurrentLinkedDeque_Node *current_;
  jint batch_;
  jboolean exhausted_;
}

+ (jint)MAX_BATCH;

#pragma mark Public

- (jint)characteristics;

- (jlong)estimateSize;

- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

- (id<JavaUtilSpliterator>)trySplit;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentConcurrentLinkedDeque:(JavaUtilConcurrentConcurrentLinkedDeque *)queue;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator, queue_, JavaUtilConcurrentConcurrentLinkedDeque *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator, current_, JavaUtilConcurrentConcurrentLinkedDeque_Node *)

inline jint JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_get_MAX_BATCH(void);
#define JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_MAX_BATCH 33554432
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator, MAX_BATCH, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_initWithJavaUtilConcurrentConcurrentLinkedDeque_(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator *self, JavaUtilConcurrentConcurrentLinkedDeque *queue);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator *new_JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_initWithJavaUtilConcurrentConcurrentLinkedDeque_(JavaUtilConcurrentConcurrentLinkedDeque *queue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator *create_JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator_initWithJavaUtilConcurrentConcurrentLinkedDeque_(JavaUtilConcurrentConcurrentLinkedDeque *queue);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentLinkedDeque")
