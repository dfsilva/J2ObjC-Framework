//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/ref/SoftReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRefSoftReference")
#ifdef RESTRICT_JavaLangRefSoftReference
#define INCLUDE_ALL_JavaLangRefSoftReference 0
#else
#define INCLUDE_ALL_JavaLangRefSoftReference 1
#endif
#undef RESTRICT_JavaLangRefSoftReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRefSoftReference_) && (INCLUDE_ALL_JavaLangRefSoftReference || defined(INCLUDE_JavaLangRefSoftReference))
#define JavaLangRefSoftReference_

#define RESTRICT_JavaLangRefReference 1
#define INCLUDE_JavaLangRefReference 1
#include "java/lang/ref/Reference.h"

@class JavaLangRefReferenceQueue;

/*!
 @brief Soft reference objects, which are cleared at the discretion of the garbage
  collector in response to memory demand.
 <p> Suppose that the garbage collector determines at a certain point in time
  that an object is <a href="package-summary.html#reachability">softly
  reachable</a>.  At that time it may choose to clear atomically all soft
  references to that object and all soft references to any other
  softly-reachable objects from which that object is reachable through a chain
  of strong references.  At the same time or at some later time it will
  enqueue those newly-cleared soft references that are registered with
  reference queues. 
 <p> All soft references to softly-reachable objects are guaranteed to have
  been cleared before the virtual machine throws an 
 <code>OutOfMemoryError</code>.  Otherwise no constraints are placed upon the
  time at which a soft reference will be cleared or the order in which a set
  of such references to different objects will be cleared.  Virtual machine
  implementations are, however, encouraged to bias against clearing
  recently-created or recently-used soft references. 
 <h3>Avoid Soft References for Caching</h3>
  In practice, soft references are inefficient for caching. The runtime doesn't
  have enough information on which references to clear and which to keep. Most
  fatally, it doesn't know what to do when given the choice between clearing a
  soft reference and growing the heap. 
 <p>The lack of information on the value to your application of each reference
  limits the usefulness of soft references. References that are cleared too
  early cause unnecessary work; those that are cleared too late waste memory. 
 <p>Most applications should use an <code>android.util.LruCache</code> instead of
  soft references. LruCache has an effective eviction policy and lets the user
  tune how much memory is allotted.
 @author Mark Reinhold
 @since 1.2
 */
@interface JavaLangRefSoftReference : JavaLangRefReference

#pragma mark Public

/*!
 @brief Creates a new soft reference that refers to the given object.The new
  reference is not registered with any queue.
 @param referent object the new soft reference will refer to
 */
- (instancetype)initWithId:(id)referent;

/*!
 @brief Creates a new soft reference that refers to the given object and is
  registered with the given queue.
 @param referent object the new soft reference will refer to
 @param q the queue with which the reference is to be registered,           or 
  <tt> null </tt>  if registration is not required
 */
- (instancetype)initWithId:(id)referent
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRefSoftReference)

FOUNDATION_EXPORT void JavaLangRefSoftReference_initWithId_(JavaLangRefSoftReference *self, id referent);

FOUNDATION_EXPORT JavaLangRefSoftReference *new_JavaLangRefSoftReference_initWithId_(id referent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefSoftReference *create_JavaLangRefSoftReference_initWithId_(id referent);

FOUNDATION_EXPORT void JavaLangRefSoftReference_initWithId_withJavaLangRefReferenceQueue_(JavaLangRefSoftReference *self, id referent, JavaLangRefReferenceQueue *q);

FOUNDATION_EXPORT JavaLangRefSoftReference *new_JavaLangRefSoftReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRefSoftReference *create_JavaLangRefSoftReference_initWithId_withJavaLangRefReferenceQueue_(id referent, JavaLangRefReferenceQueue *q);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRefSoftReference)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRefSoftReference")
