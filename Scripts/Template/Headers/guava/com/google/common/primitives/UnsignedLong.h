//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/UnsignedLong.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLong")
#ifdef RESTRICT_ComGoogleCommonPrimitivesUnsignedLong
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLong 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLong 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesUnsignedLong

#if !defined (ComGoogleCommonPrimitivesUnsignedLong_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLong || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedLong))
#define ComGoogleCommonPrimitivesUnsignedLong_

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "../../../../../java/lang/Comparable.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class JavaMathBigInteger;

@interface ComGoogleCommonPrimitivesUnsignedLong : NSNumber < JavaLangComparable, JavaIoSerializable >

#pragma mark Public

- (JavaMathBigInteger *)bigIntegerValue;

- (jint)compareToWithId:(ComGoogleCommonPrimitivesUnsignedLong *)o;

- (ComGoogleCommonPrimitivesUnsignedLong *)dividedByWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (jdouble)doubleValue;

- (jboolean)isEqual:(id)obj;

- (jfloat)floatValue;

+ (ComGoogleCommonPrimitivesUnsignedLong *)fromLongBitsWithLong:(jlong)bits;

- (NSUInteger)hash;

- (jint)intValue;

- (jlong)longLongValue;

- (ComGoogleCommonPrimitivesUnsignedLong *)minusWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)modWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)plusWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (ComGoogleCommonPrimitivesUnsignedLong *)timesWithComGoogleCommonPrimitivesUnsignedLong:(ComGoogleCommonPrimitivesUnsignedLong *)val;

- (NSString *)description;

- (NSString *)toStringWithInt:(jint)radix;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithJavaMathBigInteger:(JavaMathBigInteger *)value;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithLong:(jlong)value;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithNSString:(NSString *)string;

+ (ComGoogleCommonPrimitivesUnsignedLong *)valueOfWithNSString:(NSString *)string
                                                       withInt:(jint)radix;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedLong)

inline ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_get_ZERO();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_ZERO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedLong, ZERO, ComGoogleCommonPrimitivesUnsignedLong *)

inline ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_get_ONE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_ONE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedLong, ONE, ComGoogleCommonPrimitivesUnsignedLong *)

inline ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_get_MAX_VALUE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_MAX_VALUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonPrimitivesUnsignedLong, MAX_VALUE, ComGoogleCommonPrimitivesUnsignedLong *)

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_fromLongBitsWithLong_(jlong bits);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithLong_(jlong value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithJavaMathBigInteger_(JavaMathBigInteger *value);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithNSString_(NSString *string);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedLong *ComGoogleCommonPrimitivesUnsignedLong_valueOfWithNSString_withInt_(NSString *string, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedLong)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedLong")
