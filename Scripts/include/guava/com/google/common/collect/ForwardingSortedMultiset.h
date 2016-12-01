//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingSortedMultiset.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingSortedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingSortedMultiset

#if !defined (ComGoogleCommonCollectForwardingSortedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectForwardingSortedMultiset))
#define ComGoogleCommonCollectForwardingSortedMultiset_

#define RESTRICT_ComGoogleCommonCollectForwardingMultiset 1
#define INCLUDE_ComGoogleCommonCollectForwardingMultiset 1
#include "com/google/common/collect/ForwardingMultiset.h"

#define RESTRICT_ComGoogleCommonCollectSortedMultiset 1
#define INCLUDE_ComGoogleCommonCollectSortedMultiset 1
#include "com/google/common/collect/SortedMultiset.h"

@class ComGoogleCommonCollectBoundType;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilNavigableSet;

@interface ComGoogleCommonCollectForwardingSortedMultiset : ComGoogleCommonCollectForwardingMultiset < ComGoogleCommonCollectSortedMultiset >

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

- (instancetype)init;

- (id<ComGoogleCommonCollectSortedMultiset>)delegate;

- (id<ComGoogleCommonCollectMultiset_Entry>)standardFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)standardLastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)standardPollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)standardPollLastEntry;

- (id<ComGoogleCommonCollectSortedMultiset>)standardSubMultisetWithId:(id)lowerBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)lowerBoundType
                                                               withId:(id)upperBound
                                  withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)upperBoundType;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedMultiset_init(ComGoogleCommonCollectForwardingSortedMultiset *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedMultiset)

#endif

#if !defined (ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet))
#define ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet_

#define RESTRICT_ComGoogleCommonCollectSortedMultisets 1
#define INCLUDE_ComGoogleCommonCollectSortedMultisets_NavigableElementSet 1
#include "com/google/common/collect/SortedMultisets.h"

@class ComGoogleCommonCollectForwardingSortedMultiset;

@interface ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet : ComGoogleCommonCollectSortedMultisets_NavigableElementSet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingSortedMultiset:(ComGoogleCommonCollectForwardingSortedMultiset *)outer$;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet_initWithComGoogleCommonCollectForwardingSortedMultiset_(ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet *self, ComGoogleCommonCollectForwardingSortedMultiset *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet *new_ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet_initWithComGoogleCommonCollectForwardingSortedMultiset_(ComGoogleCommonCollectForwardingSortedMultiset *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet *create_ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet_initWithComGoogleCommonCollectForwardingSortedMultiset_(ComGoogleCommonCollectForwardingSortedMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedMultiset_StandardElementSet)

#endif

#if !defined (ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset))
#define ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset_

#define RESTRICT_ComGoogleCommonCollectDescendingMultiset 1
#define INCLUDE_ComGoogleCommonCollectDescendingMultiset 1
#include "com/google/common/collect/DescendingMultiset.h"

@class ComGoogleCommonCollectForwardingSortedMultiset;
@protocol ComGoogleCommonCollectSortedMultiset;

@interface ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset : ComGoogleCommonCollectDescendingMultiset

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingSortedMultiset:(ComGoogleCommonCollectForwardingSortedMultiset *)outer$;

#pragma mark Package-Private

- (id<ComGoogleCommonCollectSortedMultiset>)forwardMultiset;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset_initWithComGoogleCommonCollectForwardingSortedMultiset_(ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset *self, ComGoogleCommonCollectForwardingSortedMultiset *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingSortedMultiset_StandardDescendingMultiset)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingSortedMultiset")
