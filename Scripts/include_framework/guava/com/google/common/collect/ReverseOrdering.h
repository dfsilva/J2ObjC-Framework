//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ReverseOrdering.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectReverseOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectReverseOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectReverseOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectReverseOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectReverseOrdering

#if !defined (ComGoogleCommonCollectReverseOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectReverseOrdering || defined(INCLUDE_ComGoogleCommonCollectReverseOrdering))
#define ComGoogleCommonCollectReverseOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "../../../../../com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectReverseOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectOrdering *forwardOrder_;
}

#pragma mark Public

- (jint)compareWithId:(id)a
               withId:(id)b;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

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

- (ComGoogleCommonCollectOrdering *)reverse;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectOrdering:(ComGoogleCommonCollectOrdering *)forwardOrder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectReverseOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectReverseOrdering, forwardOrder_, ComGoogleCommonCollectOrdering *)

FOUNDATION_EXPORT void ComGoogleCommonCollectReverseOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectReverseOrdering *self, ComGoogleCommonCollectOrdering *forwardOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectReverseOrdering *new_ComGoogleCommonCollectReverseOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *forwardOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectReverseOrdering *create_ComGoogleCommonCollectReverseOrdering_initWithComGoogleCommonCollectOrdering_(ComGoogleCommonCollectOrdering *forwardOrder);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectReverseOrdering)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectReverseOrdering")
