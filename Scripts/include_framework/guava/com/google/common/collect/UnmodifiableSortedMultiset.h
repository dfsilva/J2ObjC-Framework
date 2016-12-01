//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/UnmodifiableSortedMultiset.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableSortedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectUnmodifiableSortedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableSortedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableSortedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectUnmodifiableSortedMultiset

#if !defined (ComGoogleCommonCollectUnmodifiableSortedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectUnmodifiableSortedMultiset))
#define ComGoogleCommonCollectUnmodifiableSortedMultiset_

#define RESTRICT_ComGoogleCommonCollectMultisets 1
#define INCLUDE_ComGoogleCommonCollectMultisets_UnmodifiableMultiset 1
#include "../../../../../com/google/common/collect/Multisets.h"

#define RESTRICT_ComGoogleCommonCollectSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectSortedMultiset 1
#include "../../../../../com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectUnmodifiableSortedMultiset : ComGoogleCommonCollectMultisets_UnmodifiableMultiset < ComGoogleCommonCollectSortedMultiset >

#pragma mark Public

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)lowerBound
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)lowerBoundType
                                                       withId:(id)upperBound
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)upperBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

#pragma mark Protected

- (id<ComGoogleCommonCollectSortedMultiset>)delegate;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectSortedMultiset:(id<ComGoogleCommonCollectSortedMultiset>)delegate;

- (id<JavaUtilNavigableSet>)createElementSet;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectUnmodifiableSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectUnmodifiableSortedMultiset_initWithComGoogleCommonCollectSortedMultiset_(ComGoogleCommonCollectUnmodifiableSortedMultiset *self, id<ComGoogleCommonCollectSortedMultiset> delegate);

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableSortedMultiset *new_ComGoogleCommonCollectUnmodifiableSortedMultiset_initWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectUnmodifiableSortedMultiset *create_ComGoogleCommonCollectUnmodifiableSortedMultiset_initWithComGoogleCommonCollectSortedMultiset_(id<ComGoogleCommonCollectSortedMultiset> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUnmodifiableSortedMultiset)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectUnmodifiableSortedMultiset")
