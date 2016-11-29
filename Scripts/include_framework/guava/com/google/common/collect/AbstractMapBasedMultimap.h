//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AbstractMapBasedMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractMapBasedMultimap
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet 1
#endif
#ifdef INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet
#define INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection 1
#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractMultimap 1
#include "../../../../../com/google/common/collect/AbstractMultimap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap : ComGoogleCommonCollectAbstractMultimap < JavaIoSerializable >

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (id<JavaUtilCollection>)entries;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (jboolean)putWithId:(id)key
               withId:(id)value;

- (id<JavaUtilCollection>)removeAllWithId:(id)key;

- (id<JavaUtilCollection>)replaceValuesWithId:(id)key
                         withJavaLangIterable:(id<JavaLangIterable>)values;

- (jint)size;

- (id<JavaUtilCollection>)values;

#pragma mark Protected

- (instancetype)initWithJavaUtilMap:(id<JavaUtilMap>)map;

#pragma mark Package-Private

- (id<JavaUtilMap>)backingMap;

- (id<JavaUtilMap>)createAsMap;

- (id<JavaUtilCollection>)createCollection;

- (id<JavaUtilCollection>)createCollectionWithId:(id)key;

- (id<JavaUtilSet>)createKeySet;

- (id<JavaUtilCollection>)createUnmodifiableEmptyCollection;

- (id<JavaUtilIterator>)entryIterator;

- (void)setMapWithJavaUtilMap:(id<JavaUtilMap>)map;

- (id<JavaUtilCollection>)unmodifiableCollectionSubclassWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (id<JavaUtilIterator>)valueIterator;

- (id<JavaUtilCollection>)wrapCollectionWithId:(id)key
                        withJavaUtilCollection:(id<JavaUtilCollection>)collection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_initWithJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *self, id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_

#define RESTRICT_JavaUtilAbstractCollection 1
#define INCLUDE_JavaUtilAbstractCollection 1
#include "../../../../../java/util/AbstractCollection.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection : JavaUtilAbstractCollection {
 @public
  id key_;
  id<JavaUtilCollection> delegate_;
  ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor_;
  id<JavaUtilCollection> ancestorDelegate_;
}

#pragma mark Public

- (jboolean)addWithId:(id)value;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)o;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)o;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                                withJavaUtilCollection:(id<JavaUtilCollection>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (void)addToMap;

- (ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)getAncestor;

- (id<JavaUtilCollection>)getDelegate;

- (id)getKey;

- (void)refreshIfEmpty;

- (void)removeIfEmpty;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, key_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, delegate_, id<JavaUtilCollection>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, ancestor_, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection, ancestorDelegate_, id<JavaUtilCollection>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilCollection> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilCollection> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *create_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilCollection_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilCollection> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_

#define RESTRICT_JavaUtilSortedSet 1
#define INCLUDE_JavaUtilSortedSet 1
#include "../../../../../java/util/SortedSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@class ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                                 withJavaUtilSortedSet:(id<JavaUtilSortedSet>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (id<JavaUtilSortedSet>)getSortedSetDelegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilSortedSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilSortedSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet *create_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilSortedSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilSortedSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "../../../../../java/util/NavigableSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@class ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet : ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedSortedSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)v;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)v;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)v;

- (id)lowerWithId:(id)v;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                                withId:(id)key
                                              withJavaUtilNavigableSet:(id<JavaUtilNavigableSet>)delegate
  withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection:(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *)ancestor;

- (id<JavaUtilNavigableSet>)getSortedSetDelegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilNavigableSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilNavigableSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilNavigableSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilNavigableSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet *create_ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withId_withJavaUtilNavigableSet_withComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id key, id<JavaUtilNavigableSet> delegate, ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedCollection *ancestor);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_WrappedNavigableSet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_KeySet 1
#include "../../../../../com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet : ComGoogleCommonCollectMaps_KeySet

#pragma mark Public

- (void)clear;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)key;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                       withJavaUtilMap:(id<JavaUtilMap>)subMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> subMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet *create_ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> subMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_

#define RESTRICT_JavaUtilSortedSet 1
#define INCLUDE_JavaUtilSortedSet 1
#include "../../../../../java/util/SortedSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet : ComGoogleCommonCollectAbstractMapBasedMultimap_KeySet < JavaUtilSortedSet >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)first;

- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

- (id)last;

- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                 withJavaUtilSortedMap:(id<JavaUtilSortedMap>)subMap;

- (id<JavaUtilSortedMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> subMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet *create_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> subMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "../../../../../java/util/NavigableSet.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableMap;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedKeySet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)k;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)k;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)k;

- (id)lowerWithId:(id)k;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                                  withId:(id)toElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                              withJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)subMap;

- (id<JavaUtilNavigableMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> subMap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet *new_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> subMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet *create_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> subMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableKeySet)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_

#define RESTRICT_ComGoogleCommonCollectMaps 1
#define INCLUDE_ComGoogleCommonCollectMaps_ViewCachingAbstractMap 1
#include "../../../../../com/google/common/collect/Maps.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilMap;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap : ComGoogleCommonCollectMaps_ViewCachingAbstractMap {
 @public
  id<JavaUtilMap> submap_;
}

#pragma mark Public

- (void)clear;

- (jboolean)containsKeyWithId:(id)key;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilCollection>)getWithId:(id)key;

- (NSUInteger)hash;

- (id<JavaUtilSet>)keySet;

- (id<JavaUtilCollection>)putWithId:(id)arg0
                             withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)removeWithId:(id)key;

- (jint)size;

- (NSString *)description;

#pragma mark Protected

- (id<JavaUtilSet>)createEntrySet;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                       withJavaUtilMap:(id<JavaUtilMap>)submap;

- (id<JavaUtilMap_Entry>)wrapEntryWithJavaUtilMap_Entry:(id<JavaUtilMap_Entry>)entry_;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap, submap_, id<JavaUtilMap>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> submap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap *create_ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilMap> submap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_

#define RESTRICT_JavaUtilSortedMap 1
#define INCLUDE_JavaUtilSortedMap 1
#include "../../../../../java/util/SortedMap.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap : ComGoogleCommonCollectAbstractMapBasedMultimap_AsMap < JavaUtilSortedMap > {
 @public
  id<JavaUtilSortedSet> sortedKeySet_;
}

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id)firstKey;

- (id<JavaUtilCollection>)getWithId:(id)arg0;

- (id<JavaUtilSortedMap>)headMapWithId:(id)toKey;

- (id<JavaUtilSortedSet>)keySet;

- (id)lastKey;

- (id<JavaUtilCollection>)putWithId:(id)arg0
                             withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)removeWithId:(id)arg0;

- (id<JavaUtilSortedMap>)subMapWithId:(id)fromKey
                               withId:(id)toKey;

- (id<JavaUtilSortedMap>)tailMapWithId:(id)fromKey;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                                 withJavaUtilSortedMap:(id<JavaUtilSortedMap>)submap;

- (id<JavaUtilSortedSet>)createKeySet;

- (id<JavaUtilSortedMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap, sortedKeySet_, id<JavaUtilSortedSet>)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> submap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap *create_ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilSortedMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilSortedMap> submap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap)

#endif

#if !defined (ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap || defined(INCLUDE_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap))
#define ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_

#define RESTRICT_JavaUtilNavigableMap 1
#define INCLUDE_JavaUtilNavigableMap 1
#include "../../../../../java/util/NavigableMap.h"

@class ComGoogleCommonCollectAbstractMapBasedMultimap;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;
@protocol JavaUtilMap_Entry;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap : ComGoogleCommonCollectAbstractMapBasedMultimap_SortedAsMap < JavaUtilNavigableMap >

#pragma mark Public

- (id<JavaUtilMap_Entry>)ceilingEntryWithId:(id)key;

- (id)ceilingKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)descendingKeySet;

- (id<JavaUtilNavigableMap>)descendingMap;

- (id<JavaUtilMap_Entry>)firstEntry;

- (id<JavaUtilMap_Entry>)floorEntryWithId:(id)key;

- (id)floorKeyWithId:(id)key;

- (id<JavaUtilCollection>)getWithId:(id)arg0;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey;

- (id<JavaUtilNavigableMap>)headMapWithId:(id)toKey
                              withBoolean:(jboolean)inclusive;

- (id<JavaUtilMap_Entry>)higherEntryWithId:(id)key;

- (id)higherKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)keySet;

- (id<JavaUtilMap_Entry>)lastEntry;

- (id<JavaUtilMap_Entry>)lowerEntryWithId:(id)key;

- (id)lowerKeyWithId:(id)key;

- (id<JavaUtilNavigableSet>)navigableKeySet;

- (id<JavaUtilMap_Entry>)pollFirstEntry;

- (id<JavaUtilMap_Entry>)pollLastEntry;

- (id<JavaUtilCollection>)putWithId:(id)arg0
                             withId:(id<JavaUtilCollection>)arg1;

- (id<JavaUtilCollection>)removeWithId:(id)arg0;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toKey
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableMap>)subMapWithId:(id)fromKey
                                  withId:(id)toKey;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey;

- (id<JavaUtilNavigableMap>)tailMapWithId:(id)fromKey
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectAbstractMapBasedMultimap:(ComGoogleCommonCollectAbstractMapBasedMultimap *)outer$
                                              withJavaUtilNavigableMap:(id<JavaUtilNavigableMap>)submap;

- (id<JavaUtilNavigableSet>)createKeySet;

- (id<JavaUtilMap_Entry>)pollAsMapEntryWithJavaUtilIterator:(id<JavaUtilIterator>)entryIterator;

- (id<JavaUtilNavigableMap>)sortedMap;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap *self, ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> submap);

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap *new_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> submap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap *create_ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap_initWithComGoogleCommonCollectAbstractMapBasedMultimap_withJavaUtilNavigableMap_(ComGoogleCommonCollectAbstractMapBasedMultimap *outer$, id<JavaUtilNavigableMap> submap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractMapBasedMultimap_NavigableAsMap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractMapBasedMultimap")
