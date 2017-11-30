//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongToIntFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongToIntFunction")
#ifdef RESTRICT_JavaUtilFunctionLongToIntFunction
#define INCLUDE_ALL_JavaUtilFunctionLongToIntFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongToIntFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionLongToIntFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionLongToIntFunction_) && (INCLUDE_ALL_JavaUtilFunctionLongToIntFunction || defined(INCLUDE_JavaUtilFunctionLongToIntFunction))
#define JavaUtilFunctionLongToIntFunction_

/*!
 @brief Represents a function that accepts a long-valued argument and produces an
  int-valued result.This is the <code>long</code>-to-<code>int</code> primitive
  specialization for <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsInt(long)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionLongToIntFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (jint)applyAsIntWithLong:(jlong)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongToIntFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongToIntFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongToIntFunction")
