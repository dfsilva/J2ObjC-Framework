//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/DoubleUnaryOperator.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionDoubleUnaryOperator")
#ifdef RESTRICT_JavaUtilFunctionDoubleUnaryOperator
#define INCLUDE_ALL_JavaUtilFunctionDoubleUnaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionDoubleUnaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionDoubleUnaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionDoubleUnaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionDoubleUnaryOperator || defined(INCLUDE_JavaUtilFunctionDoubleUnaryOperator))
#define JavaUtilFunctionDoubleUnaryOperator_

/*!
 @brief Represents an operation on a single <code>double</code>-valued operand that produces
  a <code>double</code>-valued result.This is the primitive type specialization of 
 <code>UnaryOperator</code> for <code>double</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
  whose functional method is <code>applyAsDouble(double)</code>.
 - seealso: UnaryOperator
 @since 1.8
 */
@protocol JavaUtilFunctionDoubleUnaryOperator < JavaObject >

/*!
 @brief Applies this operator to the given operand.
 @param operand the operand
 @return the operator result
 */
- (jdouble)applyAsDoubleWithDouble:(jdouble)operand;

/*!
 @brief Returns a composed operator that first applies the <code>before</code>
  operator to its input, and then applies this operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param before the operator to apply before this operator is applied
 @return a composed operator that first applies the <code>before</code>
  operator and then applies this operator
 @throw NullPointerExceptionif before is null
 - seealso: #andThen(DoubleUnaryOperator)
 */
- (id<JavaUtilFunctionDoubleUnaryOperator>)composeWithJavaUtilFunctionDoubleUnaryOperator:(id<JavaUtilFunctionDoubleUnaryOperator>)before;

/*!
 @brief Returns a composed operator that first applies this operator to
  its input, and then applies the <code>after</code> operator to the result.
 If evaluation of either operator throws an exception, it is relayed to
  the caller of the composed operator.
 @param after the operator to apply after this operator is applied
 @return a composed operator that first applies this operator and then
  applies the <code>after</code> operator
 @throw NullPointerExceptionif after is null
 - seealso: #compose(DoubleUnaryOperator)
 */
- (id<JavaUtilFunctionDoubleUnaryOperator>)andThenWithJavaUtilFunctionDoubleUnaryOperator:(id<JavaUtilFunctionDoubleUnaryOperator>)after;

@end

@interface JavaUtilFunctionDoubleUnaryOperator : NSObject

/*!
 @brief Returns a unary operator that always returns its input argument.
 @return a unary operator that always returns its input argument
 */
+ (id<JavaUtilFunctionDoubleUnaryOperator>)identity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionDoubleUnaryOperator)

FOUNDATION_EXPORT id<JavaUtilFunctionDoubleUnaryOperator> JavaUtilFunctionDoubleUnaryOperator_composeWithJavaUtilFunctionDoubleUnaryOperator_(id<JavaUtilFunctionDoubleUnaryOperator> self, id<JavaUtilFunctionDoubleUnaryOperator> before);

FOUNDATION_EXPORT id<JavaUtilFunctionDoubleUnaryOperator> JavaUtilFunctionDoubleUnaryOperator_andThenWithJavaUtilFunctionDoubleUnaryOperator_(id<JavaUtilFunctionDoubleUnaryOperator> self, id<JavaUtilFunctionDoubleUnaryOperator> after);

FOUNDATION_EXPORT id<JavaUtilFunctionDoubleUnaryOperator> JavaUtilFunctionDoubleUnaryOperator_identity(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionDoubleUnaryOperator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionDoubleUnaryOperator")