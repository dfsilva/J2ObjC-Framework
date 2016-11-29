//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/Longs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesLongs")
#ifdef RESTRICT_ComGoogleCommonPrimitivesLongs
#define INCLUDE_ALL_ComGoogleCommonPrimitivesLongs 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesLongs 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesLongs

#if !defined (ComGoogleCommonPrimitivesLongs_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesLongs || defined(INCLUDE_ComGoogleCommonPrimitivesLongs))
#define ComGoogleCommonPrimitivesLongs_

@class ComGoogleCommonBaseConverter;
@class IOSByteArray;
@class IOSLongArray;
@class IOSObjectArray;
@class JavaLangLong;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesLongs : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithLongArray:(IOSLongArray *)backingArray;

+ (jint)compareWithLong:(jlong)a
               withLong:(jlong)b;

+ (IOSLongArray *)concatWithLongArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithLongArray:(IOSLongArray *)array
                         withLong:(jlong)target;

+ (IOSLongArray *)ensureCapacityWithLongArray:(IOSLongArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

+ (jlong)fromByteArrayWithByteArray:(IOSByteArray *)bytes;

+ (jlong)fromBytesWithByte:(jbyte)b1
                  withByte:(jbyte)b2
                  withByte:(jbyte)b3
                  withByte:(jbyte)b4
                  withByte:(jbyte)b5
                  withByte:(jbyte)b6
                  withByte:(jbyte)b7
                  withByte:(jbyte)b8;

+ (jint)hashCodeWithLong:(jlong)value;

+ (jint)indexOfWithLongArray:(IOSLongArray *)array
                    withLong:(jlong)target;

+ (jint)indexOfWithLongArray:(IOSLongArray *)array
               withLongArray:(IOSLongArray *)target;

+ (NSString *)joinWithNSString:(NSString *)separator
                 withLongArray:(IOSLongArray *)array;

+ (jint)lastIndexOfWithLongArray:(IOSLongArray *)array
                        withLong:(jlong)target;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jlong)maxWithLongArray:(IOSLongArray *)array;

+ (jlong)minWithLongArray:(IOSLongArray *)array;

+ (ComGoogleCommonBaseConverter *)stringConverter;

+ (IOSLongArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

+ (IOSByteArray *)toByteArrayWithLong:(jlong)value;

+ (JavaLangLong *)tryParseWithNSString:(NSString *)string;

+ (JavaLangLong *)tryParseWithNSString:(NSString *)string
                               withInt:(jint)radix;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesLongs)

inline jint ComGoogleCommonPrimitivesLongs_get_BYTES();
#define ComGoogleCommonPrimitivesLongs_BYTES 8
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesLongs, BYTES, jint)

inline jlong ComGoogleCommonPrimitivesLongs_get_MAX_POWER_OF_TWO();
#define ComGoogleCommonPrimitivesLongs_MAX_POWER_OF_TWO 4611686018427387904LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesLongs, MAX_POWER_OF_TWO, jlong)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_hashCodeWithLong_(jlong value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_compareWithLong_withLong_(jlong a, jlong b);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesLongs_containsWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_indexOfWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_indexOfWithLongArray_withLongArray_(IOSLongArray *array, IOSLongArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesLongs_lastIndexOfWithLongArray_withLong_(IOSLongArray *array, jlong target);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_minWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_maxWithLongArray_(IOSLongArray *array);

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_concatWithLongArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesLongs_toByteArrayWithLong_(jlong value);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_fromByteArrayWithByteArray_(IOSByteArray *bytes);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesLongs_fromBytesWithByte_withByte_withByte_withByte_withByte_withByte_withByte_withByte_(jbyte b1, jbyte b2, jbyte b3, jbyte b4, jbyte b5, jbyte b6, jbyte b7, jbyte b8);

FOUNDATION_EXPORT JavaLangLong *ComGoogleCommonPrimitivesLongs_tryParseWithNSString_(NSString *string);

FOUNDATION_EXPORT JavaLangLong *ComGoogleCommonPrimitivesLongs_tryParseWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonPrimitivesLongs_stringConverter();

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_ensureCapacityWithLongArray_withInt_withInt_(IOSLongArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesLongs_joinWithNSString_withLongArray_(NSString *separator, IOSLongArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesLongs_lexicographicalComparator();

FOUNDATION_EXPORT IOSLongArray *ComGoogleCommonPrimitivesLongs_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesLongs_asListWithLongArray_(IOSLongArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesLongs)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesLongs")
