//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/LinkedBlockingDeque.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque")
#ifdef RESTRICT_JavaUtilConcurrentLinkedBlockingDeque
#define INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque 1
#endif
#undef RESTRICT_JavaUtilConcurrentLinkedBlockingDeque

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentLinkedBlockingDeque_) && (INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque || defined(INCLUDE_JavaUtilConcurrentLinkedBlockingDeque))
#define JavaUtilConcurrentLinkedBlockingDeque_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "../../../java/util/AbstractQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingDeque 1
#define INCLUDE_JavaUtilConcurrentBlockingDeque 1
#include "../../../java/util/concurrent/BlockingDeque.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilConcurrentLinkedBlockingDeque_Node;
@class JavaUtilConcurrentLocksReentrantLock;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief An optionally-bounded blocking deque based on
 linked nodes.
 <p>The optional capacity bound constructor argument serves as a
 way to prevent excessive expansion. The capacity, if unspecified,
 is equal to <code>Integer.MAX_VALUE</code>.  Linked nodes are
 dynamically created upon each insertion unless this would bring the
 deque above capacity.
 <p>Most operations run in constant time (ignoring time spent
 blocking).  Exceptions include <code>remove</code>,
 <code>removeFirstOccurrence</code>, <code>removeLastOccurrence</code>
 , <code>contains</code>
 , <code>iterator.remove()</code>, and the bulk
 operations, all of which run in linear time.
 <p>This class and its iterator implement all of the
 <em>optional</em> methods of the <code>Collection</code> and <code>Iterator</code>
  interfaces.
 @since 1.6
 @author Doug Lea
 */
@interface JavaUtilConcurrentLinkedBlockingDeque : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingDeque, JavaIoSerializable > {
 @public
  /*!
   @brief Pointer to first node.
   Invariant: (first == null && last == null) ||
 (first.prev == null && first.item != null)
   */
  JavaUtilConcurrentLinkedBlockingDeque_Node *first_;
  /*!
   @brief Pointer to last node.
   Invariant: (first == null && last == null) ||
 (last.next == null && last.item != null)
   */
  JavaUtilConcurrentLinkedBlockingDeque_Node *last_;
  /*!
   @brief Main lock guarding all access
   */
  JavaUtilConcurrentLocksReentrantLock *lock_;
}

#pragma mark Public

/*!
 @brief Creates a <code>LinkedBlockingDeque</code> with a capacity of
 <code>Integer.MAX_VALUE</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a <code>LinkedBlockingDeque</code> with a capacity of
 <code>Integer.MAX_VALUE</code>, initially containing the elements of
 the given collection, added in traversal order of the
 collection's iterator.
 @param c the collection of elements to initially contain
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Creates a <code>LinkedBlockingDeque</code> with the given (fixed) capacity.
 @param capacity the capacity of this deque
 @throws IllegalArgumentException if <code>capacity</code> is less than 1
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Inserts the specified element at the end of this deque unless it would
 violate capacity restrictions.
 When using a capacity-restricted deque,
 it is generally preferable to use method <code>offer</code>.
 <p>This method is equivalent to <code>addLast</code>.
 @throws IllegalStateException if the element cannot be added at this
 time due to capacity restrictions
 @throws NullPointerException if the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @throws IllegalStateException
 @throws NullPointerException
 */
- (void)addFirstWithId:(id)e;

/*!
 @throws IllegalStateException
 @throws NullPointerException
 */
- (void)addLastWithId:(id)e;

/*!
 @brief Atomically removes all of the elements from this deque.
 The deque will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns <code>true</code> if this deque contains the specified element.
 More formally, returns <code>true</code> if and only if this deque contains
 at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this deque
 @return <code>true</code> if this deque contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this deque in reverse
 sequential order.
 The elements will be returned in order from
 last (tail) to first (head).
 <p>The returned iterator is a "weakly consistent" iterator that
 will never throw <code>ConcurrentModificationException</code>
 , and guarantees to traverse
 elements as they existed upon construction of the iterator, and
 may (but is not guaranteed to) reflect any modifications
 subsequent to construction.
 @return an iterator over the elements in this deque in reverse order
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @throws UnsupportedOperationException
 @throws ClassCastException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

/*!
 @brief Retrieves, but does not remove, the head of the queue represented by
 this deque.
 This method differs from <code>peek</code> only in that
 it throws an exception if this deque is empty.
 <p>This method is equivalent to <code>getFirst</code>.
 @return the head of the queue represented by this deque
 @throws NoSuchElementException if this deque is empty
 */
- (id)element;

/*!
 @throws NoSuchElementException
 */
- (id)getFirst;

/*!
 @throws NoSuchElementException
 */
- (id)getLast;

/*!
 @brief Returns an iterator over the elements in this deque in proper sequence.
 The elements will be returned in order from first (head) to last (tail).
 <p>The returned iterator is a "weakly consistent" iterator that
 will never throw <code>ConcurrentModificationException</code>
 , and guarantees to traverse
 elements as they existed upon construction of the iterator, and
 may (but is not guaranteed to) reflect any modifications
 subsequent to construction.
 @return an iterator over the elements in this deque in proper sequence
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @throws NullPointerException if the specified element is null
 */
- (jboolean)offerWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws NullPointerException
 */
- (jboolean)offerFirstWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (jboolean)offerFirstWithId:(id)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws NullPointerException
 */
- (jboolean)offerLastWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (jboolean)offerLastWithId:(id)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)peek;

- (id)peekFirst;

- (id)peekLast;

- (id)poll;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollFirst;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollLast;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws NoSuchElementException
 */
- (id)pop;

/*!
 @throws IllegalStateException
 @throws NullPointerException
 */
- (void)pushWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (void)putWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (void)putFirstWithId:(id)e;

/*!
 @throws NullPointerException
 @throws InterruptedException
 */
- (void)putLastWithId:(id)e;

/*!
 @brief Returns the number of additional elements that this deque can ideally
 (in the absence of memory or resource constraints) accept without
 blocking.
 This is always equal to the initial capacity of this deque
 less the current <code>size</code> of this deque.
 <p>Note that you <em>cannot</em> always tell if an attempt to insert
 an element will succeed by inspecting <code>remainingCapacity</code>
 because it may be the case that another thread is about to
 insert or remove an element.
 */
- (jint)remainingCapacity;

/*!
 @brief Retrieves and removes the head of the queue represented by this deque.
 This method differs from <code>poll</code> only in that it throws an
 exception if this deque is empty.
 <p>This method is equivalent to <code>removeFirst</code>.
 @return the head of the queue represented by this deque
 @throws NoSuchElementException if this deque is empty
 */
- (id)remove;

/*!
 @brief Removes the first occurrence of the specified element from this deque.
 If the deque does not contain the element, it is unchanged.
 More formally, removes the first element <code>e</code> such that
 <code>o.equals(e)</code> (if such an element exists).
 Returns <code>true</code> if this deque contained the specified element
 (or equivalently, if this deque changed as a result of the call).
 <p>This method is equivalent to
 <code>removeFirstOccurrence</code>.
 @param o element to be removed from this deque, if present
 @return <code>true</code> if this deque changed as a result of the call
 */
- (jboolean)removeWithId:(id)o;

/*!
 @throws NoSuchElementException
 */
- (id)removeFirst;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

/*!
 @throws NoSuchElementException
 */
- (id)removeLast;

- (jboolean)removeLastOccurrenceWithId:(id)o;

/*!
 @brief Returns the number of elements in this deque.
 @return the number of elements in this deque
 */
- (jint)size;

- (id)take;

- (id)takeFirst;

- (id)takeLast;

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
 @brief Returns an array containing all of the elements in this deque, in
 proper sequence; the runtime type of the returned array is that of
 the specified array.
 If the deque fits in the specified array, it
 is returned therein.  Otherwise, a new array is allocated with the
 runtime type of the specified array and the size of this deque.
 <p>If this deque fits in the specified array with room to spare
 (i.e., the array has more elements than this deque), the element in
 the array immediately following the end of the deque is set to
 <code>null</code>.
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
 array-based and collection-based APIs.  Further, this method allows
 precise control over the runtime type of the output array, and may,
 under certain circumstances, be used to save allocation costs.
 <p>Suppose <code>x</code> is a deque known to contain only strings.
 The following code can be used to dump the deque into a newly
 allocated array of <code>String</code>:
 @code
  String[] y = x.toArray(new String[0]);
@endcode
 Note that <code>toArray(new Object[0])</code> is identical in function to
 <code>toArray()</code>.
 @param a the array into which the elements of the deque are to
 be stored, if it is big enough; otherwise, a new array of the
 same runtime type is allocated for this purpose
 @return an array containing all of the elements in this deque
 @throws ArrayStoreException if the runtime type of the specified array
 is not a supertype of the runtime type of every element in
 this deque
 @throws NullPointerException if the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Unlinks x.
 */
- (void)unlinkWithJavaUtilConcurrentLinkedBlockingDeque_Node:(JavaUtilConcurrentLinkedBlockingDeque_Node *)x;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLinkedBlockingDeque)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque, first_, JavaUtilConcurrentLinkedBlockingDeque_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque, last_, JavaUtilConcurrentLinkedBlockingDeque_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque, lock_, JavaUtilConcurrentLocksReentrantLock *)

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingDeque_init(JavaUtilConcurrentLinkedBlockingDeque *self);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *new_JavaUtilConcurrentLinkedBlockingDeque_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *create_JavaUtilConcurrentLinkedBlockingDeque_init();

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingDeque_initWithInt_(JavaUtilConcurrentLinkedBlockingDeque *self, jint capacity);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *new_JavaUtilConcurrentLinkedBlockingDeque_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *create_JavaUtilConcurrentLinkedBlockingDeque_initWithInt_(jint capacity);

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingDeque_initWithJavaUtilCollection_(JavaUtilConcurrentLinkedBlockingDeque *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *new_JavaUtilConcurrentLinkedBlockingDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque *create_JavaUtilConcurrentLinkedBlockingDeque_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLinkedBlockingDeque)

#endif

#if !defined (JavaUtilConcurrentLinkedBlockingDeque_Node_) && (INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque || defined(INCLUDE_JavaUtilConcurrentLinkedBlockingDeque_Node))
#define JavaUtilConcurrentLinkedBlockingDeque_Node_

/*!
 @brief Doubly-linked list node class
 */
@interface JavaUtilConcurrentLinkedBlockingDeque_Node : NSObject {
 @public
  /*!
   @brief The item, or null if this node has been removed.
   */
  id item_;
  /*!
   @brief One of:
 - the real predecessor Node
 - this Node, meaning the predecessor is tail
 - null, meaning there is no predecessor
   */
  JavaUtilConcurrentLinkedBlockingDeque_Node *prev_;
  /*!
   @brief One of:
 - the real successor Node
 - this Node, meaning the successor is head
 - null, meaning there is no successor
   */
  JavaUtilConcurrentLinkedBlockingDeque_Node *next_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)x;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLinkedBlockingDeque_Node)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque_Node, item_, id)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque_Node, prev_, JavaUtilConcurrentLinkedBlockingDeque_Node *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentLinkedBlockingDeque_Node, next_, JavaUtilConcurrentLinkedBlockingDeque_Node *)

FOUNDATION_EXPORT void JavaUtilConcurrentLinkedBlockingDeque_Node_initWithId_(JavaUtilConcurrentLinkedBlockingDeque_Node *self, id x);

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque_Node *new_JavaUtilConcurrentLinkedBlockingDeque_Node_initWithId_(id x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentLinkedBlockingDeque_Node *create_JavaUtilConcurrentLinkedBlockingDeque_Node_initWithId_(id x);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLinkedBlockingDeque_Node)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLinkedBlockingDeque")
