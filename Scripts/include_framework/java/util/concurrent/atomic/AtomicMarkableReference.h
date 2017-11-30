//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicMarkableReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicMarkableReference")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicMarkableReference
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicMarkableReference 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicMarkableReference 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicMarkableReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentAtomicAtomicMarkableReference_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicMarkableReference || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicMarkableReference))
#define JavaUtilConcurrentAtomicAtomicMarkableReference_

@class IOSBooleanArray;

/*!
 @brief An <code>AtomicMarkableReference</code> maintains an object reference
  along with a mark bit, that can be updated atomically.
 <p>Implementation note: This implementation maintains markable
  references by creating internal objects representing "boxed"
  [reference, boolean] pairs.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicMarkableReference : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>AtomicMarkableReference</code> with the given
  initial values.
 @param initialRef the initial reference
 @param initialMark the initial mark
 */
- (instancetype)initWithId:(id)initialRef
               withBoolean:(jboolean)initialMark;

/*!
 @brief Atomically sets the value of the mark to the given update value
  if the current reference is <code>==</code> to the expected
  reference.Any given invocation of this operation may fail
  (return <code>false</code>) spuriously, but repeated invocation
  when the current value holds the expected value and no other
  thread is also attempting to set the value will eventually
  succeed.
 @param expectedReference the expected value of the reference
 @param newMark the new value for the mark
 @return <code>true</code> if successful
 */
- (jboolean)attemptMarkWithId:(id)expectedReference
                  withBoolean:(jboolean)newMark;

/*!
 @brief Atomically sets the value of both the reference and mark
  to the given update values if the
  current reference is <code>==</code> to the expected reference
  and the current mark is equal to the expected mark.
 @param expectedReference the expected value of the reference
 @param newReference the new value for the reference
 @param expectedMark the expected value of the mark
 @param newMark the new value for the mark
 @return <code>true</code> if successful
 */
- (jboolean)compareAndSetWithId:(id)expectedReference
                         withId:(id)newReference
                    withBoolean:(jboolean)expectedMark
                    withBoolean:(jboolean)newMark;

/*!
 @brief Returns the current values of both the reference and the mark.
 Typical usage is <code>boolean[1] holder; ref = v.get(holder);</code>.
 @param markHolder an array of size of at least one. On return,  
 <code>markHolder[0]</code>  will hold the value of the mark.
 @return the current value of the reference
 */
- (id)getWithBooleanArray:(IOSBooleanArray *)markHolder;

/*!
 @brief Returns the current value of the reference.
 @return the current value of the reference
 */
- (id)getReference;

/*!
 @brief Returns the current value of the mark.
 @return the current value of the mark
 */
- (jboolean)isMarked;

/*!
 @brief Unconditionally sets the value of both the reference and mark.
 @param newReference the new value for the reference
 @param newMark the new value for the mark
 */
- (void)setWithId:(id)newReference
      withBoolean:(jboolean)newMark;

/*!
 @brief Atomically sets the value of both the reference and mark
  to the given update values if the
  current reference is <code>==</code> to the expected reference
  and the current mark is equal to the expected mark.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
  spuriously and does not provide ordering guarantees</a>, so is
  only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param expectedReference the expected value of the reference
 @param newReference the new value for the reference
 @param expectedMark the expected value of the mark
 @param newMark the new value for the mark
 @return <code>true</code> if successful
 */
- (jboolean)weakCompareAndSetWithId:(id)expectedReference
                             withId:(id)newReference
                        withBoolean:(jboolean)expectedMark
                        withBoolean:(jboolean)newMark;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicMarkableReference)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicMarkableReference_initWithId_withBoolean_(JavaUtilConcurrentAtomicAtomicMarkableReference *self, id initialRef, jboolean initialMark);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicMarkableReference *new_JavaUtilConcurrentAtomicAtomicMarkableReference_initWithId_withBoolean_(id initialRef, jboolean initialMark) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicMarkableReference *create_JavaUtilConcurrentAtomicAtomicMarkableReference_initWithId_withBoolean_(id initialRef, jboolean initialMark);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicMarkableReference)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicMarkableReference")
