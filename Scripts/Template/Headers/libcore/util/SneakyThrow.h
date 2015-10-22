//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/libcore/util/SneakyThrow.java
//

#ifndef _LibcoreUtilSneakyThrow_H_
#define _LibcoreUtilSneakyThrow_H_

#include <j2objc/J2ObjC_header.h>

@class JavaLangThrowable;

/*!
 @brief Exploits a weakness in the runtime to throw an arbitrary throwable without
 the traditional declaration.
 <strong>This is a dangerous API that should be
 used with great caution.</strong> Typically this is useful when rethrowing
 throwables that are of a known range of types.
 <p>The following code must enumerate several types to rethrow:
 @code

  public void close() throws IOException {
     Throwable thrown = null;
     ...
     if (thrown != null) {
         if (thrown instanceof IOException) {
             throw (IOException) thrown;
         } else if (thrown instanceof RuntimeException) {
             throw (RuntimeException) thrown;
         } else if (thrown instanceof Error) {
             throw (Error) thrown;
         } else {
             throw new AssertionError();
         }
     }
  
@endcode
 With SneakyThrow, rethrowing is easier:
 @code

  public void close() throws IOException {
     Throwable thrown = null;
     ...
     if (thrown != null) {
         SneakyThrow.sneakyThrow(thrown);
     }
  
@endcode
 */
@interface LibcoreUtilSneakyThrow : NSObject

#pragma mark Public

+ (void)sneakyThrowWithJavaLangThrowable:(JavaLangThrowable *)t;

@end

J2OBJC_EMPTY_STATIC_INIT(LibcoreUtilSneakyThrow)

FOUNDATION_EXPORT void LibcoreUtilSneakyThrow_sneakyThrowWithJavaLangThrowable_(JavaLangThrowable *t);

J2OBJC_TYPE_LITERAL_HEADER(LibcoreUtilSneakyThrow)

#endif // _LibcoreUtilSneakyThrow_H_