//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/escape/Escaper.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEscapeEscaper")
#ifdef RESTRICT_ComGoogleCommonEscapeEscaper
#define INCLUDE_ALL_ComGoogleCommonEscapeEscaper 0
#else
#define INCLUDE_ALL_ComGoogleCommonEscapeEscaper 1
#endif
#undef RESTRICT_ComGoogleCommonEscapeEscaper

#if !defined (ComGoogleCommonEscapeEscaper_) && (INCLUDE_ALL_ComGoogleCommonEscapeEscaper || defined(INCLUDE_ComGoogleCommonEscapeEscaper))
#define ComGoogleCommonEscapeEscaper_

@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonEscapeEscaper : NSObject

#pragma mark Public

- (id<ComGoogleCommonBaseFunction>)asFunction;

- (NSString *)escapeWithNSString:(NSString *)string;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEscapeEscaper)

FOUNDATION_EXPORT void ComGoogleCommonEscapeEscaper_init(ComGoogleCommonEscapeEscaper *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEscapeEscaper)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEscapeEscaper")
