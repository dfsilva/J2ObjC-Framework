//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/invocation/Location.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationLocation")
#ifdef RESTRICT_OrgMockitoInvocationLocation
#define INCLUDE_ALL_OrgMockitoInvocationLocation 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationLocation 1
#endif
#undef RESTRICT_OrgMockitoInvocationLocation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInvocationLocation_) && (INCLUDE_ALL_OrgMockitoInvocationLocation || defined(INCLUDE_OrgMockitoInvocationLocation))
#define OrgMockitoInvocationLocation_

/*!
 @brief Describes the location of something in the source code.
 */
@protocol OrgMockitoInvocationLocation < JavaObject >

/*!
 @return the location
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationLocation)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationLocation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationLocation")
