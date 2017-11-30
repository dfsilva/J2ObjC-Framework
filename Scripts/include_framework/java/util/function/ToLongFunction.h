//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ToLongFunction.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionToLongFunction")
#ifdef RESTRICT_JavaUtilFunctionToLongFunction
#define INCLUDE_ALL_JavaUtilFunctionToLongFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionToLongFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionToLongFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionToLongFunction_) && (INCLUDE_ALL_JavaUtilFunctionToLongFunction || defined(INCLUDE_JavaUtilFunctionToLongFunction))
#define JavaUtilFunctionToLongFunction_

/*!
 @brief Represents a function that produces a long-valued result.This is the 
 <code>long</code>-producing primitive specialization for <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsLong(Object)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionToLongFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (jlong)applyAsLongWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionToLongFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionToLongFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionToLongFunction")
