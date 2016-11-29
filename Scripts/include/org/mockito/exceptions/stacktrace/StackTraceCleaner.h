//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/stacktrace/StackTraceCleaner.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsStacktraceStackTraceCleaner")
#ifdef RESTRICT_OrgMockitoExceptionsStacktraceStackTraceCleaner
#define INCLUDE_ALL_OrgMockitoExceptionsStacktraceStackTraceCleaner 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsStacktraceStackTraceCleaner 1
#endif
#undef RESTRICT_OrgMockitoExceptionsStacktraceStackTraceCleaner

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoExceptionsStacktraceStackTraceCleaner_) && (INCLUDE_ALL_OrgMockitoExceptionsStacktraceStackTraceCleaner || defined(INCLUDE_OrgMockitoExceptionsStacktraceStackTraceCleaner))
#define OrgMockitoExceptionsStacktraceStackTraceCleaner_

@class JavaLangStackTraceElement;

/*!
 @brief Decides if particular StackTraceElement is excluded from the human-readable stack trace output.
 Mockito stack trace filtering mechanism uses this information.
 <p>
 Excluding an element will make it not show in the cleaned stack trace.
 Not-excluding an element does not guarantee it will be shown
 (e.g. it depends on the implementation of
 Mockito internal <code>org.mockito.internal.exceptions.stacktrace.StackTraceFilter</code>).
 <p>
 The implementations are required to be thread safe. For example, make them stateless.
 <p>
 See the default implementation: <code>org.mockito.internal.exceptions.stacktrace.DefaultStackTraceCleaner</code>.
 */
@protocol OrgMockitoExceptionsStacktraceStackTraceCleaner < JavaObject >

/*!
 @brief Decides if element is excluded.
 @param candidate element of the actual stack trace
 @return whether the element should be excluded from cleaned stack trace.
 */
- (jboolean)isOutWithJavaLangStackTraceElement:(JavaLangStackTraceElement *)candidate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsStacktraceStackTraceCleaner)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsStacktraceStackTraceCleaner)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsStacktraceStackTraceCleaner")
