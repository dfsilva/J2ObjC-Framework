//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/UnsignedInts.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts")
#ifdef RESTRICT_ComGoogleCommonPrimitivesUnsignedInts
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesUnsignedInts

#if !defined (ComGoogleCommonPrimitivesUnsignedInts_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedInts))
#define ComGoogleCommonPrimitivesUnsignedInts_

@class IOSIntArray;
@protocol JavaUtilComparator;

@interface ComGoogleCommonPrimitivesUnsignedInts : NSObject

#pragma mark Public

+ (jint)compareWithInt:(jint)a
               withInt:(jint)b;

+ (jint)decodeWithNSString:(NSString *)stringValue;

+ (jint)divideWithInt:(jint)dividend
              withInt:(jint)divisor;

+ (NSString *)joinWithNSString:(NSString *)separator
                  withIntArray:(IOSIntArray *)array;

+ (id<JavaUtilComparator>)lexicographicalComparator;

+ (jint)maxWithIntArray:(IOSIntArray *)array;

+ (jint)minWithIntArray:(IOSIntArray *)array;

+ (jint)parseUnsignedIntWithNSString:(NSString *)s;

+ (jint)parseUnsignedIntWithNSString:(NSString *)string
                             withInt:(jint)radix;

+ (jint)remainderWithInt:(jint)dividend
                 withInt:(jint)divisor;

+ (jlong)toLongWithInt:(jint)value;

+ (NSString *)toStringWithInt:(jint)x;

+ (NSString *)toStringWithInt:(jint)x
                      withInt:(jint)radix;

#pragma mark Package-Private

+ (jint)flipWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInts)

inline jlong ComGoogleCommonPrimitivesUnsignedInts_get_INT_MASK();
#define ComGoogleCommonPrimitivesUnsignedInts_INT_MASK 4294967295LL
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonPrimitivesUnsignedInts, INT_MASK, jlong)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_flipWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_compareWithInt_withInt_(jint a, jint b);

FOUNDATION_EXPORT jlong ComGoogleCommonPrimitivesUnsignedInts_toLongWithInt_(jint value);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_minWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_maxWithIntArray_(IOSIntArray *array);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_joinWithNSString_withIntArray_(NSString *separator, IOSIntArray *array);

FOUNDATION_EXPORT id<JavaUtilComparator> ComGoogleCommonPrimitivesUnsignedInts_lexicographicalComparator();

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_divideWithInt_withInt_(jint dividend, jint divisor);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_remainderWithInt_withInt_(jint dividend, jint divisor);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_decodeWithNSString_(NSString *stringValue);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_(NSString *s);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesUnsignedInts_parseUnsignedIntWithNSString_withInt_(NSString *string, jint radix);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_(jint x);

FOUNDATION_EXPORT NSString *ComGoogleCommonPrimitivesUnsignedInts_toStringWithInt_withInt_(jint x, jint radix);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInts)

#endif

#if !defined (ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts || defined(INCLUDE_ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator))
#define ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "../../../../../java/util/Comparator.h"

@class IOSIntArray;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_Enum) {
  ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator : JavaLangEnum < NSCopying, JavaUtilComparator >

#pragma mark Public

- (jint)compareWithId:(IOSIntArray *)left
               withId:(IOSIntArray *)right;

+ (ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_values_[];

inline ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_values();

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator *ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesUnsignedInts_LexicographicalComparator)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesUnsignedInts")