//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemAttribute.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttribute")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemAttribute
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttribute 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemAttribute 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemAttribute

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemAttribute_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemAttribute || defined(INCLUDE_OrgApacheXalanTemplatesElemAttribute))
#define OrgApacheXalanTemplatesElemAttribute_

#define RESTRICT_OrgApacheXalanTemplatesElemElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemElement 1
#include "org/apache/xalan/templates/ElemElement.h"

@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgApacheXmlSerializerSerializationHandler;

/*!
 @brief Implement xsl:attribute.
 @code

  &amp;!ELEMENT xsl:attribute %char-template;>
  &amp;!ATTLIST xsl:attribute
   name %avt; #REQUIRED
   namespace %avt; #IMPLIED
   %space-att;
  &amp;
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#creating-attributes">creating-attributes in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemAttribute : OrgApacheXalanTemplatesElemElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list
 .
 <!ELEMENT xsl:attribute %char-template;>
 <!ATTLIST xsl:attribute
 name %avt; #REQUIRED
 namespace %avt; #IMPLIED
 %space-att;
 >
 @param newChild Child to append to the list of this node's children
 @return The node we just appended to the children list
 @throws DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Return the node name.
 @return The element name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 - seealso: ElemElement#setName(AVT)
 */
- (void)setNameWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

#pragma mark Protected

/*!
 @brief Resolve the namespace into a prefix.
 At this level, if no prefix exists, 
 then return a manufactured prefix.
 @param rhandler The current result tree handler.
 @param prefix The probable prefix if already known.
 @param nodeNamespace  The namespace, which should not be null.
 @return The prefix to be used.
 */
- (NSString *)resolvePrefixWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)rhandler
                                                             withNSString:(NSString *)prefix
                                                             withNSString:(NSString *)nodeNamespace;

/*!
 @brief Validate that the node name is good.
 @param nodeName Name of the node being constructed, which may be null.
 @return true if the node name is valid, false otherwise.
 */
- (jboolean)validateNodeNameWithNSString:(NSString *)nodeName;

#pragma mark Package-Private

/*!
 @brief Construct a node in the result tree.
 This method is overloaded by 
 xsl:attribute. At this class level, this method creates an element.
 @param nodeName The name of the node, which may be null.
 @param prefix The prefix for the namespace, which may be null.
 @param nodeNamespace The namespace of the node, which may be null.
 @param transformer non-null reference to the the current transform-time state.
 @param sourceNode non-null reference to the <a href="http://www.w3.org/TR/xslt#dt-current-node">current source node</a>.
 @param mode reference, which may be null, to the <a href="http://www.w3.org/TR/xslt#modes">current mode</a>.
 @throws TransformerException
 */
- (void)constructNodeWithNSString:(NSString *)nodeName
                     withNSString:(NSString *)prefix
                     withNSString:(NSString *)nodeNamespace
withOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemAttribute)

inline jlong OrgApacheXalanTemplatesElemAttribute_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemAttribute_serialVersionUID 8817220961566919187LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemAttribute, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemAttribute_init(OrgApacheXalanTemplatesElemAttribute *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttribute *new_OrgApacheXalanTemplatesElemAttribute_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemAttribute *create_OrgApacheXalanTemplatesElemAttribute_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemAttribute)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemAttribute")
