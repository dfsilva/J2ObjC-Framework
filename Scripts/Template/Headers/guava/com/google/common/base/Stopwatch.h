//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Stopwatch.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseStopwatch")
#ifdef RESTRICT_ComGoogleCommonBaseStopwatch
#define INCLUDE_ALL_ComGoogleCommonBaseStopwatch 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseStopwatch 1
#endif
#undef RESTRICT_ComGoogleCommonBaseStopwatch

#if !defined (ComGoogleCommonBaseStopwatch_) && (INCLUDE_ALL_ComGoogleCommonBaseStopwatch || defined(INCLUDE_ComGoogleCommonBaseStopwatch))
#define ComGoogleCommonBaseStopwatch_

@class ComGoogleCommonBaseTicker;
@class JavaUtilConcurrentTimeUnit;

@interface ComGoogleCommonBaseStopwatch : NSObject

#pragma mark Public

+ (ComGoogleCommonBaseStopwatch *)createStarted;

+ (ComGoogleCommonBaseStopwatch *)createStartedWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

+ (ComGoogleCommonBaseStopwatch *)createUnstarted;

+ (ComGoogleCommonBaseStopwatch *)createUnstartedWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

- (jlong)elapsedWithJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)desiredUnit;

- (jboolean)isRunning;

- (ComGoogleCommonBaseStopwatch *)reset;

- (ComGoogleCommonBaseStopwatch *)start;

- (ComGoogleCommonBaseStopwatch *)stop;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

- (instancetype)initWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseStopwatch)

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *ComGoogleCommonBaseStopwatch_createUnstarted();

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *ComGoogleCommonBaseStopwatch_createUnstartedWithComGoogleCommonBaseTicker_(ComGoogleCommonBaseTicker *ticker);

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *ComGoogleCommonBaseStopwatch_createStarted();

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *ComGoogleCommonBaseStopwatch_createStartedWithComGoogleCommonBaseTicker_(ComGoogleCommonBaseTicker *ticker);

FOUNDATION_EXPORT void ComGoogleCommonBaseStopwatch_init(ComGoogleCommonBaseStopwatch *self);

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *new_ComGoogleCommonBaseStopwatch_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *create_ComGoogleCommonBaseStopwatch_init();

FOUNDATION_EXPORT void ComGoogleCommonBaseStopwatch_initWithComGoogleCommonBaseTicker_(ComGoogleCommonBaseStopwatch *self, ComGoogleCommonBaseTicker *ticker);

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *new_ComGoogleCommonBaseStopwatch_initWithComGoogleCommonBaseTicker_(ComGoogleCommonBaseTicker *ticker) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseStopwatch *create_ComGoogleCommonBaseStopwatch_initWithComGoogleCommonBaseTicker_(ComGoogleCommonBaseTicker *ticker);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseStopwatch)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseStopwatch")
