//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/Base64InputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilBase64InputStream")
#ifdef RESTRICT_AndroidUtilBase64InputStream
#define INCLUDE_ALL_AndroidUtilBase64InputStream 0
#else
#define INCLUDE_ALL_AndroidUtilBase64InputStream 1
#endif
#undef RESTRICT_AndroidUtilBase64InputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidUtilBase64InputStream_) && (INCLUDE_ALL_AndroidUtilBase64InputStream || defined(INCLUDE_AndroidUtilBase64InputStream))
#define AndroidUtilBase64InputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "../../java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief An InputStream that does Base64 decoding on the data read through
  it.
 */
@interface AndroidUtilBase64InputStream : JavaIoFilterInputStream

#pragma mark Public

/*!
 @brief An InputStream that performs Base64 decoding on the data read
  from the wrapped stream.
 @param inArg the InputStream to read the source data from
 @param flags bit flags for controlling the decoder; see the         constants in 
 <code>Base64</code>
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)flags;

/*!
 @brief Performs Base64 encoding or decoding on the data read from the
  wrapped InputStream.
 @param inArg the InputStream to read the source data from
 @param flags bit flags for controlling the decoder; see the         constants in 
 <code>Base64</code>
 @param encode true to encode, false to decode
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)flags
                              withBoolean:(jboolean)encode;

- (jint)available;

- (void)close;

- (void)markWithInt:(jint)readlimit;

- (jboolean)markSupported;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

- (void)reset;

- (jlong)skipWithLong:(jlong)n;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)arg0 NS_UNAVAILABLE;

@end

J2OBJC_STATIC_INIT(AndroidUtilBase64InputStream)

FOUNDATION_EXPORT void AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_(AndroidUtilBase64InputStream *self, JavaIoInputStream *inArg, jint flags);

FOUNDATION_EXPORT AndroidUtilBase64InputStream *new_AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint flags) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilBase64InputStream *create_AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint flags);

FOUNDATION_EXPORT void AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_withBoolean_(AndroidUtilBase64InputStream *self, JavaIoInputStream *inArg, jint flags, jboolean encode);

FOUNDATION_EXPORT AndroidUtilBase64InputStream *new_AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_withBoolean_(JavaIoInputStream *inArg, jint flags, jboolean encode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilBase64InputStream *create_AndroidUtilBase64InputStream_initWithJavaIoInputStream_withInt_withBoolean_(JavaIoInputStream *inArg, jint flags, jboolean encode);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilBase64InputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilBase64InputStream")
