//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/CacheRequest.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetCacheRequest")
#ifdef RESTRICT_JavaNetCacheRequest
#define INCLUDE_ALL_JavaNetCacheRequest 0
#else
#define INCLUDE_ALL_JavaNetCacheRequest 1
#endif
#undef RESTRICT_JavaNetCacheRequest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetCacheRequest_) && (INCLUDE_ALL_JavaNetCacheRequest || defined(INCLUDE_JavaNetCacheRequest))
#define JavaNetCacheRequest_

@class JavaIoOutputStream;

/*!
 @brief Represents channels for storing resources in the
  ResponseCache.Instances of such a class provide an
  OutputStream object which is called by protocol handlers to
  store the resource data into the cache, and also an abort() method
  which allows a cache store operation to be interrupted and
  abandoned.
 If an IOException is encountered while reading the
  response or writing to the cache, the current cache store operation
  will be aborted.
 @author Yingxian Wang
 @since 1.5
 */
@interface JavaNetCacheRequest : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Aborts the attempt to cache the response.If an IOException is
  encountered while reading the response or writing to the cache,
  the current cache store operation will be abandoned.
 */
- (void)abort;

/*!
 @brief Returns an OutputStream to which the response body can be
  written.
 @return an OutputStream to which the response body can
          be written
 @throw IOExceptionif an I/O error occurs while
          writing the response body
 */
- (JavaIoOutputStream *)getBody;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetCacheRequest)

FOUNDATION_EXPORT void JavaNetCacheRequest_init(JavaNetCacheRequest *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetCacheRequest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetCacheRequest")
