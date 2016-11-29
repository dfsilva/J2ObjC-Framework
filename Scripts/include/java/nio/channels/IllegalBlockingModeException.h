//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/IllegalBlockingModeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException")
#ifdef RESTRICT_JavaNioChannelsIllegalBlockingModeException
#define INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException 0
#else
#define INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException 1
#endif
#undef RESTRICT_JavaNioChannelsIllegalBlockingModeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsIllegalBlockingModeException_) && (INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException || defined(INCLUDE_JavaNioChannelsIllegalBlockingModeException))
#define JavaNioChannelsIllegalBlockingModeException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief An <code>IllegalBlockingModeException</code> is thrown when an operation that
 requires a specific blocking mode is invoked on a channel that is in a
 different blocking mode.
 */
@interface JavaNioChannelsIllegalBlockingModeException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs a <code>IllegalBlockingModeException</code>.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsIllegalBlockingModeException)

FOUNDATION_EXPORT void JavaNioChannelsIllegalBlockingModeException_init(JavaNioChannelsIllegalBlockingModeException *self);

FOUNDATION_EXPORT JavaNioChannelsIllegalBlockingModeException *new_JavaNioChannelsIllegalBlockingModeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsIllegalBlockingModeException *create_JavaNioChannelsIllegalBlockingModeException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsIllegalBlockingModeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException")
