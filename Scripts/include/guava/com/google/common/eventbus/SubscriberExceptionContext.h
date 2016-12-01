//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/eventbus/SubscriberExceptionContext.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext")
#ifdef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionContext
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext 0
#else
#define INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext 1
#endif
#undef RESTRICT_ComGoogleCommonEventbusSubscriberExceptionContext

#if !defined (ComGoogleCommonEventbusSubscriberExceptionContext_) && (INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext || defined(INCLUDE_ComGoogleCommonEventbusSubscriberExceptionContext))
#define ComGoogleCommonEventbusSubscriberExceptionContext_

@class ComGoogleCommonEventbusEventBus;
@class JavaLangReflectMethod;

@interface ComGoogleCommonEventbusSubscriberExceptionContext : NSObject

#pragma mark Public

- (id)getEvent;

- (ComGoogleCommonEventbusEventBus *)getEventBus;

- (id)getSubscriber;

- (JavaLangReflectMethod *)getSubscriberMethod;

#pragma mark Package-Private

- (instancetype)initWithComGoogleCommonEventbusEventBus:(ComGoogleCommonEventbusEventBus *)eventBus
                                                 withId:(id)event
                                                 withId:(id)subscriber
                              withJavaLangReflectMethod:(JavaLangReflectMethod *)subscriberMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonEventbusSubscriberExceptionContext)

FOUNDATION_EXPORT void ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusSubscriberExceptionContext *self, ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod);

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberExceptionContext *new_ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonEventbusSubscriberExceptionContext *create_ComGoogleCommonEventbusSubscriberExceptionContext_initWithComGoogleCommonEventbusEventBus_withId_withId_withJavaLangReflectMethod_(ComGoogleCommonEventbusEventBus *eventBus, id event, id subscriber, JavaLangReflectMethod *subscriberMethod);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonEventbusSubscriberExceptionContext)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonEventbusSubscriberExceptionContext")