//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/debugging/LocationImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingLocationImpl")
#ifdef RESTRICT_OrgMockitoInternalDebuggingLocationImpl
#define INCLUDE_ALL_OrgMockitoInternalDebuggingLocationImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalDebuggingLocationImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalDebuggingLocationImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalDebuggingLocationImpl_) && (INCLUDE_ALL_OrgMockitoInternalDebuggingLocationImpl || defined(INCLUDE_OrgMockitoInternalDebuggingLocationImpl))
#define OrgMockitoInternalDebuggingLocationImpl_

#define RESTRICT_OrgMockitoInvocationLocation 1
#define INCLUDE_OrgMockitoInvocationLocation 1
#include "../../../../org/mockito/invocation/Location.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class OrgMockitoInternalExceptionsStacktraceStackTraceFilter;

@interface OrgMockitoInternalDebuggingLocationImpl : NSObject < OrgMockitoInvocationLocation, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgMockitoInternalExceptionsStacktraceStackTraceFilter:(OrgMockitoInternalExceptionsStacktraceStackTraceFilter *)stackTraceFilter;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalDebuggingLocationImpl)

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingLocationImpl_init(OrgMockitoInternalDebuggingLocationImpl *self);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocationImpl *new_OrgMockitoInternalDebuggingLocationImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocationImpl *create_OrgMockitoInternalDebuggingLocationImpl_init();

FOUNDATION_EXPORT void OrgMockitoInternalDebuggingLocationImpl_initWithOrgMockitoInternalExceptionsStacktraceStackTraceFilter_(OrgMockitoInternalDebuggingLocationImpl *self, OrgMockitoInternalExceptionsStacktraceStackTraceFilter *stackTraceFilter);

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocationImpl *new_OrgMockitoInternalDebuggingLocationImpl_initWithOrgMockitoInternalExceptionsStacktraceStackTraceFilter_(OrgMockitoInternalExceptionsStacktraceStackTraceFilter *stackTraceFilter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalDebuggingLocationImpl *create_OrgMockitoInternalDebuggingLocationImpl_initWithOrgMockitoInternalExceptionsStacktraceStackTraceFilter_(OrgMockitoInternalExceptionsStacktraceStackTraceFilter *stackTraceFilter);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalDebuggingLocationImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalDebuggingLocationImpl")
