//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/CopyOnWriteArraySet.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArraySet")
#ifdef RESTRICT_JavaUtilConcurrentCopyOnWriteArraySet
#define INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArraySet 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArraySet 1
#endif
#undef RESTRICT_JavaUtilConcurrentCopyOnWriteArraySet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentCopyOnWriteArraySet_) && (INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArraySet || defined(INCLUDE_JavaUtilConcurrentCopyOnWriteArraySet))
#define JavaUtilConcurrentCopyOnWriteArraySet_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "../../../java/util/AbstractSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilSpliterator;

/*!
 @brief A <code>java.util.Set</code> that uses an internal <code>CopyOnWriteArrayList</code>
  for all of its operations.Thus, it shares the same basic properties: 
 <ul>
   <li>It is best suited for applications in which set sizes generally
        stay small, read-only operations
        vastly outnumber mutative operations, and you need
        to prevent interference among threads during traversal.
 <li>It is thread-safe.
   <li>Mutative operations (<code>add</code>, <code>set</code>, <code>remove</code>, etc.)
       are expensive since they usually entail copying the entire underlying
       array.  
 <li>Iterators do not support the mutative <code>remove</code> operation.
   <li>Traversal via iterators is fast and cannot encounter
       interference from other threads. Iterators rely on
       unchanging snapshots of the array at the time the iterators were
       constructed. 
 </ul>
  
 <p><b>Sample Usage.</b> The following code sketch uses a
  copy-on-write set to maintain a set of Handler objects that
  perform some action upon state updates. 
 @code
  class Handler { void handle(); ... }
  class X {
    private final CopyOnWriteArraySet<Handler> handlers
      = new CopyOnWriteArraySet<>();
    public void addHandler(Handler h) { handlers.add(h); }
    private long internalState;
    private synchronized void changeState() { internalState = ...; }
    public void update() {
      changeState();
      for (Handler handler : handlers)
        handler.handle();
    }  }
 
@endcode
 - seealso: CopyOnWriteArrayList
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentCopyOnWriteArraySet : JavaUtilAbstractSet < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates an empty set.
 */
- (instancetype)init;

/*!
 @brief Creates a set containing all of the elements of the specified
  collection.
 @param c the collection of elements to initially contain
 @throw NullPointerExceptionif the specified collection is null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Adds the specified element to this set if it is not already present.
 More formally, adds the specified element <code>e</code> to this set if
  the set contains no element <code>e2</code> such that 
 <code>Objects.equals(e, e2)</code>.
  If this set already contains the element, the call leaves the set
  unchanged and returns <code>false</code>.
 @param e element to be added to this set
 @return <code>true</code> if this set did not already contain the specified
          element
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Adds all of the elements in the specified collection to this set if
  they're not already present.If the specified collection is also a
  set, the <code>addAll</code> operation effectively modifies this set so
  that its value is the <i>union</i> of the two sets.
 The behavior of
  this operation is undefined if the specified collection is modified
  while the operation is in progress.
 @param c collection containing elements to be added to this set
 @return <code>true</code> if this set changed as a result of the call
 @throw NullPointerExceptionif the specified collection is null
 - seealso: #add(Object)
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes all of the elements from this set.
 The set will be empty after this call returns.
 */
- (void)clear;

/*!
 @brief Returns <code>true</code> if this set contains the specified element.
 More formally, returns <code>true</code> if and only if this set
  contains an element <code>e</code> such that <code>Objects.equals(o, e)</code>.
 @param o element whose presence in this set is to be tested
 @return <code>true</code> if this set contains the specified element
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns <code>true</code> if this set contains all of the elements of the
  specified collection.If the specified collection is also a set, this
  method returns <code>true</code> if it is a <i>subset</i> of this set.
 @param c collection to be checked for containment in this set
 @return <code>true</code> if this set contains all of the elements of the
          specified collection
 @throw NullPointerExceptionif the specified collection is null
 - seealso: #contains(Object)
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Compares the specified object with this set for equality.
 Returns <code>true</code> if the specified object is the same object
  as this object, or if it is also a <code>Set</code> and the elements
  returned by an iterator over the
  specified set are the same as the elements returned by an
  iterator over this set.  More formally, the two iterators are
  considered to return the same elements if they return the same
  number of elements and for every element <code>e1</code> returned by
  the iterator over the specified set, there is an element 
 <code>e2</code> returned by the iterator over this set such that 
 <code>Objects.equals(e1, e2)</code>.
 @param o object to be compared for equality with this set
 @return <code>true</code> if the specified object is equal to this set
 */
- (jboolean)isEqual:(id)o;

- (void)forEachWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 @brief Returns <code>true</code> if this set contains no elements.
 @return <code>true</code> if this set contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements contained in this set
  in the order in which these elements were added.
 <p>The returned iterator provides a snapshot of the state of the set
  when the iterator was constructed. No synchronization is needed while
  traversing the iterator. The iterator does <em>NOT</em> support the 
 <code>remove</code> method.
 @return an iterator over the elements in this set
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Removes the specified element from this set if it is present.
 More formally, removes an element <code>e</code> such that 
 <code>Objects.equals(o, e)</code>, if this set contains such an element.
  Returns <code>true</code> if this set contained the element (or
  equivalently, if this set changed as a result of the call).
  (This set will not contain the element once the call returns.)
 @param o object to be removed from this set, if present
 @return <code>true</code> if this set contained the specified element
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Removes from this set all of its elements that are contained in the
  specified collection.If the specified collection is also a set,
  this operation effectively modifies this set so that its value is the 
 <i>asymmetric set difference</i> of the two sets.
 @param c collection containing elements to be removed from this set
 @return <code>true</code> if this set changed as a result of the call
 @throw ClassCastExceptionif the class of an element of this set
          is incompatible with the specified collection
  (<a href="../Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif this set contains a null element and the
          specified collection does not permit null elements
  (<a href="../Collection.html#optional-restrictions">optional</a>),
          or if the specified collection is null
 - seealso: #remove(Object)
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)removeIfWithJavaUtilFunctionPredicate:(id<JavaUtilFunctionPredicate>)filter;

/*!
 @brief Retains only the elements in this set that are contained in the
  specified collection.In other words, removes from this set all of
  its elements that are not contained in the specified collection.
 If
  the specified collection is also a set, this operation effectively
  modifies this set so that its value is the <i>intersection</i> of the
  two sets.
 @param c collection containing elements to be retained in this set
 @return <code>true</code> if this set changed as a result of the call
 @throw ClassCastExceptionif the class of an element of this set
          is incompatible with the specified collection
  (<a href="../Collection.html#optional-restrictions">optional</a>)
 @throw NullPointerExceptionif this set contains a null element and the
          specified collection does not permit null elements
  (<a href="../Collection.html#optional-restrictions">optional</a>),
          or if the specified collection is null
 - seealso: #remove(Object)
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Returns the number of elements in this set.
 @return the number of elements in this set
 */
- (jint)size;

/*!
 @brief Returns a <code>Spliterator</code> over the elements in this set in the order
  in which these elements were added.
 <p>The <code>Spliterator</code> reports <code>Spliterator.IMMUTABLE</code>,
  <code>Spliterator.DISTINCT</code>, <code>Spliterator.SIZED</code>, and 
 <code>Spliterator.SUBSIZED</code>.
  
 <p>The spliterator provides a snapshot of the state of the set
  when the spliterator was constructed. No synchronization is needed while
  operating on the spliterator.
 @return a <code>Spliterator</code> over the elements in this set
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

/*!
 @brief Returns an array containing all of the elements in this set.
 If this set makes any guarantees as to what order its elements
  are returned by its iterator, this method must return the
  elements in the same order. 
 <p>The returned array will be "safe" in that no references to it
  are maintained by this set.  (In other words, this method must
  allocate a new array even if this set is backed by an array).
  The caller is thus free to modify the returned array. 
 <p>This method acts as bridge between array-based and collection-based
  APIs.
 @return an array containing all the elements in this set
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all of the elements in this set; the
  runtime type of the returned array is that of the specified array.
 If the set fits in the specified array, it is returned therein.
  Otherwise, a new array is allocated with the runtime type of the
  specified array and the size of this set. 
 <p>If this set fits in the specified array with room to spare
  (i.e., the array has more elements than this set), the element in
  the array immediately following the end of the set is set to 
 <code>null</code>.  (This is useful in determining the length of this
  set <i>only</i> if the caller knows that this set does not contain
  any null elements.) 
 <p>If this set makes any guarantees as to what order its elements
  are returned by its iterator, this method must return the elements
  in the same order. 
 <p>Like the <code>toArray()</code> method, this method acts as bridge between
  array-based and collection-based APIs.  Further, this method allows
  precise control over the runtime type of the output array, and may,
  under certain circumstances, be used to save allocation costs. 
 <p>Suppose <code>x</code> is a set known to contain only strings.
  The following code can be used to dump the set into a newly allocated
  array of <code>String</code>:
  
 @code
 String[] y = x.toArray(new String[0]);
@endcode
  Note that <code>toArray(new Object[0])</code> is identical in function to 
 <code>toArray()</code>.
 @param a the array into which the elements of this set are to be         stored, if it is big enough; otherwise, a new array of the same
          runtime type is allocated for this purpose.
 @return an array containing all the elements in this set
 @throw ArrayStoreExceptionif the runtime type of the specified array
          is not a supertype of the runtime type of every element in this
          set
 @throw NullPointerExceptionif the specified array is null
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentCopyOnWriteArraySet)

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArraySet_init(JavaUtilConcurrentCopyOnWriteArraySet *self);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *new_JavaUtilConcurrentCopyOnWriteArraySet_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *create_JavaUtilConcurrentCopyOnWriteArraySet_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentCopyOnWriteArraySet_initWithJavaUtilCollection_(JavaUtilConcurrentCopyOnWriteArraySet *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *new_JavaUtilConcurrentCopyOnWriteArraySet_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentCopyOnWriteArraySet *create_JavaUtilConcurrentCopyOnWriteArraySet_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentCopyOnWriteArraySet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentCopyOnWriteArraySet")
