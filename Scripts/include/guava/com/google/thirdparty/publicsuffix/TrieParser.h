//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/thirdparty/publicsuffix/TrieParser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser")
#ifdef RESTRICT_ComGoogleThirdpartyPublicsuffixTrieParser
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser 0
#else
#define INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser 1
#endif
#undef RESTRICT_ComGoogleThirdpartyPublicsuffixTrieParser

#if !defined (ComGoogleThirdpartyPublicsuffixTrieParser_) && (INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser || defined(INCLUDE_ComGoogleThirdpartyPublicsuffixTrieParser))
#define ComGoogleThirdpartyPublicsuffixTrieParser_

@class ComGoogleCommonCollectImmutableMap;
@protocol JavaLangCharSequence;

@interface ComGoogleThirdpartyPublicsuffixTrieParser : NSObject

#pragma mark Package-Private

- (instancetype)init;

+ (ComGoogleCommonCollectImmutableMap *)parseTrieWithJavaLangCharSequence:(id<JavaLangCharSequence>)encoded;

@end

J2OBJC_STATIC_INIT(ComGoogleThirdpartyPublicsuffixTrieParser)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableMap *ComGoogleThirdpartyPublicsuffixTrieParser_parseTrieWithJavaLangCharSequence_(id<JavaLangCharSequence> encoded);

FOUNDATION_EXPORT void ComGoogleThirdpartyPublicsuffixTrieParser_init(ComGoogleThirdpartyPublicsuffixTrieParser *self);

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixTrieParser *new_ComGoogleThirdpartyPublicsuffixTrieParser_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleThirdpartyPublicsuffixTrieParser *create_ComGoogleThirdpartyPublicsuffixTrieParser_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleThirdpartyPublicsuffixTrieParser)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleThirdpartyPublicsuffixTrieParser")
