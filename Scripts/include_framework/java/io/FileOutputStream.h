//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/FileOutputStream.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileOutputStream")
#ifdef RESTRICT_JavaIoFileOutputStream
#define INCLUDE_ALL_JavaIoFileOutputStream 0
#else
#define INCLUDE_ALL_JavaIoFileOutputStream 1
#endif
#undef RESTRICT_JavaIoFileOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFileOutputStream_) && (INCLUDE_ALL_JavaIoFileOutputStream || defined(INCLUDE_JavaIoFileOutputStream))
#define JavaIoFileOutputStream_

#define RESTRICT_JavaIoOutputStream 1
#define INCLUDE_JavaIoOutputStream 1
#include "../../java/io/OutputStream.h"

@class IOSByteArray;
@class JavaIoFile;
@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

/*!
 @brief An output stream that writes bytes to a file.If the output file exists, it
  can be replaced or appended to.
 If it does not exist, a new file will be
  created. 
 @code
     File file = ...
    OutputStream out = null;
    try {
      out = new BufferedOutputStream(new FileOutputStream(file));
      ...
    } finally {
      if (out != null) {
        out.close();
      }    }  
 
@endcode
  
 <p>This stream is <strong>not buffered</strong>. Most callers should wrap
  this stream with a <code>BufferedOutputStream</code>.
  
 <p>Use <code>FileWriter</code> to write characters, as opposed to bytes, to a file.
 - seealso: BufferedOutputStream
 - seealso: FileInputStream
 */
@interface JavaIoFileOutputStream : JavaIoOutputStream

#pragma mark Public

/*!
 @brief Constructs a new <code>FileOutputStream</code> that writes to <code>file</code>.The file will be
  truncated if it exists, and created if it doesn't exist.
 @throw FileNotFoundExceptionif file cannot be opened for writing.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Constructs a new <code>FileOutputStream</code> that writes to <code>file</code>.
 If <code>append</code> is true and the file already exists, it will be appended to; otherwise
  it will be truncated. The file will be created if it does not exist.
 @throw FileNotFoundExceptionif the file cannot be opened for writing.
 */
- (instancetype)initWithJavaIoFile:(JavaIoFile *)file
                       withBoolean:(jboolean)append;

/*!
 @brief Constructs a new <code>FileOutputStream</code> that writes to <code>fd</code>.
 @throw NullPointerExceptionif <code>fd</code> is null.
 */
- (instancetype)initWithJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd;

/*!
 @brief Constructs a new <code>FileOutputStream</code> that writes to <code>path</code>.The file will be
  truncated if it exists, and created if it doesn't exist.
 @throw FileNotFoundExceptionif file cannot be opened for writing.
 */
- (instancetype)initWithNSString:(NSString *)path;

/*!
 @brief Constructs a new <code>FileOutputStream</code> that writes to <code>path</code>.
 If <code>append</code> is true and the file already exists, it will be appended to; otherwise
  it will be truncated. The file will be created if it does not exist.
 @throw FileNotFoundExceptionif the file cannot be opened for writing.
 */
- (instancetype)initWithNSString:(NSString *)path
                     withBoolean:(jboolean)append;

- (void)close;

/*!
 @brief Returns a write-only <code>FileChannel</code> that shares its position with
  this stream.
 */
- (JavaNioChannelsFileChannel *)getChannel;

/*!
 @brief Returns the underlying file descriptor.
 */
- (JavaIoFileDescriptor *)getFD;

- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)byteOffset
                   withInt:(jint)byteCount;

- (void)writeWithInt:(jint)oneByte;

#pragma mark Protected

- (void)java_finalize;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileOutputStream)

FOUNDATION_EXPORT void JavaIoFileOutputStream_initWithJavaIoFile_(JavaIoFileOutputStream *self, JavaIoFile *file);

FOUNDATION_EXPORT JavaIoFileOutputStream *new_JavaIoFileOutputStream_initWithJavaIoFile_(JavaIoFile *file) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileOutputStream *create_JavaIoFileOutputStream_initWithJavaIoFile_(JavaIoFile *file);

FOUNDATION_EXPORT void JavaIoFileOutputStream_initWithJavaIoFile_withBoolean_(JavaIoFileOutputStream *self, JavaIoFile *file, jboolean append);

FOUNDATION_EXPORT JavaIoFileOutputStream *new_JavaIoFileOutputStream_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean append) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileOutputStream *create_JavaIoFileOutputStream_initWithJavaIoFile_withBoolean_(JavaIoFile *file, jboolean append);

FOUNDATION_EXPORT void JavaIoFileOutputStream_initWithJavaIoFileDescriptor_(JavaIoFileOutputStream *self, JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT JavaIoFileOutputStream *new_JavaIoFileOutputStream_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileOutputStream *create_JavaIoFileOutputStream_initWithJavaIoFileDescriptor_(JavaIoFileDescriptor *fd);

FOUNDATION_EXPORT void JavaIoFileOutputStream_initWithNSString_(JavaIoFileOutputStream *self, NSString *path);

FOUNDATION_EXPORT JavaIoFileOutputStream *new_JavaIoFileOutputStream_initWithNSString_(NSString *path) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileOutputStream *create_JavaIoFileOutputStream_initWithNSString_(NSString *path);

FOUNDATION_EXPORT void JavaIoFileOutputStream_initWithNSString_withBoolean_(JavaIoFileOutputStream *self, NSString *path, jboolean append);

FOUNDATION_EXPORT JavaIoFileOutputStream *new_JavaIoFileOutputStream_initWithNSString_withBoolean_(NSString *path, jboolean append) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileOutputStream *create_JavaIoFileOutputStream_initWithNSString_withBoolean_(NSString *path, jboolean append);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileOutputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileOutputStream")
