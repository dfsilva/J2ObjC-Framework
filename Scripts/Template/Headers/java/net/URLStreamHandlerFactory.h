//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/URLStreamHandlerFactory.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLStreamHandlerFactory")
#ifdef RESTRICT_JavaNetURLStreamHandlerFactory
#define INCLUDE_ALL_JavaNetURLStreamHandlerFactory 0
#else
#define INCLUDE_ALL_JavaNetURLStreamHandlerFactory 1
#endif
#undef RESTRICT_JavaNetURLStreamHandlerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetURLStreamHandlerFactory_) && (INCLUDE_ALL_JavaNetURLStreamHandlerFactory || defined(INCLUDE_JavaNetURLStreamHandlerFactory))
#define JavaNetURLStreamHandlerFactory_

@class JavaNetURLStreamHandler;

/*!
 @brief Defines a factory which creates an <code>URLStreamHandler</code> for a specified
 protocol.
 It is used by the class <code>URL</code>.
 */
@protocol JavaNetURLStreamHandlerFactory < NSObject, JavaObject >

/*!
 @brief Creates a new <code>URLStreamHandler</code> instance for the given <code>protocol</code>
 .
 @param protocol
 the protocol for which a handler is needed.
 @return the created handler.
 */
- (JavaNetURLStreamHandler *)createURLStreamHandlerWithNSString:(NSString *)protocol;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURLStreamHandlerFactory)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLStreamHandlerFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURLStreamHandlerFactory")
