//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/ExecutorCompletionService.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentExecutorCompletionService")
#ifdef RESTRICT_JavaUtilConcurrentExecutorCompletionService
#define INCLUDE_ALL_JavaUtilConcurrentExecutorCompletionService 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentExecutorCompletionService 1
#endif
#undef RESTRICT_JavaUtilConcurrentExecutorCompletionService

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentExecutorCompletionService_) && (INCLUDE_ALL_JavaUtilConcurrentExecutorCompletionService || defined(INCLUDE_JavaUtilConcurrentExecutorCompletionService))
#define JavaUtilConcurrentExecutorCompletionService_

#define RESTRICT_JavaUtilConcurrentCompletionService 1
#define INCLUDE_JavaUtilConcurrentCompletionService 1
#include "../../../java/util/concurrent/CompletionService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilConcurrentFuture;

/*!
 @brief A <code>CompletionService</code> that uses a supplied <code>Executor</code>
  to execute tasks.This class arranges that submitted tasks are,
  upon completion, placed on a queue accessible using <code>take</code>.
 The class is lightweight enough to be suitable for transient use
  when processing groups of tasks. 
 <p>
  
 <b>Usage Examples.</b>
  Suppose you have a set of solvers for a certain problem, each
  returning a value of some type <code>Result</code>, and would like to
  run them concurrently, processing the results of each of them that
  return a non-null value, in some method <code>use(Result r)</code>. You
  could write this as: 
 @code
  void solve(Executor e,
             Collection<Callable<Result>> solvers)
      throws InterruptedException, ExecutionException {
    CompletionService<Result> ecs
        = new ExecutorCompletionService<Result>(e);
    for (Callable<Result> s : solvers)
      ecs.submit(s);
    int n = solvers.size();
    for (int i = 0; i < n; ++i) {
      Result r = ecs.take().get();
      if (r != null)
        use(r);
    }  }
 
@endcode
  Suppose instead that you would like to use the first non-null result
  of the set of tasks, ignoring any that encounter exceptions,
  and cancelling all other tasks when the first one is ready: 
 @code
  void solve(Executor e,
             Collection<Callable<Result>> solvers)
      throws InterruptedException {
    CompletionService<Result> ecs
        = new ExecutorCompletionService<Result>(e);
    int n = solvers.size();
    List<Future<Result>> futures = new ArrayList<>(n);
    Result result = null;
    try {
      for (Callable<Result> s : solvers)
        futures.add(ecs.submit(s));
      for (int i = 0; i < n; ++i) {
        try {
          Result r = ecs.take().get();
          if (r != null) {
            result = r;
            break;
          }
        } catch (ExecutionException ignore) {}      }      }
    finally {
      for (Future<Result> f : futures)
        f.cancel(true);
    }
    if (result != null)
      use(result);
  }
 
@endcode
 */
@interface JavaUtilConcurrentExecutorCompletionService : NSObject < JavaUtilConcurrentCompletionService >

#pragma mark Public

/*!
 @brief Creates an ExecutorCompletionService using the supplied
  executor for base task execution and a 
 <code>LinkedBlockingQueue</code> as a completion queue.
 @param executor the executor to use
 @throw NullPointerExceptionif executor is <code>null</code>
 */
- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

/*!
 @brief Creates an ExecutorCompletionService using the supplied
  executor for base task execution and the supplied queue as its
  completion queue.
 @param executor the executor to use
 @param completionQueue the queue to use as the completion queue         normally one dedicated for use by this service. This
          queue is treated as unbounded -- failed attempted
          <code>Queue.add</code>
   operations for completed tasks cause         them not to be retrievable.
 @throw NullPointerExceptionif executor or completionQueue are <code>null</code>
 */
- (instancetype)initWithJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor
               withJavaUtilConcurrentBlockingQueue:(id<JavaUtilConcurrentBlockingQueue>)completionQueue;

- (id<JavaUtilConcurrentFuture>)poll;

- (id<JavaUtilConcurrentFuture>)pollWithLong:(jlong)timeout
              withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

- (id<JavaUtilConcurrentFuture>)take;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentExecutorCompletionService)

FOUNDATION_EXPORT void JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_(JavaUtilConcurrentExecutorCompletionService *self, id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *new_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *create_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_(id<JavaUtilConcurrentExecutor> executor);

FOUNDATION_EXPORT void JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_withJavaUtilConcurrentBlockingQueue_(JavaUtilConcurrentExecutorCompletionService *self, id<JavaUtilConcurrentExecutor> executor, id<JavaUtilConcurrentBlockingQueue> completionQueue);

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *new_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_withJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentExecutor> executor, id<JavaUtilConcurrentBlockingQueue> completionQueue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentExecutorCompletionService *create_JavaUtilConcurrentExecutorCompletionService_initWithJavaUtilConcurrentExecutor_withJavaUtilConcurrentBlockingQueue_(id<JavaUtilConcurrentExecutor> executor, id<JavaUtilConcurrentBlockingQueue> completionQueue);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentExecutorCompletionService)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentExecutorCompletionService")
