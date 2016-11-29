//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableMap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableMap
#ifdef INCLUDE_ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap
#define INCLUDE_ComGoogleCommonCollectImmutableMap 1
#endif

#if !defined (ComGoogleCommonCollectImmutableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap))
#define ComGoogleCommonCollectImmutableMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "java/util/Map.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMapEntry;
@class ComGoogleCommonCollectImmutableMap_Builder;
@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectImmutableSetMultimap;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMap : NSObject < JavaUtilMap, JavaIoSerializable >

#pragma mark Public

- (ComGoogleCommonCollectImmutableSetMultimap *)asMultimap;

+ (ComGoogleCommonCollectImmutableMap_Builder *)builder;

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)containsValueWithId:(id)value;

+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)entries OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectImmutableSet *)entrySet;

- (jboolean)isEqual:(id)object;

- (id)getWithId:(id)key;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectImmutableSet *)keySet;

+ (ComGoogleCommonCollectImmutableMap *)of;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4;

+ (ComGoogleCommonCollectImmutableMap *)ofWithId:(id)k1
                                          withId:(id)v1
                                          withId:(id)k2
                                          withId:(id)v2
                                          withId:(id)k3
                                          withId:(id)v3
                                          withId:(id)k4
                                          withId:(id)v4
                                          withId:(id)k5
                                          withId:(id)v5;

- (id)putWithId:(id)k
         withId:(id)v;

- (void)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id)removeWithId:(id)o;

- (NSString *)description;

- (ComGoogleCommonCollectImmutableCollection *)values;

#pragma mark Package-Private

- (instancetype)init;

+ (void)checkNoConflictWithBoolean:(jboolean)safe
                      withNSString:(NSString *)conflictDescription
             withJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry1
             withJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry2;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectImmutableSet *)createKeySet;

+ (ComGoogleCommonCollectImmutableMapEntry *)entryOfWithId:(id)key
                                                    withId:(id)value;

- (jboolean)isHashCodeFast;

- (jboolean)isPartialView;

- (ComGoogleCommonCollectUnmodifiableIterator *)keyIterator;

- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableMap)

inline IOSObjectArray *ComGoogleCommonCollectImmutableMap_get_EMPTY_ENTRY_ARRAY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectImmutableMap_EMPTY_ENTRY_ARRAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectImmutableMap, EMPTY_ENTRY_ARRAY, IOSObjectArray *)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_(id k1, id v1);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_(id k1, id v1, id k2, id v2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_ofWithId_withId_withId_withId_withId_withId_withId_withId_withId_withId_(id k1, id v1, id k2, id v2, id k3, id v3, id k4, id v4, id k5, id v5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMapEntry *ComGoogleCommonCollectImmutableMap_entryOfWithId_withId_(id key, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *ComGoogleCommonCollectImmutableMap_builder();

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_checkNoConflictWithBoolean_withNSString_withJavaUtilMap_Entry_withJavaUtilMap_Entry_(jboolean safe, NSString *conflictDescription, id<JavaUtilMap_Entry> entry1, id<JavaUtilMap_Entry> entry2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleCommonCollectImmutableMap_copyOfWithJavaLangIterable_(id<JavaLangIterable> entries);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_init(ComGoogleCommonCollectImmutableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_Builder))
#define ComGoogleCommonCollectImmutableMap_Builder_

@class ComGoogleCommonCollectImmutableMap;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;

@interface ComGoogleCommonCollectImmutableMap_Builder : NSObject {
 @public
  id<JavaUtilComparator> valueComparator_;
  IOSObjectArray *entries_;
  jint size_;
  jboolean entriesUsed_;
}

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableMap *)build;

- (ComGoogleCommonCollectImmutableMap_Builder *)orderEntriesByValueWithJavaUtilComparator:(id<JavaUtilComparator>)valueComparator;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

- (ComGoogleCommonCollectImmutableMap_Builder *)putWithId:(id)key
                                                   withId:(id)value;

- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaLangIterable:(id<JavaLangIterable>)entries;

- (ComGoogleCommonCollectImmutableMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)initialCapacity;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_Builder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, valueComparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableMap_Builder, entries_, IOSObjectArray *)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_Builder_init(ComGoogleCommonCollectImmutableMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *new_ComGoogleCommonCollectImmutableMap_Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *create_ComGoogleCommonCollectImmutableMap_Builder_init();

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(ComGoogleCommonCollectImmutableMap_Builder *self, jint initialCapacity);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *new_ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_Builder *create_ComGoogleCommonCollectImmutableMap_Builder_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_Builder)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap))
#define ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_

@class ComGoogleCommonCollectImmutableSet;
@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap : ComGoogleCommonCollectImmutableMap

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectImmutableSet *)createEntrySet;

- (ComGoogleCommonCollectUnmodifiableIterator *)entryIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap_init(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_IteratorBasedImmutableMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableMap_SerializedForm_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableMap || defined(INCLUDE_ComGoogleCommonCollectImmutableMap_SerializedForm))
#define ComGoogleCommonCollectImmutableMap_SerializedForm_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMap_Builder;

@interface ComGoogleCommonCollectImmutableMap_SerializedForm : NSObject < JavaIoSerializable >

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)map;

- (id)createMapWithComGoogleCommonCollectImmutableMap_Builder:(ComGoogleCommonCollectImmutableMap_Builder *)builder;

- (id)readResolve;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableMap_SerializedForm)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap_SerializedForm *self, ComGoogleCommonCollectImmutableMap *map);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_SerializedForm *new_ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap_SerializedForm *create_ComGoogleCommonCollectImmutableMap_SerializedForm_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableMap_SerializedForm)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableMap")
