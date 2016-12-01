//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/MockingDetails.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoMockingDetails")
#ifdef RESTRICT_OrgMockitoMockingDetails
#define INCLUDE_ALL_OrgMockitoMockingDetails 0
#else
#define INCLUDE_ALL_OrgMockitoMockingDetails 1
#endif
#undef RESTRICT_OrgMockitoMockingDetails

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoMockingDetails_) && (INCLUDE_ALL_OrgMockitoMockingDetails || defined(INCLUDE_OrgMockitoMockingDetails))
#define OrgMockitoMockingDetails_

/*!
 @brief Provides mocking information.
 For example, you can identify whether a particular object is either a mock or a spy.
 @since 1.9.5
 */
@protocol OrgMockitoMockingDetails < JavaObject >

/*!
 @brief Informs if the object is a mock.
 @return true if the object is a mock or a spy.
 @since 1.9.5
 */
- (jboolean)isMock;

/*!
 @brief Informs if the object is a spy.
 @return true if the object is a spy.
 @since 1.9.5
 */
- (jboolean)isSpy;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoMockingDetails)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoMockingDetails)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoMockingDetails")