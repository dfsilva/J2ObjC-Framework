//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Ordering.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectOrdering
#ifdef INCLUDE_ComGoogleCommonCollectOrdering_ArbitraryOrdering
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#endif

#if !defined (ComGoogleCommonCollectOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering))
#define ComGoogleCommonCollectOrdering_

#define RESTRICT_JavaUtilComparator 1
#define INCLUDE_JavaUtilComparator 1
#include "../../../../../java/util/Comparator.h"

@class ComGoogleCommonCollectImmutableList;
@class IOSObjectArray;
@protocol ComGoogleCommonBaseFunction;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectOrdering : NSObject < JavaUtilComparator >

#pragma mark Public

+ (ComGoogleCommonCollectOrdering *)allEqual;

+ (ComGoogleCommonCollectOrdering *)arbitrary;

- (jint)binarySearchWithJavaUtilList:(id<JavaUtilList>)sortedList
                              withId:(id)key;

- (jint)compareWithId:(id)left
               withId:(id)right;

- (ComGoogleCommonCollectOrdering *)compoundWithJavaUtilComparator:(id<JavaUtilComparator>)secondaryComparator;

+ (ComGoogleCommonCollectOrdering *)compoundWithJavaLangIterable:(id<JavaLangIterable>)comparators;

+ (ComGoogleCommonCollectOrdering *)explicit__WithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

+ (ComGoogleCommonCollectOrdering *)explicit__WithId:(id)leastValue
                                   withNSObjectArray:(IOSObjectArray *)remainingValuesInOrder;

+ (ComGoogleCommonCollectOrdering *)fromWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectOrdering *)fromWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)ordering;

- (id<JavaUtilList>)greatestOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                           withInt:(jint)k;

- (id<JavaUtilList>)greatestOfWithJavaUtilIterator:(id<JavaUtilIterator>)iterator
                                           withInt:(jint)k;

- (ComGoogleCommonCollectImmutableList *)immutableSortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

- (jboolean)isOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (jboolean)isStrictlyOrderedWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id<JavaUtilList>)leastOfWithJavaLangIterable:(id<JavaLangIterable>)iterable
                                        withInt:(jint)k;

- (id<JavaUtilList>)leastOfWithJavaUtilIterator:(id<JavaUtilIterator>)elements
                                        withInt:(jint)k;

- (ComGoogleCommonCollectOrdering *)lexicographical;

- (id)maxWithId:(id)a
         withId:(id)b;

- (id)maxWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id)maxWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)maxWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

- (id)minWithId:(id)a
         withId:(id)b;

- (id)minWithId:(id)a
         withId:(id)b
         withId:(id)c
withNSObjectArray:(IOSObjectArray *)rest;

- (id)minWithJavaLangIterable:(id<JavaLangIterable>)iterable;

- (id)minWithJavaUtilIterator:(id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectOrdering *)natural;

- (ComGoogleCommonCollectOrdering *)nullsFirst;

- (ComGoogleCommonCollectOrdering *)nullsLast;

- (ComGoogleCommonCollectOrdering *)onResultOfWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

- (ComGoogleCommonCollectOrdering *)reverse;

- (id<JavaUtilList>)sortedCopyWithJavaLangIterable:(id<JavaLangIterable>)elements;

+ (ComGoogleCommonCollectOrdering *)usingToString;

#pragma mark Protected

- (instancetype)init;

#pragma mark Package-Private

- (ComGoogleCommonCollectOrdering *)onKeys;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering)

inline jint ComGoogleCommonCollectOrdering_get_LEFT_IS_GREATER();
#define ComGoogleCommonCollectOrdering_LEFT_IS_GREATER 1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectOrdering, LEFT_IS_GREATER, jint)

inline jint ComGoogleCommonCollectOrdering_get_RIGHT_IS_GREATER();
#define ComGoogleCommonCollectOrdering_RIGHT_IS_GREATER -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCollectOrdering, RIGHT_IS_GREATER, jint)

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_natural();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_fromWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *ordering);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_explicit__WithId_withNSObjectArray_(id leastValue, IOSObjectArray *remainingValuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_allEqual();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_usingToString();

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_arbitrary();

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_init(ComGoogleCommonCollectOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering *ComGoogleCommonCollectOrdering_compoundWithJavaLangIterable_(id<JavaLangIterable> comparators);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering)

#endif

#if !defined (ComGoogleCommonCollectOrdering_ArbitraryOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering_ArbitraryOrdering))
#define ComGoogleCommonCollectOrdering_ArbitraryOrdering_

@interface ComGoogleCommonCollectOrdering_ArbitraryOrdering : ComGoogleCommonCollectOrdering

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

- (jint)identityHashCodeWithId:(id)object;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_ArbitraryOrdering_init(ComGoogleCommonCollectOrdering_ArbitraryOrdering *self);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_ArbitraryOrdering *new_ComGoogleCommonCollectOrdering_ArbitraryOrdering_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_ArbitraryOrdering *create_ComGoogleCommonCollectOrdering_ArbitraryOrdering_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_ArbitraryOrdering)

#endif

#if !defined (ComGoogleCommonCollectOrdering_IncomparableValueException_) && (INCLUDE_ALL_ComGoogleCommonCollectOrdering || defined(INCLUDE_ComGoogleCommonCollectOrdering_IncomparableValueException))
#define ComGoogleCommonCollectOrdering_IncomparableValueException_

#define RESTRICT_JavaLangClassCastException 1
#define INCLUDE_JavaLangClassCastException 1
#include "../../../../../java/lang/ClassCastException.h"

@interface ComGoogleCommonCollectOrdering_IncomparableValueException : JavaLangClassCastException {
 @public
  id value_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectOrdering_IncomparableValueException)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectOrdering_IncomparableValueException, value_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(ComGoogleCommonCollectOrdering_IncomparableValueException *self, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_IncomparableValueException *new_ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(id value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectOrdering_IncomparableValueException *create_ComGoogleCommonCollectOrdering_IncomparableValueException_initWithId_(id value);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectOrdering_IncomparableValueException)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectOrdering")
