//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/EmptyImmutableSetMultimap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableSetMultimap")
#ifdef RESTRICT_ComGoogleCommonCollectEmptyImmutableSetMultimap
#define INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableSetMultimap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableSetMultimap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectEmptyImmutableSetMultimap

#if !defined (ComGoogleCommonCollectEmptyImmutableSetMultimap_) && (INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableSetMultimap || defined(INCLUDE_ComGoogleCommonCollectEmptyImmutableSetMultimap))
#define ComGoogleCommonCollectEmptyImmutableSetMultimap_

#define RESTRICT_ComGoogleCommonCollectImmutableSetMultimap 1
#define INCLUDE_ComGoogleCommonCollectImmutableSetMultimap 1
#include "com/google/common/collect/ImmutableSetMultimap.h"

@class ComGoogleCommonCollectImmutableCollection;
@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultiset;
@class ComGoogleCommonCollectImmutableSet;

@interface ComGoogleCommonCollectEmptyImmutableSetMultimap : ComGoogleCommonCollectImmutableSetMultimap

#pragma mark Public

- (ComGoogleCommonCollectImmutableMap *)asMap;

- (ComGoogleCommonCollectImmutableMultiset *)keys;

- (ComGoogleCommonCollectImmutableSet *)keySet;

- (ComGoogleCommonCollectImmutableCollection *)values;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectEmptyImmutableSetMultimap)

inline ComGoogleCommonCollectEmptyImmutableSetMultimap *ComGoogleCommonCollectEmptyImmutableSetMultimap_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectEmptyImmutableSetMultimap *ComGoogleCommonCollectEmptyImmutableSetMultimap_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectEmptyImmutableSetMultimap, INSTANCE, ComGoogleCommonCollectEmptyImmutableSetMultimap *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectEmptyImmutableSetMultimap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectEmptyImmutableSetMultimap")