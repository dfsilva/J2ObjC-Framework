//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/ConnectionPendingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsConnectionPendingException")
#ifdef RESTRICT_JavaNioChannelsConnectionPendingException
#define INCLUDE_ALL_JavaNioChannelsConnectionPendingException 0
#else
#define INCLUDE_ALL_JavaNioChannelsConnectionPendingException 1
#endif
#undef RESTRICT_JavaNioChannelsConnectionPendingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsConnectionPendingException_) && (INCLUDE_ALL_JavaNioChannelsConnectionPendingException || defined(INCLUDE_JavaNioChannelsConnectionPendingException))
#define JavaNioChannelsConnectionPendingException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief A <code>ConnectionPendingException</code> is thrown when an attempt is made to
 connect a <code>SocketChannel</code> that has a non-blocking connection already
 underway.
 */
@interface JavaNioChannelsConnectionPendingException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>ConnectionPendingException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsConnectionPendingException)

FOUNDATION_EXPORT void JavaNioChannelsConnectionPendingException_init(JavaNioChannelsConnectionPendingException *self);

FOUNDATION_EXPORT JavaNioChannelsConnectionPendingException *new_JavaNioChannelsConnectionPendingException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsConnectionPendingException *create_JavaNioChannelsConnectionPendingException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsConnectionPendingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsConnectionPendingException")