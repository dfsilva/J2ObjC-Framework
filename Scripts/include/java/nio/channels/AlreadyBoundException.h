//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/AlreadyBoundException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsAlreadyBoundException")
#ifdef RESTRICT_JavaNioChannelsAlreadyBoundException
#define INCLUDE_ALL_JavaNioChannelsAlreadyBoundException 0
#else
#define INCLUDE_ALL_JavaNioChannelsAlreadyBoundException 1
#endif
#undef RESTRICT_JavaNioChannelsAlreadyBoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsAlreadyBoundException_) && (INCLUDE_ALL_JavaNioChannelsAlreadyBoundException || defined(INCLUDE_JavaNioChannelsAlreadyBoundException))
#define JavaNioChannelsAlreadyBoundException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief An <code>AlreadyBoundException</code> is thrown when an attempt is made to bind a NetworkChannel that
 is already bound.
  Until ready for a public API change
 */
@interface JavaNioChannelsAlreadyBoundException : JavaLangIllegalStateException

#pragma mark Public

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsAlreadyBoundException)

FOUNDATION_EXPORT void JavaNioChannelsAlreadyBoundException_init(JavaNioChannelsAlreadyBoundException *self);

FOUNDATION_EXPORT JavaNioChannelsAlreadyBoundException *new_JavaNioChannelsAlreadyBoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsAlreadyBoundException *create_JavaNioChannelsAlreadyBoundException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsAlreadyBoundException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsAlreadyBoundException")
