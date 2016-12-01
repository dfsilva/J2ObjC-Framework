//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/AbstractCache.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractCache")
#ifdef RESTRICT_ComGoogleCommonCacheAbstractCache
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractCache 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheAbstractCache 1
#endif
#undef RESTRICT_ComGoogleCommonCacheAbstractCache
#ifdef INCLUDE_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter
#define INCLUDE_ComGoogleCommonCacheAbstractCache_StatsCounter 1
#endif

#if !defined (ComGoogleCommonCacheAbstractCache_) && (INCLUDE_ALL_ComGoogleCommonCacheAbstractCache || defined(INCLUDE_ComGoogleCommonCacheAbstractCache))
#define ComGoogleCommonCacheAbstractCache_

#define RESTRICT_ComGoogleCommonCacheCache 1
#define INCLUDE_ComGoogleCommonCacheCache 1
#include "com/google/common/cache/Cache.h"

@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentConcurrentMap;
@protocol JavaUtilMap;

@interface ComGoogleCommonCacheAbstractCache : NSObject < ComGoogleCommonCacheCache >

#pragma mark Public

- (id<JavaUtilConcurrentConcurrentMap>)asMap;

- (void)cleanUp;

- (id)getWithId:(id)key
withJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)valueLoader;

- (ComGoogleCommonCollectImmutableMap *)getAllPresentWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)invalidateWithId:(id)key;

- (void)invalidateAll;

- (void)invalidateAllWithJavaLangIterable:(id<JavaLangIterable>)keys;

- (void)putWithId:(id)key
           withId:(id)value;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)m;

- (jlong)size;

- (ComGoogleCommonCacheCacheStats *)stats;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractCache_init(ComGoogleCommonCacheAbstractCache *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache)

#endif

#if !defined (ComGoogleCommonCacheAbstractCache_StatsCounter_) && (INCLUDE_ALL_ComGoogleCommonCacheAbstractCache || defined(INCLUDE_ComGoogleCommonCacheAbstractCache_StatsCounter))
#define ComGoogleCommonCacheAbstractCache_StatsCounter_

@class ComGoogleCommonCacheCacheStats;

@protocol ComGoogleCommonCacheAbstractCache_StatsCounter < JavaObject >

- (void)recordHitsWithInt:(jint)count;

- (void)recordMissesWithInt:(jint)count;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordEviction;

- (ComGoogleCommonCacheCacheStats *)snapshot;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_StatsCounter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_StatsCounter)

#endif

#if !defined (ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_) && (INCLUDE_ALL_ComGoogleCommonCacheAbstractCache || defined(INCLUDE_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter))
#define ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_

@class ComGoogleCommonCacheCacheStats;
@protocol ComGoogleCommonCacheAbstractCache_StatsCounter;

@interface ComGoogleCommonCacheAbstractCache_SimpleStatsCounter : NSObject < ComGoogleCommonCacheAbstractCache_StatsCounter >

#pragma mark Public

- (instancetype)init;

- (void)incrementByWithComGoogleCommonCacheAbstractCache_StatsCounter:(id<ComGoogleCommonCacheAbstractCache_StatsCounter>)other;

- (void)recordEviction;

- (void)recordHitsWithInt:(jint)count;

- (void)recordLoadExceptionWithLong:(jlong)loadTime;

- (void)recordLoadSuccessWithLong:(jlong)loadTime;

- (void)recordMissesWithInt:(jint)count;

- (ComGoogleCommonCacheCacheStats *)snapshot;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)

FOUNDATION_EXPORT void ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_init(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter *self);

FOUNDATION_EXPORT ComGoogleCommonCacheAbstractCache_SimpleStatsCounter *new_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheAbstractCache_SimpleStatsCounter *create_ComGoogleCommonCacheAbstractCache_SimpleStatsCounter_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheAbstractCache_SimpleStatsCounter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheAbstractCache")
