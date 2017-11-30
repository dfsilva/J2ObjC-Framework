//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileInputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileInputStream")
#ifdef RESTRICT_JavaIoFileInputStream
#define INCLUDE_ALL_JavaIoFileInputStream 0
#else
#define INCLUDE_ALL_JavaIoFileInputStream 1
#endif
#undef RESTRICT_JavaIoFileInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFileInputStream_) && (INCLUDE_ALL_JavaIoFileInputStream || defined(INCLUDE_JavaIoFileInputStream))
#define JavaIoFileInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "../../java/io/InputStream.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

/*!
 @brief An input stream that reads bytes from a file.
 @code
     File file = ...
    InputStream in = null;
    try {
      in = new BufferedInputStream(new FileInputStream(file));
      ...
    } finally {
      if (in != null) {
        in.close();
      }    }  
 
@endcode
  
 <p>This stream is <strong>not buffered</strong>. Most callers should wrap
  this stream with a <code>BufferedInputStream</code>.
  
 <p>Use <code>FileReader</code> to read characters, as opposed to bytes, from a
  file.
 - seealso: BufferedInputStream
 - seealso: FileOutputStream
 */
@interface JavaIoFileInputStream : JavaIoInputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>FileInputStream</code> that reads from <code>file</code>.
 @param file the file from which this stream reads.
 @throw FileNotFoundException
 if <code>file</code> does not exist.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Constructs a new <code>FileInputStream</code> that reads from <code>fd</code>.
 @param fd the FileDescriptor from which this stream reads.
 @throw NullPointerException
 if <code>fd</code> is <code>null</code>.
 */
- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Equivalent to <code>new FileInputStream(new File(path))</code>.
 */
- (instancetype)initWithNSString:(NSString *)path;

- (jint)available;

- (void)close;

/*!
 @brief Returns a read-only <code>FileChannel</code> that shares its position with
  this stream.
 */
- (JavaNioChannelsFileChannel *)getChannel;

/*!
 @brief Returns the underlying file descriptor.
 */
- (JavaIoFileDescriptor *)getFD;

- (jint)read;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

- (jlong)skipWithLong:(jlong)byteCount;

#pragma mark Protected

/*!
 @brief Ensures that all resources for this stream are released when it is about
  to be garbage collected.
 @throw IOException
 if an error occurs attempting to finalize this stream.
 */
- (void)java_finalize;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileInputStream)

FOUNDATION_EXPORT void JavaIoFileInputStream_initWithJavaIoFile_(JavaIoFileInputStream *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoFileInputStream *new_JavaIoFileInputStream_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileInputStream *create_JavaIoFileInputStream_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoFileInputStream_initWithJavaIoFileDescriptor_(JavaIoFileInputStream *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaIoFileInputStream *new_JavaIoFileInputStream_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileInputStream *create_JavaIoFileInputStream_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void JavaIoFileInputStream_initWithNSString_(JavaIoFileInputStream *self, NSString *path);

FOUNDATION_EXPORT JavaIoFileInputStream *new_JavaIoFileInputStream_initWithNSString_(NSString *path) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileInputStream *create_JavaIoFileInputStream_initWithNSString_(NSString *path);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileInputStream")
