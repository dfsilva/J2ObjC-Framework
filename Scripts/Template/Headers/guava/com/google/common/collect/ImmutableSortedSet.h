//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableSortedSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedSet
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedSet

#if !defined (ComGoogleCommonCollectImmutableSortedSet_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedSet))
#define ComGoogleCommonCollectImmutableSortedSet_

#define RESTRICT_ComGoogleCommonCollectImmutableSortedSetFauxverideShim 1
#define INCLUDE_ComGoogleCommonCollectImmutableSortedSetFauxverideShim 1
#include "../../../../../com/google/common/collect/ImmutableSortedSetFauxverideShim.h"

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "../../../../../java/util/NavigableSet.h"

#define RESTRICT_ComGoogleCommonCollectSortedIterable 1
#define INCLUDE_ComGoogleCommonCollectSortedIterable 1
#include "../../../../../com/google/common/collect/SortedIterable.h"

@class ComGoogleCommonCollectImmutableSortedSet_Builder;
@class ComGoogleCommonCollectRegularImmutableSortedSet;
@class ComGoogleCommonCollectUnmodifiableIterator;
@class IOSObjectArray;
@protocol JavaLangComparable;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectImmutableSortedSet : ComGoogleCommonCollectImmutableSortedSetFauxverideShim < JavaUtilNavigableSet, ComGoogleCommonCollectSortedIterable > {
 @public
  id<JavaUtilComparator> comparator_;
  ComGoogleCommonCollectImmutableSortedSet *descendingSet_;
}

#pragma mark Public

- (id)ceilingWithId:(id)e;

- (id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaUtilCollection:(id<JavaUtilCollection>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                    withJavaUtilCollection:(id<JavaUtilCollection>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                      withJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                      withJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaLangComparableArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaLangIterable:(id<JavaLangIterable>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedSet *)copyOfSortedWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)sortedSet OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCollectUnmodifiableIterator *)descendingIterator;

- (ComGoogleCommonCollectImmutableSortedSet *)descendingSet;

- (id)first;

- (id)floorWithId:(id)e;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetWithId:(id)toElement;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetWithId:(id)toElement
                                                withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)e;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (id)last;

- (id)lowerWithId:(id)e;

+ (ComGoogleCommonCollectImmutableSortedSet_Builder *)naturalOrder;

+ (ComGoogleCommonCollectImmutableSortedSet *)of;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)element;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                withJavaLangComparable:(id<JavaLangComparable>)e2;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                withJavaLangComparable:(id<JavaLangComparable>)e2
                                                withJavaLangComparable:(id<JavaLangComparable>)e3;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                withJavaLangComparable:(id<JavaLangComparable>)e2
                                                withJavaLangComparable:(id<JavaLangComparable>)e3
                                                withJavaLangComparable:(id<JavaLangComparable>)e4;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                withJavaLangComparable:(id<JavaLangComparable>)e2
                                                withJavaLangComparable:(id<JavaLangComparable>)e3
                                                withJavaLangComparable:(id<JavaLangComparable>)e4
                                                withJavaLangComparable:(id<JavaLangComparable>)e5;

+ (ComGoogleCommonCollectImmutableSortedSet *)ofWithJavaLangComparable:(id<JavaLangComparable>)e1
                                                withJavaLangComparable:(id<JavaLangComparable>)e2
                                                withJavaLangComparable:(id<JavaLangComparable>)e3
                                                withJavaLangComparable:(id<JavaLangComparable>)e4
                                                withJavaLangComparable:(id<JavaLangComparable>)e5
                                                withJavaLangComparable:(id<JavaLangComparable>)e6
                                           withJavaLangComparableArray:(IOSObjectArray *)remaining;

+ (ComGoogleCommonCollectImmutableSortedSet_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id)pollFirst;

- (id)pollLast;

+ (ComGoogleCommonCollectImmutableSortedSet_Builder *)reverseOrder;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetWithId:(id)fromElement
                                               withBoolean:(jboolean)fromInclusive
                                                    withId:(id)toElement
                                               withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetWithId:(id)fromElement
                                                    withId:(id)toElement;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetWithId:(id)fromElement;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetWithId:(id)fromElement
                                                withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectImmutableSortedSet *)constructWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                                                      withInt:(jint)n
                                                            withNSObjectArray:(IOSObjectArray *)contents;

- (ComGoogleCommonCollectImmutableSortedSet *)createDescendingSet;

+ (ComGoogleCommonCollectRegularImmutableSortedSet *)emptySetWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedSet *)headSetImplWithId:(id)toElement
                                                    withBoolean:(jboolean)inclusive;

- (jint)indexOfWithId:(id)target;

- (ComGoogleCommonCollectImmutableSortedSet *)subSetImplWithId:(id)fromElement
                                                   withBoolean:(jboolean)fromInclusive
                                                        withId:(id)toElement
                                                   withBoolean:(jboolean)toInclusive;

- (ComGoogleCommonCollectImmutableSortedSet *)tailSetImplWithId:(id)fromElement
                                                    withBoolean:(jboolean)inclusive;

+ (jint)unsafeCompareWithJavaUtilComparator:(id<JavaUtilComparator>)comparator
                                     withId:(id)a
                                     withId:(id)b;

- (jint)unsafeCompareWithId:(id)a
                     withId:(id)b;

- (id)writeReplace;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableSortedSet)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedSet, comparator_, id<JavaUtilComparator>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectImmutableSortedSet, descendingSet_, ComGoogleCommonCollectImmutableSortedSet *)

FOUNDATION_EXPORT ComGoogleCommonCollectRegularImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_emptySetWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_(id<JavaLangComparable> element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_ofWithJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparable_withJavaLangComparableArray_(id<JavaLangComparable> e1, id<JavaLangComparable> e2, id<JavaLangComparable> e3, id<JavaLangComparable> e4, id<JavaLangComparable> e5, id<JavaLangComparable> e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaLangComparableArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaLangIterable_(id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaUtilCollection_(id<JavaUtilCollection> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaUtilIterator_(id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaUtilComparator_withJavaUtilIterator_(id<JavaUtilComparator> comparator, id<JavaUtilIterator> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaUtilComparator_withJavaLangIterable_(id<JavaUtilComparator> comparator, id<JavaLangIterable> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfWithJavaUtilComparator_withJavaUtilCollection_(id<JavaUtilComparator> comparator, id<JavaUtilCollection> elements);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_copyOfSortedWithJavaUtilSortedSet_(id<JavaUtilSortedSet> sortedSet);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet *ComGoogleCommonCollectImmutableSortedSet_constructWithJavaUtilComparator_withInt_withNSObjectArray_(id<JavaUtilComparator> comparator, jint n, IOSObjectArray *contents);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *ComGoogleCommonCollectImmutableSortedSet_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *ComGoogleCommonCollectImmutableSortedSet_reverseOrder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *ComGoogleCommonCollectImmutableSortedSet_naturalOrder();

FOUNDATION_EXPORT jint ComGoogleCommonCollectImmutableSortedSet_unsafeCompareWithJavaUtilComparator_withId_withId_(id<JavaUtilComparator> comparator, id a, id b);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedSet_initWithJavaUtilComparator_(ComGoogleCommonCollectImmutableSortedSet *self, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedSet)

#endif

#if !defined (ComGoogleCommonCollectImmutableSortedSet_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedSet_Builder))
#define ComGoogleCommonCollectImmutableSortedSet_Builder_

#define RESTRICT_ComGoogleCommonCollectImmutableSet 1
#define INCLUDE_ComGoogleCommonCollectImmutableSet_Builder 1
#include "../../../../../com/google/common/collect/ImmutableSet.h"

@class ComGoogleCommonCollectImmutableSortedSet;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectImmutableSortedSet_Builder : ComGoogleCommonCollectImmutableSet_Builder

#pragma mark Public

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (ComGoogleCommonCollectImmutableSortedSet_Builder *)addWithId:(id)element;

- (ComGoogleCommonCollectImmutableSortedSet_Builder *)addWithNSObjectArray:(IOSObjectArray *)elements;

- (ComGoogleCommonCollectImmutableSortedSet_Builder *)addAllWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (ComGoogleCommonCollectImmutableSortedSet_Builder *)addAllWithJavaUtilIterator:(id<JavaUtilIterator>)elements;

- (ComGoogleCommonCollectImmutableSortedSet *)build;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedSet_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedSet_Builder_initWithJavaUtilComparator_(ComGoogleCommonCollectImmutableSortedSet_Builder *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *new_ComGoogleCommonCollectImmutableSortedSet_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedSet_Builder *create_ComGoogleCommonCollectImmutableSortedSet_Builder_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedSet_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedSet")