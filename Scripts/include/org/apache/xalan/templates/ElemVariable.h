//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemVariable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemVariable
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemVariable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemVariable_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable || defined(INCLUDE_OrgApacheXalanTemplatesElemVariable))
#define OrgApacheXalanTemplatesElemVariable_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPath;

/*!
 @brief Implement xsl:variable.
 @code

  <!ELEMENT xsl:variable %template;>
  <!ATTLIST xsl:variable
   name %qname; #REQUIRED
   select %expr; #IMPLIED
  >
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#variables">variables in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemVariable : OrgApacheXalanTemplatesElemTemplateElement {
 @public
  /*!
   @brief This is the index into the stack frame.
   */
  jint m_index_;
  /*!
   @brief The stack frame size for this variable if it is a global variable 
 that declares an RTF, which is equal to the maximum number 
 of variables that can be declared in the variable at one time.
   */
  jint m_frameSize_;
  /*!
   @brief The value of the "name" attribute.
   */
  OrgApacheXmlUtilsQName *m_qname_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor ElemVariable
 */
- (instancetype)init;

/*!
 @brief Copy constructor.
 @param param An element created from an xsl:variable
 @throws TransformerException
 */
- (instancetype)initWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)param;

/*!
 @brief Add a child to the child list.
 If the select attribute
 is present, an error will be raised.
 @param elem New element to append to this element's children list
 @return null if the select attribute was present, otherwise the 
 child just added to the child list
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief This after the template's children have been composed.
 We have to get 
 the count of how many variables have been declared, so we can do a link 
 and unlink.
 */
- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Execute a variable declaration and push it onto the variable stack.
 - seealso: <a href="http://www.w3.org/TR/xslt#variables">variables in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief If this element is not at the top-level, get the relative position of the
 variable into the stack frame.
 If this variable is at the top-level, get
 the relative position within the global area.
 */
- (jint)getIndex;

/*!
 @brief Get if this is a top-level variable or param, or not.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @return Boolean indicating whether this is a top-level variable
 or param, or not.
 */
- (jboolean)getIsTopLevel;

/*!
 @brief Get the "name" attribute.
 Both xsl:variable and xsl:param have a required name
 attribute, which specifies the name of the variable. The
 value of the name attribute is a QName, which is expanded
 as described in [2.4 Qualified Names].
 - seealso: <a href="http://www.w3.org/TR/xslt#qname">qname in XSLT Specification</a>
 @return Value of the "name" attribute.
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Return the node name.
 @return The node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "select" attribute.
 If the variable-binding element has a select attribute,
 then the value of the attribute must be an expression and
 the value of the variable is the object that results from
 evaluating the expression. In this case, the content
 of the variable must be empty.
 @return Value of the "select" attribute.
 */
- (OrgApacheXpathXPath *)getSelect;

/*!
 @brief Get the XObject representation of the variable.
 @param transformer non-null reference to the the current transform-time state.
 @param sourceNode non-null reference to the <a href="http://www.w3.org/TR/xslt#dt-current-node">current source node</a>.
 @return the XObject representation of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getValueWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                                               withInt:(jint)sourceNode;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
 Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 @brief Tell if this is a psuedo variable reference, declared by Xalan instead 
 of by the user.
 */
- (jboolean)isPsuedoVar;

/*!
 @brief This function is called during recomposition to
 control how this element is composed.
 @param root The root stylesheet for this transformation.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Sets the relative position of this variable within the stack frame (if local)
 or the global area (if global).
 Note that this should be called only for
 global variables since the local position is computed in the compose() method.
 */
- (void)setIndexWithInt:(jint)index;

/*!
 @brief Set if this is a top-level variable or param, or not.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param v Boolean indicating whether this is a top-level variable
 or param, or not.
 */
- (void)setIsTopLevelWithBoolean:(jboolean)v;

/*!
 @brief Set the "name" attribute.
 Both xsl:variable and xsl:param have a required name
 attribute, which specifies the name of the variable. The
 value of the name attribute is a QName, which is expanded
 as described in [2.4 Qualified Names].
 - seealso: <a href="http://www.w3.org/TR/xslt#qname">qname in XSLT Specification</a>
 @param v Value to set for the "name" attribute.
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)v;

/*!
 @brief Set the parent as an ElemTemplateElement.
 @param p This node's parent as an ElemTemplateElement
 */
- (void)setParentElemWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)p;

/*!
 @brief Set the "select" attribute.
 If the variable-binding element has a select attribute,
 then the value of the attribute must be an expression and
 the value of the variable is the object that results from
 evaluating the expression. In this case, the content
 of the variable must be empty.
 @param v Value to set for the "select" attribute.
 */
- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

#pragma mark Protected

/*!
 @brief Accept a visitor and call the appropriate method 
 for this class.
 @param visitor The visitor whose appropriate method will be called.
 @return true if the children of the object should be visited.
 */
- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

#pragma mark Package-Private

/*!
 @brief If the children of a variable is a single xsl:value-of or text literal, 
 it is cheaper to evaluate this as an expression, so try and adapt the 
 child an an expression.
 @param varElem Should be a ElemParam, ElemVariable, or ElemWithParam.
 @return An XPath if rewrite is possible, else null.
 @throws TransformerException
 */
+ (OrgApacheXpathXPath *)rewriteChildToExpressionWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)varElem;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemVariable)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemVariable, m_qname_, OrgApacheXmlUtilsQName *)

inline jlong OrgApacheXalanTemplatesElemVariable_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemVariable_serialVersionUID 9111131075322790061LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemVariable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemVariable_init(OrgApacheXalanTemplatesElemVariable *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *new_OrgApacheXalanTemplatesElemVariable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *create_OrgApacheXalanTemplatesElemVariable_init();

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *self, OrgApacheXalanTemplatesElemVariable *param);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *new_OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *param) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemVariable *create_OrgApacheXalanTemplatesElemVariable_initWithOrgApacheXalanTemplatesElemVariable_(OrgApacheXalanTemplatesElemVariable *param);

FOUNDATION_EXPORT OrgApacheXpathXPath *OrgApacheXalanTemplatesElemVariable_rewriteChildToExpressionWithOrgApacheXalanTemplatesElemTemplateElement_(OrgApacheXalanTemplatesElemTemplateElement *varElem);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemVariable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemVariable")
