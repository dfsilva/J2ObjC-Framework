//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ContiguousSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectContiguousSet")
#ifdef RESTRICT_ComGoogleCommonCollectContiguousSet
#define INCLUDE_ALL_ComGoogleCommonCollectContiguousSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectContiguousSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectContiguousSet

#if !defined (ComGoogleCommonCollectContiguousSet_) && (INCLUDE_ALL_ComGoogleCommonCollectContiguousSet || defined(INCLUDE_ComGoogleCommonCollectContiguousSet))
#define ComGoogleCommonCollectContiguousSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedSet 1
#include "com/google/common/collect/ImmutableSortedSet.h"

@class ComGoogleCommonCollectBoundType;
@class ComGoogleCommonCollectDiscreteDomain;
@class ComGoogleCommonCollectImmutableSortedSet_Builder;
@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;

@interface ComGoogleCommonCollectContiguousSet : ComGoogleCommonCollectImmutableSortedSet {
 @public
  ComGoogleCommonCollectDiscreteDomain *domain_;
}

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSortedSet_Builder *)builder;

- (id<JavaLangComparable>)ceilingWithId:(id<JavaLangComparable>)arg0;

+ (ComGoogleCommonCollectContiguousSet *)createWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range
                                      withComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (id<JavaLangComparable>)first;

- (id<JavaLangComparable>)floorWithId:(id<JavaLangComparable>)arg0;

- (ComGoogleCommonCollectContiguousSet *)headSetWithId:(id<JavaLangComparable>)toElement;

- (ComGoogleCommonCollectContiguousSet *)headSetWithId:(id<JavaLangComparable>)toElement
                                           withBoolean:(jboolean)inclusive;

- (id<JavaLangComparable>)higherWithId:(id<JavaLangComparable>)arg0;

- (ComGoogleCommonCollectContiguousSet *)intersectionWithComGoogleCommonCollectContiguousSet:(ComGoogleCommonCollectContiguousSet *)other;

- (id<JavaLangComparable>)last;

- (id<JavaLangComparable>)lowerWithId:(id<JavaLangComparable>)arg0;

- (id<JavaLangComparable>)pollFirst;

- (id<JavaLangComparable>)pollLast;

- (ComGoogleCommonCollectRange *)range;

- (ComGoogleCommonCollectRange *)rangeWithComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)lowerBoundType
                                      withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)upperBoundType;

- (ComGoogleCommonCollectContiguousSet *)subSetWithId:(id<JavaLangComparable>)fromElement
                                          withBoolean:(jboolean)fromInclusive
                                               withId:(id<JavaLangComparable>)toElement
                                          withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)subSetWithId:(id<JavaLangComparable>)fromElement
                                               withId:(id<JavaLangComparable>)toElement;

- (ComGoogleCommonCollectContiguousSet *)tailSetWithId:(id<JavaLangComparable>)fromElement;

- (ComGoogleCommonCollectContiguousSet *)tailSetWithId:(id<JavaLangComparable>)fromElement
                                           withBoolean:(jboolean)inclusive;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectDiscreteDomain:(ComGoogleCommonCollectDiscreteDomain *)domain;

- (ComGoogleCommonCollectContiguousSet *)headSetImplWithId:(id<JavaLangComparable>)toElement
                                               withBoolean:(jboolean)inclusive;

- (ComGoogleCommonCollectContiguousSet *)subSetImplWithId:(id<JavaLangComparable>)fromElement
                                              withBoolean:(jboolean)fromInclusive
                                                   withId:(id<JavaLangComparable>)toElement
                                              withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectContiguousSet *)tailSetImplWithId:(id<JavaLangComparable>)fromElement
                                               withBoolean:(jboolean)inclusive;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectContiguousSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectContiguousSet, domain_, ComGoogleCommonCollectDiscreteDomain *)

FOUNDATION_EXPORT ComGoogleCommonCollectContiguousSet *ComGoogleCommonCollectContiguousSet_createWithComGoogleCommonCollectRange_withComGoogleCommonCollectDiscreteDomain_(ComGoogleCommonCollectRange *range, ComGoogleCommonCollectDiscreteDomain *domain);

FOUNDATION_EXPORT void ComGoogleCommonCollectContiguousSet_initWithComGoogleCommonCollectDiscreteDomain_(ComGoogleCommonCollectContiguousSet *self, ComGoogleCommonCollectDiscreteDomain *domain);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *ComGoogleCommonCollectContiguousSet_builder();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectContiguousSet)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectContiguousSet")
