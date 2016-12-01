//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/CartesianList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectCartesianList")
#ifdef RESTRICT_ComGoogleCommonCollectCartesianList
#define INCLUDE_ALL_ComGoogleCommonCollectCartesianList 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectCartesianList 1
#endif
#undef RESTRICT_ComGoogleCommonCollectCartesianList

#if !defined (ComGoogleCommonCollectCartesianList_) && (INCLUDE_ALL_ComGoogleCommonCollectCartesianList || defined(INCLUDE_ComGoogleCommonCollectCartesianList))
#define ComGoogleCommonCollectCartesianList_

#define RESTRICT_JavaUtilAbstractList 1
#define INCLUDE_JavaUtilAbstractList 1
#include "../../../../../java/util/AbstractList.h"

#define RESTRICT_JavaUtilRandomAccess 1
#define INCLUDE_JavaUtilRandomAccess 1
#include "../../../../../java/util/RandomAccess.h"

@class ComGoogleCommonCollectImmutableList;
@protocol JavaUtilList;

@interface ComGoogleCommonCollectCartesianList : JavaUtilAbstractList < JavaUtilRandomAccess >

#pragma mark Public

- (jboolean)containsWithId:(id)o;

- (ComGoogleCommonCollectImmutableList *)getWithInt:(jint)index;

- (id<JavaUtilList>)removeWithInt:(jint)arg0;

- (id<JavaUtilList>)setWithInt:(jint)arg0
                        withId:(id<JavaUtilList>)arg1;

- (jint)size;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)axes;

+ (id<JavaUtilList>)createWithJavaUtilList:(id<JavaUtilList>)lists;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectCartesianList)

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonCollectCartesianList_createWithJavaUtilList_(id<JavaUtilList> lists);

FOUNDATION_EXPORT void ComGoogleCommonCollectCartesianList_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectCartesianList *self, ComGoogleCommonCollectImmutableList *axes);

FOUNDATION_EXPORT ComGoogleCommonCollectCartesianList *new_ComGoogleCommonCollectCartesianList_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *axes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectCartesianList *create_ComGoogleCommonCollectCartesianList_initWithComGoogleCommonCollectImmutableList_(ComGoogleCommonCollectImmutableList *axes);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectCartesianList)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectCartesianList")
