//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/java/lang/Thread.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangThread")
#ifdef RESTRICT_JavaLangThread
#define INCLUDE_ALL_JavaLangThread 0
#else
#define INCLUDE_ALL_JavaLangThread 1
#endif
#undef RESTRICT_JavaLangThread

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangThread_) && (INCLUDE_ALL_JavaLangThread || defined(INCLUDE_JavaLangThread))
#define JavaLangThread_

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "../../java/lang/Runnable.h"

@class IOSObjectArray;
@class JavaLangClassLoader;
@class JavaLangThreadGroup;
@class JavaLangThreadLocal_ThreadLocalMap;
@class JavaLangThread_State;
@protocol JavaLangThread_UncaughtExceptionHandler;
@protocol JavaUtilMap;

/*!
 @brief Simplified iOS version of java.lang.Thread, based on Apache Harmony source
 (both luni-kernel and vmcore).
 This class uses pthread for thread creation
 and maintains a pthread handle for using other pthread functionality.
 pthread's thread local mechanism (pthread_setspecific) is used to associate
 this wrapper object with the current thread.
 @author Tom Ball, Keith Stanger
 */
@interface JavaLangThread : NSObject < JavaLangRunnable > {
 @public
  jboolean interrupted_;
  JavaLangThreadLocal_ThreadLocalMap *threadLocals_;
  JavaLangThreadLocal_ThreadLocalMap *inheritableThreadLocals_;
  /*!
   @brief The object the thread is waiting on (normally null).
   */
  id blocker_;
}

+ (jint)MAX_PRIORITY;

+ (jint)MIN_PRIORITY;

+ (jint)NORM_PRIORITY;

#pragma mark Public

/*!
 @brief Constructs a new Thread with no runnable object and a newly generated
 name.
 The new Thread will belong to the same ThreadGroup as the Thread
 calling this constructor.
 - seealso: java.lang.ThreadGroup
 */
- (instancetype)init;

/*!
 @brief Constructs a new Thread with a runnable object and a newly generated
 name.
 The new Thread will belong to the same ThreadGroup as the Thread
 calling this constructor.
 @param runnable a java.lang.Runnable whose method <code>run</code> will
 be executed by the new Thread
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 */
- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

/*!
 @brief Constructs a new Thread with a runnable object and name provided.
 The new
 Thread will belong to the same ThreadGroup as the Thread calling this
 constructor.
 @param runnable a java.lang.Runnable whose method <code>run</code> will
 be executed by the new Thread
 @param threadName Name for the Thread being created
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 */
- (instancetype)initWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                            withNSString:(NSString *)threadName;

/*!
 @brief Constructs a new Thread with no runnable object and the name provided.
 The new Thread will belong to the same ThreadGroup as the Thread calling
 this constructor.
 @param threadName Name for the Thread being created
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 */
- (instancetype)initWithNSString:(NSString *)threadName;

/*!
 @brief Constructs a new Thread with a runnable object and a newly generated
 name.
 The new Thread will belong to the ThreadGroup passed as parameter.
 @param group ThreadGroup to which the new Thread will belong
 @param runnable a java.lang.Runnable whose method <code>run</code> will
 be executed by the new Thread
 @throws SecurityException if <code>group.checkAccess()</code> fails
 with a SecurityException
 @throws IllegalThreadStateException if <code>group.destroy()</code> has
 already been done
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 - seealso: java.lang.SecurityException
 - seealso: java.lang.SecurityManager
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable;

/*!
 @brief Constructs a new Thread with a runnable object, the given name and
 belonging to the ThreadGroup passed as parameter.
 @param group ThreadGroup to which the new Thread will belong
 @param runnable a java.lang.Runnable whose method <code>run</code> will
 be executed by the new Thread
 @param threadName Name for the Thread being created
 @throws SecurityException if <code>group.checkAccess()</code> fails
 with a SecurityException
 @throws IllegalThreadStateException if <code>group.destroy()</code> has
 already been done
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 - seealso: java.lang.SecurityException
 - seealso: java.lang.SecurityManager
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                               withNSString:(NSString *)threadName;

/*!
 @brief Constructs a new Thread with a runnable object, the given name and
 belonging to the ThreadGroup passed as parameter.
 @param group ThreadGroup to which the new Thread will belong
 @param runnable a java.lang.Runnable whose method <code>run</code> will
 be executed by the new Thread
 @param threadName Name for the Thread being created
 @param stack Platform dependent stack size
 @throws SecurityException if <code>group.checkAccess()</code> fails
 with a SecurityException
 @throws IllegalThreadStateException if <code>group.destroy()</code> has
 already been done
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.Runnable
 - seealso: java.lang.SecurityException
 - seealso: java.lang.SecurityManager
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                       withJavaLangRunnable:(id<JavaLangRunnable>)runnable
                               withNSString:(NSString *)threadName
                                   withLong:(jlong)stack;

/*!
 @brief Constructs a new Thread with no runnable object, the given name and
 belonging to the ThreadGroup passed as parameter.
 @param group ThreadGroup to which the new Thread will belong
 @param threadName Name for the Thread being created
 @throws SecurityException if <code>group.checkAccess()</code> fails
 with a SecurityException
 @throws IllegalThreadStateException if <code>group.destroy()</code> has
 already been done
 - seealso: java.lang.ThreadGroup
 - seealso: java.lang.SecurityException
 - seealso: java.lang.SecurityManager
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)group
                               withNSString:(NSString *)threadName;

+ (jint)activeCount;

- (void)checkAccess;

- (jint)countStackFrames __attribute__((deprecated));

+ (JavaLangThread *)currentThread;

- (void)destroy __attribute__((deprecated));

/*!
 @brief Prints to the standard error stream a text representation of the current
 stack for this Thread.
 - seealso: Throwable#printStackTrace()
 */
+ (void)dumpStack;

+ (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)threads;

/*!
 @brief Returns a map of stack traces for all live threads.
 */
+ (id<JavaUtilMap>)getAllStackTraces;

/*!
 @brief Returns the context ClassLoader for this Thread.
 @return ClassLoader The context ClassLoader
 - seealso: java.lang.ClassLoader
 */
- (JavaLangClassLoader *)getContextClassLoader;

/*!
 @brief Returns the default exception handler that's executed when uncaught
 exception terminates a thread.
 @return an <code>UncaughtExceptionHandler</code> or <code>null</code> if
 none exists.
 */
+ (id<JavaLangThread_UncaughtExceptionHandler>)getDefaultUncaughtExceptionHandler;

- (jlong)getId;

- (NSString *)getName;

- (jint)getPriority;

- (IOSObjectArray *)getStackTrace;

- (JavaLangThread_State *)getState;

- (JavaLangThreadGroup *)getThreadGroup;

/*!
 @brief Returns the handler invoked when this thread abruptly terminates
 due to an uncaught exception.
 If this thread has not had an
 uncaught exception handler explicitly set then this thread's
 <tt>ThreadGroup</tt> object is returned, unless this thread
 has terminated, in which case <tt>null</tt> is returned.
 @since 1.5
 */
- (id<JavaLangThread_UncaughtExceptionHandler>)getUncaughtExceptionHandler;

/*!
 @brief Indicates whether the current Thread has a monitor lock on the specified
 object.
 @param object the object to test for the monitor lock
 @return true if the current thread has a monitor lock on the specified
 object; false otherwise
 */
+ (jboolean)holdsLockWithId:(id)object;

/*!
 @brief Posts an interrupt request to this <code>Thread</code>.
 Unless the caller is
 the <code>currentThread()</code>, the method <code>checkAccess()</code> is called
 for the installed <code>SecurityManager</code>, if any. This may result in a
 <code>SecurityException</code> being thrown. The further behavior depends on
 the state of this <code>Thread</code>:
 <ul>
 <li>
 <code>Thread</code>s blocked in one of <code>Object</code>'s <code>wait()</code> methods
 or one of <code>Thread</code>'s <code>join()</code> or <code>sleep()</code> methods will
 be woken up, their interrupt status will be cleared, and they receive an
 <code>InterruptedException</code>.
 <li>
 <code>Thread</code>s blocked in an I/O operation of an
 <code>java.nio.channels.InterruptibleChannel</code> will have their interrupt
 status set and receive an
 <code>java.nio.channels.ClosedByInterruptException</code>. Also, the channel
 will be closed.
 <li>
 <code>Thread</code>s blocked in a <code>java.nio.channels.Selector</code> will have
 their interrupt status set and return immediately. They don't receive an
 exception in this case.
 <ul>
 @throws SecurityException
 if <code>checkAccess()</code> fails with a SecurityException
 - seealso: java.lang.SecurityException
 - seealso: java.lang.SecurityManager
 - seealso: Thread#interrupted
 - seealso: Thread#isInterrupted
 */
- (void)interrupt;

/*!
 @brief Returns a <code>boolean</code> indicating whether the current Thread (
 <code>currentThread()</code>) has a pending interrupt request (<code>
 true</code>) or not (<code>false</code>).
 It also has the side-effect of
 clearing the flag.
 @return a <code>boolean</code> indicating the interrupt status
 - seealso: Thread#currentThread
 - seealso: Thread#interrupt
 - seealso: Thread#isInterrupted
 */
+ (jboolean)interrupted;

- (jboolean)isAlive;

- (jboolean)isDaemon;

/*!
 @brief Returns a <code>boolean</code> indicating whether the receiver has a
 pending interrupt request (<code>true</code>) or not (
 <code>false</code>)
 @return a <code>boolean</code> indicating the interrupt status
 - seealso: Thread#interrupt
 - seealso: Thread#interrupted
 */
- (jboolean)isInterrupted;

/*!
 @brief Blocks the current Thread (<code>Thread.currentThread()</code>) until
 the receiver finishes its execution and dies.
 @throws InterruptedException if <code>interrupt()</code> was called for
 the receiver while it was in the <code>join()</code> call
 - seealso: Object#notifyAll
 - seealso: java.lang.ThreadDeath
 */
- (void)join;

/*!
 @brief Blocks the current Thread (<code>Thread.currentThread()</code>) until
 the receiver finishes its execution and dies or the specified timeout
 expires, whatever happens first.
 @param millis The maximum time to wait (in milliseconds).
 @throws InterruptedException if <code>interrupt()</code> was called for
 the receiver while it was in the <code>join()</code> call
 - seealso: Object#notifyAll
 - seealso: java.lang.ThreadDeath
 */
- (void)joinWithLong:(jlong)millis;

/*!
 @brief Blocks the current Thread (<code>Thread.currentThread()</code>) until
 the receiver finishes its execution and dies or the specified timeout
 expires, whatever happens first.
 @param millis The maximum time to wait (in milliseconds).
 @param nanos Extra nanosecond precision
 @throws InterruptedException if <code>interrupt()</code> was called for
 the receiver while it was in the <code>join()</code> call
 - seealso: Object#notifyAll
 - seealso: java.lang.ThreadDeath
 */
- (void)joinWithLong:(jlong)millis
             withInt:(jint)nanos;

/*!
 @brief Parks the current thread for a particular number of nanoseconds, or
 indefinitely.
 If not indefinitely, this method unparks the thread
 after the given number of nanoseconds if no other thread unparks it
 first. If the thread has been "preemptively unparked," this method
 cancels that unparking and returns immediately. This method may
 also return spuriously (that is, without the thread being told to
 unpark and without the indicated amount of time elapsing).
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
 in-depth information of the behavior of this method.</p>
 <p>This method must only be called when <code>this</code> is the current
 thread.
 @param nanos number of nanoseconds to park for or <code>0</code>
 to park indefinitely
 @throws IllegalArgumentException thrown if <code>nanos &lt; 0</code>
  for Unsafe
 */
- (void)parkForWithLong:(jlong)nanos;

/*!
 @brief Parks the current thread until the specified system time.
 This
 method attempts to unpark the current thread immediately after
 <code>System.currentTimeMillis()</code> reaches the specified
 value, if no other thread unparks it first. If the thread has
 been "preemptively unparked," this method cancels that
 unparking and returns immediately. This method may also return
 spuriously (that is, without the thread being told to unpark
 and without the indicated amount of time elapsing).
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
 in-depth information of the behavior of this method.</p>
 <p>This method must only be called when <code>this</code> is the
 current thread.
 @param time the time after which the thread should be unparked,
 in absolute milliseconds-since-the-epoch
  for Unsafe
 */
- (void)parkUntilWithLong:(jlong)time;

/*!
 @brief Removes <code>interruptAction</code> so it is not invoked upon interruption.
 @param interruptAction the pushed action, used to check that the call
 stack is correctly nested.
  used by NIO
 */
- (void)popInterruptAction$WithJavaLangRunnable:(id<JavaLangRunnable>)interruptAction;

/*!
 @brief Adds a runnable to be invoked upon interruption.
 If this thread has
 already been interrupted, the runnable will be invoked immediately. The
 action should be idempotent as it may be invoked multiple times for a
 single interruption.
 <p>Each call to this method must be matched with a corresponding call to
 <code>popInterruptAction$</code>.
  used by NIO
 */
- (void)pushInterruptAction$WithJavaLangRunnable:(id<JavaLangRunnable>)interruptAction;

- (void)resume __attribute__((deprecated));

- (void)run;

- (void)setContextClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (void)setDaemonWithBoolean:(jboolean)isDaemon;

/*!
 @brief Sets the default uncaught exception handler.
 This handler is invoked in
 case any Thread dies due to an unhandled exception.
 @param handler
 The handler to set or null.
 */
+ (void)setDefaultUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)handler;

- (void)setNameWithNSString:(NSString *)name;

- (void)setPriorityWithInt:(jint)newPriority;

/*!
 @brief Set the handler invoked when this thread abruptly terminates
 due to an uncaught exception.
 <p>A thread can take full control of how it responds to uncaught
 exceptions by having its uncaught exception handler explicitly set.
 If no such handler is set then the thread's <tt>ThreadGroup</tt>
 object acts as its handler.
 @param eh the object to use as this thread's uncaught exception
 handler. If <tt>null</tt> then this thread has no explicit handler.
 @throws SecurityException  if the current thread is not allowed to
 modify this thread.
 - seealso: #setDefaultUncaughtExceptionHandler
 - seealso: ThreadGroup#uncaughtException
 @since 1.5
 */
- (void)setUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler:(id<JavaLangThread_UncaughtExceptionHandler>)eh;

+ (void)sleepWithLong:(jlong)millis;

+ (void)sleepWithLong:(jlong)millis
              withInt:(jint)nanos;

- (void)start;

- (void)stop __attribute__((deprecated));

- (void)stopWithNSException:(NSException *)obj __attribute__((deprecated));

- (void)suspend __attribute__((deprecated));

- (NSString *)description;

/*!
 @brief Unparks this thread.
 This unblocks the thread it if it was
 previously parked, or indicates that the thread is "preemptively
 unparked" if it wasn't already parked. The latter means that the
 next time the thread is told to park, it will merely clear its
 latent park bit and carry on without blocking.
 <p>See <code>java.util.concurrent.locks.LockSupport</code> for more
 in-depth information of the behavior of this method.</p>
  for Unsafe
 */
- (void)unpark;

/*!
 @brief Causes the calling Thread to yield execution time to another Thread that
 is ready to run.
 The actual scheduling is implementation-dependent.
 */
+ (void)yield;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaLangThread)

J2OBJC_FIELD_SETTER(JavaLangThread, threadLocals_, JavaLangThreadLocal_ThreadLocalMap *)
J2OBJC_FIELD_SETTER(JavaLangThread, inheritableThreadLocals_, JavaLangThreadLocal_ThreadLocalMap *)
J2OBJC_FIELD_SETTER(JavaLangThread, blocker_, id)

/*!
 @brief <p>
 The maximum priority value allowed for a thread.
 </p>
 */
inline jint JavaLangThread_get_MAX_PRIORITY();
#define JavaLangThread_MAX_PRIORITY 10
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangThread, MAX_PRIORITY, jint)

/*!
 @brief <p>
 The minimum priority value allowed for a thread.
 </p>
 */
inline jint JavaLangThread_get_MIN_PRIORITY();
#define JavaLangThread_MIN_PRIORITY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangThread, MIN_PRIORITY, jint)

/*!
 @brief <p>
 The normal (default) priority value assigned to threads.
 </p>
 */
inline jint JavaLangThread_get_NORM_PRIORITY();
#define JavaLangThread_NORM_PRIORITY 5
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangThread, NORM_PRIORITY, jint)

FOUNDATION_EXPORT void JavaLangThread_init(JavaLangThread *self);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_init();

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangRunnable_(JavaLangThread *self, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangRunnable_(id<JavaLangRunnable> runnable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangRunnable_(id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangRunnable_withNSString_(JavaLangThread *self, id<JavaLangRunnable> runnable, NSString *threadName);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangRunnable_withNSString_(id<JavaLangRunnable> runnable, NSString *threadName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangRunnable_withNSString_(id<JavaLangRunnable> runnable, NSString *threadName);

FOUNDATION_EXPORT void JavaLangThread_initWithNSString_(JavaLangThread *self, NSString *threadName);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithNSString_(NSString *threadName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithNSString_(NSString *threadName);

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_(JavaLangThread *self, JavaLangThreadGroup *group, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable);

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_withLong_(JavaLangThread *self, JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName, jlong stack);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_withLong_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName, jlong stack) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_withLong_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName, jlong stack);

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_(JavaLangThread *self, JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangThreadGroup_withJavaLangRunnable_withNSString_(JavaLangThreadGroup *group, id<JavaLangRunnable> runnable, NSString *threadName);

FOUNDATION_EXPORT void JavaLangThread_initWithJavaLangThreadGroup_withNSString_(JavaLangThread *self, JavaLangThreadGroup *group, NSString *threadName);

FOUNDATION_EXPORT JavaLangThread *new_JavaLangThread_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *group, NSString *threadName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThread *create_JavaLangThread_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *group, NSString *threadName);

FOUNDATION_EXPORT JavaLangThread *JavaLangThread_currentThread();

FOUNDATION_EXPORT jint JavaLangThread_activeCount();

FOUNDATION_EXPORT void JavaLangThread_dumpStack();

FOUNDATION_EXPORT jint JavaLangThread_enumerateWithJavaLangThreadArray_(IOSObjectArray *threads);

FOUNDATION_EXPORT jboolean JavaLangThread_interrupted();

FOUNDATION_EXPORT void JavaLangThread_sleepWithLong_(jlong millis);

FOUNDATION_EXPORT void JavaLangThread_sleepWithLong_withInt_(jlong millis, jint nanos);

FOUNDATION_EXPORT void JavaLangThread_yield();

FOUNDATION_EXPORT jboolean JavaLangThread_holdsLockWithId_(id object);

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> JavaLangThread_getDefaultUncaughtExceptionHandler();

FOUNDATION_EXPORT void JavaLangThread_setDefaultUncaughtExceptionHandlerWithJavaLangThread_UncaughtExceptionHandler_(id<JavaLangThread_UncaughtExceptionHandler> handler);

FOUNDATION_EXPORT id<JavaUtilMap> JavaLangThread_getAllStackTraces();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread)

#endif

#if !defined (JavaLangThread_State_) && (INCLUDE_ALL_JavaLangThread || defined(INCLUDE_JavaLangThread_State))
#define JavaLangThread_State_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaLangThread_State_Enum) {
  JavaLangThread_State_Enum_NEW = 0,
  JavaLangThread_State_Enum_RUNNABLE = 1,
  JavaLangThread_State_Enum_BLOCKED = 2,
  JavaLangThread_State_Enum_WAITING = 3,
  JavaLangThread_State_Enum_TIMED_WAITING = 4,
  JavaLangThread_State_Enum_TERMINATED = 5,
};

/*!
 @brief A representation of a thread's state.
 A given thread may only be in one
 state at a time.
 */
@interface JavaLangThread_State : JavaLangEnum < NSCopying >

+ (JavaLangThread_State *)NEW;

+ (JavaLangThread_State *)RUNNABLE;

+ (JavaLangThread_State *)BLOCKED;

+ (JavaLangThread_State *)WAITING;

+ (JavaLangThread_State *)TIMED_WAITING;

+ (JavaLangThread_State *)TERMINATED;

#pragma mark Public

+ (JavaLangThread_State *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaLangThread_State_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaLangThread_State)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaLangThread_State *JavaLangThread_State_values_[];

/*!
 @brief The thread has been created, but has never been started.
 */
inline JavaLangThread_State *JavaLangThread_State_get_NEW();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, NEW)

/*!
 @brief The thread may be run.
 */
inline JavaLangThread_State *JavaLangThread_State_get_RUNNABLE();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, RUNNABLE)

/*!
 @brief The thread is blocked and waiting for a lock.
 */
inline JavaLangThread_State *JavaLangThread_State_get_BLOCKED();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, BLOCKED)

/*!
 @brief The thread is waiting.
 */
inline JavaLangThread_State *JavaLangThread_State_get_WAITING();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, WAITING)

/*!
 @brief The thread is waiting for a specified amount of time.
 */
inline JavaLangThread_State *JavaLangThread_State_get_TIMED_WAITING();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, TIMED_WAITING)

/*!
 @brief The thread has been terminated.
 */
inline JavaLangThread_State *JavaLangThread_State_get_TERMINATED();
J2OBJC_ENUM_CONSTANT(JavaLangThread_State, TERMINATED)

FOUNDATION_EXPORT IOSObjectArray *JavaLangThread_State_values();

FOUNDATION_EXPORT JavaLangThread_State *JavaLangThread_State_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaLangThread_State *JavaLangThread_State_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_State)

#endif

#if !defined (JavaLangThread_UncaughtExceptionHandler_) && (INCLUDE_ALL_JavaLangThread || defined(INCLUDE_JavaLangThread_UncaughtExceptionHandler))
#define JavaLangThread_UncaughtExceptionHandler_

@class JavaLangThread;

@protocol JavaLangThread_UncaughtExceptionHandler < JavaObject >

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                            withNSException:(NSException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangThread_UncaughtExceptionHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThread_UncaughtExceptionHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThread")
