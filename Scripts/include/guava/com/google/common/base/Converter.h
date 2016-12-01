//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Converter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseConverter")
#ifdef RESTRICT_ComGoogleCommonBaseConverter
#define INCLUDE_ALL_ComGoogleCommonBaseConverter 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseConverter 1
#endif
#undef RESTRICT_ComGoogleCommonBaseConverter

#if !defined (ComGoogleCommonBaseConverter_) && (INCLUDE_ALL_ComGoogleCommonBaseConverter || defined(INCLUDE_ComGoogleCommonBaseConverter))
#define ComGoogleCommonBaseConverter_

#define RESTRICT_ComGoogleCommonBaseFunction 1
#define INCLUDE_ComGoogleCommonBaseFunction 1
#include "com/google/common/base/Function.h"

@protocol JavaLangIterable;

@interface ComGoogleCommonBaseConverter : NSObject < ComGoogleCommonBaseFunction >

#pragma mark Public

- (ComGoogleCommonBaseConverter *)andThenWithComGoogleCommonBaseConverter:(ComGoogleCommonBaseConverter *)secondConverter;

- (id)applyWithId:(id)a;

- (id)convertWithId:(id)a;

- (id<JavaLangIterable>)convertAllWithJavaLangIterable:(id<JavaLangIterable>)fromIterable;

- (jboolean)isEqual:(id)object;

+ (ComGoogleCommonBaseConverter *)fromWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)forwardFunction
                                      withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)backwardFunction;

+ (ComGoogleCommonBaseConverter *)identity;

- (ComGoogleCommonBaseConverter *)reverse;

#pragma mark Protected

- (instancetype)init;

- (id)doBackwardWithId:(id)b;

- (id)doForwardWithId:(id)a;

#pragma mark Package-Private

- (instancetype)initWithBoolean:(jboolean)handleNullAutomatically;

- (id)correctedDoBackwardWithId:(id)b;

- (id)correctedDoForwardWithId:(id)a;

- (ComGoogleCommonBaseConverter *)doAndThenWithComGoogleCommonBaseConverter:(ComGoogleCommonBaseConverter *)secondConverter;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseConverter)

FOUNDATION_EXPORT void ComGoogleCommonBaseConverter_init(ComGoogleCommonBaseConverter *self);

FOUNDATION_EXPORT void ComGoogleCommonBaseConverter_initWithBoolean_(ComGoogleCommonBaseConverter *self, jboolean handleNullAutomatically);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseConverter_fromWithComGoogleCommonBaseFunction_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> forwardFunction, id<ComGoogleCommonBaseFunction> backwardFunction);

FOUNDATION_EXPORT ComGoogleCommonBaseConverter *ComGoogleCommonBaseConverter_identity();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseConverter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseConverter")