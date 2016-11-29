//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/RangeSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectRangeSet

#if !defined (ComGoogleCommonCollectRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectRangeSet || defined(INCLUDE_ComGoogleCommonCollectRangeSet))
#define ComGoogleCommonCollectRangeSet_

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;
@protocol JavaUtilSet;

@protocol ComGoogleCommonCollectRangeSet < JavaObject >

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

- (jboolean)enclosesAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectRange *)span;

- (id<JavaUtilSet>)asRanges;

- (id<JavaUtilSet>)asDescendingSetOfRanges;

- (id<ComGoogleCommonCollectRangeSet>)complement;

- (id<ComGoogleCommonCollectRangeSet>)subRangeSetWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)view;

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)clear;

- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectRangeSet)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectRangeSet)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectRangeSet")