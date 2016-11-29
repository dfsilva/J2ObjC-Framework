//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Iterables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectIterables")
#ifdef RESTRICT_ComGoogleCommonCollectIterables
#define INCLUDE_ALL_ComGoogleCommonCollectIterables 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectIterables 1
#endif
#undef RESTRICT_ComGoogleCommonCollectIterables

#if !defined (ComGoogleCommonCollectIterables_) && (INCLUDE_ALL_ComGoogleCommonCollectIterables || defined(INCLUDE_ComGoogleCommonCollectIterables))
#define ComGoogleCommonCollectIterables_

@class ComGoogleCommonBaseOptional;
@class ComGoogleCommonCollectImmutableCollection;
@class IOSClass;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;

@interface ComGoogleCommonCollectIterables : NSObject

#pragma mark Public

+ (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)addTo
                    withJavaLangIterable:(id<JavaLangIterable>)elementsToAdd;

+ (jboolean)allWithJavaLangIterable:(id<JavaLangIterable>)iterable
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)anyWithJavaLangIterable:(id<JavaLangIterable>)iterable
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaLangIterable>)concatWithJavaLangIterable:(id<JavaLangIterable>)inputs;

+ (id<JavaLangIterable>)concatWithJavaLangIterableArray:(IOSObjectArray *)inputs;

+ (id<JavaLangIterable>)concatWithJavaLangIterable:(id<JavaLangIterable>)a
                              withJavaLangIterable:(id<JavaLangIterable>)b;

+ (id<JavaLangIterable>)concatWithJavaLangIterable:(id<JavaLangIterable>)a
                              withJavaLangIterable:(id<JavaLangIterable>)b
                              withJavaLangIterable:(id<JavaLangIterable>)c;

+ (id<JavaLangIterable>)concatWithJavaLangIterable:(id<JavaLangIterable>)a
                              withJavaLangIterable:(id<JavaLangIterable>)b
                              withJavaLangIterable:(id<JavaLangIterable>)c
                              withJavaLangIterable:(id<JavaLangIterable>)d;

+ (id<JavaLangIterable>)consumingIterableWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (jboolean)containsWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                  withId:(id)element;

+ (id<JavaLangIterable>)cycleWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaLangIterable>)cycleWithNSObjectArray:(IOSObjectArray *)elements;

+ (jboolean)elementsEqualWithJavaLangIterable:(id<JavaLangIterable>)iterable1
                         withJavaLangIterable:(id<JavaLangIterable>)iterable2;

+ (id<JavaLangIterable>)filterWithJavaLangIterable:(id<JavaLangIterable>)unfiltered
                                      withIOSClass:(IOSClass *)type;

+ (id<JavaLangIterable>)filterWithJavaLangIterable:(id<JavaLangIterable>)unfiltered
                  withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id)findWithJavaLangIterable:(id<JavaLangIterable>)iterable
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                        withId:(id)defaultValue;

+ (id)findWithJavaLangIterable:(id<JavaLangIterable>)iterable
withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jint)frequencyWithJavaLangIterable:(id<JavaLangIterable>)iterable
                               withId:(id)element;

+ (id)getWithJavaLangIterable:(id<JavaLangIterable>)iterable
                      withInt:(jint)position
                       withId:(id)defaultValue;

+ (id)getWithJavaLangIterable:(id<JavaLangIterable>)iterable
                      withInt:(jint)position;

+ (id)getFirstWithJavaLangIterable:(id<JavaLangIterable>)iterable
                            withId:(id)defaultValue;

+ (id)getLastWithJavaLangIterable:(id<JavaLangIterable>)iterable
                           withId:(id)defaultValue;

+ (id)getLastWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id)getOnlyElementWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                  withId:(id)defaultValue;

+ (id)getOnlyElementWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (jint)indexOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
   withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)isEmptyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaLangIterable>)limitWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                          withInt:(jint)limitSize;

+ (id<JavaLangIterable>)mergeSortedWithJavaLangIterable:(id<JavaLangIterable>)iterables
                                 withJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (id<JavaLangIterable>)paddedPartitionWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                                    withInt:(jint)size;

+ (id<JavaLangIterable>)partitionWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                              withInt:(jint)size;

+ (jboolean)removeAllWithJavaLangIterable:(id<JavaLangIterable>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRemove;

+ (jboolean)removeIfWithJavaLangIterable:(id<JavaLangIterable>)removeFrom
        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (jboolean)retainAllWithJavaLangIterable:(id<JavaLangIterable>)removeFrom
                   withJavaUtilCollection:(id<JavaUtilCollection>)elementsToRetain;

+ (jint)sizeWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaLangIterable>)skipWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                         withInt:(jint)numberToSkip;

+ (IOSObjectArray *)toArrayWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                   withIOSClass:(IOSClass *)type;

+ (NSString *)toStringWithJavaLangIterable:(id<JavaLangIterable>)iterable;

+ (id<JavaLangIterable>)transformWithJavaLangIterable:(id<JavaLangIterable>)fromIterable
                      withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (ComGoogleCommonBaseOptional *)tryFindWithJavaLangIterable:(id<JavaLangIterable>)iterable
                            withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<JavaLangIterable>)unmodifiableIterableWithComGoogleCommonCollectImmutableCollection:(ComGoogleCommonCollectImmutableCollection *)iterable;

+ (id<JavaLangIterable>)unmodifiableIterableWithJavaLangIterable:(id<JavaLangIterable>)iterable;

#pragma mark Package-Private

+ (id)removeFirstMatchingWithJavaLangIterable:(id<JavaLangIterable>)removeFrom
             withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (IOSObjectArray *)toArrayWithJavaLangIterable:(id<JavaLangIterable>)iterable
                              withNSObjectArray:(IOSObjectArray *)array;

+ (IOSObjectArray *)toArrayWithJavaLangIterable:(id<JavaLangIterable>)iterable;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectIterables)

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_unmodifiableIterableWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_unmodifiableIterableWithComGoogleCommonCollectImmutableCollection_(ComGoogleCommonCollectImmutableCollection *iterable);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterables_sizeWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_containsWithJavaLangIterable_withId_(id<JavaLangIterable> iterable, id element);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_removeAllWithJavaLangIterable_withJavaUtilCollection_(id<JavaLangIterable> removeFrom, id<JavaUtilCollection> elementsToRemove);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_retainAllWithJavaLangIterable_withJavaUtilCollection_(id<JavaLangIterable> removeFrom, id<JavaUtilCollection> elementsToRetain);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_removeIfWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> removeFrom, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_removeFirstMatchingWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> removeFrom, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_elementsEqualWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> iterable1, id<JavaLangIterable> iterable2);

FOUNDATION_EXPORT NSString *ComGoogleCommonCollectIterables_toStringWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getOnlyElementWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getOnlyElementWithJavaLangIterable_withId_(id<JavaLangIterable> iterable, id defaultValue);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectIterables_toArrayWithJavaLangIterable_withIOSClass_(id<JavaLangIterable> iterable, IOSClass *type);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectIterables_toArrayWithJavaLangIterable_withNSObjectArray_(id<JavaLangIterable> iterable, IOSObjectArray *array);

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectIterables_toArrayWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_addAllWithJavaUtilCollection_withJavaLangIterable_(id<JavaUtilCollection> addTo, id<JavaLangIterable> elementsToAdd);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterables_frequencyWithJavaLangIterable_withId_(id<JavaLangIterable> iterable, id element);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_cycleWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_cycleWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_concatWithJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> a, id<JavaLangIterable> b);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_concatWithJavaLangIterable_withJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> a, id<JavaLangIterable> b, id<JavaLangIterable> c);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_concatWithJavaLangIterable_withJavaLangIterable_withJavaLangIterable_withJavaLangIterable_(id<JavaLangIterable> a, id<JavaLangIterable> b, id<JavaLangIterable> c, id<JavaLangIterable> d);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_concatWithJavaLangIterableArray_(IOSObjectArray *inputs);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_concatWithJavaLangIterable_(id<JavaLangIterable> inputs);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_partitionWithJavaLangIterable_withInt_(id<JavaLangIterable> iterable, jint size);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_paddedPartitionWithJavaLangIterable_withInt_(id<JavaLangIterable> iterable, jint size);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_filterWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> unfiltered, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_filterWithJavaLangIterable_withIOSClass_(id<JavaLangIterable> unfiltered, IOSClass *type);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_anyWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_allWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_findWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_findWithJavaLangIterable_withComGoogleCommonBasePredicate_withId_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate, id defaultValue);

FOUNDATION_EXPORT ComGoogleCommonBaseOptional *ComGoogleCommonCollectIterables_tryFindWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT jint ComGoogleCommonCollectIterables_indexOfWithJavaLangIterable_withComGoogleCommonBasePredicate_(id<JavaLangIterable> iterable, id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_transformWithJavaLangIterable_withComGoogleCommonBaseFunction_(id<JavaLangIterable> fromIterable, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getWithJavaLangIterable_withInt_(id<JavaLangIterable> iterable, jint position);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getWithJavaLangIterable_withInt_withId_(id<JavaLangIterable> iterable, jint position, id defaultValue);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getFirstWithJavaLangIterable_withId_(id<JavaLangIterable> iterable, id defaultValue);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getLastWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id ComGoogleCommonCollectIterables_getLastWithJavaLangIterable_withId_(id<JavaLangIterable> iterable, id defaultValue);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_skipWithJavaLangIterable_withInt_(id<JavaLangIterable> iterable, jint numberToSkip);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_limitWithJavaLangIterable_withInt_(id<JavaLangIterable> iterable, jint limitSize);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_consumingIterableWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectIterables_isEmptyWithJavaLangIterable_(id<JavaLangIterable> iterable);

FOUNDATION_EXPORT id<JavaLangIterable> ComGoogleCommonCollectIterables_mergeSortedWithJavaLangIterable_withJavaUtilComparator_(id<JavaLangIterable> iterables, id<JavaUtilComparator> comparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectIterables)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectIterables")
