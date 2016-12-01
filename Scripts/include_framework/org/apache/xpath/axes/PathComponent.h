//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/PathComponent.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesPathComponent")
#ifdef RESTRICT_OrgApacheXpathAxesPathComponent
#define INCLUDE_ALL_OrgApacheXpathAxesPathComponent 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesPathComponent 1
#endif
#undef RESTRICT_OrgApacheXpathAxesPathComponent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesPathComponent_) && (INCLUDE_ALL_OrgApacheXpathAxesPathComponent || defined(INCLUDE_OrgApacheXpathAxesPathComponent))
#define OrgApacheXpathAxesPathComponent_

/*!
 @brief Classes who implement this information provide information needed for 
 static analysis of a path component.
 */
@protocol OrgApacheXpathAxesPathComponent < JavaObject >

/*!
 @brief Get the analysis bits for this path component, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesPathComponent)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesPathComponent)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesPathComponent")