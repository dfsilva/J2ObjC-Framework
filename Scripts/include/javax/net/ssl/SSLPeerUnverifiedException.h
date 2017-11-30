//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/SSLPeerUnverifiedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLPeerUnverifiedException")
#ifdef RESTRICT_JavaxNetSslSSLPeerUnverifiedException
#define INCLUDE_ALL_JavaxNetSslSSLPeerUnverifiedException 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLPeerUnverifiedException 1
#endif
#undef RESTRICT_JavaxNetSslSSLPeerUnverifiedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLPeerUnverifiedException_) && (INCLUDE_ALL_JavaxNetSslSSLPeerUnverifiedException || defined(INCLUDE_JavaxNetSslSSLPeerUnverifiedException))
#define JavaxNetSslSSLPeerUnverifiedException_

#define RESTRICT_JavaxNetSslSSLException 1
#define INCLUDE_JavaxNetSslSSLException 1
#include "javax/net/ssl/SSLException.h"

@class JavaLangThrowable;

/*!
 @brief Indicates that the peer's identity has not been verified.
 <P>
  When the peer was not able to
  identify itself (for example; no certificate, the particular
  cipher suite being used does not support authentication, or no
  peer authentication was established during SSL handshaking) this
  exception is thrown.
 @since 1.4
 @author David Brownell
 */
@interface JavaxNetSslSSLPeerUnverifiedException : JavaxNetSslSSLException

#pragma mark Public

/*!
 @brief Constructs an exception reporting that the SSL peer's
  identity has not been verifiied.
 @param reason describes the problem.
 */
- (instancetype)initWithNSString:(NSString *)reason;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLPeerUnverifiedException)

FOUNDATION_EXPORT void JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(JavaxNetSslSSLPeerUnverifiedException *self, NSString *reason);

FOUNDATION_EXPORT JavaxNetSslSSLPeerUnverifiedException *new_JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLPeerUnverifiedException *create_JavaxNetSslSSLPeerUnverifiedException_initWithNSString_(NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLPeerUnverifiedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLPeerUnverifiedException")
