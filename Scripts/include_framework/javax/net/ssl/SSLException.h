//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLException")
#ifdef RESTRICT_JavaxNetSslSSLException
#define INCLUDE_ALL_JavaxNetSslSSLException 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLException 1
#endif
#undef RESTRICT_JavaxNetSslSSLException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLException_) && (INCLUDE_ALL_JavaxNetSslSSLException || defined(INCLUDE_JavaxNetSslSSLException))
#define JavaxNetSslSSLException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "../../../java/io/IOException.h"

@class JavaLangThrowable;

/*!
 @brief Indicates some kind of error detected by an SSL subsystem.
 This class is the general class of exceptions produced
  by failed SSL-related operations.
 @since 1.4
 @author David Brownell
 */
@interface JavaxNetSslSSLException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs an exception reporting an error found by
  an SSL subsystem.
 @param reason describes the problem.
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates a <code>SSLException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval           by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the           
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is           permitted, and indicates that the cause is nonexistent or
            unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>SSLException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the           
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is           permitted, and indicates that the cause is nonexistent or
            unknown.)
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLException)

FOUNDATION_EXPORT void JavaxNetSslSSLException_initWithNSString_(JavaxNetSslSSLException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLException *new_JavaxNetSslSSLException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLException *create_JavaxNetSslSSLException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaxNetSslSSLException_initWithNSString_withJavaLangThrowable_(JavaxNetSslSSLException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaxNetSslSSLException *new_JavaxNetSslSSLException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLException *create_JavaxNetSslSSLException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaxNetSslSSLException_initWithJavaLangThrowable_(JavaxNetSslSSLException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaxNetSslSSLException *new_JavaxNetSslSSLException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLException *create_JavaxNetSslSSLException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLException")
