//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicBoolean.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicBoolean
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicBoolean

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentAtomicAtomicBoolean_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicBoolean))
#define JavaUtilConcurrentAtomicAtomicBoolean_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

/*!
 @brief A <code>boolean</code> value that may be updated atomically.See the 
 <code>java.util.concurrent.atomic</code> package specification for
  description of the properties of atomic variables.
 An 
 <code>AtomicBoolean</code> is used in applications such as atomically
  updated flags, and cannot be used as a replacement for a 
 <code>java.lang.Boolean</code>.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicBoolean : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new <code>AtomicBoolean</code> with initial value <code>false</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>AtomicBoolean</code> with the given initial value.
 @param initialValue the initial value
 */
- (instancetype)initWithBoolean:(jboolean)initialValue;

/*!
 @brief Atomically sets the value to the given updated value
  if the current value <code>==</code> the expected value.
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful. False return indicates that
  the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithBoolean:(jboolean)expect
                         withBoolean:(jboolean)update;

/*!
 @brief Returns the current value.
 @return the current value
 */
- (jboolean)get;

/*!
 @brief Atomically sets to the given value and returns the previous value.
 @param newValue the new value
 @return the previous value
 */
- (jboolean)getAndSetWithBoolean:(jboolean)newValue;

/*!
 @brief Eventually sets to the given value.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithBoolean:(jboolean)newValue;

/*!
 @brief Unconditionally sets to the given value.
 @param newValue the new value
 */
- (void)setWithBoolean:(jboolean)newValue;

/*!
 @brief Returns the String representation of the current value.
 @return the String representation of the current value
 */
- (NSString *)description;

/*!
 @brief Atomically sets the value to the given updated value
  if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
  spuriously and does not provide ordering guarantees</a>, so is
  only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param expect the expected value
 @param update the new value
 @return <code>true</code> if successful
 */
- (jboolean)weakCompareAndSetWithBoolean:(jboolean)expect
                             withBoolean:(jboolean)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicBoolean)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(JavaUtilConcurrentAtomicAtomicBoolean *self, jboolean initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *new_JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(jboolean initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *create_JavaUtilConcurrentAtomicAtomicBoolean_initWithBoolean_(jboolean initialValue);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicBoolean_init(JavaUtilConcurrentAtomicAtomicBoolean *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *new_JavaUtilConcurrentAtomicAtomicBoolean_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicBoolean *create_JavaUtilConcurrentAtomicAtomicBoolean_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicBoolean)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicBoolean")
