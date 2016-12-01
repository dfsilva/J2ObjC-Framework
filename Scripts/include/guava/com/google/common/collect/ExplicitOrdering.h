//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ExplicitOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectExplicitOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectExplicitOrdering

#if !defined (ComGoogleCommonCollectExplicitOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering || defined(INCLUDE_ComGoogleCommonCollectExplicitOrdering))
#define ComGoogleCommonCollectExplicitOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectExplicitOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable > {
 @public
  ComGoogleCommonCollectImmutableMap *rankMap_;
}

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)rankMap;

- (instancetype)initWithJavaUtilList:(id<JavaUtilList>)valuesInOrder;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectExplicitOrdering)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectExplicitOrdering, rankMap_, ComGoogleCommonCollectImmutableMap *)

FOUNDATION_EXPORT void ComGoogleCommonCollectExplicitOrdering_initWithJavaUtilList_(ComGoogleCommonCollectExplicitOrdering *self, id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *new_ComGoogleCommonCollectExplicitOrdering_initWithJavaUtilList_(id<JavaUtilList> valuesInOrder) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *create_ComGoogleCommonCollectExplicitOrdering_initWithJavaUtilList_(id<JavaUtilList> valuesInOrder);

FOUNDATION_EXPORT void ComGoogleCommonCollectExplicitOrdering_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectExplicitOrdering *self, ComGoogleCommonCollectImmutableMap *rankMap);

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *new_ComGoogleCommonCollectExplicitOrdering_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *rankMap) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectExplicitOrdering *create_ComGoogleCommonCollectExplicitOrdering_initWithComGoogleCommonCollectImmutableMap_(ComGoogleCommonCollectImmutableMap *rankMap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectExplicitOrdering)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectExplicitOrdering")
