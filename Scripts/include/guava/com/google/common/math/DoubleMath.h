//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/math/DoubleMath.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleMath")
#ifdef RESTRICT_ComGoogleCommonMathDoubleMath
#define INCLUDE_ALL_ComGoogleCommonMathDoubleMath 0
#else
#define INCLUDE_ALL_ComGoogleCommonMathDoubleMath 1
#endif
#undef RESTRICT_ComGoogleCommonMathDoubleMath

#if !defined (ComGoogleCommonMathDoubleMath_) && (INCLUDE_ALL_ComGoogleCommonMathDoubleMath || defined(INCLUDE_ComGoogleCommonMathDoubleMath))
#define ComGoogleCommonMathDoubleMath_

@class IOSDoubleArray;
@class IOSIntArray;
@class IOSLongArray;
@class JavaMathBigInteger;
@class JavaMathRoundingMode;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonMathDoubleMath : NSObject

#pragma mark Public

+ (jdouble)factorialWithInt:(jint)n;

+ (jint)fuzzyCompareWithDouble:(jdouble)a
                    withDouble:(jdouble)b
                    withDouble:(jdouble)tolerance;

+ (jboolean)fuzzyEqualsWithDouble:(jdouble)a
                       withDouble:(jdouble)b
                       withDouble:(jdouble)tolerance;

+ (jboolean)isMathematicalIntegerWithDouble:(jdouble)x;

+ (jboolean)isPowerOfTwoWithDouble:(jdouble)x;

+ (jdouble)log2WithDouble:(jdouble)x;

+ (jint)log2WithDouble:(jdouble)x
withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jdouble)meanWithDoubleArray:(IOSDoubleArray *)values;

+ (jdouble)meanWithIntArray:(IOSIntArray *)values;

+ (jdouble)meanWithJavaLangIterable:(id<JavaLangIterable>)values;

+ (jdouble)meanWithJavaUtilIterator:(id<JavaUtilIterator>)values;

+ (jdouble)meanWithLongArray:(IOSLongArray *)values;

+ (JavaMathBigInteger *)roundToBigIntegerWithDouble:(jdouble)x
                           withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jint)roundToIntWithDouble:(jdouble)x
    withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

+ (jlong)roundToLongWithDouble:(jdouble)x
      withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

#pragma mark Package-Private

+ (jdouble)roundIntermediateWithDouble:(jdouble)x
              withJavaMathRoundingMode:(JavaMathRoundingMode *)mode;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonMathDoubleMath)

inline jint ComGoogleCommonMathDoubleMath_get_MAX_FACTORIAL();
#define ComGoogleCommonMathDoubleMath_MAX_FACTORIAL 170
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonMathDoubleMath, MAX_FACTORIAL, jint)

inline IOSDoubleArray *ComGoogleCommonMathDoubleMath_get_everySixteenthFactorial();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSDoubleArray *ComGoogleCommonMathDoubleMath_everySixteenthFactorial;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonMathDoubleMath, everySixteenthFactorial, IOSDoubleArray *)

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_roundIntermediateWithDouble_withJavaMathRoundingMode_(jdouble x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_roundToIntWithDouble_withJavaMathRoundingMode_(jdouble x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jlong ComGoogleCommonMathDoubleMath_roundToLongWithDouble_withJavaMathRoundingMode_(jdouble x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT JavaMathBigInteger *ComGoogleCommonMathDoubleMath_roundToBigIntegerWithDouble_withJavaMathRoundingMode_(jdouble x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_isPowerOfTwoWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_log2WithDouble_(jdouble x);

FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_log2WithDouble_withJavaMathRoundingMode_(jdouble x, JavaMathRoundingMode *mode);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_isMathematicalIntegerWithDouble_(jdouble x);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_factorialWithInt_(jint n);

FOUNDATION_EXPORT jboolean ComGoogleCommonMathDoubleMath_fuzzyEqualsWithDouble_withDouble_withDouble_(jdouble a, jdouble b, jdouble tolerance);

FOUNDATION_EXPORT jint ComGoogleCommonMathDoubleMath_fuzzyCompareWithDouble_withDouble_withDouble_(jdouble a, jdouble b, jdouble tolerance);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_meanWithDoubleArray_(IOSDoubleArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_meanWithIntArray_(IOSIntArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_meanWithLongArray_(IOSLongArray *values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_meanWithJavaLangIterable_(id<JavaLangIterable> values);

FOUNDATION_EXPORT jdouble ComGoogleCommonMathDoubleMath_meanWithJavaUtilIterator_(id<JavaUtilIterator> values);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonMathDoubleMath)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonMathDoubleMath")
