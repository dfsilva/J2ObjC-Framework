//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SingletonImmutableList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList")
#ifdef RESTRICT_ComGoogleCommonCollectSingletonImmutableList
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSingletonImmutableList

#if !defined (ComGoogleCommonCollectSingletonImmutableList_) && (INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList || defined(INCLUDE_ComGoogleCommonCollectSingletonImmutableList))
#define ComGoogleCommonCollectSingletonImmutableList_

#define RESTRICT_ComGoogleCommonCollectImmutableList 1
#define INCLUDE_ComGoogleCommonCollectImmutableList 1
#include "com/google/common/collect/ImmutableList.h"

@class ComGoogleCommonCollectUnmodifiableIterator;

@interface ComGoogleCommonCollectSingletonImmutableList : ComGoogleCommonCollectImmutableList {
 @public
  id element_;
}

#pragma mark Public

- (id)getWithInt:(jint)index;

- (ComGoogleCommonCollectUnmodifiableIterator *)iterator;

- (jint)size;

- (ComGoogleCommonCollectImmutableList *)subListWithInt:(jint)fromIndex
                                                withInt:(jint)toIndex;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithId:(id)element;

- (jboolean)isPartialView;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSingletonImmutableList)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectSingletonImmutableList, element_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectSingletonImmutableList_initWithId_(ComGoogleCommonCollectSingletonImmutableList *self, id element);

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableList *new_ComGoogleCommonCollectSingletonImmutableList_initWithId_(id element) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectSingletonImmutableList *create_ComGoogleCommonCollectSingletonImmutableList_initWithId_(id element);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSingletonImmutableList)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSingletonImmutableList")
