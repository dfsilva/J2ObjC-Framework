//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FuncRound.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound")
#ifdef RESTRICT_OrgApacheXpathFunctionsFuncRound
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFuncRound

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFuncRound_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound || defined(INCLUDE_OrgApacheXpathFunctionsFuncRound))
#define OrgApacheXpathFunctionsFuncRound_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the round() function.
  advanced
 */
@interface OrgApacheXpathFunctionsFuncRound : OrgApacheXpathFunctionsFunctionOneArg

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

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFuncRound)

inline jlong OrgApacheXpathFunctionsFuncRound_get_serialVersionUID();
#define OrgApacheXpathFunctionsFuncRound_serialVersionUID -7970583902573826611LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFuncRound, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFuncRound_init(OrgApacheXpathFunctionsFuncRound *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncRound *new_OrgApacheXpathFunctionsFuncRound_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFuncRound *create_OrgApacheXpathFunctionsFuncRound_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFuncRound)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFuncRound")
