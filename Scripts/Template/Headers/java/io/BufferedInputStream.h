//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/BufferedInputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoBufferedInputStream")
#ifdef RESTRICT_JavaIoBufferedInputStream
#define INCLUDE_ALL_JavaIoBufferedInputStream 0
#else
#define INCLUDE_ALL_JavaIoBufferedInputStream 1
#endif
#undef RESTRICT_JavaIoBufferedInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoBufferedInputStream_) && (INCLUDE_ALL_JavaIoBufferedInputStream || defined(INCLUDE_JavaIoBufferedInputStream))
#define JavaIoBufferedInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "../../java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief A <code>BufferedInputStream</code> adds
  functionality to another input stream-namely,
  the ability to buffer the input and to
  support the <code>mark</code> and <code>reset</code>
  methods.When  the <code>BufferedInputStream</code>
  is created, an internal buffer array is
  created.
 As bytes  from the stream are read
  or skipped, the internal buffer is refilled
  as necessary  from the contained input stream,
  many bytes at a time. The <code>mark</code>
  operation  remembers a point in the input
  stream and the <code>reset</code> operation
  causes all the  bytes read since the most
  recent <code>mark</code> operation to be
  reread before new bytes are  taken from
  the contained input stream.
 @author Arthur van Hoff
 @since JDK1.0
 */
@interface JavaIoBufferedInputStream : JavaIoFilterInputStream {
 @public
  /*!
   @brief The internal buffer array where the data is stored.When necessary,
  it may be replaced by another array of
  a different size.
   */
  volatile_id buf_;
  /*!
   @brief The index one greater than the index of the last valid byte in
  the buffer.
   This value is always
  in the range <code>0</code> through <code>buf.length</code>;
  elements <code>buf[0]</code>  through <code>buf[count-1]
  </code>contain buffered input data obtained
  from the underlying  input stream.
   */
  jint count_;
  /*!
   @brief The current position in the buffer.This is the index of the next
  character to be read from the <code>buf</code> array.
   <p>
  This value is always in the range <code>0</code>
  through <code>count</code>. If it is less
  than <code>count</code>, then  <code>buf[pos]</code>
  is the next byte to be supplied as input;
  if it is equal to <code>count</code>, then
  the  next <code>read</code> or <code>skip</code>
  operation will require more bytes to be
  read from the contained  input stream.
   - seealso: java.io.BufferedInputStream
   */
  jint pos_;
  /*!
   @brief The value of the <code>pos</code> field at the time the last 
 <code>mark</code> method was called.
   <p>
  This value is always
  in the range <code>-1</code> through <code>pos</code>.
  If there is no marked position in  the input
  stream, this field is <code>-1</code>. If
  there is a marked position in the input
  stream,  then <code>buf[markpos]</code>
  is the first byte to be supplied as input
  after a <code>reset</code> operation. If 
 <code>markpos</code> is not <code>-1</code>,
  then all bytes from positions <code>buf[markpos]</code>
  through  <code>buf[pos-1]</code> must remain
  in the buffer array (though they may be
  moved to  another place in the buffer array,
  with suitable adjustments to the values
  of <code>count</code>,  <code>pos</code>,
  and <code>markpos</code>); they may not
  be discarded unless and until the difference
  between <code>pos</code> and <code>markpos</code>
  exceeds <code>marklimit</code>.
   - seealso: java.io.BufferedInputStream
   - seealso: java.io.BufferedInputStream
   */
  jint markpos_;
  /*!
   @brief The maximum read ahead allowed after a call to the 
 <code>mark</code> method before subsequent calls to the 
 <code>reset</code> method fail.
   Whenever the difference between <code>pos</code>
  and <code>markpos</code> exceeds <code>marklimit</code>,
  then the  mark may be dropped by setting 
 <code>markpos</code> to <code>-1</code>.
   - seealso: java.io.BufferedInputStream
   - seealso: java.io.BufferedInputStream
   */
  jint marklimit_;
}

#pragma mark Public

/*!
 @brief Creates a <code>BufferedInputStream</code>
  and saves its  argument, the input stream 
 <code>in</code>, for later use.An internal
  buffer array is created and  stored in <code>buf</code>.
 @param inArg the underlying input stream.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a <code>BufferedInputStream</code>
  with the specified buffer size,
  and saves its  argument, the input stream 
 <code>in</code>, for later use.An internal
  buffer array of length  <code>size</code>
  is created and stored in <code>buf</code>.
 @param inArg the underlying input stream.
 @param size the buffer size.
 @throw IllegalArgumentExceptionif size <= 0.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)size;

/*!
 @brief Returns an estimate of the number of bytes that can be read (or
  skipped over) from this input stream without blocking by the next
  invocation of a method for this input stream.The next invocation might be
  the same thread or another thread.
 A single read or skip of this
  many bytes will not block, but may read or skip fewer bytes. 
 <p>
  This method returns the sum of the number of bytes remaining to be read in
  the buffer (<code>count&nbsp;- pos</code>) and the result of calling the 
 <code>in</code>.available().
 @return an estimate of the number of bytes that can be read (or skipped
              over) from this input stream without blocking.
 @throw IOExceptionif this input stream has been closed by
                           invoking its <code>close()</code> method,
                           or an I/O error occurs.
 */
- (jint)available;

/*!
 @brief Closes this input stream and releases any system resources
  associated with the stream.
 Once the stream has been closed, further read(), available(), reset(),
  or skip() invocations will throw an IOException.
  Closing a previously closed stream has no effect.
 @throw IOExceptionif an I/O error occurs.
 */
- (void)close;

/*!
 @brief See the general contract of the <code>mark</code>
  method of <code>InputStream</code>.
 @param readlimit the maximum limit of bytes that can be read before                       the mark position becomes invalid.
 - seealso: java.io.BufferedInputStream
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Tests if this input stream supports the <code>mark</code>
  and <code>reset</code> methods.The <code>markSupported</code>
  method of <code>BufferedInputStream</code> returns 
 <code>true</code>.
 @return a <code>boolean</code> indicating if this stream type supports
           the <code>mark</code> and <code>reset</code> methods.
 - seealso: java.io.InputStream
 - seealso: java.io.InputStream
 */
- (jboolean)markSupported;

/*!
 @brief See
  the general contract of the <code>read</code>
  method of <code>InputStream</code>.
 @return the next byte of data, or <code>-1</code> if the end of the
              stream is reached.
 @throw IOExceptionif this input stream has been closed by
                           invoking its <code>close()</code> method,
                           or an I/O error occurs.
 - seealso: java.io.FilterInputStream
 */
- (jint)read;

/*!
 @brief Reads bytes from this byte-input stream into the specified byte array,
  starting at the given offset.
 <p> This method implements the general contract of the corresponding 
 <code><code>read</code></code> method of
  the <code><code>InputStream</code></code> class.  As an additional
  convenience, it attempts to read as many bytes as possible by repeatedly
  invoking the <code>read</code> method of the underlying stream.  This
  iterated <code>read</code> continues until one of the following
  conditions becomes true: <ul>
    
 <li> The specified number of bytes have been read,
    
 <li> The <code>read</code> method of the underlying stream returns
    <code>-1</code>, indicating end-of-file, or
    
 <li> The <code>available</code> method of the underlying stream
    returns zero, indicating that further input requests would block. 
 </ul> If the first <code>read</code> on the underlying stream returns 
 <code>-1</code> to indicate end-of-file then this method returns 
 <code>-1</code>.  Otherwise this method returns the number of bytes
  actually read. 
 <p> Subclasses of this class are encouraged, but not required, to
  attempt to read as many bytes as possible in the same fashion.
 @param b destination buffer.
 @param off offset at which to start storing bytes.
 @param len maximum number of bytes to read.
 @return the number of bytes read, or <code>-1</code> if the end of
              the stream has been reached.
 @throw IOExceptionif this input stream has been closed by
                           invoking its <code>close()</code> method,
                           or an I/O error occurs.
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief See the general contract of the <code>reset</code>
  method of <code>InputStream</code>.
 <p>
  If <code>markpos</code> is <code>-1</code>
  (no mark has been set or the mark has been
  invalidated), an <code>IOException</code>
  is thrown. Otherwise, <code>pos</code> is
  set equal to <code>markpos</code>.
 @throw IOExceptionif this stream has not been marked or,
                   if the mark has been invalidated, or the stream
                   has been closed by invoking its <code>close()</code>
                   method, or an I/O error occurs.
 - seealso: java.io.BufferedInputStream
 */
- (void)reset;

/*!
 @brief See the general contract of the <code>skip</code>
  method of <code>InputStream</code>.
 @throw IOExceptionif the stream does not support seek,
                           or if this input stream has been closed by
                           invoking its <code>close()</code> method, or an
                           I/O error occurs.
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoBufferedInputStream)

J2OBJC_VOLATILE_FIELD_SETTER(JavaIoBufferedInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoBufferedInputStream_initWithJavaIoInputStream_(JavaIoBufferedInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoBufferedInputStream *new_JavaIoBufferedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoBufferedInputStream *create_JavaIoBufferedInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT void JavaIoBufferedInputStream_initWithJavaIoInputStream_withInt_(JavaIoBufferedInputStream *self, JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT JavaIoBufferedInputStream *new_JavaIoBufferedInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoBufferedInputStream *create_JavaIoBufferedInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoBufferedInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoBufferedInputStream")
