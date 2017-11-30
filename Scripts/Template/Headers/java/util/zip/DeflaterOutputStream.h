//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/DeflaterOutputStream.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDeflaterOutputStream")
#ifdef RESTRICT_JavaUtilZipDeflaterOutputStream
#define INCLUDE_ALL_JavaUtilZipDeflaterOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipDeflaterOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipDeflaterOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipDeflaterOutputStream_) && (INCLUDE_ALL_JavaUtilZipDeflaterOutputStream || defined(INCLUDE_JavaUtilZipDeflaterOutputStream))
#define JavaUtilZipDeflaterOutputStream_

#define RESTRICT_JavaIoFilterOutputStream 1
#define INCLUDE_JavaIoFilterOutputStream 1
#include "../../../java/io/FilterOutputStream.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipDeflater;

/*!
 @brief This class implements an output stream filter for compressing data in
  the "deflate" compression format.It is also used as the basis for other
  types of compression filters, such as GZIPOutputStream.
 - seealso: Deflater
 @author David Connelly
 */
@interface JavaUtilZipDeflaterOutputStream : JavaIoFilterOutputStream {
 @public
  /*!
   @brief Compressor for this stream.
   */
  JavaUtilZipDeflater *def_;
  /*!
   @brief Output buffer for writing compressed data.
   */
  IOSByteArray *buf_;
  jboolean usesDefaultDeflater_;
}

#pragma mark Public

/*!
 @brief Creates a new output stream with a default compressor and buffer size.
 <p>The new output stream instance is created as if by invoking
  the 2-argument constructor DeflaterOutputStream(out, false).
 @param outArg the output stream
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg;

/*!
 @brief Creates a new output stream with a default compressor, a default
  buffer size and the specified flush mode.
 @param outArg the output stream
 @param syncFlush if 
 <code>true</code>  the <code>flush()</code>  method of this         instance flushes the compressor with flush mode
          <code>Deflater.SYNC_FLUSH</code>
   before flushing the output         stream, otherwise only flushes the output stream
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Creates a new output stream with the specified compressor and
  a default buffer size.
 <p>The new output stream instance is created as if by invoking
  the 3-argument constructor DeflaterOutputStream(out, def, false).
 @param outArg the output stream
 @param def the compressor ("deflater")
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def;

/*!
 @brief Creates a new output stream with the specified compressor, flush
  mode and a default buffer size.
 @param outArg the output stream
 @param def the compressor ("deflater")
 @param syncFlush if 
 <code>true</code>  the <code>flush()</code>  method of this         instance flushes the compressor with flush mode
          <code>Deflater.SYNC_FLUSH</code>
   before flushing the output         stream, otherwise only flushes the output stream
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Creates a new output stream with the specified compressor and
  buffer size.
 <p>The new output stream instance is created as if by invoking
  the 4-argument constructor DeflaterOutputStream(out, def, size, false).
 @param outArg the output stream
 @param def the compressor ("deflater")
 @param size the output buffer size
 @throw IllegalArgumentExceptionif size is <= 0
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                                   withInt:(jint)size;

/*!
 @brief Creates a new output stream with the specified compressor,
  buffer size and flush mode.
 @param outArg the output stream
 @param def the compressor ("deflater")
 @param size the output buffer size
 @param syncFlush if 
 <code>true</code>  the <code>flush()</code>  method of this         instance flushes the compressor with flush mode
          <code>Deflater.SYNC_FLUSH</code>
   before flushing the output         stream, otherwise only flushes the output stream
 @throw IllegalArgumentExceptionif size is <= 0
 @since 1.7
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                   withJavaUtilZipDeflater:(JavaUtilZipDeflater *)def
                                   withInt:(jint)size
                               withBoolean:(jboolean)syncFlush;

/*!
 @brief Writes remaining compressed data to the output stream and closes the
  underlying stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)close;

/*!
 @brief Finishes writing compressed data to the output stream without closing
  the underlying stream.Use this method when applying multiple filters
  in succession to the same output stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)finish;

/*!
 @brief Flushes the compressed output stream.
 If <code>syncFlush</code>
  is <code>true</code> when this compressed output stream is
  constructed, this method first flushes the underlying <code>compressor</code>
  with the flush mode <code>Deflater.SYNC_FLUSH</code> to force
  all pending data to be flushed out to the output stream and then
  flushes the output stream. Otherwise this method only flushes the
  output stream without flushing the <code>compressor</code>.
 @throw IOExceptionif an I/O error has occurred
 @since 1.7
 */
- (void)flush;

/*!
 @brief Writes an array of bytes to the compressed output stream.This
  method will block until all the bytes are written.
 @param b the data to be written
 @param off the start offset of the data
 @param len the length of the data
 @throw IOExceptionif an I/O error has occurred
 */
- (void)writeWithByteArray:(IOSByteArray *)b
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes a byte to the compressed output stream.This method will
  block until the byte can be written.
 @param b the byte to be written
 @throw IOExceptionif an I/O error has occurred
 */
- (void)writeWithInt:(jint)b;

#pragma mark Protected

/*!
 @brief Writes next block of compressed data to the output stream.
 @throw IOExceptionif an I/O error has occurred
 */
- (void)deflate;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDeflaterOutputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterOutputStream, def_, JavaUtilZipDeflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterOutputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_withBoolean_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withInt_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jint size);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_withBoolean_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg, JavaUtilZipDeflater *def);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withJavaUtilZipDeflater_(JavaIoOutputStream *outArg, JavaUtilZipDeflater *def);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg, jboolean syncFlush);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean syncFlush) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *outArg, jboolean syncFlush);

FOUNDATION_EXPORT void JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaUtilZipDeflaterOutputStream *self, JavaIoOutputStream *outArg);

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *new_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterOutputStream *create_JavaUtilZipDeflaterOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *outArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDeflaterOutputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDeflaterOutputStream")
