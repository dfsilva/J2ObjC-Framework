//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/FakeTimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentFakeTimeLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentFakeTimeLimiter

#if !defined (ComGoogleCommonUtilConcurrentFakeTimeLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentFakeTimeLimiter))
#define ComGoogleCommonUtilConcurrentFakeTimeLimiter_

#define RESTRICT_ComGoogleCommonUtilConcurrentTimeLimiter 1
#define INCLUDE_ComGoogleCommonUtilConcurrentTimeLimiter 1
#include "com/google/common/util/concurrent/TimeLimiter.h"

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentFakeTimeLimiter : NSObject < ComGoogleCommonUtilConcurrentTimeLimiter >

#pragma mark Public

- (instancetype)init;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                           withLong:(jlong)timeoutDuration
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit
                                        withBoolean:(jboolean)amInterruptible;

- (id)newProxyWithId:(id)target
        withIOSClass:(IOSClass *)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentFakeTimeLimiter_init(ComGoogleCommonUtilConcurrentFakeTimeLimiter *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFakeTimeLimiter *new_ComGoogleCommonUtilConcurrentFakeTimeLimiter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentFakeTimeLimiter *create_ComGoogleCommonUtilConcurrentFakeTimeLimiter_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentFakeTimeLimiter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentFakeTimeLimiter")
