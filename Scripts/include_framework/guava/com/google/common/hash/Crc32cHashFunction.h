//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/hash/Crc32cHashFunction.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction")
#ifdef RESTRICT_ComGoogleCommonHashCrc32cHashFunction
#define INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction 0
#else
#define INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction 1
#endif
#undef RESTRICT_ComGoogleCommonHashCrc32cHashFunction

#if !defined (ComGoogleCommonHashCrc32cHashFunction_) && (INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction || defined(INCLUDE_ComGoogleCommonHashCrc32cHashFunction))
#define ComGoogleCommonHashCrc32cHashFunction_

#define RESTRICT_ComGoogleCommonHashAbstractStreamingHashFunction 1
#define INCLUDE_ComGoogleCommonHashAbstractStreamingHashFunction 1
#include "../../../../../com/google/common/hash/AbstractStreamingHashFunction.h"

@protocol ComGoogleCommonHashHasher;

@interface ComGoogleCommonHashCrc32cHashFunction : ComGoogleCommonHashAbstractStreamingHashFunction

#pragma mark Public

- (jint)bits;

- (id<ComGoogleCommonHashHasher>)newHasher OBJC_METHOD_FAMILY_NONE;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonHashCrc32cHashFunction)

FOUNDATION_EXPORT void ComGoogleCommonHashCrc32cHashFunction_init(ComGoogleCommonHashCrc32cHashFunction *self);

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction *new_ComGoogleCommonHashCrc32cHashFunction_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction *create_ComGoogleCommonHashCrc32cHashFunction_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashCrc32cHashFunction)

#endif

#if !defined (ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_) && (INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction || defined(INCLUDE_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher))
#define ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_

#define RESTRICT_ComGoogleCommonHashAbstractByteHasher 1
#define INCLUDE_ComGoogleCommonHashAbstractByteHasher 1
#include "../../../../../com/google/common/hash/AbstractByteHasher.h"

@class ComGoogleCommonHashHashCode;
@class IOSIntArray;

@interface ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher : ComGoogleCommonHashAbstractByteHasher

#pragma mark Public

- (ComGoogleCommonHashHashCode *)hash__;

- (void)updateWithByte:(jbyte)b;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher)

inline IOSIntArray *ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_get_CRC_TABLE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSIntArray *ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_CRC_TABLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher, CRC_TABLE, IOSIntArray *)

FOUNDATION_EXPORT void ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *self);

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *new_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher *create_ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonHashCrc32cHashFunction_Crc32cHasher)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonHashCrc32cHashFunction")
