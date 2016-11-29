//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncNot.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNot")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncNot
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNot 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncNot 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncNot

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncNot_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncNot || defined(INCLUDE_OrgApacheXpathFunctionsFuncNot))
#define OrgApacheXpathFunctionsFuncNot_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Not() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncNot : OrgApacheXpathFunctionsFunctionOneArg

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncNot)

inline jlong OrgApacheXpathFunctionsFuncNot_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncNot_serialVersionUID 7299699961076329790LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncNot, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncNot_init(OrgApacheXpathFunctionsFuncNot *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNot *new_OrgApacheXpathFunctionsFuncNot_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncNot *create_OrgApacheXpathFunctionsFuncNot_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncNot)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncNot")
