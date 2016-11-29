//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/HashBiMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBiMap")
#ifdef RESTRICT_ComGoogleCommonCollectHashBiMap
#define INCLUDE_ALL_ComGoogleCommonCollectHashBiMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashBiMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashBiMap

#if !defined (ComGoogleCommonCollectHashBiMap_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap))
#define ComGoogleCommonCollectHashBiMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_IteratorBasedAbstractMap 1
#include "../../../../../com/google/common/collect/Maps.h"

#define RESTRICT_ComGoogleCommonCollectBiMap 1
#define INCLUDE_ComGoogleCommonCollectBiMap 1
#include "../../../../../com/google/common/collect/BiMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectHashBiMap : ComGoogleCommonCollectMaps_IteratorBasedAbstractMap < ComGoogleCommonCollectBiMap, JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectHashBiMap *)create;

+ (ComGoogleCommonCollectHashBiMap *)createWithInt:(jint)expectedSize;

+ (ComGoogleCommonCollectHashBiMap *)createWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)forcePutWithId:(id)key
              withId:(id)value;

- (id)getWithId:(id)key;

- (id<ComGoogleCommonCollectBiMap>)inverse;

- (id<JavaUtilSet>)keySet;

- (id)putWithId:(id)key
         withId:(id)value;

- (id)removeWithId:(id)key;

- (jint)size;

- (id<JavaUtilSet>)values;

#pragma mark Package-Private

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap)

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap *ComGoogleCommonCollectHashBiMap_createWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_BiEntry_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_BiEntry))
#define ComGoogleCommonCollectHashBiMap_BiEntry_

#define RESTRICT_ComGoogleCommonCollectImmutableEntry 1
#define INCLUDE_ComGoogleCommonCollectImmutableEntry 1
#include "../../../../../com/google/common/collect/ImmutableEntry.h"

@interface ComGoogleCommonCollectHashBiMap_BiEntry : ComGoogleCommonCollectImmutableEntry {
 @public
  jint keyHash_;
  jint valueHash_;
  ComGoogleCommonCollectHashBiMap_BiEntry *nextInKToVBucket_;
  ComGoogleCommonCollectHashBiMap_BiEntry *nextInVToKBucket_;
  ComGoogleCommonCollectHashBiMap_BiEntry *nextInKeyInsertionOrder_;
  ComGoogleCommonCollectHashBiMap_BiEntry *prevInKeyInsertionOrder_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)key
                   withInt:(jint)keyHash
                    withId:(id)value
                   withInt:(jint)valueHash;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_BiEntry)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, nextInKToVBucket_, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, nextInVToKBucket_, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, nextInKeyInsertionOrder_, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_BiEntry, prevInKeyInsertionOrder_, ComGoogleCommonCollectHashBiMap_BiEntry *)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_BiEntry_initWithId_withInt_withId_withInt_(ComGoogleCommonCollectHashBiMap_BiEntry *self, id key, jint keyHash, id value, jint valueHash);

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_BiEntry *new_ComGoogleCommonCollectHashBiMap_BiEntry_initWithId_withInt_withId_withInt_(id key, jint keyHash, id value, jint valueHash) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectHashBiMap_BiEntry *create_ComGoogleCommonCollectHashBiMap_BiEntry_initWithId_withInt_withId_withInt_(id key, jint keyHash, id value, jint valueHash);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_BiEntry)

#endif

#if !defined (ComGoogleCommonCollectHashBiMap_Itr_) && (INCLUDE_ALL_ComGoogleCommonCollectHashBiMap || defined(INCLUDE_ComGoogleCommonCollectHashBiMap_Itr))
#define ComGoogleCommonCollectHashBiMap_Itr_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "../../../../../java/util/Iterator.h"

@class ComGoogleCommonCollectHashBiMap;
@class ComGoogleCommonCollectHashBiMap_BiEntry;

@interface ComGoogleCommonCollectHashBiMap_Itr : NSObject < JavaUtilIterator > {
 @public
  ComGoogleCommonCollectHashBiMap_BiEntry *next_;
  ComGoogleCommonCollectHashBiMap_BiEntry *toRemove_;
  jint expectedModCount_;
}

#pragma mark Public

- (jboolean)hasNext;

- (id)next;

- (void)remove;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectHashBiMap:(ComGoogleCommonCollectHashBiMap *)outer$;

- (id)outputWithComGoogleCommonCollectHashBiMap_BiEntry:(ComGoogleCommonCollectHashBiMap_BiEntry *)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashBiMap_Itr)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, next_, ComGoogleCommonCollectHashBiMap_BiEntry *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectHashBiMap_Itr, toRemove_, ComGoogleCommonCollectHashBiMap_BiEntry *)

FOUNDATION_EXPORT void ComGoogleCommonCollectHashBiMap_Itr_initWithComGoogleCommonCollectHashBiMap_(ComGoogleCommonCollectHashBiMap_Itr *self, ComGoogleCommonCollectHashBiMap *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashBiMap_Itr)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashBiMap")