//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemElement.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemElement")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemElement
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemElement 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemElement 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemElement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemElement_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemElement || defined(INCLUDE_OrgApacheXalanTemplatesElemElement))
#define OrgApacheXalanTemplatesElemElement_

#define RESTRICT_OrgApacheXalanTemplatesElemUse 1
#define INCLUDE_OrgApacheXalanTemplatesElemUse 1
#include "../../../../org/apache/xalan/templates/ElemUse.h"

@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgApacheXmlSerializerSerializationHandler;

/*!
 @brief Implement xsl:element
 @code

  <!
 ELEMENT xsl:element %template;>
  <!ATTLIST xsl:element
   name %avt; #REQUIRED
   namespace %avt; #IMPLIED
   use-attribute-sets %qnames; #IMPLIED
   %space-att;
  >
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Elements-with-xsl:element">XXX in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemElement : OrgApacheXalanTemplatesElemUse {
 @public
  /*!
   @brief The name attribute is interpreted as an attribute value template.
   It is an error if the string that results from instantiating the
 attribute value template is not a QName.
   */
  OrgApacheXalanTemplatesAVT *m_name_avt_;
  /*!
   @brief If the namespace attribute is present, then it also is interpreted
 as an attribute value template.
   The string that results from
 instantiating the attribute value template should be a URI reference.
 It is not an error if the string is not a syntactically legal URI reference.
   */
  OrgApacheXalanTemplatesAVT *m_namespace_avt_;
}

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
 @brief Create an element in the result tree.
 The xsl:element element allows an element to be created with a
 computed name. The expanded-name of the element to be created
 is specified by a required name attribute and an optional namespace
 attribute. The content of the xsl:element element is a template
 for the attributes and children of the created element.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "name" attribute.
 The name attribute is interpreted as an attribute value template.
 It is an error if the string that results from instantiating the
 attribute value template is not a QName.
 @return Name attribute for this element
 */
- (OrgApacheXalanTemplatesAVT *)getName;

/*!
 @brief Get the "namespace" attribute.
 If the namespace attribute is present, then it also is interpreted
 as an attribute value template. The string that results from
 instantiating the attribute value template should be a URI reference.
 It is not an error if the string is not a syntactically legal URI reference.
 @return Namespace attribute for this element
 */
- (OrgApacheXalanTemplatesAVT *)getNamespace;

/*!
 @brief Return the node name.
 @return This element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "name" attribute.
 The name attribute is interpreted as an attribute value template.
 It is an error if the string that results from instantiating the
 attribute value template is not a QName.
 @param v Name attribute to set for this element
 */
- (void)setNameWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

/*!
 @brief Set the "namespace" attribute.
 If the namespace attribute is present, then it also is interpreted
 as an attribute value template. The string that results from
 instantiating the attribute value template should be a URI reference.
 It is not an error if the string is not a syntactically legal URI reference.
 @param v NameSpace attribute to set for this element
 */
- (void)setNamespaceWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

#pragma mark Protected

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

/*!
 @brief Resolve the namespace into a prefix.
 Meant to be
 overidded by elemAttribute if this class is derived.
 @param rhandler The current result tree handler.
 @param prefix The probable prefix if already known.
 @param nodeNamespace  The namespace.
 @return The prefix to be used.
 */
- (NSString *)resolvePrefixWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)rhandler
                                                             withNSString:(NSString *)prefix
                                                             withNSString:(NSString *)nodeNamespace;

#pragma mark Package-Private

/*!
 @brief Construct a node in the result tree.
 This method is overloaded by 
 xsl:attribute. At this class level, this method creates an element.
 If the node is null, we instantiate only the content of the node in accordance
 with section 7.1.2 of the XSLT 1.0 Recommendation.
 @param nodeName The name of the node, which may be <code>null</code>.  If <code>null</code>,
 only the non-attribute children of this node will be processed.
 @param prefix The prefix for the namespace, which may be <code>null</code>.
 If not <code>null</code>, this prefix will be mapped and unmapped.
 @param nodeNamespace The namespace of the node, which may be not be <code>null</code>.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)constructNodeWithNSString:(NSString *)nodeName
                     withNSString:(NSString *)prefix
                     withNSString:(NSString *)nodeNamespace
withOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemElement)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemElement, m_name_avt_, OrgApacheXalanTemplatesAVT *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemElement, m_namespace_avt_, OrgApacheXalanTemplatesAVT *)

inline jlong OrgApacheXalanTemplatesElemElement_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemElement_serialVersionUID -324619535592435183LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemElement, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemElement_init(OrgApacheXalanTemplatesElemElement *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemElement *new_OrgApacheXalanTemplatesElemElement_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemElement *create_OrgApacheXalanTemplatesElemElement_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemElement)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemElement")
