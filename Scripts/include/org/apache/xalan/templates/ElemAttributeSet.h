//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemAttributeSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemAttributeSet
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemAttributeSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemAttributeSet_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet || defined(INCLUDE_OrgApacheXalanTemplatesElemAttributeSet))
#define OrgApacheXalanTemplatesElemAttributeSet_

#define RESTRICT_OrgApacheXalanTemplatesElemUse 1
#define INCLUDE_OrgApacheXalanTemplatesElemUse 1
#include "org/apache/xalan/templates/ElemUse.h"

@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;

/*!
 @brief Implement xsl:attribute-set.
 @code

  &amp;!ELEMENT xsl:attribute-set (xsl:attribute)*>
  &amp;!ATTLIST xsl:attribute-set
   name %qname; #REQUIRED
   use-attribute-sets %qnames; #IMPLIED
  &amp;
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemAttributeSet : OrgApacheXalanTemplatesElemUse {
 @public
  /*!
   @brief The name attribute specifies the name of the attribute set.
   */
  OrgApacheXmlUtilsQName *m_qname_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list
 .
 <!ELEMENT xsl:attribute-set (xsl:attribute)*>
 <!ATTLIST xsl:attribute-set
 name %qname; #REQUIRED
 use-attribute-sets %qnames; #IMPLIED
 >
 @param newChild Child to be added to this node's list of children
 @return The child that was just added to the list of children
 @throws DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildElemWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Apply a set of attributes to the element.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "name" attribute.
 The name attribute specifies the name of the attribute set.
 @return The name attribute of the attribute set
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Return the node name.
 @return The name of this element
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return Token ID of the element
 */
- (jint)getXSLToken;

/*!
 @brief This function is called during recomposition to
 control how this element is composed.
 @param root The root stylesheet for this transformation.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Set the "name" attribute.
 The name attribute specifies the name of the attribute set.
 @param name Name attribute to set
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemAttributeSet)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemAttributeSet, m_qname_, OrgApacheXmlUtilsQName *)

inline jlong OrgApacheXalanTemplatesElemAttributeSet_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemAttributeSet_serialVersionUID -426740318278164496LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemAttributeSet, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemAttributeSet_init(OrgApacheXalanTemplatesElemAttributeSet *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttributeSet *new_OrgApacheXalanTemplatesElemAttributeSet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttributeSet *create_OrgApacheXalanTemplatesElemAttributeSet_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemAttributeSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttributeSet")
