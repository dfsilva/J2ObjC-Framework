//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/SubContextList.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesSubContextList")
#ifdef RESTRICT_OrgApacheXpathAxesSubContextList
#define INCLUDE_ALL_OrgApacheXpathAxesSubContextList 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesSubContextList 1
#endif
#undef RESTRICT_OrgApacheXpathAxesSubContextList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesSubContextList_) && (INCLUDE_ALL_OrgApacheXpathAxesSubContextList || defined(INCLUDE_OrgApacheXpathAxesSubContextList))
#define OrgApacheXpathAxesSubContextList_

@class OrgApacheXpathXPathContext;

/*!
 @brief A class that implements this interface is a sub context node list, meaning it
 is a node list for a location path step for a predicate.
  advanced
 */
@protocol OrgApacheXpathAxesSubContextList < JavaObject >

/*!
 @brief Get the number of nodes in the node list, which, in the XSLT 1 based 
 counting system, is the last index position.
 @param xctxt The XPath runtime context.
 @return the number of nodes in the node list.
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Get the current sub-context position.
 @param xctxt The XPath runtime context.
 @return The position of the current node in the list.
 */
- (jint)getProximityPositionWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesSubContextList)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesSubContextList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesSubContextList")
