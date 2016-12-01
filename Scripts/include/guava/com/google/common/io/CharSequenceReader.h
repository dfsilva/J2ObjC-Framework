//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/CharSequenceReader.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader")
#ifdef RESTRICT_ComGoogleCommonIoCharSequenceReader
#define INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader 1
#endif
#undef RESTRICT_ComGoogleCommonIoCharSequenceReader

#if !defined (ComGoogleCommonIoCharSequenceReader_) && (INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader || defined(INCLUDE_ComGoogleCommonIoCharSequenceReader))
#define ComGoogleCommonIoCharSequenceReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "java/io/Reader.h"

@class IOSCharArray;
@class JavaNioCharBuffer;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoCharSequenceReader : JavaIoReader

#pragma mark Public

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq;

- (void)close;

- (void)markWithInt:(jint)readAheadLimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

- (jint)readWithJavaNioCharBuffer:(JavaNioCharBuffer *)target;

- (jboolean)ready;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSequenceReader)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(ComGoogleCommonIoCharSequenceReader *self, id<JavaLangCharSequence> seq);

FOUNDATION_EXPORT ComGoogleCommonIoCharSequenceReader *new_ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoCharSequenceReader *create_ComGoogleCommonIoCharSequenceReader_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSequenceReader)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCharSequenceReader")
