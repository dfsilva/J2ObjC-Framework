//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncLocalPart.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncLocalPart")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncLocalPart
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncLocalPart 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncLocalPart 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncLocalPart

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncLocalPart_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncLocalPart || defined(INCLUDE_OrgApacheXpathFunctionsFuncLocalPart))
#define OrgApacheXpathFunctionsFuncLocalPart_

#define RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg 1
#include "../../../../org/apache/xpath/functions/FunctionDef1Arg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the LocalPart() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncLocalPart : OrgApacheXpathFunctionsFunctionDef1Arg

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

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncLocalPart)

inline jlong OrgApacheXpathFunctionsFuncLocalPart_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncLocalPart_serialVersionUID 7591798770325814746LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncLocalPart, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncLocalPart_init(OrgApacheXpathFunctionsFuncLocalPart *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncLocalPart *new_OrgApacheXpathFunctionsFuncLocalPart_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncLocalPart *create_OrgApacheXpathFunctionsFuncLocalPart_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncLocalPart)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncLocalPart")
