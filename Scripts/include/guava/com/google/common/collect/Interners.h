//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Interners.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectInterners")
#ifdef RESTRICT_ComGoogleCommonCollectInterners
#define INCLUDE_ALL_ComGoogleCommonCollectInterners 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectInterners 1
#endif
#undef RESTRICT_ComGoogleCommonCollectInterners

#if !defined (ComGoogleCommonCollectInterners_) && (INCLUDE_ALL_ComGoogleCommonCollectInterners || defined(INCLUDE_ComGoogleCommonCollectInterners))
#define ComGoogleCommonCollectInterners_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectInterner;

@interface ComGoogleCommonCollectInterners : NSObject

#pragma mark Public

+ (id<ComGoogleCommonBaseFunction>)asFunctionWithComGoogleCommonCollectInterner:(id<ComGoogleCommonCollectInterner>)interner;

+ (id<ComGoogleCommonCollectInterner>)newStrongInterner OBJC_METHOD_FAMILY_NONE;

+ (id<ComGoogleCommonCollectInterner>)newWeakInterner OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectInterners)

FOUNDATION_EXPORT id<ComGoogleCommonCollectInterner> ComGoogleCommonCollectInterners_newStrongInterner();

FOUNDATION_EXPORT id<ComGoogleCommonCollectInterner> ComGoogleCommonCollectInterners_newWeakInterner();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonCollectInterners_asFunctionWithComGoogleCommonCollectInterner_(id<ComGoogleCommonCollectInterner> interner);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectInterners)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectInterners")
