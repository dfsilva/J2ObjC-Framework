//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/eventbus/SubscriberExceptionHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionHandler
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionHandler

#if !defined (ComGoogleCommonEventbusSubscriberExceptionHandler_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler || defined(INCLUDE_ComGoogleCommonEventbusSubscriberExceptionHandler))
#define ComGoogleCommonEventbusSubscriberExceptionHandler_

@class ComGoogleCommonEventbusSubscriberExceptionContext;

@protocol ComGoogleCommonEventbusSubscriberExceptionHandler < JavaObject >

- (void)handleExceptionWithNSException:(NSException *)exception
withComGoogleCommonEventbusSubscriberExceptionContext:(ComGoogleCommonEventbusSubscriberExceptionContext *)context;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionHandler)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionHandler)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionHandler")