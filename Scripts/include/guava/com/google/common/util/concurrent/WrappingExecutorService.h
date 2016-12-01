//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/WrappingExecutorService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentWrappingExecutorService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentWrappingExecutorService

#if !defined (ComGoogleCommonUtilConcurrentWrappingExecutorService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService || defined(INCLUDE_ComGoogleCommonUtilConcurrentWrappingExecutorService))
#define ComGoogleCommonUtilConcurrentWrappingExecutorService_

#define RESTRICT_JavaUtilConcurrentExecutorService 1
#define INCLUDE_JavaUtilConcurrentExecutorService 1
#include "java/util/concurrent/ExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilList;

@interface ComGoogleCommonUtilConcurrentWrappingExecutorService : NSObject < JavaUtilConcurrentExecutorService >

#pragma mark Public

- (jboolean)awaitTerminationWithLong:(jlong)timeout
      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id<JavaUtilList>)invokeAllWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                                           withLong:(jlong)timeout
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks;

- (id)invokeAnyWithJavaUtilCollection:(id<JavaUtilCollection>)tasks
                             withLong:(jlong)timeout
       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (jboolean)isShutdown;

- (jboolean)isTerminated;

- (void)shutdown;

- (id<JavaUtilList>)shutdownNow;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

#pragma mark Protected

- (instancetype)initWithJavaUtilConcurrentExecutorService:(id<JavaUtilConcurrentExecutorService>)delegate;

- (id<JavaUtilConcurrentCallable>)wrapTaskWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

- (id<JavaLangRunnable>)wrapTaskWithJavaLangRunnable:(id<JavaLangRunnable>)command;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentWrappingExecutorService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentWrappingExecutorService_initWithJavaUtilConcurrentExecutorService_(ComGoogleCommonUtilConcurrentWrappingExecutorService *self, id<JavaUtilConcurrentExecutorService> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentWrappingExecutorService)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentWrappingExecutorService")
