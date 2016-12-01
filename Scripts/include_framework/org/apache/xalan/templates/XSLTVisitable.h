//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/XSLTVisitable.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesXSLTVisitable")
#ifdef RESTRICT_OrgApacheXalanTemplatesXSLTVisitable
#define INCLUDE_ALL_OrgApacheXalanTemplatesXSLTVisitable 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesXSLTVisitable 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesXSLTVisitable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesXSLTVisitable_) && (INCLUDE_ALL_OrgApacheXalanTemplatesXSLTVisitable || defined(INCLUDE_OrgApacheXalanTemplatesXSLTVisitable))
#define OrgApacheXalanTemplatesXSLTVisitable_

@class OrgApacheXalanTemplatesXSLTVisitor;

/*!
 @brief A class that implements this interface will call a XSLTVisitor 
 for itself and members within it's heararchy.
 If the XSLTVistor's 
 method returns false, the sub-member heararchy will not be 
 traversed.
 */
@protocol OrgApacheXalanTemplatesXSLTVisitable < JavaObject >

/*!
 @brief This will traverse the heararchy, calling the visitor for 
 each member.
 If the called visitor method returns 
 false, the subtree should not be called.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesXSLTVisitable)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesXSLTVisitable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesXSLTVisitable")
