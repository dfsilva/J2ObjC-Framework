//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/primitives/Bytes.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBytes")
#ifdef RESTRICT_ComGoogleCommonPrimitivesBytes
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBytes 0
#else
#define INCLUDE_ALL_ComGoogleCommonPrimitivesBytes 1
#endif
#undef RESTRICT_ComGoogleCommonPrimitivesBytes

#if !defined (ComGoogleCommonPrimitivesBytes_) && (INCLUDE_ALL_ComGoogleCommonPrimitivesBytes || defined(INCLUDE_ComGoogleCommonPrimitivesBytes))
#define ComGoogleCommonPrimitivesBytes_

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface ComGoogleCommonPrimitivesBytes : NSObject

#pragma mark Public

+ (id<JavaUtilList>)asListWithByteArray:(IOSByteArray *)backingArray;

+ (IOSByteArray *)concatWithByteArray2:(IOSObjectArray *)arrays;

+ (jboolean)containsWithByteArray:(IOSByteArray *)array
                         withByte:(jbyte)target;

+ (IOSByteArray *)ensureCapacityWithByteArray:(IOSByteArray *)array
                                      withInt:(jint)minLength
                                      withInt:(jint)padding;

+ (jint)hashCodeWithByte:(jbyte)value;

+ (jint)indexOfWithByteArray:(IOSByteArray *)array
                    withByte:(jbyte)target;

+ (jint)indexOfWithByteArray:(IOSByteArray *)array
               withByteArray:(IOSByteArray *)target;

+ (jint)lastIndexOfWithByteArray:(IOSByteArray *)array
                        withByte:(jbyte)target;

+ (IOSByteArray *)toArrayWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonPrimitivesBytes)

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBytes_hashCodeWithByte_(jbyte value);

FOUNDATION_EXPORT jboolean ComGoogleCommonPrimitivesBytes_containsWithByteArray_withByte_(IOSByteArray *array, jbyte target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBytes_indexOfWithByteArray_withByte_(IOSByteArray *array, jbyte target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBytes_indexOfWithByteArray_withByteArray_(IOSByteArray *array, IOSByteArray *target);

FOUNDATION_EXPORT jint ComGoogleCommonPrimitivesBytes_lastIndexOfWithByteArray_withByte_(IOSByteArray *array, jbyte target);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesBytes_concatWithByteArray2_(IOSObjectArray *arrays);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesBytes_ensureCapacityWithByteArray_withInt_withInt_(IOSByteArray *array, jint minLength, jint padding);

FOUNDATION_EXPORT IOSByteArray *ComGoogleCommonPrimitivesBytes_toArrayWithJavaUtilCollection_(id<JavaUtilCollection> collection);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonPrimitivesBytes_asListWithByteArray_(IOSByteArray *backingArray);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonPrimitivesBytes)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonPrimitivesBytes")
