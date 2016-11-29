//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/MultimapBuilder.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder")
#ifdef RESTRICT_ComGoogleCommonCollectMultimapBuilder
#define INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultimapBuilder
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder
#define INCLUDE_ComGoogleCommonCollectMultimapBuilder 1
#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_

@class ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys;
@class IOSClass;
@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectMultimapBuilder : NSObject

#pragma mark Public

- (id<ComGoogleCommonCollectMultimap>)build;

- (id<ComGoogleCommonCollectMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)enumKeysWithIOSClass:(IOSClass *)keyClass;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)hashKeys;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)hashKeysWithInt:(jint)expectedKeys;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)linkedHashKeys;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)linkedHashKeysWithInt:(jint)expectedKeys;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)treeKeys;

+ (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *)treeKeysWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder)

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_hashKeys();

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_hashKeysWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_linkedHashKeys();

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_linkedHashKeysWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_treeKeys();

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_treeKeysWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *ComGoogleCommonCollectMultimapBuilder_enumKeysWithIOSClass_(IOSClass *keyClass);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys))
#define ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_

@class ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder;
@class ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder;
@class ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder;
@class IOSClass;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys : NSObject

#pragma mark Public

- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)arrayListValues;

- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)arrayListValuesWithInt:(jint)expectedValuesPerKey;

- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)enumSetValuesWithIOSClass:(IOSClass *)valueClass;

- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)hashSetValues;

- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)hashSetValuesWithInt:(jint)expectedValuesPerKey;

- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)linkedHashSetValues;

- (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *)linkedHashSetValuesWithInt:(jint)expectedValuesPerKey;

- (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *)linkedListValues;

- (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *)treeSetValues;

- (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *)treeSetValuesWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilMap>)createMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys_init(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_MultimapBuilderWithKeys)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_

@protocol ComGoogleCommonCollectListMultimap;
@protocol ComGoogleCommonCollectMultimap;

@interface ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder : ComGoogleCommonCollectMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectListMultimap>)build;

- (id<ComGoogleCommonCollectListMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_ListMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSetMultimap;

@interface ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder : ComGoogleCommonCollectMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectSetMultimap>)build;

- (id<ComGoogleCommonCollectSetMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder)

#endif

#if !defined (ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_) && (INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder || defined(INCLUDE_ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder))
#define ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_

@protocol ComGoogleCommonCollectMultimap;
@protocol ComGoogleCommonCollectSortedSetMultimap;

@interface ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder : ComGoogleCommonCollectMultimapBuilder_SetMultimapBuilder

#pragma mark Public

- (id<ComGoogleCommonCollectSortedSetMultimap>)build;

- (id<ComGoogleCommonCollectSortedSetMultimap>)buildWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder)

FOUNDATION_EXPORT void ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder_init(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultimapBuilder_SortedSetMultimapBuilder)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultimapBuilder")
