//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/lang/ThreadGroup.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangThreadGroup")
#ifdef RESTRICT_JavaLangThreadGroup
#define INCLUDE_ALL_JavaLangThreadGroup 0
#else
#define INCLUDE_ALL_JavaLangThreadGroup 1
#endif
#undef RESTRICT_JavaLangThreadGroup

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangThreadGroup_) && (INCLUDE_ALL_JavaLangThreadGroup || defined(INCLUDE_JavaLangThreadGroup))
#define JavaLangThreadGroup_

#define RESTRICT_JavaLangThread 1
#define INCLUDE_JavaLangThread_UncaughtExceptionHandler 1
#include "java/lang/Thread.h"

@class IOSObjectArray;
@class JavaIoPrintStream;
@class JavaLangThread;

/*!
 @brief A thread group represents a set of threads.
 In addition, a thread
 group can also include other thread groups. The thread groups form
 a tree in which every thread group except the initial thread group
 has a parent.
 <p>
 A thread is allowed to access information about its own thread
 group, but not to access information about its thread group's
 parent thread group or any other thread groups.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangThreadGroup : NSObject < JavaLangThread_UncaughtExceptionHandler > {
 @public
  NSString *name_;
  jint maxPriority_;
  jboolean destroyed_;
  jboolean daemon_;
  jboolean vmAllowSuspension_;
  jint nUnstartedThreads_;
  jint nthreads_;
  IOSObjectArray *threads_;
  jint ngroups_;
  IOSObjectArray *groups_;
}

+ (JavaLangThreadGroup *)systemThreadGroup;

+ (JavaLangThreadGroup *)mainThreadGroup;

#pragma mark Public

/*!
 @brief Constructs a new thread group.
 The parent of this new group is
 the thread group of the currently running thread.
 <p>
 The <code>checkAccess</code> method of the parent thread group is
 called with no arguments; this may result in a security exception.
 @param name   the name of the new thread group.
 @exception SecurityException  if the current thread cannot create a
 thread in the specified thread group.
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (instancetype)initWithNSString:(NSString *)name;

/*!
 @brief Creates a new thread group.
 The parent of this new group is the
 specified thread group.
 <p>
 The <code>checkAccess</code> method of the parent thread group is
 called with no arguments; this may result in a security exception.
 @param parent   the parent thread group.
 @param name     the name of the new thread group.
 @exception NullPointerException  if the thread group argument is
 <code>null</code>.
 @exception SecurityException  if the current thread cannot create a
 thread in the specified thread group.
 - seealso: java.lang.SecurityException
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (instancetype)initWithJavaLangThreadGroup:(JavaLangThreadGroup *)parent
                               withNSString:(NSString *)name;

/*!
 @brief Returns an estimate of the number of active threads in this thread
 group and its subgroups.
 Recursively iterates over all subgroups in
 this thread group.
 <p> The value returned is only an estimate because the number of
 threads may change dynamically while this method traverses internal
 data structures, and might be affected by the presence of certain
 system threads. This method is intended primarily for debugging
 and monitoring purposes.
 @return an estimate of the number of active threads in this thread
 group and in any other thread group that has this thread
 group as an ancestor
 @since JDK1.0
 */
- (jint)activeCount;

/*!
 @brief Returns an estimate of the number of active groups in this
 thread group and its subgroups.
 Recursively iterates over
 all subgroups in this thread group.
 <p> The value returned is only an estimate because the number of
 thread groups may change dynamically while this method traverses
 internal data structures. This method is intended primarily for
 debugging and monitoring purposes.
 @return the number of active thread groups with this thread group as
 an ancestor
 @since JDK1.0
 */
- (jint)activeGroupCount;

/*!
 @brief Determines if the currently running thread has permission to
 modify this thread group.
 <p>
 If there is a security manager, its <code>checkAccess</code> method
 is called with this thread group as its argument. This may result
 in throwing a <code>SecurityException</code>.
 @exception SecurityException  if the current thread is not allowed to
 access this thread group.
 - seealso: java.lang.SecurityManager#checkAccess(java.lang.ThreadGroup)
 @since JDK1.0
 */
- (void)checkAccess;

/*!
 @brief Destroys this thread group and all of its subgroups.
 This thread
 group must be empty, indicating that all threads that had been in
 this thread group have since stopped.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 @exception IllegalThreadStateException  if the thread group is not
 empty or if the thread group has already been destroyed.
 @exception SecurityException  if the current thread cannot modify this
 thread group.
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)destroy;

/*!
 @brief Copies into the specified array every active thread in this
 thread group and its subgroups.
 <p> An invocation of this method behaves in exactly the same
 way as the invocation
 <blockquote>
 enumerate<code>(list, true)</code>
 </blockquote>
 @param list
 an array into which to put the list of threads
 @return the number of threads put into the array
 @throws SecurityException
 if checkAccess determines that
 the current thread cannot access this thread group
 @since JDK1.0
 */
- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)list;

/*!
 @brief Copies into the specified array every active thread in this
 thread group.
 If <code>recurse</code> is <code>true</code>,
 this method recursively enumerates all subgroups of this
 thread group and references to every active thread in these
 subgroups are also included. If the array is too short to
 hold all the threads, the extra threads are silently ignored.
 <p> An application might use the activeCount
 method to get an estimate of how big the array should be, however
 <i>if the array is too short to hold all the threads, the extra threads
 are silently ignored.</i>  If it is critical to obtain every active
 thread in this thread group, the caller should verify that the returned
 int value is strictly less than the length of <code>list</code>.
 <p> Due to the inherent race condition in this method, it is recommended
 that the method only be used for debugging and monitoring purposes.
 @param list
 an array into which to put the list of threads
 @param recurse
 if <code>true</code>, recursively enumerate all subgroups of this
 thread group
 @return the number of threads put into the array
 @throws SecurityException
 if checkAccess determines that
 the current thread cannot access this thread group
 @since JDK1.0
 */
- (jint)enumerateWithJavaLangThreadArray:(IOSObjectArray *)list
                             withBoolean:(jboolean)recurse;

/*!
 @brief Copies into the specified array references to every active
 subgroup in this thread group and its subgroups.
 <p> An invocation of this method behaves in exactly the same
 way as the invocation
 <blockquote>
 enumerate<code>(list, true)</code>
 </blockquote>
 @param list
 an array into which to put the list of thread groups
 @return the number of thread groups put into the array
 @throws SecurityException
 if checkAccess determines that
 the current thread cannot access this thread group
 @since JDK1.0
 */
- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)list;

/*!
 @brief Copies into the specified array references to every active
 subgroup in this thread group.
 If <code>recurse</code> is
 <code>true</code>, this method recursively enumerates all subgroups of this
 thread group and references to every active thread group in these
 subgroups are also included.
 <p> An application might use the
 activeGroupCount method to
 get an estimate of how big the array should be, however <i>if the
 array is too short to hold all the thread groups, the extra thread
 groups are silently ignored.</i>  If it is critical to obtain every
 active subgroup in this thread group, the caller should verify that
 the returned int value is strictly less than the length of
 <code>list</code>.
 <p> Due to the inherent race condition in this method, it is recommended
 that the method only be used for debugging and monitoring purposes.
 @param list
 an array into which to put the list of thread groups
 @param recurse
 if <code>true</code>, recursively enumerate all subgroups
 @return the number of thread groups put into the array
 @throws SecurityException
 if checkAccess determines that
 the current thread cannot access this thread group
 @since JDK1.0
 */
- (jint)enumerateWithJavaLangThreadGroupArray:(IOSObjectArray *)list
                                  withBoolean:(jboolean)recurse;

/*!
 @brief Returns the maximum priority of this thread group.
 Threads that are
 part of this group cannot have a higher priority than the maximum
 priority.
 @return the maximum priority that a thread in this thread group
 can have.
 - seealso: #setMaxPriority
 @since JDK1.0
 */
- (jint)getMaxPriority;

/*!
 @brief Returns the name of this thread group.
 @return the name of this thread group.
 @since JDK1.0
 */
- (NSString *)getName;

/*!
 @brief Returns the parent of this thread group.
 <p>
 First, if the parent is not <code>null</code>, the
 <code>checkAccess</code> method of the parent thread group is
 called with no arguments; this may result in a security exception.
 @return the parent of this thread group. The top-level thread group
 is the only thread group whose parent is <code>null</code>.
 @exception SecurityException  if the current thread cannot modify
 this thread group.
 - seealso: java.lang.ThreadGroup#checkAccess()
 - seealso: java.lang.SecurityException
 - seealso: java.lang.RuntimePermission
 @since JDK1.0
 */
- (JavaLangThreadGroup *)getParent;

/*!
 @brief Interrupts all threads in this thread group.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 This method then calls the <code>interrupt</code> method on all the
 threads in this thread group and in all of its subgroups.
 @exception SecurityException  if the current thread is not allowed
 to access this thread group or any of the threads in
 the thread group.
 - seealso: java.lang.Thread#interrupt()
 - seealso: java.lang.SecurityException
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since 1.2
 */
- (void)interrupt;

/*!
 @brief Tests if this thread group is a daemon thread group.
 A
 daemon thread group is automatically destroyed when its last
 thread is stopped or its last thread group is destroyed.
 @return <code>true</code> if this thread group is a daemon thread group;
 <code>false</code> otherwise.
 @since JDK1.0
 */
- (jboolean)isDaemon;

/*!
 @brief Tests if this thread group has been destroyed.
 @return true if this object is destroyed
 @since JDK1.1
 */
- (jboolean)isDestroyed;

/*!
 @brief Prints information about this thread group to the standard
 output.
 This method is useful only for debugging.
 @since JDK1.0
 */
- (void)list;

/*!
 @brief Tests if this thread group is either the thread group
 argument or one of its ancestor thread groups.
 @param g   a thread group.
 @return <code>true</code> if this thread group is the thread group
 argument or one of its ancestor thread groups;
 <code>false</code> otherwise.
 @since JDK1.0
 */
- (jboolean)parentOfWithJavaLangThreadGroup:(JavaLangThreadGroup *)g;

/*!
 @brief Resumes all threads in this thread group.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 This method then calls the <code>resume</code> method on all the
 threads in this thread group and in all of its sub groups.
 @exception SecurityException  if the current thread is not allowed to
 access this thread group or any of the threads in the
 thread group.
 - seealso: java.lang.SecurityException
 - seealso: java.lang.Thread#resume()
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)resume __attribute__((deprecated));

/*!
 @brief Changes the daemon status of this thread group.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 A daemon thread group is automatically destroyed when its last
 thread is stopped or its last thread group is destroyed.
 @param daemon   if <code>true</code>, marks this thread group as
 a daemon thread group; otherwise, marks this
 thread group as normal.
 @exception SecurityException  if the current thread cannot modify
 this thread group.
 - seealso: java.lang.SecurityException
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)setDaemonWithBoolean:(jboolean)daemon;

/*!
 @brief Sets the maximum priority of the group.
 Threads in the thread
 group that already have a higher priority are not affected.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 If the <code>pri</code> argument is less than
 <code>Thread.MIN_PRIORITY</code> or greater than
 <code>Thread.MAX_PRIORITY</code>, it is clamped to those values.
 <p>
 Otherwise, the priority of this ThreadGroup object is set to the
 smaller of the specified <code>pri</code> and the maximum permitted
 priority of the parent of this thread group. (If this thread group
 is the system thread group, which has no parent, then its maximum
 priority is simply set to <code>pri</code>.) Then this method is
 called recursively, with <code>pri</code> as its argument, for
 every thread group that belongs to this thread group.
 @param pri   the new priority of the thread group.
 @exception SecurityException  if the current thread cannot modify
 this thread group.
 - seealso: #getMaxPriority
 - seealso: java.lang.SecurityException
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)setMaxPriorityWithInt:(jint)pri;

/*!
 @brief Stops all threads in this thread group.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 This method then calls the <code>stop</code> method on all the
 threads in this thread group and in all of its subgroups.
 @exception SecurityException  if the current thread is not allowed
 to access this thread group or any of the threads in
 the thread group.
 - seealso: java.lang.SecurityException
 - seealso: java.lang.Thread#stop()
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)stop __attribute__((deprecated));

/*!
 @brief Suspends all threads in this thread group.
 <p>
 First, the <code>checkAccess</code> method of this thread group is
 called with no arguments; this may result in a security exception.
 <p>
 This method then calls the <code>suspend</code> method on all the
 threads in this thread group and in all of its subgroups.
 @exception SecurityException  if the current thread is not allowed
 to access this thread group or any of the threads in
 the thread group.
 - seealso: java.lang.Thread#suspend()
 - seealso: java.lang.SecurityException
 - seealso: java.lang.ThreadGroup#checkAccess()
 @since JDK1.0
 */
- (void)suspend __attribute__((deprecated));

/*!
 @brief Returns a string representation of this Thread group.
 @return a string representation of this thread group.
 @since JDK1.0
 */
- (NSString *)description;

/*!
 @brief Called by the Java Virtual Machine when a thread in this
 thread group stops because of an uncaught exception, and the thread
 does not have a specific <code>Thread.UncaughtExceptionHandler</code>
 installed.
 <p>
 The <code>uncaughtException</code> method of
 <code>ThreadGroup</code> does the following:
 <ul>
 <li>If this thread group has a parent thread group, the
 <code>uncaughtException</code> method of that parent is called
 with the same two arguments.
 <li>Otherwise, this method checks to see if there is a
 default
 uncaught exception handler
  installed, and if so, its
 <code>uncaughtException</code> method is called with the same
 two arguments.
 <li>Otherwise, this method determines if the <code>Throwable</code>
 argument is an instance of <code>ThreadDeath</code>. If so, nothing
 special is done. Otherwise, a message containing the
 thread's name, as returned from the thread's <code>getName</code>
  method, and a stack backtrace,
 using the <code>Throwable</code>'s <code>printStackTrace</code>
  method, is
 printed to the standard error stream.
 </ul>
 <p>
 Applications can override this method in subclasses of
 <code>ThreadGroup</code> to provide alternative handling of
 uncaught exceptions.
 @param t   the thread that is about to exit.
 @param e   the uncaught exception.
 @since JDK1.0
 */
- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                            withNSException:(NSException *)e;

#pragma mark Package-Private

/*!
 @brief Adds the specified thread to this thread group.
 <p> Note: This method is called from both library code
 and the Virtual Machine. It is called from VM to add
 certain system threads to the system thread group.
 @param t
 the Thread to be added
 @throws IllegalThreadStateException
 if the Thread group has been destroyed
 */
- (void)addWithJavaLangThread:(JavaLangThread *)t;

/*!
 @brief Increments the count of unstarted threads in the thread group.
 Unstarted threads are not added to the thread group so that they
 can be collected if they are never started, but they must be
 counted so that daemon thread groups with unstarted threads in
 them are not destroyed.
 */
- (void)addUnstarted;

- (void)listWithJavaIoPrintStream:(JavaIoPrintStream *)outArg
                          withInt:(jint)indent;

/*!
 @brief Notifies the group that the thread <code>t</code> has failed
 an attempt to start.
 <p> The state of this thread group is rolled back as if the
 attempt to start the thread has never occurred. The thread is again
 considered an unstarted member of the thread group, and a subsequent
 attempt to start the thread is permitted.
 @param t
 the Thread whose start method was invoked
 @param failed
 true if the thread could not be started successfully
 */
- (void)threadStartFailedWithJavaLangThread:(JavaLangThread *)t;

/*!
 @brief Notifies the group that the thread <code>t</code> has terminated.
 <p> Destroy the group if all of the following conditions are
 true: this is a daemon thread group; there are no more alive
 or unstarted threads in the group; there are no subgroups in
 this thread group.
 @param t
 the Thread that has terminated
 */
- (void)threadTerminatedWithJavaLangThread:(JavaLangThread *)t;

@end

J2OBJC_STATIC_INIT(JavaLangThreadGroup)

J2OBJC_FIELD_SETTER(JavaLangThreadGroup, name_, NSString *)
J2OBJC_FIELD_SETTER(JavaLangThreadGroup, threads_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaLangThreadGroup, groups_, IOSObjectArray *)

inline JavaLangThreadGroup *JavaLangThreadGroup_get_systemThreadGroup();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaLangThreadGroup *JavaLangThreadGroup_systemThreadGroup;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangThreadGroup, systemThreadGroup, JavaLangThreadGroup *)

inline JavaLangThreadGroup *JavaLangThreadGroup_get_mainThreadGroup();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaLangThreadGroup *JavaLangThreadGroup_mainThreadGroup;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaLangThreadGroup, mainThreadGroup, JavaLangThreadGroup *)

FOUNDATION_EXPORT void JavaLangThreadGroup_initWithNSString_(JavaLangThreadGroup *self, NSString *name);

FOUNDATION_EXPORT JavaLangThreadGroup *new_JavaLangThreadGroup_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadGroup *create_JavaLangThreadGroup_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaLangThreadGroup_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *self, JavaLangThreadGroup *parent, NSString *name);

FOUNDATION_EXPORT JavaLangThreadGroup *new_JavaLangThreadGroup_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *parent, NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangThreadGroup *create_JavaLangThreadGroup_initWithJavaLangThreadGroup_withNSString_(JavaLangThreadGroup *parent, NSString *name);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangThreadGroup)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangThreadGroup")