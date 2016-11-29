//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemFallback.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemFallback")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemFallback
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemFallback 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemFallback 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemFallback

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemFallback_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemFallback || defined(INCLUDE_OrgApacheXalanTemplatesElemFallback))
#define OrgApacheXalanTemplatesElemFallback_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:fallback.
 @code

  <!ELEMENT xsl:fallback %template;>
  <!ATTLIST xsl:fallback %space-att;>
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#fallback">fallback in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemFallback : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief This is the normal call when xsl:fallback is instantiated.
 In accordance with the XSLT 1.0 Recommendation, chapter 15,
 "Normally, instantiating an xsl:fallback element does nothing."
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Execute the fallback elements.
 This must be explicitly called to
 instantiate the content of an xsl:fallback element.
 When an XSLT transformer performs fallback for an instruction
 element, if the instruction element has one or more xsl:fallback
 children, then the content of each of the xsl:fallback children
 must be instantiated in sequence; otherwise, an error must
 be signaled. The content of an xsl:fallback element is a template.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeFallbackWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the node name.
 @return The Element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemFallback)

inline jlong OrgApacheXalanTemplatesElemFallback_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemFallback_serialVersionUID 1782962139867340703LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemFallback, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemFallback_init(OrgApacheXalanTemplatesElemFallback *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemFallback *new_OrgApacheXalanTemplatesElemFallback_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemFallback *create_OrgApacheXalanTemplatesElemFallback_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemFallback)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemFallback")
