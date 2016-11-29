//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncStartsWith.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncStartsWith")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncStartsWith
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncStartsWith 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncStartsWith 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncStartsWith

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncStartsWith_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncStartsWith || defined(INCLUDE_OrgApacheXpathFunctionsFuncStartsWith))
#define OrgApacheXpathFunctionsFuncStartsWith_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "org/apache/xpath/functions/Function2Args.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the StartsWith() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncStartsWith : OrgApacheXpathFunctionsFunction2Args

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncStartsWith)

inline jlong OrgApacheXpathFunctionsFuncStartsWith_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncStartsWith_serialVersionUID 2194585774699567928LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncStartsWith, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncStartsWith_init(OrgApacheXpathFunctionsFuncStartsWith *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncStartsWith *new_OrgApacheXpathFunctionsFuncStartsWith_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncStartsWith *create_OrgApacheXpathFunctionsFuncStartsWith_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncStartsWith)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncStartsWith")
