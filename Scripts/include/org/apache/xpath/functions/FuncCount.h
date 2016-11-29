//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncCount.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncCount
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncCount

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncCount_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount || defined(INCLUDE_OrgApacheXpathFunctionsFuncCount))
#define OrgApacheXpathFunctionsFuncCount_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Count() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncCount : OrgApacheXpathFunctionsFunctionOneArg

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncCount)

inline jlong OrgApacheXpathFunctionsFuncCount_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncCount_serialVersionUID -7116225100474153751LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncCount, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncCount_init(OrgApacheXpathFunctionsFuncCount *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCount *new_OrgApacheXpathFunctionsFuncCount_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncCount *create_OrgApacheXpathFunctionsFuncCount_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncCount)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncCount")
