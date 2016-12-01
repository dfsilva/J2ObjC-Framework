//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingBlockingDeque.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingBlockingDeque")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingBlockingDeque
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingBlockingDeque 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingBlockingDeque 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingBlockingDeque

#if !defined (ComGoogleCommonCollectForwardingBlockingDeque_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingBlockingDeque || defined(INCLUDE_ComGoogleCommonCollectForwardingBlockingDeque))
#define ComGoogleCommonCollectForwardingBlockingDeque_

#define RESTRICT_ComGoogleCommonCollectForwardingDeque 1
#define INCLUDE_ComGoogleCommonCollectForwardingDeque 1
#include "../../../../../com/google/common/collect/ForwardingDeque.h"

#define RESTRICT_JavaUtilConcurrentBlockingDeque 1
#define INCLUDE_JavaUtilConcurrentBlockingDeque 1
#include "../../../../../java/util/concurrent/BlockingDeque.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;

@interface ComGoogleCommonCollectForwardingBlockingDeque : ComGoogleCommonCollectForwardingDeque < JavaUtilConcurrentBlockingDeque >

#pragma mark Public

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)offerFirstWithId:(id)e
                    withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)offerLastWithId:(id)e
                   withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollFirstWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)pollLastWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)putWithId:(id)e;

- (void)putFirstWithId:(id)e;

- (void)putLastWithId:(id)e;

- (jint)remainingCapacity;

- (id)take;

- (id)takeFirst;

- (id)takeLast;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentBlockingDeque>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingBlockingDeque)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingBlockingDeque_init(ComGoogleCommonCollectForwardingBlockingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingBlockingDeque)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingBlockingDeque")
