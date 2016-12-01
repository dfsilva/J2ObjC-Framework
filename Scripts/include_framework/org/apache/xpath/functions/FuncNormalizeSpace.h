//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncNormalizeSpace.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNormalizeSpace")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncNormalizeSpace
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNormalizeSpace 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNormalizeSpace 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncNormalizeSpace

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncNormalizeSpace_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncNormalizeSpace || defined(INCLUDE_OrgApacheXpathFunctionsFuncNormalizeSpace))
#define OrgApacheXpathFunctionsFuncNormalizeSpace_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "../../../../org/apache/xpath/functions/FunctionDef1Arg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief Execute the normalize-space() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncNormalizeSpace : OrgApacheXpathFunctionsFunctionDef1Arg

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute the function.
 The function must return
 a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute an expression in the XPath runtime context, and return the 
 result of the expression.
 @param xctxt The XPath runtime context.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throws javax.xml.transform.TransformerException if a runtime exception 
 occurs.
 */
- (void)executeCharsToContentHandlerWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                       withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncNormalizeSpace)

inline jlong OrgApacheXpathFunctionsFuncNormalizeSpace_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncNormalizeSpace_serialVersionUID -3377956872032190880LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncNormalizeSpace, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncNormalizeSpace_init(OrgApacheXpathFunctionsFuncNormalizeSpace *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNormalizeSpace *new_OrgApacheXpathFunctionsFuncNormalizeSpace_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNormalizeSpace *create_OrgApacheXpathFunctionsFuncNormalizeSpace_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncNormalizeSpace)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNormalizeSpace")
