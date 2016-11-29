//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMWSFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMWSFilter")
#ifdef RESTRICT_OrgApacheXmlDtmDTMWSFilter
#define INCLUDE_ALL_OrgApacheXmlDtmDTMWSFilter 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMWSFilter 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMWSFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmDTMWSFilter_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMWSFilter || defined(INCLUDE_OrgApacheXmlDtmDTMWSFilter))
#define OrgApacheXmlDtmDTMWSFilter_

@protocol OrgApacheXmlDtmDTM;

/*!
 @brief This interface is meant to be implemented by a client of the DTM, and allows
 stripping of whitespace nodes.
 */
@protocol OrgApacheXmlDtmDTMWSFilter < JavaObject >

/*!
 @brief Test whether whitespace-only text nodes are visible in the logical 
 view of <code>DTM</code>.
 Normally, this function
 will be called by the implementation of <code>DTM</code>; 
 it is not normally called directly from
 user code.
 @param elementHandle int Handle of the element.
 @return one of NOTSTRIP, STRIP, or INHERIT.
 */
- (jshort)getShouldStripSpaceWithInt:(jint)elementHandle
              withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

@end

@interface OrgApacheXmlDtmDTMWSFilter : NSObject

+ (jshort)NOTSTRIP;

+ (jshort)STRIP;

+ (jshort)INHERIT;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmDTMWSFilter)

/*!
 @brief Do not strip whitespace child nodes of this element.
 */
inline jshort OrgApacheXmlDtmDTMWSFilter_get_NOTSTRIP();
#define OrgApacheXmlDtmDTMWSFilter_NOTSTRIP 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMWSFilter, NOTSTRIP, jshort)

/*!
 @brief Strip whitespace child nodes of this element.
 */
inline jshort OrgApacheXmlDtmDTMWSFilter_get_STRIP();
#define OrgApacheXmlDtmDTMWSFilter_STRIP 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMWSFilter, STRIP, jshort)

/*!
 @brief Inherit whitespace stripping behavior of the parent node.
 */
inline jshort OrgApacheXmlDtmDTMWSFilter_get_INHERIT();
#define OrgApacheXmlDtmDTMWSFilter_INHERIT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMWSFilter, INHERIT, jshort)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMWSFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMWSFilter")
