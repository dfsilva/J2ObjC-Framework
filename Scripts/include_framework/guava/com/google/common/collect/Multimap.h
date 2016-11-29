//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Multimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultimap

#if !defined (ComGoogleCommonCollectMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimap || defined(INCLUDE_ComGoogleCommonCollectMultimap))
#define ComGoogleCommonCollectMultimap_

@protocol ComGoogleCommonCollectMultiset;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@protocol ComGoogleCommonCollectMultimap < JavaObject >

- (jint)size;

- (jboolean)isEmpty;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

- (jboolean)containsEntryWithId:(id)key
                         withId:(id)value;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (jboolean)removeWithId:(id)key
                  withId:(id)value;

- (jboolean)putAllWithId:(id)key
    withJavaLangIterable:(id<JavaLangIterable>)values;

- (jboolean)putAllWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (id<JavaUtilCollection>)removeAllWithId:(id)key;

- (void)clear;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id<ComGoogleCommonCollectMultiset>)keys;

- (id<JavaUtilCollection>)values;

- (id<JavaUtilCollection>)entries;

- (id<JavaUtilMap>)asMap;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimap")