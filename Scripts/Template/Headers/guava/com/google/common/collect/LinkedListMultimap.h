//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/LinkedListMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectLinkedListMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectLinkedListMultimap

#if !defined (ComGoogleCommonCollectLinkedListMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap || defined(INCLUDE_ComGoogleCommonCollectLinkedListMultimap))
#define ComGoogleCommonCollectLinkedListMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap 1
#include "../../../../../com/google/common/collect/AbstractMultimap.h"

#define RESTRICT_ComGoogleCommonCollectListMultimap 1
#define INCLUDE_ComGoogleCommonCollectListMultimap 1
#include "../../../../../com/google/common/collect/ListMultimap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectLinkedListMultimap : ComGoogleCommonCollectAbstractMultimap < ComGoogleCommonCollectListMultimap, JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectLinkedListMultimap *)create;

+ (ComGoogleCommonCollectLinkedListMultimap *)createWithInt:(jint)expectedKeys;

+ (ComGoogleCommonCollectLinkedListMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

- (id<JavaUtilList>)entries;

- (id<JavaUtilList>)getWithId:(id)key;

- (jboolean)isEmpty;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilList>)removeAllWithId:(id)key;

- (id<JavaUtilList>)replaceValuesWithId:(id)key
                   withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (id<JavaUtilList>)values;

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilList>)createEntries;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilList>)createValues;

- (id<JavaUtilIterator>)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectLinkedListMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithInt_(jint expectedKeys);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *ComGoogleCommonCollectLinkedListMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

FOUNDATION_EXPORT void ComGoogleCommonCollectLinkedListMultimap_init(ComGoogleCommonCollectLinkedListMultimap *self);

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *new_ComGoogleCommonCollectLinkedListMultimap_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectLinkedListMultimap *create_ComGoogleCommonCollectLinkedListMultimap_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectLinkedListMultimap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectLinkedListMultimap")
