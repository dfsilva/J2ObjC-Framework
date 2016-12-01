//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ForwardingCheckedFuture.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCheckedFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentForwardingCheckedFuture
#ifdef INCLUDE_ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture
#define INCLUDE_ComGoogleCommonUtilConcurrentForwardingCheckedFuture 1
#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingCheckedFuture))
#define ComGoogleCommonUtilConcurrentForwardingCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentForwardingListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentForwardingListenableFuture 1
#include "com/google/common/util/concurrent/ForwardingListenableFuture.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture 1
#include "com/google/common/util/concurrent/CheckedFuture.h"

@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonUtilConcurrentForwardingCheckedFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

- (instancetype)init;

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Protected

- (id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCheckedFuture_init(ComGoogleCommonUtilConcurrentForwardingCheckedFuture *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCheckedFuture)

#endif

#if !defined (ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture))
#define ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_

@protocol ComGoogleCommonUtilConcurrentCheckedFuture;

@interface ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture : ComGoogleCommonUtilConcurrentForwardingCheckedFuture

#pragma mark Protected

- (instancetype)initWithComGoogleCommonUtilConcurrentCheckedFuture:(id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

- (id<ComGoogleCommonUtilConcurrentCheckedFuture>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture_initWithComGoogleCommonUtilConcurrentCheckedFuture_(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture *self, id<ComGoogleCommonUtilConcurrentCheckedFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentForwardingCheckedFuture_SimpleForwardingCheckedFuture)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentForwardingCheckedFuture")