//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/NotYetConnectedException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsNotYetConnectedException")
#ifdef RESTRICT_JavaNioChannelsNotYetConnectedException
#define INCLUDE_ALL_JavaNioChannelsNotYetConnectedException 0
#else
#define INCLUDE_ALL_JavaNioChannelsNotYetConnectedException 1
#endif
#undef RESTRICT_JavaNioChannelsNotYetConnectedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsNotYetConnectedException_) && (INCLUDE_ALL_JavaNioChannelsNotYetConnectedException || defined(INCLUDE_JavaNioChannelsNotYetConnectedException))
#define JavaNioChannelsNotYetConnectedException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

@class JavaLangThrowable;

/*!
 @brief Unchecked exception thrown when an attempt is made to invoke an I/O
  operation upon a socket channel that is not yet connected.
 @since 1.4
 */
@interface JavaNioChannelsNotYetConnectedException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNotYetConnectedException)

FOUNDATION_EXPORT void JavaNioChannelsNotYetConnectedException_init(JavaNioChannelsNotYetConnectedException *self);

FOUNDATION_EXPORT JavaNioChannelsNotYetConnectedException *new_JavaNioChannelsNotYetConnectedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsNotYetConnectedException *create_JavaNioChannelsNotYetConnectedException_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNotYetConnectedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsNotYetConnectedException")
