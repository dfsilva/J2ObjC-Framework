//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/Uninterruptibles.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUninterruptibles
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUninterruptibles

#if !defined (ComGoogleCommonUtilConcurrentUninterruptibles_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles || defined(INCLUDE_ComGoogleCommonUtilConcurrentUninterruptibles))
#define ComGoogleCommonUtilConcurrentUninterruptibles_

@class JavaLangThread;
@class JavaUtilConcurrentCountDownLatch;
@class JavaUtilConcurrentSemaphore;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentFuture;

@interface ComGoogleCommonUtilConcurrentUninterruptibles : NSObject

#pragma mark Public

+ (void)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch *)latch;

+ (jboolean)awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch:(JavaUtilConcurrentCountDownLatch *)latch
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future;

+ (id)getUninterruptiblyWithJavaUtilConcurrentFuture:(id<JavaUtilConcurrentFuture>)future
                                            withLong:(jlong)timeout
                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread *)toJoin;

+ (void)joinUninterruptiblyWithJavaLangThread:(JavaLangThread *)toJoin
                                     withLong:(jlong)timeout
               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (void)putUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)queue
                                                       withId:(id)element;

+ (void)sleepUninterruptiblyWithLong:(jlong)sleepFor
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (id)takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)queue;

+ (jboolean)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(JavaUtilConcurrentSemaphore *)semaphore
                                                             withInt:(jint)permits
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (jboolean)tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore:(JavaUtilConcurrentSemaphore *)semaphore
                                                            withLong:(jlong)timeout
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUninterruptibles)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_(JavaUtilConcurrentCountDownLatch *latch);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_awaitUninterruptiblyWithJavaUtilConcurrentCountDownLatch_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentCountDownLatch *latch, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_(JavaLangThread *toJoin);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_(id<JavaUtilConcurrentFuture> future);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_getUninterruptiblyWithJavaUtilConcurrentFuture_withLong_withJavaUtilConcurrentTimeUnit_(id<JavaUtilConcurrentFuture> future, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_joinUninterruptiblyWithJavaLangThread_withLong_withJavaUtilConcurrentTimeUnit_(JavaLangThread *toJoin, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT id ComGoogleCommonUtilConcurrentUninterruptibles_takeUninterruptiblyWithJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentBlockingQueue> queue);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_putUninterruptiblyWithJavaUtilConcurrentBlockingQueue_withId_(id<JavaUtilConcurrentBlockingQueue> queue, id element);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUninterruptibles_sleepUninterruptiblyWithLong_withJavaUtilConcurrentTimeUnit_(jlong sleepFor, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentSemaphore *semaphore, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

FOUNDATION_EXPORT jboolean ComGoogleCommonUtilConcurrentUninterruptibles_tryAcquireUninterruptiblyWithJavaUtilConcurrentSemaphore_withInt_withLong_withJavaUtilConcurrentTimeUnit_(JavaUtilConcurrentSemaphore *semaphore, jint permits, jlong timeout, JavaUtilConcurrentTimeUnit *unit);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUninterruptibles)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUninterruptibles")
