//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/HashMultimap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectHashMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectHashMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectHashMultimap

#if !defined (ComGoogleCommonCollectHashMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectHashMultimap || defined(INCLUDE_ComGoogleCommonCollectHashMultimap))
#define ComGoogleCommonCollectHashMultimap_

#define RESTRICT_ComGoogleCommonCollectAbstractSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectAbstractSetMultimap 1
#include "../../../../../com/google/common/collect/AbstractSetMultimap.h"

@protocol ComGoogleCommonCollectMultimap;
@protocol JavaUtilSet;

@interface ComGoogleCommonCollectHashMultimap : ComGoogleCommonCollectAbstractSetMultimap {
 @public
  jint expectedValuesPerKey_;
}

#pragma mark Public

+ (ComGoogleCommonCollectHashMultimap *)create;

+ (ComGoogleCommonCollectHashMultimap *)createWithInt:(jint)expectedKeys
                                              withInt:(jint)expectedValuesPerKey;

+ (ComGoogleCommonCollectHashMultimap *)createWithComGoogleCommonCollectMultimap:(id<ComGoogleCommonCollectMultimap>)multimap;

#pragma mark Package-Private

- (id<JavaUtilSet>)createCollection;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectHashMultimap)

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_create();

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithInt_withInt_(jint expectedKeys, jint expectedValuesPerKey);

FOUNDATION_EXPORT ComGoogleCommonCollectHashMultimap *ComGoogleCommonCollectHashMultimap_createWithComGoogleCommonCollectMultimap_(id<ComGoogleCommonCollectMultimap> multimap);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectHashMultimap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectHashMultimap")
