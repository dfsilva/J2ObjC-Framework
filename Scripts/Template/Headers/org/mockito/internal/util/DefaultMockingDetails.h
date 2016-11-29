//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/DefaultMockingDetails.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails")
#ifdef RESTRICT_OrgMockitoInternalUtilDefaultMockingDetails
#define INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilDefaultMockingDetails

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalUtilDefaultMockingDetails_) && (INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails || defined(INCLUDE_OrgMockitoInternalUtilDefaultMockingDetails))
#define OrgMockitoInternalUtilDefaultMockingDetails_

#define RESTRICT_OrgMockitoMockingDetails 1
#define INCLUDE_OrgMockitoMockingDetails 1
#include "../../../../org/mockito/MockingDetails.h"

@class OrgMockitoInternalUtilMockUtil;

/*!
 @brief Class to inspect any object, and identify whether a particular object is either a mock or a spy.
 This is
 a wrapper for <code>org.mockito.internal.util.MockUtil</code>.
 */
@interface OrgMockitoInternalUtilDefaultMockingDetails : NSObject < OrgMockitoMockingDetails >

#pragma mark Public

- (instancetype)initWithId:(id)toInspect
withOrgMockitoInternalUtilMockUtil:(OrgMockitoInternalUtilMockUtil *)delegate;

/*!
 @brief Find out whether the object is a mock.
 @return true if the object is a mock or a spy.
 */
- (jboolean)isMock;

/*!
 @brief Find out whether the object is a spy.
 @return true if the object is a spy.
 */
- (jboolean)isSpy;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilDefaultMockingDetails)

FOUNDATION_EXPORT void OrgMockitoInternalUtilDefaultMockingDetails_initWithId_withOrgMockitoInternalUtilMockUtil_(OrgMockitoInternalUtilDefaultMockingDetails *self, id toInspect, OrgMockitoInternalUtilMockUtil *delegate);

FOUNDATION_EXPORT OrgMockitoInternalUtilDefaultMockingDetails *new_OrgMockitoInternalUtilDefaultMockingDetails_initWithId_withOrgMockitoInternalUtilMockUtil_(id toInspect, OrgMockitoInternalUtilMockUtil *delegate) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilDefaultMockingDetails *create_OrgMockitoInternalUtilDefaultMockingDetails_initWithId_withOrgMockitoInternalUtilMockUtil_(id toInspect, OrgMockitoInternalUtilMockUtil *delegate);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilDefaultMockingDetails)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilDefaultMockingDetails")
