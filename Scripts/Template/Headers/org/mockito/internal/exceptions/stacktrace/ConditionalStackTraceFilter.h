//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/exceptions/stacktrace/ConditionalStackTraceFilter.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter")
#ifdef RESTRICT_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter 1
#endif
#undef RESTRICT_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_) && (INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter || defined(INCLUDE_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter))
#define OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@interface OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter : NSObject < JavaIoSerializable >

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

- (void)filterWithNSException:(NSException *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

inline jlong OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_get_serialVersionUID();
#define OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_serialVersionUID -8085849703510292641LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *self);

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *new_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter *create_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalExceptionsStacktraceConditionalStackTraceFilter")
