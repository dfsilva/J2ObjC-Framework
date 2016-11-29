//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemUnknown.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemUnknown
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemUnknown

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemUnknown_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown || defined(INCLUDE_OrgApacheXalanTemplatesElemUnknown))
#define OrgApacheXalanTemplatesElemUnknown_

#define RESTRICT_OrgApacheXalanTemplatesElemLiteralResult 1
#define INCLUDE_OrgApacheXalanTemplatesElemLiteralResult 1
#include "../../../../org/apache/xalan/templates/ElemLiteralResult.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement an unknown element
  advanced
 */
@interface OrgApacheXalanTemplatesElemUnknown : OrgApacheXalanTemplatesElemLiteralResult

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute an unknown element.
 Execute fallback if fallback child exists or do nothing
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemUnknown)

inline jlong OrgApacheXalanTemplatesElemUnknown_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemUnknown_serialVersionUID -4573981712648730168LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemUnknown, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemUnknown_init(OrgApacheXalanTemplatesElemUnknown *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUnknown *new_OrgApacheXalanTemplatesElemUnknown_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemUnknown *create_OrgApacheXalanTemplatesElemUnknown_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemUnknown)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemUnknown")
