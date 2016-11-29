//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/Stylesheet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheet")
#ifdef RESTRICT_OrgApacheXalanTemplatesStylesheet
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheet 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheet 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesStylesheet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesStylesheet_) && (INCLUDE_ALL_OrgApacheXalanTemplatesStylesheet || defined(INCLUDE_OrgApacheXalanTemplatesStylesheet))
#define OrgApacheXalanTemplatesStylesheet_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaUtilStack;
@class OrgApacheXalanTemplatesDecimalFormatProperties;
@class OrgApacheXalanTemplatesElemAttributeSet;
@class OrgApacheXalanTemplatesElemParam;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesElemVariable;
@class OrgApacheXalanTemplatesKeyDeclaration;
@class OrgApacheXalanTemplatesNamespaceAlias;
@class OrgApacheXalanTemplatesOutputProperties;
@class OrgApacheXalanTemplatesStylesheetComposed;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesWhiteSpaceInfo;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXmlUtilsStringVector;
@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief Represents a stylesheet element.
 <p>All properties in this class have a fixed form of bean-style property
 accessors for all properties that represent XSL attributes or elements.
 These properties have setter method names accessed generically by the
 processor, and so these names must be fixed according to the system
 defined in the <a href="XSLTAttributeDef#getSetterMethodName">getSetterMethodName</a>
 function.</p>
 <p>
@code

  <!ENTITY % top-level "
  (xsl:import*,
   (xsl:include
   | xsl:strip-space
   | xsl:preserve-space
   | xsl:output
   | xsl:key
   | xsl:decimal-format
   | xsl:attribute-set
   | xsl:variable
   | xsl:param
   | xsl:template
   | xsl:namespace-alias
   %non-xsl-top-level;)*)
  ">
  <!ENTITY % top-level-atts '
   extension-element-prefixes CDATA #IMPLIED
   exclude-result-prefixes CDATA #IMPLIED
   id ID #IMPLIED
   version NMTOKEN #REQUIRED
   xmlns:xsl CDATA #FIXED "http://www.w3.org/1999/XSL/Transform"
   %space-att;
  '>
  <!ELEMENT xsl:stylesheet %top-level;>
  <!ATTLIST xsl:stylesheet %top-level-atts;>
  <!ELEMENT xsl:transform %top-level;>
  <!ATTLIST xsl:transform %top-level-atts;>
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Stylesheet-Structure">section-Stylesheet-Structure in XSLT Specification</a>
 */
@interface OrgApacheXalanTemplatesStylesheet : OrgApacheXalanTemplatesElemTemplateElement < JavaIoSerializable > {
 @public
  /*!
   @brief Table of tables of element decimal-format.
   - seealso: DecimalFormatProperties
   */
  JavaUtilStack *m_DecimalFormatDeclarations_;
}

+ (jlong)serialVersionUID;

+ (NSString *)STYLESHEET_EXT;

#pragma mark Public

/*!
 @brief Constructor for a Stylesheet.
 @param parent  The including or importing stylesheet.
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)parent;

/*!
 @brief Get whether or not the passed prefix is contained flagged by
 the "exclude-result-prefixes" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param prefix non-null reference to prefix that might be excluded.
 @param uri reference to namespace that prefix maps to
 @return true if the prefix should normally be excluded.>
 */
- (jboolean)containsExcludeResultPrefixWithNSString:(NSString *)prefix
                                       withNSString:(NSString *)uri;

/*!
 @brief Find out if this contains a given "extension-element-prefix" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param uri URI of extension element to look for
 @return True if the given URI was found in the list
 */
- (jboolean)containsExtensionElementURIWithNSString:(NSString *)uri;

/*!
 @brief Get an "xsl:attribute-set" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 @param i Index of ElemAttributeSet to get in list
 @return ElemAttributeSet at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesElemAttributeSet *)getAttributeSetWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:attribute-set" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 @return the number of "xsl:attribute-set" properties.
 */
- (jint)getAttributeSetCount;

/*!
 @brief Get whether or not the stylesheet is in "Forward Compatibility Mode"
 @return true if in forward compatible mode, false otherwise
 */
- (jboolean)getCompatibleMode;

/*!
 @brief Get an "xsl:decimal-format" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#format-number">format-number in XSLT Specification</a>
 - seealso: DecimalFormatProperties
 @param i Index of decimal-format property in stack
 @return The decimal-format property at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesDecimalFormatProperties *)getDecimalFormatWithInt:(jint)i;

/*!
 @brief Get an "xsl:decimal-format" property.
 - seealso: DecimalFormatProperties
 - seealso: <a href="http://www.w3.org/TR/xslt#format-number">format-number in XSLT Specification</a>
 @param name The qualified name of the decimal format property.
 @return null if not found, otherwise a DecimalFormatProperties
 object, from which you can get a DecimalFormatSymbols object.
 */
- (OrgApacheXalanTemplatesDecimalFormatProperties *)getDecimalFormatWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Get the number of xsl:decimal-format declarations.
 - seealso: DecimalFormatProperties
 @return the number of xsl:decimal-format declarations.
 */
- (jint)getDecimalFormatCount;

/*!
 @brief Get an "exclude-result-prefix" property.
 The designation of a namespace as an excluded namespace is
 effective within the subtree of the stylesheet rooted at
 the element bearing the exclude-result-prefixes or
 xsl:exclude-result-prefixes attribute; a subtree rooted
 at an xsl:stylesheet element does not include any stylesheets
 imported or included by children of that xsl:stylesheet element.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param i Index of prefix to get in list
 @return Prefix to be excluded at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (NSString *)getExcludeResultPrefixWithInt:(jint)i;

/*!
 @brief Get the number of "exclude-result-prefixes" Strings.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @return The number of prefix strings to be excluded.
 */
- (jint)getExcludeResultPrefixCount;

/*!
 @brief Get and "extension-element-prefix" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param i Index of extension element URI in list
 @return The extension element URI at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (NSString *)getExtensionElementPrefixWithInt:(jint)i;

/*!
 @brief Get the number of "extension-element-prefixes" Strings.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @return Number of URIs in the list
 */
- (jint)getExtensionElementPrefixCount;

/*!
 @brief Get the base identifier with which this stylesheet is associated.
 @return the base identifier with which this stylesheet is associated.
 */
- (NSString *)getHref;

/*!
 @brief Get the "id" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Embedding-Stylesheets">section-Embedding-Stylesheets in XSLT Specification</a>
 @return The value of the "id" property.
 */
- (NSString *)getId;

/*!
 @brief Get a stylesheet from the "import" list.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @param i Index of the stylesheet to get
 @return The stylesheet at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getImportWithInt:(jint)i;

/*!
 @brief Get the number of imported stylesheets.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @return the number of imported stylesheets.
 */
- (jint)getImportCount;

/*!
 @brief Get the stylesheet at the given in index in "include" list
 - seealso: <a href="http://www.w3.org/TR/xslt#include">include in XSLT Specification</a>
 @param i Index of stylesheet to get
 @return Stylesheet at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesStylesheet *)getIncludeWithInt:(jint)i;

/*!
 @brief Get the number of included stylesheets.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @return the number of included stylesheets.
 */
- (jint)getIncludeCount;

/*!
 @brief Get an "xsl:key" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
 @param i Index of KeyDeclaration element to get
 @return KeyDeclaration element at given index in list
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesKeyDeclaration *)getKeyWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:key" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
 @return the number of "xsl:key" properties.
 */
- (jint)getKeyCount;

/*!
 @brief Get an "xsl:namespace-alias" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param i Index of NamespaceAlias element to get from the list
 @return NamespaceAlias element at the given index in the list
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesNamespaceAlias *)getNamespaceAliasWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:namespace-alias" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @return the number of "xsl:namespace-alias" properties.
 */
- (jint)getNamespaceAliasCount;

/*!
 @brief Return the node name.
 @return The node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the type of the node.
 We'll pretend we're a Document.
 @return the type of the node: document node.
 */
- (jshort)getNodeType;

/*!
 @brief Get a non-xslt element.
 - seealso: <a href="http://www.w3.org/TR/xslt#stylesheet-element">stylesheet-element in XSLT Specification</a>
 @param name Qualified name of the element to get
 @return The object associate with the given name
 */
- (id)getNonXslTopLevelWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Get an "xsl:output" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#output">output in XSLT Specification</a>
 @param i Index of OutputFormatExtended to get
 @return non-null reference to an OutputProperties object.
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesOutputProperties *)getOutputWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:output" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#output">output in XSLT Specification</a>
 @return The number of OutputProperties objects contained in this stylesheet.
 */
- (jint)getOutputCount;

/*!
 @brief Get an "xsl:param" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param qname non-null reference to qualified name of the parameter.
 @return ElemParam with the given name in the list or null
 */
- (OrgApacheXalanTemplatesElemParam *)getParamWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get a "xsl:preserve-space" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param i Index of WhiteSpaceInfo to get
 @return WhiteSpaceInfo at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesWhiteSpaceInfo *)getPreserveSpaceWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:preserve-space" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @return the number of "xsl:preserve-space" properties.
 */
- (jint)getPreserveSpaceCount;

/*!
 @brief Get an "xsl:strip-space" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param i Index of WhiteSpaceInfo to get
 @return WhiteSpaceInfo at given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesWhiteSpaceInfo *)getStripSpaceWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:strip-space" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @return the number of "xsl:strip-space" properties.
 */
- (jint)getStripSpaceCount;

/*!
 @brief Get the owning stylesheet.
 This looks up the
 inheritance chain until it calls getStylesheet
 on a Stylesheet object, which will return itself.
 @return The owning stylesheet, itself.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheet;

/*!
 @brief Get the owning aggregated stylesheet, or this
 stylesheet if it is aggregated.
 @return the owning aggregated stylesheet or itself
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getStylesheetComposed;

/*!
 @brief Get the parent of the stylesheet.
 This will be null if this
 is the root stylesheet.
 @return the parent of the stylesheet.
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheetParent;

/*!
 @brief Get the root of the stylesheet, where all the tables common
 to all stylesheets are kept.
 @return the root of the stylesheet
 */
- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheetRoot;

/*!
 @brief Get an "xsl:template" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param i Index of ElemTemplate in the list to get
 @return ElemTemplate at the given index in the list
 @throws TransformerException
 */
- (OrgApacheXalanTemplatesElemTemplate *)getTemplateWithInt:(jint)i;

/*!
 @brief Get the number of "xsl:template" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @return the number of "xsl:template" properties.
 */
- (jint)getTemplateCount;

/*!
 @brief Get an "xsl:variable" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param qname Qualified name of the xsl:variable to get
 @return reference to the variable named by qname, or null if not found.
 */
- (OrgApacheXalanTemplatesElemVariable *)getVariableWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get an "xsl:variable" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param i Index of variable to get in the list
 @return ElemVariable at the given index in the list
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesElemVariable *)getVariableOrParamWithInt:(jint)i;

/*!
 @brief Get an "xsl:variable" or "xsl:param" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param qname non-null reference to the qualified name of the variable.
 @return The ElemVariable with the given name in the list or null
 */
- (OrgApacheXalanTemplatesElemVariable *)getVariableOrParamWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Get the number of "xsl:variable" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @return the number of "xsl:variable" properties.
 */
- (jint)getVariableOrParamCount;

/*!
 @brief Get the "version" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#forwards">forwards in XSLT Specification</a>
 @return The value of the "version" property.
 */
- (NSString *)getVersion;

/*!
 @brief Get the "xmlns:xsl" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#xslt-namespace">xslt-namespace in XSLT Specification</a>
 @return The value of the "xmlns:xsl" property.
 */
- (NSString *)getXmlnsXsl;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
 Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 @brief Tell if this can be cast to a StylesheetComposed, meaning, you
 can ask questions from getXXXComposed functions.
 @return False if this is not a StylesheetComposed
 */
- (jboolean)isAggregatedType;

/*!
 @brief Tell if this is the root of the stylesheet tree.
 @return False is this is not the root of the stylesheet tree.
 */
- (jboolean)isRoot;

/*!
 @brief Replace an "xsl:template" property.
 This is a hook for CompilingStylesheetHandler, to allow
 us to access a template, compile it, instantiate it,
 and replace the original with the compiled instance.
 ADDED 9/5/2000 to support compilation experiment
 @param v Compiled template to replace with
 @param i Index of template to be replaced
 @throws TransformerException
 */
- (void)replaceTemplateWithOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)v
                                                       withInt:(jint)i;

/*!
 @brief Set the "xsl:attribute-set" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#attribute-sets">attribute-sets in XSLT Specification</a>
 @param attrSet ElemAttributeSet to add to the list of attribute sets
 */
- (void)setAttributeSetWithOrgApacheXalanTemplatesElemAttributeSet:(OrgApacheXalanTemplatesElemAttributeSet *)attrSet;

/*!
 @brief Process the xsl:decimal-format element.
 @param edf Decimal-format element to push into stack
 */
- (void)setDecimalFormatWithOrgApacheXalanTemplatesDecimalFormatProperties:(OrgApacheXalanTemplatesDecimalFormatProperties *)edf;

/*!
 @brief Set the "exclude-result-prefixes" property.
 The designation of a namespace as an excluded namespace is
 effective within the subtree of the stylesheet rooted at
 the element bearing the exclude-result-prefixes or
 xsl:exclude-result-prefixes attribute; a subtree rooted
 at an xsl:stylesheet element does not include any stylesheets
 imported or included by children of that xsl:stylesheet element.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param v A StringVector of prefixes to exclude
 */
- (void)setExcludeResultPrefixesWithOrgApacheXmlUtilsStringVector:(OrgApacheXmlUtilsStringVector *)v;

/*!
 @brief Set the "extension-element-prefixes" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param v The value to be set for the "extension-element-prefixes" 
 property: a vector of extension element URIs.
 */
- (void)setExtensionElementPrefixesWithOrgApacheXmlUtilsStringVector:(OrgApacheXmlUtilsStringVector *)v;

/*!
 @brief Set the base identifier with which this stylesheet is associated.
 @param baseIdent the base identifier with which this stylesheet is associated.
 */
- (void)setHrefWithNSString:(NSString *)baseIdent;

/*!
 @brief Set the "id" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Embedding-Stylesheets">section-Embedding-Stylesheets in XSLT Specification</a>
 @param v Value for the "id" property.
 */
- (void)setIdWithNSString:(NSString *)v;

/*!
 @brief Add a stylesheet to the "import" list.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @param v Stylesheet to add to the import list
 */
- (void)setImportWithOrgApacheXalanTemplatesStylesheetComposed:(OrgApacheXalanTemplatesStylesheetComposed *)v;

/*!
 @brief Add a stylesheet to the "include" list.
 - seealso: <a href="http://www.w3.org/TR/xslt#include">include in XSLT Specification</a>
 @param v Stylesheet to add to the "include" list
 */
- (void)setIncludeWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)v;

/*!
 @brief Set the "xsl:key" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
 @param v KeyDeclaration element to add to the list of key declarations
 */
- (void)setKeyWithOrgApacheXalanTemplatesKeyDeclaration:(OrgApacheXalanTemplatesKeyDeclaration *)v;

/*!
 @brief Set the location information for this element.
 @param locator SourceLocator object with location information
 */
- (void)setLocaterInfoWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Set the "xsl:namespace-alias" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#literal-result-element">literal-result-element in XSLT Specification</a>
 @param na NamespaceAlias elemeent to add to the list
 */
- (void)setNamespaceAliasWithOrgApacheXalanTemplatesNamespaceAlias:(OrgApacheXalanTemplatesNamespaceAlias *)na;

/*!
 @brief Set found a non-xslt element.
 - seealso: <a href="http://www.w3.org/TR/xslt#stylesheet-element">stylesheet-element in XSLT Specification</a>
 @param name Qualified name of the element
 @param obj The element object
 */
- (void)setNonXslTopLevelWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name
                                             withId:(id)obj;

/*!
 @brief Set the "xsl:output" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#output">output in XSLT Specification</a>
 @param v non-null reference to the OutputProperties object to be 
 added to the collection.
 */
- (void)setOutputWithOrgApacheXalanTemplatesOutputProperties:(OrgApacheXalanTemplatesOutputProperties *)v;

/*!
 @brief Set an "xsl:param" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param v A non-null ElemParam reference.
 */
- (void)setParamWithOrgApacheXalanTemplatesElemParam:(OrgApacheXalanTemplatesElemParam *)v;

/*!
 @brief Set the "xsl:preserve-space" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param wsi WhiteSpaceInfo element to add to list
 */
- (void)setPreserveSpacesWithOrgApacheXalanTemplatesWhiteSpaceInfo:(OrgApacheXalanTemplatesWhiteSpaceInfo *)wsi;

/*!
 @brief Set the "xsl:strip-space" properties.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param wsi WhiteSpaceInfo element to add to list
 */
- (void)setStripSpacesWithOrgApacheXalanTemplatesWhiteSpaceInfo:(OrgApacheXalanTemplatesWhiteSpaceInfo *)wsi;

/*!
 @brief Set the parent of the stylesheet.
 This should be null if this
 is the root stylesheet.
 @param v the parent of the stylesheet.
 */
- (void)setStylesheetParentWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)v;

/*!
 @brief Set the root of the stylesheet, where all the tables common
 to all stylesheets are kept.
 @param v the root of the stylesheet
 */
- (void)setStylesheetRootWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)v;

/*!
 @brief Set an "xsl:template" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param v ElemTemplate to add to list of templates
 */
- (void)setTemplateWithOrgApacheXalanTemplatesElemTemplate:(OrgApacheXalanTemplatesElemTemplate *)v;

/*!
 @brief Set the "xsl:variable" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 @param v ElemVariable object to add to list of top level variables
 */
- (void)setVariableWithOrgApacheXalanTemplatesElemVariable:(OrgApacheXalanTemplatesElemVariable *)v;

/*!
 @brief Set the "version" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#forwards">forwards in XSLT Specification</a>
 @param v Value for the "version" property.
 */
- (void)setVersionWithNSString:(NSString *)v;

/*!
 @brief Set the "xmlns:xsl" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#xslt-namespace">xslt-namespace in XSLT Specification</a>
 @param v The value to be set for the "xmlns:xsl" property.
 */
- (void)setXmlnsXslWithNSString:(NSString *)v;

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

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesStylesheet)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesStylesheet, m_DecimalFormatDeclarations_, JavaUtilStack *)

inline jlong OrgApacheXalanTemplatesStylesheet_get_serialVersionUID();
#define OrgApacheXalanTemplatesStylesheet_serialVersionUID 2085337282743043776LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesStylesheet, serialVersionUID, jlong)

/*!
 @brief Extension to be used when serializing to disk.
 */
inline NSString *OrgApacheXalanTemplatesStylesheet_get_STYLESHEET_EXT();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanTemplatesStylesheet_STYLESHEET_EXT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanTemplatesStylesheet, STYLESHEET_EXT, NSString *)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesStylesheet_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *self, OrgApacheXalanTemplatesStylesheet *parent);

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheet *new_OrgApacheXalanTemplatesStylesheet_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheet *create_OrgApacheXalanTemplatesStylesheet_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *parent);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesStylesheet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheet")
