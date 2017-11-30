//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ref/WeakReference.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRefWeakReference")
#ifdef RESTRICT_JavaLangRefWeakReference
#define INCLUDE_ALL_JavaLangRefWeakReference 0
#else
#define INCLUDE_ALL_JavaLangRefWeakReference 1
#endif
#undef RESTRICT_JavaLangRefWeakReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRefWeakReference_) && (INCLUDE_ALL_JavaLangRefWeakReference || defined(INCLUDE_JavaLangRefWeakReference))
#define JavaLangRefWeakReference_

#define RESTRICT_JavaLangRefReference 1
#define INCLUDE_JavaLangRefReference 1
#include "../../../java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

/*!
 @brief Weak reference objects, which do not prevent their referents from being
  made finalizable, finalized, and then reclaimed.Weak references are most
  often used to implement canonicalizing mappings.
 <p> Suppose that the garbage collector determines at a certain point in time
  that an object is <a href="package-summary.html#reachability">weakly
  reachable</a>.  At that time it will atomically clear all weak references to
  that object and all weak references to any other weakly-reachable objects
  from which that object is reachable through a chain of strong and soft
  references.  At the same time it will declare all of the formerly
  weakly-reachable objects to be finalizable.  At the same time or at some
  later time it will enqueue those newly-cleared weak references that are
  registered with reference queues.
 @author Mark Reinhold
 @since 1.2
 */
@interface JavaLangRefWeakReference : JavaLangRefReference

#pragma mark Public

/*!
 @brief Creates a new weak reference that refers to the given object.The new
  reference is not registered with any queue.
 @param referent object the new weak reference will refer to
 */
- (instancetype)initWithId:(id)referent;

/*!
 @brief Creates a new weak reference that refers to the given object and is
  registered with the given queue.
 @param referent object the new weak reference will refer to
 @param q the queue with which the reference is to be registered,           or 
  <tt> null </tt>  if registration is not required
 */
- (instancetype)initWithId:(id)referent
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefWeakReference)

FOUNDATION_EXPORT void JavaLangRefWeakReference_initWithId_(JavaLangRefWeakReference *self, id referent);

FOUNDATION_EXPORT JavaLangRefWeakReference *new_JavaLangRefWeakReference_initWithId_(id referent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefWeakReference *create_JavaLangRefWeakReference_initWithId_(id referent);

FOUNDATION_EXPORT void JavaLangRefWeakReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefWeakReference *self, id referent, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefWeakReference *new_JavaLangRefWeakReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefWeakReference *create_JavaLangRefWeakReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefWeakReference)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRefWeakReference")
