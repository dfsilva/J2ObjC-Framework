//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemPI.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemPI")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemPI
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemPI 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemPI 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemPI

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemPI_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemPI || defined(INCLUDE_OrgApacheXalanTemplatesElemPI))
#define OrgApacheXalanTemplatesElemPI_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesAVT;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement xsl:processing-instruction.
 @code

  <!ELEMENT xsl:processing-instruction %char-template;>
  <!ATTLIST xsl:processing-instruction
   name %avt; #REQUIRED
   %space-att;
  >
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Processing-Instructions">section-Creating-Processing-Instructions in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemPI : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list.
 @param newChild Child to add to child list
 @return The child just added to the child list
 @throws DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Create a processing instruction in the result tree.
 The content of the xsl:processing-instruction element is a
 template for the string-value of the processing instruction node.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Processing-Instructions">section-Creating-Processing-Instructions in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "name" attribute.
 DJD
 @return The value of the "name" attribute
 */
- (OrgApacheXalanTemplatesAVT *)getName;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for the element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "name" attribute.
 DJD
 @param v Value for the name attribute
 */
- (void)setNameWithOrgApacheXalanTemplatesAVT:(OrgApacheXalanTemplatesAVT *)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemPI)

inline jlong OrgApacheXalanTemplatesElemPI_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemPI_serialVersionUID 5621976448020889825LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemPI, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemPI_init(OrgApacheXalanTemplatesElemPI *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemPI *new_OrgApacheXalanTemplatesElemPI_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemPI *create_OrgApacheXalanTemplatesElemPI_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemPI)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemPI")