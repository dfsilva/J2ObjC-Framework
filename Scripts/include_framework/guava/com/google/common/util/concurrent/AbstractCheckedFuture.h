//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/AbstractCheckedFuture.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCheckedFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractCheckedFuture

#if !defined (ComGoogleCommonUtilConcurrentAbstractCheckedFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractCheckedFuture))
#define ComGoogleCommonUtilConcurrentAbstractCheckedFuture_

#define RESTRICT_ComGoogleCommonUtilConcurrentForwardingListenableFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture 1
#include "../../../../../../com/google/common/util/concurrent/ForwardingListenableFuture.h"

#define RESTRICT_ComGoogleCommonUtilConcurrentCheckedFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentCheckedFuture 1
#include "../../../../../../com/google/common/util/concurrent/CheckedFuture.h"

@class JavaLangException;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;

@interface ComGoogleCommonUtilConcurrentAbstractCheckedFuture : ComGoogleCommonUtilConcurrentForwardingListenableFuture_SimpleForwardingListenableFuture < ComGoogleCommonUtilConcurrentCheckedFuture >

#pragma mark Public

- (id)checkedGet;

- (id)checkedGetWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

#pragma mark Protected

- (instancetype)initWithComGoogleCommonUtilConcurrentListenableFuture:(id<ComGoogleCommonUtilConcurrentListenableFuture>)delegate;

- (JavaLangException *)mapExceptionWithJavaLangException:(JavaLangException *)e;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractCheckedFuture)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractCheckedFuture_initWithComGoogleCommonUtilConcurrentListenableFuture_(ComGoogleCommonUtilConcurrentAbstractCheckedFuture *self, id<ComGoogleCommonUtilConcurrentListenableFuture> delegate);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractCheckedFuture)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractCheckedFuture")