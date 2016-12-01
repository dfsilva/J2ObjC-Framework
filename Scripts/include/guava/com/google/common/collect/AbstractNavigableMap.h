//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AbstractNavigableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractNavigableMap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractNavigableMap

#if !defined (ComGoogleCommonCollectAbstractNavigableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap || defined(INCLUDE_ComGoogleCommonCollectAbstractNavigableMap))
#define ComGoogleCommonCollectAbstractNavigableMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_IteratorBasedAbstractMap 1
#include "com/google/common/collect/Maps.h"

#define RESTRICT_JavaUtilNavigableMap 1
#define INCLUDE_JavaUtilNavigableMap 1
#include "java/util/NavigableMap.h"

@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectAbstractNavigableMap : ComGoogleCommonCollectMaps_IteratorBasedAbstractMap < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id)firstKey;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id)getWithId:(id)key;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id)lastKey;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilIterator>)descendingEntryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractNavigableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractNavigableMap_init(ComGoogleCommonCollectAbstractNavigableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractNavigableMap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractNavigableMap")
