//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Set.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSet")
#ifdef RESTRICT_JavaUtilSet
#define INCLUDE_ALL_JavaUtilSet 0
#else
#define INCLUDE_ALL_JavaUtilSet 1
#endif
#undef RESTRICT_JavaUtilSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSet_) && (INCLUDE_ALL_JavaUtilSet || defined(INCLUDE_JavaUtilSet))
#define JavaUtilSet_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "java/util/Collection.h"

@class IOSObjectArray;
@protocol JavaUtilIterator;

/*!
 @brief A <code>Set</code> is a data structure which does not allow duplicate elements.
 @since 1.2
 */
@protocol JavaUtilSet < JavaUtilCollection, JavaObject >

/*!
 @brief Adds the specified object to this set.
 The set is not modified if it
 already contains the object.
 @param object
 the object to add.
 @return <code>true</code> if this set is modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 when adding to this set is not supported.
 @throws ClassCastException
 when the class of the object is inappropriate for this set.
 @throws IllegalArgumentException
 when the object cannot be added to this set.
 */
- (jboolean)addWithId:(id)object;

/*!
 @brief Adds the objects in the specified collection which do not exist yet in
 this set.
 @param collection
 the collection of objects.
 @return <code>true</code> if this set is modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 when adding to this set is not supported.
 @throws ClassCastException
 when the class of an object is inappropriate for this set.
 @throws IllegalArgumentException
 when an object cannot be added to this set.
 */
- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all elements from this set, leaving it empty.
 @throws UnsupportedOperationException
 when removing from this set is not supported.
 - seealso: #isEmpty
 - seealso: #size
 */
- (void)clear;

/*!
 @brief Searches this set for the specified object.
 @param object
 the object to search for.
 @return <code>true</code> if object is an element of this set, <code>false</code>
 otherwise.
 */
- (jboolean)containsWithId:(id)object;

/*!
 @brief Searches this set for all objects in the specified collection.
 @param collection
 the collection of objects.
 @return <code>true</code> if all objects in the specified collection are
 elements of this set, <code>false</code> otherwise.
 */
- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Compares the specified object to this set, and returns true if they
 represent the <em>same</em> object using a class specific comparison.
 Equality for a set means that both sets have the same size and the same
 elements.
 @param object
 the object to compare with this object.
 @return boolean <code>true</code> if the object is the same as this object,
 and <code>false</code> if it is different from this object.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the hash code for this set.
 Two set which are equal must return
 the same value.
 @return the hash code of this set.
 - seealso: #equals
 */
- (NSUInteger)hash;

/*!
 @brief Returns true if this set has no elements.
 @return <code>true</code> if this set has no elements, <code>false</code>
 otherwise.
 - seealso: #size
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator on the elements of this set.
 The elements are
 unordered.
 @return an iterator on the elements of this set.
 - seealso: Iterator
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @brief Removes the specified object from this set.
 @param object
 the object to remove.
 @return <code>true</code> if this set was modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 when removing from this set is not supported.
 */
- (jboolean)removeWithId:(id)object;

/*!
 @brief Removes all objects in the specified collection from this set.
 @param collection
 the collection of objects to remove.
 @return <code>true</code> if this set was modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 when removing from this set is not supported.
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Removes all objects from this set that are not contained in the specified
 collection.
 @param collection
 the collection of objects to retain.
 @return <code>true</code> if this set was modified, <code>false</code> otherwise.
 @throws UnsupportedOperationException
 when removing from this set is not supported.
 */
- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

/*!
 @brief Returns the number of elements in this set.
 @return the number of elements in this set.
 */
- (jint)size;

/*!
 @brief Returns an array containing all elements contained in this set.
 @return an array of the elements from this set.
 */
- (IOSObjectArray *)toArray;

/*!
 @brief Returns an array containing all elements contained in this set.
 If the
 specified array is large enough to hold the elements, the specified array
 is used, otherwise an array of the same type is created. If the specified
 array is used and is larger than this set, the array element following
 the collection elements is set to null.
 @param array
 the array.
 @return an array of the elements from this set.
 @throws ArrayStoreException
 when the type of an element in this set cannot be stored in
 the type of the specified array.
 - seealso: Collection#toArray(Object[])
 */
- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSet)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSet")
