//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/Deflater.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDeflater")
#ifdef RESTRICT_JavaUtilZipDeflater
#define INCLUDE_ALL_JavaUtilZipDeflater 0
#else
#define INCLUDE_ALL_JavaUtilZipDeflater 1
#endif
#undef RESTRICT_JavaUtilZipDeflater

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipDeflater_) && (INCLUDE_ALL_JavaUtilZipDeflater || defined(INCLUDE_JavaUtilZipDeflater))
#define JavaUtilZipDeflater_

@class IOSByteArray;

/*!
 @brief This class compresses data using the <i>DEFLATE</i> algorithm (see <a
 href="http://www.gzip.org/algorithm.txt">specification</a>).
 <p>It is usually more convenient to use <code>DeflaterOutputStream</code>.
 <p>To compress an in-memory <code>byte[]</code> to another in-memory <code>byte[]</code> manually:
 @code

     byte[] originalBytes = ...
     Deflater deflater = new Deflater();
     deflater.setInput(originalBytes);
     deflater.finish();
     ByteArrayOutputStream baos = new ByteArrayOutputStream();
     byte[] buf = new byte[8192];
     while (!deflater.finished()) {
         int byteCount = deflater.deflate(buf);
         baos.write(buf, 0, byteCount);
     }
     deflater.end();
     byte[] compressedBytes = baos.toByteArray();
  
@endcode
 <p>In situations where you don't have all the input in one array (or have so much
 input that you want to feed it to the deflater in chunks), it's possible to call
 <code>setInput</code> repeatedly, but you're much better off using
 <code>DeflaterOutputStream</code> to handle all this for you. <code>DeflaterOutputStream</code> also helps
 minimize memory requirements&nbsp;&mdash; the sample code above is very expensive.
 <a name="compression_level"><h3>Compression levels</h3></a>
 <p>A compression level must be <code>DEFAULT_COMPRESSION</code> to compromise between speed and
 compression (currently equivalent to level 6), or between 0 (<code>NO_COMPRESSION</code>, where
 the input is simply copied) and 9 (<code>BEST_COMPRESSION</code>). Level 1 (<code>BEST_SPEED</code>)
 performs some compression, but with minimal speed overhead.
 */
@interface JavaUtilZipDeflater : NSObject

+ (jint)BEST_COMPRESSION;

+ (jint)BEST_SPEED;

+ (jint)NO_COMPRESSION;

+ (jint)DEFAULT_COMPRESSION;

+ (jint)DEFAULT_STRATEGY;

+ (jint)DEFLATED;

+ (jint)FILTERED;

+ (jint)HUFFMAN_ONLY;

+ (jint)NO_FLUSH;

+ (jint)SYNC_FLUSH;

+ (jint)FULL_FLUSH;

#pragma mark Public

/*!
 @brief Constructs a new <code>Deflater</code> instance using the
 default <a href="#compression_level">compression level</a>.
 The compression strategy can be specified with <code>setStrategy</code>. A
 header is added to the output by default; use <code>Deflater(int,boolean)</code>
  if you need to omit the header.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Deflater</code> instance with the
 given <a href="#compression_level">compression level</a>.
 The compression strategy can be specified with <code>setStrategy</code>.
 A header is added to the output by default; use
 <code>Deflater(int,boolean)</code> if you need to omit the header.
 */
- (instancetype)initWithInt:(jint)level;

/*!
 @brief Constructs a new <code>Deflater</code> instance with the
 given <a href="#compression_level">compression level</a>.
 If <code>noHeader</code> is true, no ZLIB header is added to the
 output. In a zip file, every entry (compressed file) comes with such a
 header. The strategy can be specified using <code>setStrategy</code>.
 */
- (instancetype)initWithInt:(jint)level
                withBoolean:(jboolean)noHeader;

/*!
 @brief Deflates the data (previously passed to <code>setInput</code>) into the
 supplied buffer.
 @return number of bytes of compressed data written to <code>buf</code>.
 */
- (jint)deflateWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Deflates data (previously passed to <code>setInput</code>) into a specific
 region within the supplied buffer.
 @return the number of bytes of compressed data written to <code>buf</code>.
 */
- (jint)deflateWithByteArray:(IOSByteArray *)buf
                     withInt:(jint)offset
                     withInt:(jint)byteCount;

/*!
 @brief Deflates data (previously passed to <code>setInput</code>) into a specific
 region within the supplied buffer, optionally flushing the input buffer.
 @param flush one of <code>NO_FLUSH</code>, <code>SYNC_FLUSH</code> or <code>FULL_FLUSH</code>.
 @return the number of compressed bytes written to <code>buf</code>. If this
 equals <code>byteCount</code>, the number of bytes of input to be flushed
 may have exceeded the output buffer's capacity. In this case,
 finishing a flush will require the output buffer to be drained
 and additional calls to <code>deflate</code> to be made.
 @throws IllegalArgumentException if <code>flush</code> is invalid.
 @since 1.7
 */
- (jint)deflateWithByteArray:(IOSByteArray *)buf
                     withInt:(jint)offset
                     withInt:(jint)byteCount
                     withInt:(jint)flush;

/*!
 @brief Frees all resources held onto by this deflating algorithm.
 Any unused
 input or output is discarded. This method should be called explicitly in
 order to free native resources as soon as possible. After <code>end()</code> is
 called, other methods will typically throw <code>IllegalStateException</code>.
 */
- (void)end;

/*!
 @brief Indicates to the <code>Deflater</code> that all uncompressed input has been provided
 to it.
 - seealso: #finished
 */
- (void)finish;

/*!
 @brief Returns true if <code>finish</code> has been called and all
 data provided by <code>setInput</code> has been
 successfully compressed and consumed by <code>deflate</code>.
 */
- (jboolean)finished;

/*!
 @brief Returns the <code>Adler32</code> checksum of the uncompressed data read so far.
 */
- (jint)getAdler;

/*!
 @brief Returns the total number of bytes read by the <code>Deflater</code>.
 This
 method is the same as <code>getTotalIn</code> except that it returns a
 <code>long</code> value instead of an integer.
 */
- (jlong)getBytesRead;

/*!
 @brief Returns a the total number of bytes written by this <code>Deflater</code>.
 This
 method is the same as <code>getTotalOut</code> except it returns a
 <code>long</code> value instead of an integer.
 */
- (jlong)getBytesWritten;

/*!
 @brief Returns the total number of bytes of input read by this <code>Deflater</code>.
 This
 method is limited to 32 bits; use <code>getBytesRead</code> instead.
 */
- (jint)getTotalIn;

/*!
 @brief Returns the total number of bytes written to the output buffer by this <code>Deflater</code>
 .
 The method is limited to 32 bits; use <code>getBytesWritten</code> instead.
 */
- (jint)getTotalOut;

/*!
 @brief Returns true if <code>setInput</code> must be called before deflation can continue.
 If all uncompressed data has been provided to the <code>Deflater</code>,
 <code>finish</code> must be called to ensure the compressed data is output.
 */
- (jboolean)needsInput;

/*!
 @brief Resets the <code>Deflater</code> to accept new input without affecting any
 previous compression strategy or level settings.
 This
 operation <i>must</i> be called after <code>finished</code> returns
 true if the <code>Deflater</code> is to be reused.
 */
- (void)reset;

/*!
 @brief Sets the dictionary to be used for compression by this <code>Deflater</code>.
 This method can only be called if this <code>Deflater</code> supports the writing
 of ZLIB headers. This is the default, but can be overridden
 using <code>Deflater(int,boolean)</code>.
 */
- (void)setDictionaryWithByteArray:(IOSByteArray *)dictionary;

/*!
 @brief Sets the dictionary to be used for compression by this <code>Deflater</code>.
 This method can only be called if this <code>Deflater</code> supports the writing
 of ZLIB headers. This is the default, but can be overridden
 using <code>Deflater(int,boolean)</code>.
 */
- (void)setDictionaryWithByteArray:(IOSByteArray *)buf
                           withInt:(jint)offset
                           withInt:(jint)byteCount;

/*!
 @brief Sets the input buffer the <code>Deflater</code> will use to extract uncompressed bytes
 for later compression.
 */
- (void)setInputWithByteArray:(IOSByteArray *)buf;

/*!
 @brief Sets the input buffer the <code>Deflater</code> will use to extract uncompressed bytes
 for later compression.
 */
- (void)setInputWithByteArray:(IOSByteArray *)buf
                      withInt:(jint)offset
                      withInt:(jint)byteCount;

/*!
 @brief Sets the given <a href="#compression_level">compression level</a>
 to be used when compressing data.
 This value must be set
 prior to calling <code>setInput</code>.
 @throws IllegalArgumentException
 If the compression level is invalid.
 */
- (void)setLevelWithInt:(jint)level;

/*!
 @brief Sets the compression strategy to be used.
 The strategy must be one of
 FILTERED, HUFFMAN_ONLY or DEFAULT_STRATEGY. This value must be set prior
 to calling <code>setInput</code>.
 @throws IllegalArgumentException
 If the strategy specified is not one of FILTERED,
 HUFFMAN_ONLY or DEFAULT_STRATEGY.
 */
- (void)setStrategyWithInt:(jint)strategy;

#pragma mark Protected

- (void)javaFinalize;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDeflater)

/*!
 @brief This <a href="#compression_level">compression level</a> gives the best compression,
 but takes the most time.
 */
inline jint JavaUtilZipDeflater_get_BEST_COMPRESSION();
#define JavaUtilZipDeflater_BEST_COMPRESSION 9
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, BEST_COMPRESSION, jint)

/*!
 @brief This <a href="#compression_level">compression level</a> gives minimal compression,
 but takes the least time (of any level that actually performs compression;
 see <code>NO_COMPRESSION</code>).
 */
inline jint JavaUtilZipDeflater_get_BEST_SPEED();
#define JavaUtilZipDeflater_BEST_SPEED 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, BEST_SPEED, jint)

/*!
 @brief This <a href="#compression_level">compression level</a> does no compression.
 It is even faster than <code>BEST_SPEED</code>.
 */
inline jint JavaUtilZipDeflater_get_NO_COMPRESSION();
#define JavaUtilZipDeflater_NO_COMPRESSION 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, NO_COMPRESSION, jint)

/*!
 @brief The default <a href="#compression_level">compression level</a>.
 This is a trade-off between speed and compression, currently equivalent to level 6.
 */
inline jint JavaUtilZipDeflater_get_DEFAULT_COMPRESSION();
#define JavaUtilZipDeflater_DEFAULT_COMPRESSION -1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, DEFAULT_COMPRESSION, jint)

/*!
 @brief The default compression strategy.
 */
inline jint JavaUtilZipDeflater_get_DEFAULT_STRATEGY();
#define JavaUtilZipDeflater_DEFAULT_STRATEGY 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, DEFAULT_STRATEGY, jint)

/*!
 @brief The default compression method.
 */
inline jint JavaUtilZipDeflater_get_DEFLATED();
#define JavaUtilZipDeflater_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, DEFLATED, jint)

/*!
 @brief A compression strategy.
 */
inline jint JavaUtilZipDeflater_get_FILTERED();
#define JavaUtilZipDeflater_FILTERED 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, FILTERED, jint)

/*!
 @brief A compression strategy.
 */
inline jint JavaUtilZipDeflater_get_HUFFMAN_ONLY();
#define JavaUtilZipDeflater_HUFFMAN_ONLY 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, HUFFMAN_ONLY, jint)

/*!
 @brief Use buffering for best compression.
 @since 1.7
 */
inline jint JavaUtilZipDeflater_get_NO_FLUSH();
#define JavaUtilZipDeflater_NO_FLUSH 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, NO_FLUSH, jint)

/*!
 @brief Flush buffers so recipients can immediately decode the data sent thus
 far.
 This mode may degrade compression.
 @since 1.7
 */
inline jint JavaUtilZipDeflater_get_SYNC_FLUSH();
#define JavaUtilZipDeflater_SYNC_FLUSH 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, SYNC_FLUSH, jint)

/*!
 @brief Flush buffers so recipients can immediately decode the data sent thus
 far.
 The compression state is also reset to permit random access and
 recovery for clients who have discarded or damaged their own copy. This
 mode may degrade compression.
 @since 1.7
 */
inline jint JavaUtilZipDeflater_get_FULL_FLUSH();
#define JavaUtilZipDeflater_FULL_FLUSH 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipDeflater, FULL_FLUSH, jint)

FOUNDATION_EXPORT void JavaUtilZipDeflater_init(JavaUtilZipDeflater *self);

FOUNDATION_EXPORT JavaUtilZipDeflater *new_JavaUtilZipDeflater_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflater *create_JavaUtilZipDeflater_init();

FOUNDATION_EXPORT void JavaUtilZipDeflater_initWithInt_(JavaUtilZipDeflater *self, jint level);

FOUNDATION_EXPORT JavaUtilZipDeflater *new_JavaUtilZipDeflater_initWithInt_(jint level) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflater *create_JavaUtilZipDeflater_initWithInt_(jint level);

FOUNDATION_EXPORT void JavaUtilZipDeflater_initWithInt_withBoolean_(JavaUtilZipDeflater *self, jint level, jboolean noHeader);

FOUNDATION_EXPORT JavaUtilZipDeflater *new_JavaUtilZipDeflater_initWithInt_withBoolean_(jint level, jboolean noHeader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflater *create_JavaUtilZipDeflater_initWithInt_withBoolean_(jint level, jboolean noHeader);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDeflater)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDeflater")
