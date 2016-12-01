//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/Assert.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkAssert")
#ifdef RESTRICT_JunitFrameworkAssert
#define INCLUDE_ALL_JunitFrameworkAssert 0
#else
#define INCLUDE_ALL_JunitFrameworkAssert 1
#endif
#undef RESTRICT_JunitFrameworkAssert

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkAssert_) && (INCLUDE_ALL_JunitFrameworkAssert || defined(INCLUDE_JunitFrameworkAssert))
#define JunitFrameworkAssert_

/*!
 @brief A set of assert methods.
 Messages are only displayed when an assert fails.
 */
__attribute__((deprecated))
@interface JunitFrameworkAssert : NSObject

#pragma mark Public

/*!
 @brief Asserts that two booleans are equal.
 */
+ (void)assertEqualsWithBoolean:(jboolean)expected
                    withBoolean:(jboolean)actual;

/*!
 @brief Asserts that two bytes are equal.
 */
+ (void)assertEqualsWithByte:(jbyte)expected
                    withByte:(jbyte)actual;

/*!
 @brief Asserts that two chars are equal.
 */
+ (void)assertEqualsWithChar:(jchar)expected
                    withChar:(jchar)actual;

/*!
 @brief Asserts that two doubles are equal concerning a delta.
 If the expected
 value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithDouble:(jdouble)expected
                    withDouble:(jdouble)actual
                    withDouble:(jdouble)delta;

/*!
 @brief Asserts that two floats are equal concerning a delta.
 If the expected
 value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithFloat:(jfloat)expected
                    withFloat:(jfloat)actual
                    withFloat:(jfloat)delta;

/*!
 @brief Asserts that two ints are equal.
 */
+ (void)assertEqualsWithInt:(jint)expected
                    withInt:(jint)actual;

/*!
 @brief Asserts that two longs are equal.
 */
+ (void)assertEqualsWithLong:(jlong)expected
                    withLong:(jlong)actual;

/*!
 @brief Asserts that two objects are equal.
 If they are not
 an AssertionFailedError is thrown.
 */
+ (void)assertEqualsWithId:(id)expected
                    withId:(id)actual;

/*!
 @brief Asserts that two shorts are equal.
 */
+ (void)assertEqualsWithShort:(jshort)expected
                    withShort:(jshort)actual;

/*!
 @brief Asserts that two booleans are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                     withBoolean:(jboolean)expected
                     withBoolean:(jboolean)actual;

/*!
 @brief Asserts that two bytes are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withByte:(jbyte)expected
                        withByte:(jbyte)actual;

/*!
 @brief Asserts that two chars are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withChar:(jchar)expected
                        withChar:(jchar)actual;

/*!
 @brief Asserts that two doubles are equal concerning a delta.
 If they are not
 an AssertionFailedError is thrown with the given message.  If the expected
 value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                      withDouble:(jdouble)expected
                      withDouble:(jdouble)actual
                      withDouble:(jdouble)delta;

/*!
 @brief Asserts that two floats are equal concerning a positive delta.
 If they
 are not an AssertionFailedError is thrown with the given message. If the
 expected value is infinity then the delta value is ignored.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                       withFloat:(jfloat)expected
                       withFloat:(jfloat)actual
                       withFloat:(jfloat)delta;

/*!
 @brief Asserts that two ints are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                         withInt:(jint)expected
                         withInt:(jint)actual;

/*!
 @brief Asserts that two longs are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                        withLong:(jlong)expected
                        withLong:(jlong)actual;

/*!
 @brief Asserts that two objects are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

/*!
 @brief Asserts that two shorts are equal.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                       withShort:(jshort)expected
                       withShort:(jshort)actual;

/*!
 @brief Asserts that two Strings are equal.
 */
+ (void)assertEqualsWithNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

/*!
 @brief Asserts that two Strings are equal.
 */
+ (void)assertEqualsWithNSString:(NSString *)message
                    withNSString:(NSString *)expected
                    withNSString:(NSString *)actual;

/*!
 @brief Asserts that a condition is false.
 If it isn't it throws
 an AssertionFailedError.
 */
+ (void)assertFalseWithBoolean:(jboolean)condition;

/*!
 @brief Asserts that a condition is false.
 If it isn't it throws
 an AssertionFailedError with the given message.
 */
+ (void)assertFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)condition;

/*!
 @brief Asserts that an object isn't null.
 */
+ (void)assertNotNullWithId:(id)object;

/*!
 @brief Asserts that an object isn't null.
 If it is
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertNotNullWithNSString:(NSString *)message
                           withId:(id)object;

/*!
 @brief Asserts that two objects do not refer to the same object.
 If they do
 refer to the same object an AssertionFailedError is thrown.
 */
+ (void)assertNotSameWithId:(id)expected
                     withId:(id)actual;

/*!
 @brief Asserts that two objects do not refer to the same object.
 If they do
 refer to the same object an AssertionFailedError is thrown with the
 given message.
 */
+ (void)assertNotSameWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

/*!
 @brief Asserts that an object is null.
 If it isn't an <code>AssertionError</code> is
 thrown.
 Message contains: Expected: <null> but was: object
 @param object Object to check or <code>null</code>
 */
+ (void)assertNullWithId:(id)object;

/*!
 @brief Asserts that an object is null.
 If it is not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertNullWithNSString:(NSString *)message
                        withId:(id)object;

/*!
 @brief Asserts that two objects refer to the same object.
 If they are not
 the same an AssertionFailedError is thrown.
 */
+ (void)assertSameWithId:(id)expected
                  withId:(id)actual;

/*!
 @brief Asserts that two objects refer to the same object.
 If they are not
 an AssertionFailedError is thrown with the given message.
 */
+ (void)assertSameWithNSString:(NSString *)message
                        withId:(id)expected
                        withId:(id)actual;

/*!
 @brief Asserts that a condition is true.
 If it isn't it throws
 an AssertionFailedError.
 */
+ (void)assertTrueWithBoolean:(jboolean)condition;

/*!
 @brief Asserts that a condition is true.
 If it isn't it throws
 an AssertionFailedError with the given message.
 */
+ (void)assertTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)condition;

/*!
 @brief Fails a test with no message.
 */
+ (void)fail;

/*!
 @brief Fails a test with the given message.
 */
+ (void)failWithNSString:(NSString *)message;

+ (void)failNotEqualsWithNSString:(NSString *)message
                           withId:(id)expected
                           withId:(id)actual;

+ (void)failNotSameWithNSString:(NSString *)message
                         withId:(id)expected
                         withId:(id)actual;

+ (void)failSameWithNSString:(NSString *)message;

+ (NSString *)formatWithNSString:(NSString *)message
                          withId:(id)expected
                          withId:(id)actual;

#pragma mark Protected

/*!
 @brief Protect constructor since it is a static only class
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkAssert)

FOUNDATION_EXPORT void JunitFrameworkAssert_init(JunitFrameworkAssert *self);

FOUNDATION_EXPORT JunitFrameworkAssert *new_JunitFrameworkAssert_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkAssert *create_JunitFrameworkAssert_init();

FOUNDATION_EXPORT void JunitFrameworkAssert_assertTrueWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertTrueWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertFalseWithNSString_withBoolean_(NSString *message, jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertFalseWithBoolean_(jboolean condition);

FOUNDATION_EXPORT void JunitFrameworkAssert_failWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkAssert_fail();

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withNSString_withNSString_(NSString *message, NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withNSString_(NSString *expected, NSString *actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withDouble_withDouble_withDouble_(NSString *message, jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithDouble_withDouble_withDouble_(jdouble expected, jdouble actual, jdouble delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withFloat_withFloat_withFloat_(NSString *message, jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithFloat_withFloat_withFloat_(jfloat expected, jfloat actual, jfloat delta);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withLong_withLong_(NSString *message, jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithLong_withLong_(jlong expected, jlong actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withBoolean_withBoolean_(NSString *message, jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithBoolean_withBoolean_(jboolean expected, jboolean actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withByte_withByte_(NSString *message, jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithByte_withByte_(jbyte expected, jbyte actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withChar_withChar_(NSString *message, jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithChar_withChar_(jchar expected, jchar actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withShort_withShort_(NSString *message, jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithShort_withShort_(jshort expected, jshort actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithNSString_withInt_withInt_(NSString *message, jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertEqualsWithInt_withInt_(jint expected, jint actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNullWithId_(id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNullWithNSString_withId_(NSString *message, id object);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_assertNotSameWithId_withId_(id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_failSameWithNSString_(NSString *message);

FOUNDATION_EXPORT void JunitFrameworkAssert_failNotSameWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT void JunitFrameworkAssert_failNotEqualsWithNSString_withId_withId_(NSString *message, id expected, id actual);

FOUNDATION_EXPORT NSString *JunitFrameworkAssert_formatWithNSString_withId_withId_(NSString *message, id expected, id actual);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkAssert)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkAssert")
