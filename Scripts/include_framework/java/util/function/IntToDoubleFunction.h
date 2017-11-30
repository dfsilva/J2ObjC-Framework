//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntToDoubleFunction.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntToDoubleFunction")
#ifdef RESTRICT_JavaUtilFunctionIntToDoubleFunction
#define INCLUDE_ALL_JavaUtilFunctionIntToDoubleFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntToDoubleFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionIntToDoubleFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionIntToDoubleFunction_) && (INCLUDE_ALL_JavaUtilFunctionIntToDoubleFunction || defined(INCLUDE_JavaUtilFunctionIntToDoubleFunction))
#define JavaUtilFunctionIntToDoubleFunction_

/*!
 @brief Represents a function that accepts an int-valued argument and produces a
  double-valued result.This is the <code>int</code>-to-<code>double</code> primitive
  specialization for <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsDouble(int)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionIntToDoubleFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (jdouble)applyAsDoubleWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntToDoubleFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntToDoubleFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntToDoubleFunction")
