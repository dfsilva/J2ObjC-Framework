//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/Phaser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentPhaser")
#ifdef RESTRICT_JavaUtilConcurrentPhaser
#define INCLUDE_ALL_JavaUtilConcurrentPhaser 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentPhaser 1
#endif
#undef RESTRICT_JavaUtilConcurrentPhaser

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentPhaser_) && (INCLUDE_ALL_JavaUtilConcurrentPhaser || defined(INCLUDE_JavaUtilConcurrentPhaser))
#define JavaUtilConcurrentPhaser_

@class JavaUtilConcurrentTimeUnit;

/*!
 @brief A reusable synchronization barrier, similar in functionality to 
 <code>CyclicBarrier</code> and 
 <code>CountDownLatch</code>
  but supporting more flexible usage.
 <p><b>Registration.</b> Unlike the case for other barriers, the
  number of parties <em>registered</em> to synchronize on a phaser
  may vary over time.  Tasks may be registered at any time (using
  methods <code>register</code>, <code>bulkRegister</code>, or forms of
  constructors establishing initial numbers of parties), and
  optionally deregistered upon any arrival (using <code>arriveAndDeregister</code>
 ).  As is the case with most basic
  synchronization constructs, registration and deregistration affect
  only internal counts; they do not establish any further internal
  bookkeeping, so tasks cannot query whether they are registered.
  (However, you can introduce such bookkeeping by subclassing this
  class.) 
 <p><b>Synchronization.</b> Like a <code>CyclicBarrier</code>, a <code>Phaser</code>
  may be repeatedly awaited.  Method <code>arriveAndAwaitAdvance</code>
  has effect analogous to <code>CyclicBarrier.await</code>
 . Each
  generation of a phaser has an associated phase number. The phase
  number starts at zero, and advances when all parties arrive at the
  phaser, wrapping around to zero after reaching <code>Integer.MAX_VALUE</code>
 . The use of phase numbers enables independent
  control of actions upon arrival at a phaser and upon awaiting
  others, via two kinds of methods that may be invoked by any
  registered party: 
 <ul>
    <li><b>Arrival.</b> Methods <code>arrive</code> and
        <code>arriveAndDeregister</code> record arrival.  These methods
        do not block, but return an associated <em>arrival phase
        number</em>; that is, the phase number of the phaser to which
        the arrival applied. When the final party for a given phase
        arrives, an optional action is performed and the phase
        advances.  These actions are performed by the party
        triggering a phase advance, and are arranged by overriding
        method <code>int)</code>, which also controls
        termination. Overriding this method is similar to, but more
        flexible than, providing a barrier action to a <code>CyclicBarrier</code>
 .
    <li><b>Waiting.</b> Method <code>awaitAdvance</code> requires an
        argument indicating an arrival phase number, and returns when
        the phaser advances to (or is already at) a different phase.
        Unlike similar constructions using <code>CyclicBarrier</code>,
        method <code>awaitAdvance</code> continues to wait even if the
        waiting thread is interrupted. Interruptible and timeout
        versions are also available, but exceptions encountered while
        tasks wait interruptibly or with timeout do not change the
        state of the phaser. If necessary, you can perform any
        associated recovery within handlers of those exceptions,
        often after invoking <code>forceTermination</code>.  Phasers may
        also be used by tasks executing in a <code>ForkJoinPool</code>.
        Progress is ensured if the pool's parallelismLevel can
        accommodate the maximum number of simultaneously blocked
        parties. 
 </ul>
  
 <p><b>Termination.</b> A phaser may enter a <em>termination</em>
  state, that may be checked using method <code>isTerminated</code>. Upon
  termination, all synchronization methods immediately return without
  waiting for advance, as indicated by a negative return value.
  Similarly, attempts to register upon termination have no effect.
  Termination is triggered when an invocation of <code>onAdvance</code>
  returns <code>true</code>. The default implementation returns <code>true</code>
  if a deregistration has caused the number of registered
  parties to become zero.  As illustrated below, when phasers control
  actions with a fixed number of iterations, it is often convenient
  to override this method to cause termination when the current phase
  number reaches a threshold. Method <code>forceTermination</code> is
  also available to abruptly release waiting threads and allow them
  to terminate. 
 <p><b>Tiering.</b> Phasers may be <em>tiered</em> (i.e.,
  constructed in tree structures) to reduce contention. Phasers with
  large numbers of parties that would otherwise experience heavy
  synchronization contention costs may instead be set up so that
  groups of sub-phasers share a common parent.  This may greatly
  increase throughput even though it incurs greater per-operation
  overhead. 
 <p>In a tree of tiered phasers, registration and deregistration of
  child phasers with their parent are managed automatically.
  Whenever the number of registered parties of a child phaser becomes
  non-zero (as established in the <code>Phaser(Phaser,int)</code>
  constructor, <code>register</code>, or <code>bulkRegister</code>), the
  child phaser is registered with its parent.  Whenever the number of
  registered parties becomes zero as the result of an invocation of 
 <code>arriveAndDeregister</code>, the child phaser is deregistered
  from its parent. 
 <p><b>Monitoring.</b> While synchronization methods may be invoked
  only by registered parties, the current state of a phaser may be
  monitored by any caller.  At any given moment there are <code>getRegisteredParties</code>
  parties in total, of which <code>getArrivedParties</code>
  have arrived at the current phase (<code>getPhase</code>
 ).  When the remaining (<code>getUnarrivedParties</code>)
  parties arrive, the phase advances.  The values returned by these
  methods may reflect transient states and so are not in general
  useful for synchronization control.  Method <code>toString</code>
  returns snapshots of these state queries in a form convenient for
  informal monitoring. 
 <p><b>Sample usages:</b>
  
 <p>A <code>Phaser</code> may be used instead of a <code>CountDownLatch</code>
  to control a one-shot action serving a variable number of parties.
  The typical idiom is for the method setting this up to first
  register, then start the actions, then deregister, as in: 
 @code
  void runTasks(List<Runnable> tasks) {
    final Phaser phaser = new Phaser(1); // "1" to register self
    // create and start threads
    for (final Runnable task : tasks) {
      phaser.register();
      new Thread() {
        public void run() {
          phaser.arriveAndAwaitAdvance(); // await all creation
          task.run();
        }
      }.start();    }
    // allow threads to start and deregister self
    phaser.arriveAndDeregister();
  }
 
@endcode
  
 <p>One way to cause a set of threads to repeatedly perform actions
  for a given number of iterations is to override <code>onAdvance</code>:
  
 @code
  void startTasks(List<Runnable> tasks, final int iterations) {
    final Phaser phaser = new Phaser() {
      protected boolean onAdvance(int phase, int registeredParties) {
        return phase >= iterations || registeredParties == 0;
      }
    };
    phaser.register();
    for (final Runnable task : tasks) {
      phaser.register();
      new Thread() {
        public void run() {
          do {
            task.run();
            phaser.arriveAndAwaitAdvance();
          } while (!phaser.isTerminated());        }
      }.start();    }
    phaser.arriveAndDeregister(); // deregister self, don't wait
  }
 
@endcode
  If the main task must later await termination, it
  may re-register and then execute a similar loop: 
 @code
   // ...
    phaser.register();
    while (!phaser.isTerminated())
      phaser.arriveAndAwaitAdvance();
 
@endcode
  
 <p>Related constructions may be used to await particular phase numbers
  in contexts where you are sure that the phase will never wrap around 
 <code>Integer.MAX_VALUE</code>. For example: 
 @code
  void awaitPhase(Phaser phaser, int phase) {
    int p = phaser.register(); // assumes caller not already registered
    while (p < phase) {
      if (phaser.isTerminated())
        // ... deal with unexpected termination
      else
        p = phaser.arriveAndAwaitAdvance();
    }
    phaser.arriveAndDeregister();
  }
 
@endcode
  
 <p>To create a set of <code>n</code> tasks using a tree of phasers, you
  could use code of the following form, assuming a Task class with a
  constructor accepting a <code>Phaser</code> that it registers with upon
  construction. After invocation of <code>build(new Task[n], 0, n,
  new Phaser())</code>
 , these tasks could then be started, for example by
  submitting to a pool: 
 @code
  void build(Task[] tasks, int lo, int hi, Phaser ph) {
    if (hi - lo > TASKS_PER_PHASER) {
      for (int i = lo; i < hi; i += TASKS_PER_PHASER) {
        int j = Math.min(i + TASKS_PER_PHASER, hi);
        build(tasks, i, j, new Phaser(ph));
      }
    } else {
      for (int i = lo; i < hi; ++i)
        tasks[i] = new Task(ph);
        // assumes new Task(ph) performs ph.register()
    }  }
 
@endcode
  The best value of <code>TASKS_PER_PHASER</code> depends mainly on
  expected synchronization rates. A value as low as four may
  be appropriate for extremely small per-phase task bodies (thus
  high rates), or up to hundreds for extremely large ones. 
 <p><b>Implementation notes</b>: This implementation restricts the
  maximum number of parties to 65535. Attempts to register additional
  parties result in <code>IllegalStateException</code>. However, you can and
  should create tiered phasers to accommodate arbitrarily large sets
  of participants.
 @since 1.7
 @author Doug Lea
 */
@interface JavaUtilConcurrentPhaser : NSObject

+ (jint)SPINS_PER_ARRIVAL;

#pragma mark Public

/*!
 @brief Creates a new phaser with no initially registered parties, no
  parent, and initial phase number 0.Any thread using this
  phaser will need to first register for it.
 */
- (instancetype)init;

/*!
 @brief Creates a new phaser with the given number of registered
  unarrived parties, no parent, and initial phase number 0.
 @param parties the number of parties required to advance to the  next phase
 @throw IllegalArgumentExceptionif parties less than zero
  or greater than the maximum number of parties supported
 */
- (instancetype)initWithInt:(jint)parties;

/*!
 @brief Equivalent to <code>0)</code>.
 @param parent the parent phaser
 */
- (instancetype)initWithJavaUtilConcurrentPhaser:(JavaUtilConcurrentPhaser *)parent;

/*!
 @brief Creates a new phaser with the given parent and number of
  registered unarrived parties.When the given parent is non-null
  and the given number of parties is greater than zero, this
  child phaser is registered with its parent.
 @param parent the parent phaser
 @param parties the number of parties required to advance to the  next phase
 @throw IllegalArgumentExceptionif parties less than zero
  or greater than the maximum number of parties supported
 */
- (instancetype)initWithJavaUtilConcurrentPhaser:(JavaUtilConcurrentPhaser *)parent
                                         withInt:(jint)parties;

/*!
 @brief Arrives at this phaser, without waiting for others to arrive.
 <p>It is a usage error for an unregistered party to invoke this
  method.  However, this error may result in an <code>IllegalStateException</code>
  only upon some subsequent operation on
  this phaser, if ever.
 @return the arrival phase number, or a negative value if terminated
 @throw IllegalStateExceptionif not terminated and the number
  of unarrived parties would become negative
 */
- (jint)arrive;

/*!
 @brief Arrives at this phaser and awaits others.Equivalent in effect
  to <code>awaitAdvance(arrive())</code>.
 If you need to await with
  interruption or timeout, you can arrange this with an analogous
  construction using one of the other forms of the <code>awaitAdvance</code>
  method.  If instead you need to deregister upon
  arrival, use <code>awaitAdvance(arriveAndDeregister())</code>.
  
 <p>It is a usage error for an unregistered party to invoke this
  method.  However, this error may result in an <code>IllegalStateException</code>
  only upon some subsequent operation on
  this phaser, if ever.
 @return the arrival phase number, or the (negative) 
 phase if terminated
 @throw IllegalStateExceptionif not terminated and the number
  of unarrived parties would become negative
 */
- (jint)arriveAndAwaitAdvance;

/*!
 @brief Arrives at this phaser and deregisters from it without waiting
  for others to arrive.Deregistration reduces the number of
  parties required to advance in future phases.
 If this phaser
  has a parent, and deregistration causes this phaser to have
  zero parties, this phaser is also deregistered from its parent. 
 <p>It is a usage error for an unregistered party to invoke this
  method.  However, this error may result in an <code>IllegalStateException</code>
  only upon some subsequent operation on
  this phaser, if ever.
 @return the arrival phase number, or a negative value if terminated
 @throw IllegalStateExceptionif not terminated and the number
  of registered or unarrived parties would become negative
 */
- (jint)arriveAndDeregister;

/*!
 @brief Awaits the phase of this phaser to advance from the given phase
  value, returning immediately if the current phase is not equal
  to the given phase value or this phaser is terminated.
 @param phase an arrival phase number, or negative value if  terminated; this argument is normally the value returned by a
   previous call to 
 <code>arrive</code>  or <code>arriveAndDeregister</code> .
 @return the next arrival phase number, or the argument if it is
  negative, or the (negative) phase
  if terminated
 */
- (jint)awaitAdvanceWithInt:(jint)phase;

/*!
 @brief Awaits the phase of this phaser to advance from the given phase
  value, throwing <code>InterruptedException</code> if interrupted
  while waiting, or returning immediately if the current phase is
  not equal to the given phase value or this phaser is
  terminated.
 @param phase an arrival phase number, or negative value if  terminated; this argument is normally the value returned by a
   previous call to 
 <code>arrive</code>  or <code>arriveAndDeregister</code> .
 @return the next arrival phase number, or the argument if it is
  negative, or the (negative) phase
  if terminated
 @throw InterruptedExceptionif thread interrupted while waiting
 */
- (jint)awaitAdvanceInterruptiblyWithInt:(jint)phase;

/*!
 @brief Awaits the phase of this phaser to advance from the given phase
  value or the given timeout to elapse, throwing <code>InterruptedException</code>
  if interrupted while waiting, or
  returning immediately if the current phase is not equal to the
  given phase value or this phaser is terminated.
 @param phase an arrival phase number, or negative value if  terminated; this argument is normally the value returned by a
   previous call to 
 <code>arrive</code>  or <code>arriveAndDeregister</code> .
 @param timeout how long to wait before giving up, in units of         
 <code>unit</code>
 @param unit a <code>TimeUnit</code>  determining how to interpret the
          <code>timeout</code>  parameter
 @return the next arrival phase number, or the argument if it is
  negative, or the (negative) phase
  if terminated
 @throw InterruptedExceptionif thread interrupted while waiting
 @throw TimeoutExceptionif timed out while waiting
 */
- (jint)awaitAdvanceInterruptiblyWithInt:(jint)phase
                                withLong:(jlong)timeout
          withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Adds the given number of new unarrived parties to this phaser.
 If an ongoing invocation of <code>onAdvance</code> is in progress,
  this method may await its completion before returning.  If this
  phaser has a parent, and the given number of parties is greater
  than zero, and this phaser previously had no registered
  parties, this child phaser is also registered with its parent.
  If this phaser is terminated, the attempt to register has no
  effect, and a negative value is returned.
 @param parties the number of additional parties required to  advance to the next phase
 @return the arrival phase number to which this registration
  applied.  If this value is negative, then this phaser has
  terminated, in which case registration has no effect.
 @throw IllegalStateExceptionif attempting to register more
  than the maximum supported number of parties
 @throw IllegalArgumentExceptionif <code>parties < 0</code>
 */
- (jint)bulkRegisterWithInt:(jint)parties;

/*!
 @brief Forces this phaser to enter termination state.Counts of
  registered parties are unaffected.
 If this phaser is a member
  of a tiered set of phasers, then all of the phasers in the set
  are terminated.  If this phaser is already terminated, this
  method has no effect.  This method may be useful for
  coordinating recovery after one or more tasks encounter
  unexpected exceptions.
 */
- (void)forceTermination;

/*!
 @brief Returns the number of registered parties that have arrived at
  the current phase of this phaser.If this phaser has terminated,
  the returned value is meaningless and arbitrary.
 @return the number of arrived parties
 */
- (jint)getArrivedParties;

/*!
 @brief Returns the parent of this phaser, or <code>null</code> if none.
 @return the parent of this phaser, or <code>null</code> if none
 */
- (JavaUtilConcurrentPhaser *)getParent;

/*!
 @brief Returns the current phase number.The maximum phase number is 
 <code>Integer.MAX_VALUE</code>, after which it restarts at
  zero.
 Upon termination, the phase number is negative,
  in which case the prevailing phase prior to termination
  may be obtained via <code>getPhase() + Integer.MIN_VALUE</code>.
 @return the phase number, or a negative value if terminated
 */
- (jint)getPhase;

/*!
 @brief Returns the number of parties registered at this phaser.
 @return the number of parties
 */
- (jint)getRegisteredParties;

/*!
 @brief Returns the root ancestor of this phaser, which is the same as
  this phaser if it has no parent.
 @return the root ancestor of this phaser
 */
- (JavaUtilConcurrentPhaser *)getRoot;

/*!
 @brief Returns the number of registered parties that have not yet
  arrived at the current phase of this phaser.If this phaser has
  terminated, the returned value is meaningless and arbitrary.
 @return the number of unarrived parties
 */
- (jint)getUnarrivedParties;

/*!
 @brief Returns <code>true</code> if this phaser has been terminated.
 @return <code>true</code> if this phaser has been terminated
 */
- (jboolean)isTerminated;

/*!
 @brief Adds a new unarrived party to this phaser.If an ongoing
  invocation of <code>onAdvance</code> is in progress, this method
  may await its completion before returning.
 If this phaser has
  a parent, and this phaser previously had no registered parties,
  this child phaser is also registered with its parent. If
  this phaser is terminated, the attempt to register has
  no effect, and a negative value is returned.
 @return the arrival phase number to which this registration
  applied.  If this value is negative, then this phaser has
  terminated, in which case registration has no effect.
 @throw IllegalStateExceptionif attempting to register more
  than the maximum supported number of parties
 */
- (jint)register__;

/*!
 @brief Returns a string identifying this phaser, as well as its
  state.The state, in brackets, includes the String <code>"phase = "</code>
  followed by the phase number, <code>"parties = "</code>
  followed by the number of registered parties, and <code>"arrived = "</code>
  followed by the number of arrived parties.
 @return a string identifying this phaser, as well as its state
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Overridable method to perform an action upon impending phase
  advance, and to control termination.This method is invoked
  upon arrival of the party advancing this phaser (when all other
  waiting parties are dormant).
 If this method returns <code>true</code>
 , this phaser will be set to a final termination state
  upon advance, and subsequent calls to <code>isTerminated</code>
  will return true. Any (unchecked) Exception or Error thrown by
  an invocation of this method is propagated to the party
  attempting to advance this phaser, in which case no advance
  occurs. 
 <p>The arguments to this method provide the state of the phaser
  prevailing for the current transition.  The effects of invoking
  arrival, registration, and waiting methods on this phaser from
  within <code>onAdvance</code> are unspecified and should not be
  relied on. 
 <p>If this phaser is a member of a tiered set of phasers, then 
 <code>onAdvance</code> is invoked only for its root phaser on each
  advance. 
 <p>To support the most common use cases, the default
  implementation of this method returns <code>true</code> when the
  number of registered parties has become zero as the result of a
  party invoking <code>arriveAndDeregister</code>.  You can disable
  this behavior, thus enabling continuation upon future
  registrations, by overriding this method to always return 
 <code>false</code>:
  
 @code
  Phaser phaser = new Phaser() {
    protected boolean onAdvance(int phase, int parties) { return false; } }
 
@endcode
 @param phase the current phase number on entry to this method,  before this phaser is advanced
 @param registeredParties the current number of registered parties
 @return <code>true</code> if this phaser should terminate
 */
- (jboolean)onAdvanceWithInt:(jint)phase
                     withInt:(jint)registeredParties;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentPhaser)

/*!
 @brief The number of times to spin before blocking while waiting for
  advance, per arrival while waiting.On multiprocessors, fully
  blocking and waking up a large number of threads all at once is
  usually a very slow process, so we use rechargeable spins to
  avoid it when threads regularly arrive: When a thread in
  internalAwaitAdvance notices another arrival before blocking,
  and there appear to be enough CPUs available, it spins
  SPINS_PER_ARRIVAL more times before blocking.
 The value trades
  off good-citizenship vs big unnecessary slowdowns.
 */
inline jint JavaUtilConcurrentPhaser_get_SPINS_PER_ARRIVAL(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jint JavaUtilConcurrentPhaser_SPINS_PER_ARRIVAL;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(JavaUtilConcurrentPhaser, SPINS_PER_ARRIVAL, jint)

FOUNDATION_EXPORT void JavaUtilConcurrentPhaser_init(JavaUtilConcurrentPhaser *self);

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *new_JavaUtilConcurrentPhaser_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *create_JavaUtilConcurrentPhaser_init(void);

FOUNDATION_EXPORT void JavaUtilConcurrentPhaser_initWithInt_(JavaUtilConcurrentPhaser *self, jint parties);

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *new_JavaUtilConcurrentPhaser_initWithInt_(jint parties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *create_JavaUtilConcurrentPhaser_initWithInt_(jint parties);

FOUNDATION_EXPORT void JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_(JavaUtilConcurrentPhaser *self, JavaUtilConcurrentPhaser *parent);

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *new_JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_(JavaUtilConcurrentPhaser *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *create_JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_(JavaUtilConcurrentPhaser *parent);

FOUNDATION_EXPORT void JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_withInt_(JavaUtilConcurrentPhaser *self, JavaUtilConcurrentPhaser *parent, jint parties);

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *new_JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_withInt_(JavaUtilConcurrentPhaser *parent, jint parties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentPhaser *create_JavaUtilConcurrentPhaser_initWithJavaUtilConcurrentPhaser_withInt_(JavaUtilConcurrentPhaser *parent, jint parties);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentPhaser)

#endif

#if !defined (JavaUtilConcurrentPhaser_QNode_) && (INCLUDE_ALL_JavaUtilConcurrentPhaser || defined(INCLUDE_JavaUtilConcurrentPhaser_QNode))
#define JavaUtilConcurrentPhaser_QNode_

#define RESTRICT_JavaUtilConcurrentForkJoinPool 1
#define INCLUDE_JavaUtilConcurrentForkJoinPool_ManagedBlocker 1
#include "java/util/concurrent/ForkJoinPool.h"

@class JavaLangThread;
@class JavaUtilConcurrentPhaser;

/*!
 @brief Wait nodes for Treiber stack representing wait queue.
 */
@interface JavaUtilConcurrentPhaser_QNode : NSObject < JavaUtilConcurrentForkJoinPool_ManagedBlocker > {
 @public
  JavaUtilConcurrentPhaser *phaser_;
  jint phase_;
  jboolean interruptible_;
  jboolean timed_;
  jboolean wasInterrupted_;
  jlong nanos_;
  jlong deadline_;
  volatile_id thread_;
  JavaUtilConcurrentPhaser_QNode *next_;
}

#pragma mark Public

- (jboolean)block;

- (jboolean)isReleasable;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentPhaser:(JavaUtilConcurrentPhaser *)phaser
                                         withInt:(jint)phase
                                     withBoolean:(jboolean)interruptible
                                     withBoolean:(jboolean)timed
                                        withLong:(jlong)nanos;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentPhaser_QNode)

J2OBJC_FIELD_SETTER(JavaUtilConcurrentPhaser_QNode, phaser_, JavaUtilConcurrentPhaser *)
J2OBJC_VOLATILE_FIELD_SETTER(JavaUtilConcurrentPhaser_QNode, thread_, JavaLangThread *)
J2OBJC_FIELD_SETTER(JavaUtilConcurrentPhaser_QNode, next_, JavaUtilConcurrentPhaser_QNode *)

FOUNDATION_EXPORT void JavaUtilConcurrentPhaser_QNode_initWithJavaUtilConcurrentPhaser_withInt_withBoolean_withBoolean_withLong_(JavaUtilConcurrentPhaser_QNode *self, JavaUtilConcurrentPhaser *phaser, jint phase, jboolean interruptible, jboolean timed, jlong nanos);

FOUNDATION_EXPORT JavaUtilConcurrentPhaser_QNode *new_JavaUtilConcurrentPhaser_QNode_initWithJavaUtilConcurrentPhaser_withInt_withBoolean_withBoolean_withLong_(JavaUtilConcurrentPhaser *phaser, jint phase, jboolean interruptible, jboolean timed, jlong nanos) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentPhaser_QNode *create_JavaUtilConcurrentPhaser_QNode_initWithJavaUtilConcurrentPhaser_withInt_withBoolean_withBoolean_withLong_(JavaUtilConcurrentPhaser *phaser, jint phase, jboolean interruptible, jboolean timed, jlong nanos);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentPhaser_QNode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentPhaser")
