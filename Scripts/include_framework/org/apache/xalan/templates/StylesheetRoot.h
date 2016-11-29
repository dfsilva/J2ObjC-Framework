//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/StylesheetRoot.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot")
#ifdef RESTRICT_OrgApacheXalanTemplatesStylesheetRoot
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesStylesheetRoot

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesStylesheetRoot_) && (INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot || defined(INCLUDE_OrgApacheXalanTemplatesStylesheetRoot))
#define OrgApacheXalanTemplatesStylesheetRoot_

#define RESTRICT_OrgApacheXalanTemplatesStylesheetComposed 1
#define INCLUDE_OrgApacheXalanTemplatesStylesheetComposed 1
#include "../../../../org/apache/xalan/templates/StylesheetComposed.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

#define RESTRICT_JavaxXmlTransformTemplates 1
#define INCLUDE_JavaxXmlTransformTemplates 1
#include "../../../../javax/xml/transform/Templates.h"

@class JavaTextDecimalFormatSymbols;
@class JavaUtilArrayList;
@class JavaUtilHashMap;
@class JavaUtilProperties;
@class JavaUtilVector;
@class JavaxXmlTransformTransformer;
@class OrgApacheXalanExtensionsExtensionNamespacesManager;
@class OrgApacheXalanProcessorXSLTSchema;
@class OrgApacheXalanTemplatesDecimalFormatProperties;
@class OrgApacheXalanTemplatesElemAttributeSet;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesElemVariable;
@class OrgApacheXalanTemplatesKeyDeclaration;
@class OrgApacheXalanTemplatesNamespaceAlias;
@class OrgApacheXalanTemplatesOutputProperties;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetRoot_ComposeState;
@class OrgApacheXalanTemplatesTemplateList;
@class OrgApacheXalanTemplatesWhiteSpaceInfo;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathXPath;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformErrorListener;
@protocol OrgApacheXmlDtmDTM;

/*!
 @brief This class represents the root object of the stylesheet tree.
  general
 */
@interface OrgApacheXalanTemplatesStylesheetRoot : OrgApacheXalanTemplatesStylesheetComposed < JavaIoSerializable, JavaxXmlTransformTemplates > {
 @public
  /*!
   @brief Used for default selection.
   */
  OrgApacheXpathXPath *m_selectDefault_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Uses an XSL stylesheet document.
 @throws TransformerConfigurationException if the baseIdentifier can not be resolved to a URL.
 */
- (instancetype)initWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)errorListener;

/*!
 @brief Creates a StylesheetRoot and retains a pointer to the schema used to create this
 StylesheetRoot.
 The schema may be needed later for an element-available() function call.
 @param schema The schema used to create this stylesheet
 @throws TransformerConfigurationException if the baseIdentifier can not be resolved to a URL.
 */
- (instancetype)initWithOrgApacheXalanProcessorXSLTSchema:(OrgApacheXalanProcessorXSLTSchema *)schema
                       withJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief Get information about whether or not whitespace can be stripped.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @return true if the whitespace can be stripped.
 */
- (jboolean)canStripWhiteSpace;

/*!
 @brief Get a list "xsl:attribute-set" properties that match the qname.
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 @param name Qualified name of attribute set properties to get
 @return A vector of attribute sets matching the given name
 @throws ArrayIndexOutOfBoundsException
 */
- (JavaUtilArrayList *)getAttributeSetComposedWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Get the hashtable of available elements.
 @return table of available elements, keyed by qualified names, and with 
 values of the same qualified names.
 */
- (JavaUtilHashMap *)getAvailableElements;

/*!
 @brief Given a valid element decimal-format name, return the
 decimalFormatSymbols with that name.
 <p>It is an error to declare either the default decimal-format or
 a decimal-format with a given name more than once (even with
 different import precedence), unless it is declared every
 time with the same value for all attributes (taking into
 account any default values).</p>
 <p>Which means, as far as I can tell, the decimal-format
 properties are not additive.</p>
 @param name Qualified name of the decimal format to find
 @return DecimalFormatSymbols object matching the given name or
 null if name is not found.
 */
- (JavaTextDecimalFormatSymbols *)getDecimalFormatComposedWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

- (JavaUtilProperties *)getDefaultOutputProps;

/*!
 @brief Get the default template for a root node.
 @return The default template for a root node.
  advanced
 */
- (OrgApacheXalanTemplatesElemTemplate *)getDefaultRootRule;

/*!
 @brief Get the default template for elements.
 @return the default template for elements.
  advanced
 */
- (OrgApacheXalanTemplatesElemTemplate *)getDefaultRule;

/*!
 @brief Get the default template for text.
 @return the default template for text.
  advanced
 */
- (OrgApacheXalanTemplatesElemTemplate *)getDefaultTextRule;

/*!
  internal
 */
- (NSString *)getExtensionHandlerClass;

/*!
 @brief Only instantiate an ExtensionNamespacesManager if one is called for
 (i.e., if the stylesheet contains  extension functions and/or elements).
 */
- (OrgApacheXalanExtensionsExtensionNamespacesManager *)getExtensionNamespacesManager;

/*!
 @brief Get the vector of extension namespaces.
 Used to provide
 the extensions table access to a list of extension
 namespaces encountered during composition of a stylesheet.
 */
- (JavaUtilVector *)getExtensions;

/*!
 @brief Get a stylesheet from the global import list.
 TODO: JKESS PROPOSES SPECIAL-CASE FOR NO IMPORT LIST, TO MATCH COUNT.
 @param i Index of stylesheet to get from global import list
 @return The stylesheet at the given index
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getGlobalImportWithInt:(jint)i;

/*!
 @brief Get the total number of imports in the global import list.
 @return The total number of imported stylesheets, including
 the root stylesheet, thus the number will always be 1 or
 greater.
 TODO: JKESS PROPOSES SPECIAL-CASE FOR NO IMPORT LIST, TO MATCH DESCRIPTION.
 */
- (jint)getGlobalImportCount;

/*!
 @brief Given a stylesheet, return the number of the stylesheet
 in the global import list.
 @param sheet The stylesheet which will be located in the
 global import list.
 @return The index into the global import list of the given stylesheet,
 or -1 if it is not found (which should never happen).
 */
- (jint)getImportNumberWithOrgApacheXalanTemplatesStylesheetComposed:(OrgApacheXalanTemplatesStylesheetComposed *)sheet;

/*!
 @return Incremental flag
 */
- (jboolean)getIncremental;

/*!
 @brief Get the composed "xsl:key" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
 @return A vector of the composed "xsl:key" properties.
 */
- (JavaUtilVector *)getKeysComposed;

/*!
 @brief Get the "xsl:namespace-alias" property.
 Return the NamespaceAlias for a given namespace uri.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param uri non-null reference to namespace that is to be aliased.
 @return NamespaceAlias that matches uri, or null if no match.
 */
- (OrgApacheXalanTemplatesNamespaceAlias *)getNamespaceAliasComposedWithNSString:(NSString *)uri;

/*!
 @return Optimization flag
 */
- (jboolean)getOptimizer;

/*!
 @brief Get the combined "xsl:output" property with the properties
 combined from the included stylesheets.
 If a xsl:output
 is not declared in this stylesheet or an included stylesheet,
 look in the imports.
 Please note that this returns a reference to the OutputProperties
 object, not a cloned object, like getOutputProperties does.
 - seealso: <a href="http://www.w3.org/TR/xslt#output">output in XSLT Specification</a>
 @return non-null reference to composed output properties object.
 */
- (OrgApacheXalanTemplatesOutputProperties *)getOutputComposed;

/*!
 @brief Get the static properties for xsl:output.
 The object returned will
 be a clone of the internal values, and thus it can be mutated
 without mutating the Templates object, and then handed in to
 the process method.
 <p>For XSLT, Attribute Value Templates attribute values will
 be returned unexpanded (since there is no context at this point).</p>
 @return A Properties object, not null.
 */
- (JavaUtilProperties *)getOutputProperties;

/*!
 @return source location flag
 */
- (jboolean)getSource_location;

/*!
 @brief Get the default template for a root node.
 @return The default template for a root node.
  advanced
 */
- (OrgApacheXalanTemplatesElemTemplate *)getStartRule;

/*!
 @brief Get an "xsl:template" property.
 This looks in the imports as
 well as this stylesheet.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param qname non-null reference to qualified name of template.
 @return reference to named template, or null if not found.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateComposedWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get an "xsl:template" property by node match.
 This looks in the imports as
 well as this stylesheet.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param xctxt non-null reference to XPath runtime execution context.
 @param targetNode non-null reference of node that the template must match.
 @param mode qualified name of the node, or null.
 @param quietConflictWarnings true if conflict warnings should not be reported.
 @return reference to ElemTemplate that is the best match for targetNode, or 
 null if no match could be made.
 @throws TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateComposedWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                                   withInt:(jint)targetNode
                                                                withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                                               withBoolean:(jboolean)quietConflictWarnings
                                                                    withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Get an "xsl:template" property by node match.
 This looks in the imports as
 well as this stylesheet.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param xctxt non-null reference to XPath runtime execution context.
 @param targetNode non-null reference of node that the template must match.
 @param mode qualified name of the node, or null.
 @param maxImportLevel The maximum importCountComposed that we should consider or -1
 if we should consider all import levels.  This is used by apply-imports to
 access templates that have been overridden.
 @param endImportLevel The count of composed imports
 @param quietConflictWarnings true if conflict warnings should not be reported.
 @return reference to ElemTemplate that is the best match for targetNode, or 
 null if no match could be made.
 @throws TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateComposedWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                                   withInt:(jint)targetNode
                                                                withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)mode
                                                                                   withInt:(jint)maxImportLevel
                                                                                   withInt:(jint)endImportLevel
                                                                               withBoolean:(jboolean)quietConflictWarnings
                                                                    withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Accessor method to retrieve the <code>TemplateList</code> associated with
 this StylesheetRoot.
 @return The composed <code>TemplateList</code>.
 */
- (OrgApacheXalanTemplatesTemplateList *)getTemplateListComposed;

/*!
 @brief Get an "xsl:variable" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param qname Qualified name of variable or param
 @return The ElemVariable with the given qualified name
 */
- (OrgApacheXalanTemplatesElemVariable *)getVariableOrParamComposedWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get all global "xsl:variable" properties in scope for this stylesheet.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @return Vector of all variables and params in scope
 */
- (JavaUtilVector *)getVariablesAndParamsComposed;

/*!
 @brief Get information about whether or not an element should strip whitespace.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param support The XPath runtime state.
 @param targetElement Element to check
 @return WhiteSpaceInfo for the given element
 @throws TransformerException
 */
- (OrgApacheXalanTemplatesWhiteSpaceInfo *)getWhiteSpaceInfoWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                                                                   withInt:(jint)targetElement
                                                                    withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Find out if an output method has been set by the user.
 @return Value indicating whether an output method has been set by the user
  internal
 */
- (jboolean)isOutputMethodSet;

/*!
 @brief Tell if this is the root of the stylesheet tree.
 @return True since this is the root of the stylesheet tree.
 */
- (jboolean)isRoot;

/*!
 @brief Return the state of the secure processing feature.
 */
- (jboolean)isSecureProcessing;

/*!
 @brief Create a new transformation context for this Templates object.
 @return A Transformer instance, never null.
 */
- (JavaxXmlTransformTransformer *)newTransformer OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Recompose the values of all "composed" properties, meaning
 properties that need to be combined or calculated from
 the combination of imported and included stylesheets.
 This
 method determines the proper import precedence of all imported
 stylesheets.  It then iterates through all of the elements and 
 properties in the proper order and triggers the individual recompose
 methods.
 @throws TransformerException
 */
- (void)recompose;

/*!
 @brief This internal method allows the setting of the java class
 to handle the extension function (if other than the default one).
  internal
 */
- (NSString *)setExtensionHandlerClassWithNSString:(NSString *)handlerClassName;

/*!
 @param b Incremental flag
 */
- (void)setIncrementalWithBoolean:(jboolean)b;

/*!
 @param b Optimization flag
 */
- (void)setOptimizerWithBoolean:(jboolean)b;

/*!
 @brief Set the state of the secure processing feature.
 */
- (void)setSecureProcessingWithBoolean:(jboolean)flag;

/*!
 @param b Source location flag
 */
- (void)setSource_locationWithBoolean:(jboolean)b;

/*!
 @brief Mutator method to set the <code>TemplateList</code> associated with this
 StylesheetRoot.
 This method should only be used by the compiler.  Normally,
 the template list is built during the recompose process and should not be
 altered by the user.
 @param templateList The new <code>TemplateList</code> for this StylesheetRoot.
 */
- (void)setTemplateListComposedWithOrgApacheXalanTemplatesTemplateList:(OrgApacheXalanTemplatesTemplateList *)templateList;

/*!
 @brief Check to see if the caller should bother with check for
 whitespace nodes.
 @return Whether the caller should bother with check for
 whitespace nodes.
 */
- (jboolean)shouldCheckWhitespace;

/*!
 @brief Get information about whether or not an element should strip whitespace.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param support The XPath runtime state.
 @param targetElement Element to check
 @return true if the whitespace should be stripped.
 @throws TransformerException
 */
- (jboolean)shouldStripWhiteSpaceWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                                        withInt:(jint)targetElement;

#pragma mark Protected

/*!
 @brief Add the imports in the given sheet to the working importList vector.
 The will be added from highest import precedence to
 least import precedence.  This is a post-order traversal of the
 import tree as described in <a href="http://www.w3.org/TR/xslt.html#import">the
 XSLT Recommendation</a>.
 <p>For example, suppose</p>
 <p>stylesheet A imports stylesheets B and C in that order;</p>
 <p>stylesheet B imports stylesheet D;</p>
 <p>stylesheet C imports stylesheet E.</p>
 <p>Then the order of import precedence (highest first) is
 A, C, E, B, D.</p>
 @param stylesheet Stylesheet to examine for imports.
 @param addToList  <code>true</code> if this template should be added to the import list
 @param importList The working import list.  Templates are added here in the reverse
 order of priority.  When we're all done, we'll reverse this to the correct
 priority in an array.
 */
- (void)addImportsWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)stylesheet
                                            withBoolean:(jboolean)addToList
                                     withJavaUtilVector:(JavaUtilVector *)importList;

#pragma mark Package-Private

/*!
 @brief Call the compose function for each ElemTemplateElement.
 @param templ non-null reference to template element that will have 
 the composed method called on it, and will have it's children's composed 
 methods called.
 */
- (void)composeTemplatesWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)templ;

/*!
 @brief Return class to track state global state during the compose() operation.
 @return ComposeState reference, or null if endCompose has been called.
 */
- (OrgApacheXalanTemplatesStylesheetRoot_ComposeState *)getComposeState;

/*!
 @brief Initialize a new ComposeState.
 */
- (void)initComposeState OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Recompose the attribute-set declarations.
 @param attrSet An attribute-set to add to the hashtable of attribute sets.
 */
- (void)recomposeAttributeSetsWithOrgApacheXalanTemplatesElemAttributeSet:(OrgApacheXalanTemplatesElemAttributeSet *)attrSet;

/*!
 @brief Recompose the decimal-format declarations.
 @param dfp A DecimalFormatProperties to add to the hashtable of decimal formats.
 */
- (void)recomposeDecimalFormatsWithOrgApacheXalanTemplatesDecimalFormatProperties:(OrgApacheXalanTemplatesDecimalFormatProperties *)dfp;

/*!
 @brief Recompose the key declarations.
 @param keyDecl A KeyDeclaration to be added to the vector of key declarations.
 */
- (void)recomposeKeysWithOrgApacheXalanTemplatesKeyDeclaration:(OrgApacheXalanTemplatesKeyDeclaration *)keyDecl;

/*!
 @brief Recompose the namespace-alias declarations.
 @param nsAlias A NamespaceAlias object to add to the hashtable of namespace aliases.
 */
- (void)recomposeNamespaceAliasesWithOrgApacheXalanTemplatesNamespaceAlias:(OrgApacheXalanTemplatesNamespaceAlias *)nsAlias;

/*!
 @brief Recompose the output format object from the included elements.
 @param oprops non-null reference to xsl:output properties representation.
 */
- (void)recomposeOutputWithOrgApacheXalanTemplatesOutputProperties:(OrgApacheXalanTemplatesOutputProperties *)oprops;

/*!
 @brief Recompose the template declarations.
 @param template_ An ElemTemplate object to add to the template list.
 */
- (void)recomposeTemplatesWithOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)template_;

/*!
 @brief Recompose the top level variable and parameter declarations.
 @param elemVar A top level variable or parameter to be added to the Vector.
 */
- (void)recomposeVariablesWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)elemVar;

/*!
 @brief Recompose the strip-space and preserve-space declarations.
 @param wsi A WhiteSpaceInfo element to add to the list of WhiteSpaceInfo elements.
 */
- (void)recomposeWhiteSpaceInfoWithOrgApacheXalanTemplatesWhiteSpaceInfo:(OrgApacheXalanTemplatesWhiteSpaceInfo *)wsi;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesStylesheetRoot)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesStylesheetRoot, m_selectDefault_, OrgApacheXpathXPath *)

inline jlong OrgApacheXalanTemplatesStylesheetRoot_get_serialVersionUID();
#define OrgApacheXalanTemplatesStylesheetRoot_serialVersionUID 3875353123529147855LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesStylesheetRoot, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesStylesheetRoot_initWithJavaxXmlTransformErrorListener_(OrgApacheXalanTemplatesStylesheetRoot *self, id<JavaxXmlTransformErrorListener> errorListener);

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot *new_OrgApacheXalanTemplatesStylesheetRoot_initWithJavaxXmlTransformErrorListener_(id<JavaxXmlTransformErrorListener> errorListener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot *create_OrgApacheXalanTemplatesStylesheetRoot_initWithJavaxXmlTransformErrorListener_(id<JavaxXmlTransformErrorListener> errorListener);

FOUNDATION_EXPORT void OrgApacheXalanTemplatesStylesheetRoot_initWithOrgApacheXalanProcessorXSLTSchema_withJavaxXmlTransformErrorListener_(OrgApacheXalanTemplatesStylesheetRoot *self, OrgApacheXalanProcessorXSLTSchema *schema, id<JavaxXmlTransformErrorListener> listener);

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot *new_OrgApacheXalanTemplatesStylesheetRoot_initWithOrgApacheXalanProcessorXSLTSchema_withJavaxXmlTransformErrorListener_(OrgApacheXalanProcessorXSLTSchema *schema, id<JavaxXmlTransformErrorListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot *create_OrgApacheXalanTemplatesStylesheetRoot_initWithOrgApacheXalanProcessorXSLTSchema_withJavaxXmlTransformErrorListener_(OrgApacheXalanProcessorXSLTSchema *schema, id<JavaxXmlTransformErrorListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesStylesheetRoot)

#endif

#if !defined (OrgApacheXalanTemplatesStylesheetRoot_ComposeState_) && (INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot || defined(INCLUDE_OrgApacheXalanTemplatesStylesheetRoot_ComposeState))
#define OrgApacheXalanTemplatesStylesheetRoot_ComposeState_

@class JavaUtilVector;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsIntStack;
@class OrgApacheXmlUtilsQName;

/*!
 @brief Class to track state global state during the compose() operation.
 */
@interface OrgApacheXalanTemplatesStylesheetRoot_ComposeState : NSObject {
 @public
  OrgApacheXmlUtilsIntStack *m_marks_;
}

#pragma mark Public

/*!
 @brief Given a qualified name, return an integer ID that can be 
 quickly compared.
 @param qname a qualified name object, must not be null.
 @return the expanded-name id of the qualified name.
 */
- (jint)getQNameIDWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)outer$;

/*!
 @brief Add the name of a qualified name within the template.
 The position in 
 the vector is its ID.
 @param qname A qualified name of a param or variable, should be non-null.
 @return the index where the variable was added.
 */
- (jint)addVariableNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get the current size of the stack frame.
 Use this to record the position 
 in a template element at startElement, so that it can be popped 
 at endElement.
 */
- (jint)getCurrentStackFrameSize;

- (jint)getFrameSize;

- (jint)getGlobalsSize;

/*!
 @brief Get the Vector of the current params and QNames to be collected 
 within the current template.
 @return A reference to the vector of variable names.  The reference 
 returned is owned by this class, and so should not really be mutated, or 
 stored anywhere.
 */
- (JavaUtilVector *)getVariableNames;

- (void)popStackMark;

- (void)pushStackMark;

- (void)resetStackFrameSize;

/*!
 @brief Set the current size of the stack frame.
 */
- (void)setCurrentStackFrameSizeWithInt:(jint)sz;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesStylesheetRoot_ComposeState)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesStylesheetRoot_ComposeState, m_marks_, OrgApacheXmlUtilsIntStack *)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesStylesheetRoot_ComposeState_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot_ComposeState *self, OrgApacheXalanTemplatesStylesheetRoot *outer$);

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot_ComposeState *new_OrgApacheXalanTemplatesStylesheetRoot_ComposeState_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetRoot_ComposeState *create_OrgApacheXalanTemplatesStylesheetRoot_ComposeState_initWithOrgApacheXalanTemplatesStylesheetRoot_(OrgApacheXalanTemplatesStylesheetRoot *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesStylesheetRoot_ComposeState)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetRoot")
