//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/FileNotFoundException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFileNotFoundException")
#ifdef RESTRICT_JavaIoFileNotFoundException
#define INCLUDE_ALL_JavaIoFileNotFoundException 0
#else
#define INCLUDE_ALL_JavaIoFileNotFoundException 1
#endif
#undef RESTRICT_JavaIoFileNotFoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFileNotFoundException_) && (INCLUDE_ALL_JavaIoFileNotFoundException || defined(INCLUDE_JavaIoFileNotFoundException))
#define JavaIoFileNotFoundException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Signals that an attempt to open the file denoted by a specified pathname
  has failed.
 <p> This exception will be thrown by the <code>FileInputStream</code>, <code>FileOutputStream</code>
 , and <code>RandomAccessFile</code> constructors when a file
  with the specified pathname does not exist.  It will also be thrown by these
  constructors if the file does exist but for some reason is inaccessible, for
  example when an attempt is made to open a read-only file for writing.
 @author unascribed
 @since JDK1.0
 */
@interface JavaIoFileNotFoundException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>FileNotFoundException</code> with 
 <code>null</code> as its error detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>FileNotFoundException</code> with the
  specified detail message.The string <code>s</code> can be
  retrieved later by the 
 <code><code>java.lang.Throwable</code></code>
  method of class <code>java.lang.Throwable</code>.
 @param s the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

#pragma mark Package-Private

/*!
 @brief Constructs a <code>FileNotFoundException</code> with a detail message
  consisting of the given pathname string followed by the given reason
  string.If the <code>reason</code> argument is <code>null</code> then
  it will be omitted.
 This private constructor is invoked only by native
  I/O methods.
 @since 1.2
 */
- (instancetype)initWithNSString:(NSString *)path
                    withNSString:(NSString *)reason;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFileNotFoundException)

FOUNDATION_EXPORT void JavaIoFileNotFoundException_init(JavaIoFileNotFoundException *self);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileNotFoundException *create_JavaIoFileNotFoundException_init(void);

FOUNDATION_EXPORT void JavaIoFileNotFoundException_initWithNSString_(JavaIoFileNotFoundException *self, NSString *s);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileNotFoundException *create_JavaIoFileNotFoundException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaIoFileNotFoundException_initWithNSString_withNSString_(JavaIoFileNotFoundException *self, NSString *path, NSString *reason);

FOUNDATION_EXPORT JavaIoFileNotFoundException *new_JavaIoFileNotFoundException_initWithNSString_withNSString_(NSString *path, NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoFileNotFoundException *create_JavaIoFileNotFoundException_initWithNSString_withNSString_(NSString *path, NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFileNotFoundException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFileNotFoundException")
