//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/AssertionError.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAssertionError")
#ifdef RESTRICT_JavaLangAssertionError
#define INCLUDE_ALL_JavaLangAssertionError 0
#else
#define INCLUDE_ALL_JavaLangAssertionError 1
#endif
#undef RESTRICT_JavaLangAssertionError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAssertionError_) && (INCLUDE_ALL_JavaLangAssertionError || defined(INCLUDE_JavaLangAssertionError))
#define JavaLangAssertionError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "../../java/lang/Error.h"

/*!
 @brief Thrown to indicate that an assertion has failed.
 <p>The seven one-argument public constructors provided by this
 class ensure that the assertion error returned by the invocation:
 @code

     new AssertionError(<i>expression</i>)
  
@endcode
 has as its detail message the <i>string conversion</i> of
 <i>expression</i> (as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>),
 regardless of the type of <i>expression</i>.
 @since 1.4
 */
@interface JavaLangAssertionError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs an AssertionError with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>boolean</code>, which is converted to
 a string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithBoolean:(jboolean)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>char</code>, which is converted to a
 string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithChar:(jchar)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>double</code>, which is converted to a
 string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithDouble:(jdouble)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>float</code>, which is converted to a
 string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithFloat:(jfloat)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>int</code>, which is converted to a
 string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithInt:(jint)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified <code>long</code>, which is converted to a
 string as defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 @param detailMessage value to be used in constructing detail message
 */
- (instancetype)initWithLong:(jlong)detailMessage;

/*!
 @brief Constructs an AssertionError with its detail message derived
 from the specified object, which is converted to a string as
 defined in section 15.18.1.1 of
 <cite>The Java&trade; Language Specification</cite>.
 <p>
 If the specified object is an instance of <code>Throwable</code>, it
 becomes the <i>cause</i> of the newly constructed assertion error.
 @param detailMessage value to be used in constructing detail message
 - seealso: Throwable#getCause()
 */
- (instancetype)initWithId:(id)detailMessage;

/*!
 @brief Constructs a new <code>AssertionError</code> with the specified
 detail message and cause.
 <p>Note that the detail message associated with
 <code>cause</code> is <i>not</i> automatically incorporated in
 this error's detail message.
 @param message the detail message, may be <code>null</code>
 @param cause the cause, may be <code>null</code>
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAssertionError)

FOUNDATION_EXPORT void JavaLangAssertionError_init(JavaLangAssertionError *self);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_init();

FOUNDATION_EXPORT void JavaLangAssertionError_initWithId_(JavaLangAssertionError *self, id detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithId_(id detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithId_(id detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithBoolean_(JavaLangAssertionError *self, jboolean detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithBoolean_(jboolean detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithBoolean_(jboolean detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithChar_(JavaLangAssertionError *self, jchar detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithChar_(jchar detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithChar_(jchar detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithInt_(JavaLangAssertionError *self, jint detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithInt_(jint detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithInt_(jint detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithLong_(JavaLangAssertionError *self, jlong detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithLong_(jlong detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithLong_(jlong detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithFloat_(JavaLangAssertionError *self, jfloat detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithFloat_(jfloat detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithFloat_(jfloat detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithDouble_(JavaLangAssertionError *self, jdouble detailMessage);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithDouble_(jdouble detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithDouble_(jdouble detailMessage);

FOUNDATION_EXPORT void JavaLangAssertionError_initWithNSString_withNSException_(JavaLangAssertionError *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaLangAssertionError *new_JavaLangAssertionError_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangAssertionError *create_JavaLangAssertionError_initWithNSString_withNSException_(NSString *message, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAssertionError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAssertionError")
