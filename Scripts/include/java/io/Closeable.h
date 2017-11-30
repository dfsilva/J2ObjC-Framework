//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/Closeable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoCloseable")
#ifdef RESTRICT_JavaIoCloseable
#define INCLUDE_ALL_JavaIoCloseable 0
#else
#define INCLUDE_ALL_JavaIoCloseable 1
#endif
#undef RESTRICT_JavaIoCloseable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoCloseable_) && (INCLUDE_ALL_JavaIoCloseable || defined(INCLUDE_JavaIoCloseable))
#define JavaIoCloseable_

#define RESTRICT_JavaLangAutoCloseable 1
#define INCLUDE_JavaLangAutoCloseable 1
#include "java/lang/AutoCloseable.h"

/*!
 @brief A <code>Closeable</code> is a source or destination of data that can be closed.
 The close method is invoked to release resources that the object is
  holding (such as open files).
 @since 1.5
 */
@protocol JavaIoCloseable < JavaLangAutoCloseable, JavaObject >

/*!
 @brief Closes this stream and releases any system resources associated
  with it.If the stream is already closed then invoking this
  method has no effect.
 @throw IOExceptionif an I/O error occurs
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCloseable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCloseable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoCloseable")
