//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/Writer.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoWriter")
#ifdef RESTRICT_JavaIoWriter
#define INCLUDE_ALL_JavaIoWriter 0
#else
#define INCLUDE_ALL_JavaIoWriter 1
#endif
#undef RESTRICT_JavaIoWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoWriter_) && (INCLUDE_ALL_JavaIoWriter || defined(INCLUDE_JavaIoWriter))
#define JavaIoWriter_

#define RESTRICT_JavaLangAppendable 1
#define INCLUDE_JavaLangAppendable 1
#include "../../java/lang/Appendable.h"

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "../../java/io/Closeable.h"

#define RESTRICT_JavaIoFlushable 1
#define INCLUDE_JavaIoFlushable 1
#include "../../java/io/Flushable.h"

@class IOSCharArray;
@protocol JavaLangCharSequence;

/*!
 @brief Abstract class for writing to character streams.The only methods that a
  subclass must implement are write(char[], int, int), flush(), and close().
 Most subclasses, however, will override some of the methods defined here in
  order to provide higher efficiency, additional functionality, or both.
 - seealso: Writer
 - seealso: BufferedWriter
 - seealso: CharArrayWriter
 - seealso: FilterWriter
 - seealso: OutputStreamWriter
 - seealso: FileWriter
 - seealso: PipedWriter
 - seealso: PrintWriter
 - seealso: StringWriter
 - seealso: Reader
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoWriter : NSObject < JavaLangAppendable, JavaIoCloseable, JavaIoFlushable > {
 @public
  /*!
   @brief The object used to synchronize operations on this stream.For
  efficiency, a character-stream object may use an object other than
  itself to protect critical sections.
   A subclass should therefore use
  the object in this field rather than <tt>this</tt> or a synchronized
  method.
   */
  id lock_;
}

#pragma mark Public

/*!
 @brief Appends the specified character to this writer.
 <p> An invocation of this method of the form <tt>out.append(c)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.write(c) 
@endcode
 @param c The 16-bit character to append
 @return This writer
 @throw IOException
 If an I/O error occurs
 @since 1.5
 */
- (JavaIoWriter *)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence to this writer.
 <p> An invocation of this method of the form <tt>out.append(csq)</tt>
  behaves in exactly the same way as the invocation 
 @code

      out.write(csq.toString()) 
@endcode
  
 <p> Depending on the specification of <tt>toString</tt> for the
  character sequence <tt>csq</tt>, the entire sequence may not be
  appended. For instance, invoking the <tt>toString</tt> method of a
  character buffer will return a subsequence whose content depends upon
  the buffer's position and limit.
 @param csq The character sequence to append.  If 
  <tt> csq </tt>  is           <tt>
  null </tt> , then the four characters  <tt> "null" </tt>  are          appended to this writer.
 @return This writer
 @throw IOException
 If an I/O error occurs
 @since 1.5
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the specified character sequence to this writer.
 <tt>Appendable</tt>.
  
 <p> An invocation of this method of the form <tt>out.append(csq, start,
  end)</tt> when <tt>csq</tt> is not <tt>null</tt> behaves in exactly the
  same way as the invocation 
 @code

      out.write(csq.subSequence(start, end).toString()) 
@endcode
 @param csq The character sequence from which a subsequence will be
           appended.  If 
  <tt> csq </tt>  is  <tt> null </tt> , then characters          will be appended as if 
  <tt> csq </tt>  contained the four          characters 
  <tt> "null" </tt> .
 @param start The index of the first character in the subsequence
 @param end The index of the character following the last character in the
           subsequence
 @return This writer
 @throw IndexOutOfBoundsException
 If <tt>start</tt> or <tt>end</tt> are negative, <tt>start</tt>
           is greater than <tt>end</tt>, or <tt>end</tt> is greater than
           <tt>csq.length()</tt>
 @throw IOException
 If an I/O error occurs
 @since 1.5
 */
- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                         withInt:(jint)start
                                         withInt:(jint)end;

/*!
 @brief Closes the stream, flushing it first.Once the stream has been closed,
  further write() or flush() invocations will cause an IOException to be
  thrown.
 Closing a previously closed stream has no effect.
 @throw IOException
 If an I/O error occurs
 */
- (void)close;

- (void)flush;

/*!
 @brief Writes an array of characters.
 @param cbuf Array of characters to be written
 @throw IOException
 If an I/O error occurs
 */
- (void)writeWithCharArray:(IOSCharArray *)cbuf;

/*!
 @brief Writes a portion of an array of characters.
 @param cbuf Array of characters
 @param off Offset from which to start writing characters
 @param len Number of characters to write
 @throw IOException
 If an I/O error occurs
 */
- (void)writeWithCharArray:(IOSCharArray *)cbuf
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Writes a single character.The character to be written is contained in
  the 16 low-order bits of the given integer value; the 16 high-order bits
  are ignored.
 <p> Subclasses that intend to support efficient single-character output
  should override this method.
 @param c int specifying a character to be written
 @throw IOException
 If an I/O error occurs
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Writes a string.
 @param str String to be written
 @throw IOException
 If an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)str;

/*!
 @brief Writes a portion of a string.
 @param str A String
 @param off Offset from which to start writing characters
 @param len Number of characters to write
 @throw IndexOutOfBoundsException
 If <tt>off</tt> is negative, or <tt>len</tt> is negative,
           or <tt>off+len</tt> is negative or greater than the length
           of the given string
 @throw IOException
 If an I/O error occurs
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)off
                  withInt:(jint)len;

#pragma mark Protected

/*!
 @brief Creates a new character-stream writer whose critical sections will
  synchronize on the writer itself.
 */
- (instancetype)init;

/*!
 @brief Creates a new character-stream writer whose critical sections will
  synchronize on the given object.
 @param lock Object to synchronize on
 */
- (instancetype)initWithId:(id)lock;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoWriter)

J2OBJC_FIELD_SETTER(JavaIoWriter, lock_, id)

FOUNDATION_EXPORT void JavaIoWriter_init(JavaIoWriter *self);

FOUNDATION_EXPORT void JavaIoWriter_initWithId_(JavaIoWriter *self, id lock);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoWriter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoWriter")
