//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/OptionalInt.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilOptionalInt")
#ifdef RESTRICT_JavaUtilOptionalInt
#define INCLUDE_ALL_JavaUtilOptionalInt 0
#else
#define INCLUDE_ALL_JavaUtilOptionalInt 1
#endif
#undef RESTRICT_JavaUtilOptionalInt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilOptionalInt_) && (INCLUDE_ALL_JavaUtilOptionalInt || defined(INCLUDE_JavaUtilOptionalInt))
#define JavaUtilOptionalInt_

@protocol JavaUtilFunctionIntConsumer;
@protocol JavaUtilFunctionIntSupplier;
@protocol JavaUtilFunctionSupplier;

/*!
 @brief A container object which may or may not contain a <code>int</code> value.
 If a value is present, <code>isPresent()</code> will return <code>true</code> and 
 <code>getAsInt()</code> will return the value. 
 <p>Additional methods that depend on the presence or absence of a contained
  value are provided, such as <code>orElse()</code>
  (return a default value if value not present) and 
 <code>ifPresent()</code> (execute a block
  of code if the value is present).
 @since 1.8
 */
@interface JavaUtilOptionalInt : NSObject

#pragma mark Public

/*!
 @brief Returns an empty <code>OptionalInt</code> instance.No value is present for this
  OptionalInt.
 @return an empty <code>OptionalInt</code>
 */
+ (JavaUtilOptionalInt *)empty;

/*!
 @brief Indicates whether some other object is "equal to" this OptionalInt.The
  other object is considered equal if: 
 <ul>
  <li>it is also an <code>OptionalInt</code> and; 
 <li>both instances have no value present or; 
 <li>the present values are "equal to" each other via <code>==</code>.
 </ul>
 @param obj an object to be tested for equality
 @return {code true} if the other object is "equal to" this object
  otherwise <code>false</code>
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief If a value is present in this <code>OptionalInt</code>, returns the value,
  otherwise throws <code>NoSuchElementException</code>.
 @return the value held by this <code>OptionalInt</code>
 @throw NoSuchElementExceptionif there is no value present
 - seealso: OptionalInt#isPresent()
 */
- (jint)getAsInt;

/*!
 @brief Returns the hash code value of the present value, if any, or 0 (zero) if
  no value is present.
 @return hash code value of the present value or 0 if no value is present
 */
- (NSUInteger)hash;

/*!
 @brief Have the specified consumer accept the value if a value is present,
  otherwise do nothing.
 @param consumer block to be executed if a value is present
 @throw NullPointerExceptionif value is present and <code>consumer</code> is
  null
 */
- (void)ifPresentWithJavaUtilFunctionIntConsumer:(id<JavaUtilFunctionIntConsumer>)consumer;

/*!
 @brief Return <code>true</code> if there is a value present, otherwise <code>false</code>.
 @return <code>true</code> if there is a value present, otherwise <code>false</code>
 */
- (jboolean)isPresent;

/*!
 @brief Return an <code>OptionalInt</code> with the specified value present.
 @param value the value to be present
 @return an <code>OptionalInt</code> with the value present
 */
+ (JavaUtilOptionalInt *)ofWithInt:(jint)value;

/*!
 @brief Return the value if present, otherwise return <code>other</code>.
 @param other the value to be returned if there is no value present
 @return the value, if present, otherwise <code>other</code>
 */
- (jint)orElseWithInt:(jint)other;

/*!
 @brief Return the value if present, otherwise invoke <code>other</code> and return
  the result of that invocation.
 @param other a <code>IntSupplier</code>  whose result is returned if no value
   is present
 @return the value if present otherwise the result of <code>other.getAsInt()</code>
 @throw NullPointerExceptionif value is not present and <code>other</code> is
  null
 */
- (jint)orElseGetWithJavaUtilFunctionIntSupplier:(id<JavaUtilFunctionIntSupplier>)other;

/*!
 @brief Return the contained value, if present, otherwise throw an exception
  to be created by the provided supplier.
 @param exceptionSupplier The supplier which will return the exception to  be thrown
 @return the present value
 @throw Xif there is no value present
 @throw NullPointerExceptionif no value is present and 
 <code>exceptionSupplier</code> is null
 */
- (jint)orElseThrowWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)exceptionSupplier;

/*!
 @brief  Returns a non-empty string representation of this object suitable for
  debugging.The exact presentation format is unspecified and may vary
  between implementations and versions.
 @return the string representation of this instance
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaUtilOptionalInt)

FOUNDATION_EXPORT JavaUtilOptionalInt *JavaUtilOptionalInt_empty(void);

FOUNDATION_EXPORT JavaUtilOptionalInt *JavaUtilOptionalInt_ofWithInt_(jint value);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilOptionalInt)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilOptionalInt")
