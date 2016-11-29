//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemApplyTemplates.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyTemplates")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemApplyTemplates
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyTemplates 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyTemplates 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemApplyTemplates

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemApplyTemplates_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyTemplates || defined(INCLUDE_OrgApacheXalanTemplatesElemApplyTemplates))
#define OrgApacheXalanTemplatesElemApplyTemplates_

#define RESTRICT_OrgApacheXalanTemplatesElemCallTemplate 1
#define INCLUDE_OrgApacheXalanTemplatesElemCallTemplate 1
#include "../../../../org/apache/xalan/templates/ElemCallTemplate.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;

/*!
 @brief Implement xsl:apply-templates.
 @code

  &amp;!ELEMENT xsl:apply-templates (xsl:sort|xsl:with-param)*>
  &amp;!ATTLIST xsl:apply-templates
   select %expr; "node()"
   mode %qname; #IMPLIED
  &amp;
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Applying-Template-Rules">section-Applying-Template-Rules in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemApplyTemplates : OrgApacheXalanTemplatesElemCallTemplate

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Apply the context node to the matching templates.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Applying-Template-Rules">section-Applying-Template-Rules in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the mode attribute for this element.
 @return The mode attribute for this element
 */
- (OrgApacheXmlUtilsQName *)getMode;

/*!
 @brief Return the node name.
 @return Element name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return Token ID for this element types
 */
- (jint)getXSLToken;

/*!
 @brief Set if this belongs to a default template,
 in which case it will act different with
 regard to processing modes.
 - seealso: <a href="http://www.w3.org/TR/xslt#built-in-rule">built-in-rule in XSLT Specification</a>
 @param b boolean value to set.
 */
- (void)setIsDefaultTemplateWithBoolean:(jboolean)b;

/*!
 @brief Set the mode attribute for this element.
 @param mode reference, which may be null, to the <a href="http://www.w3.org/TR/xslt#modes">current mode</a>.
 */
- (void)setModeWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode;

/*!
 @brief Perform a query if needed, and call transformNode for each child.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException Thrown in a variety of circumstances.
  advanced
 */
- (void)transformSelectedNodesWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemApplyTemplates)

inline jlong OrgApacheXalanTemplatesElemApplyTemplates_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemApplyTemplates_serialVersionUID 2903125371542621004LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemApplyTemplates, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemApplyTemplates_init(OrgApacheXalanTemplatesElemApplyTemplates *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemApplyTemplates *new_OrgApacheXalanTemplatesElemApplyTemplates_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemApplyTemplates *create_OrgApacheXalanTemplatesElemApplyTemplates_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemApplyTemplates)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemApplyTemplates")