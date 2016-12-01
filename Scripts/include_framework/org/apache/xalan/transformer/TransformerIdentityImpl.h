//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/TransformerIdentityImpl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerIdentityImpl")
#ifdef RESTRICT_OrgApacheXalanTransformerTransformerIdentityImpl
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerIdentityImpl 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerTransformerIdentityImpl 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerTransformerIdentityImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerTransformerIdentityImpl_) && (INCLUDE_ALL_OrgApacheXalanTransformerTransformerIdentityImpl || defined(INCLUDE_OrgApacheXalanTransformerTransformerIdentityImpl))
#define OrgApacheXalanTransformerTransformerIdentityImpl_

#define RESTRICT_JavaxXmlTransformTransformer 1
#define INCLUDE_JavaxXmlTransformTransformer 1
#include "../../../../javax/xml/transform/Transformer.h"

#define RESTRICT_JavaxXmlTransformSaxTransformerHandler 1
#define INCLUDE_JavaxXmlTransformSaxTransformerHandler 1
#include "../../../../javax/xml/transform/sax/TransformerHandler.h"

#define RESTRICT_OrgXmlSaxExtDeclHandler 1
#define INCLUDE_OrgXmlSaxExtDeclHandler 1
#include "../../../../org/xml/sax/ext/DeclHandler.h"

@class IOSCharArray;
@class JavaUtilProperties;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformResult;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;

/*!
 @brief This class implements an identity transformer for
 <code>javax.xml.transform.sax.SAXTransformerFactory.newTransformerHandler()</code>
 and <code>javax.xml.transform.TransformerFactory.newTransformer()</code>.
 It
 simply feeds SAX events directly to a serializer ContentHandler, if the
 result is a stream.  If the result is a DOM, it will send the events to
 <code>org.apache.xml.utils.DOMBuilder</code>.  If the result is another
 content handler, it will simply pass the events on.
 */
@interface OrgApacheXalanTransformerTransformerIdentityImpl : JavaxXmlTransformTransformer < JavaxXmlTransformSaxTransformerHandler, OrgXmlSaxExtDeclHandler > {
 @public
  jboolean m_flushedStartDoc_;
  /*!
   @brief The URIResolver, which is unused, but must be returned to fullfill the
 TransformerHandler interface.
   */
  id<JavaxXmlTransformURIResolver> m_URIResolver_;
  /*!
   @brief Flag to set if we've found the first element, so we can tell if we have 
 to check to see if we should create an HTML serializer.
   */
  jboolean m_foundFirstElement_;
}

#pragma mark Public

/*!
 @brief Constructor TransformerIdentityImpl creates an identity transform.
 */
- (instancetype)init;

/*!
 @brief Constructor TransformerIdentityImpl creates an identity transform.
 */
- (instancetype)initWithBoolean:(jboolean)isSecureProcessing;

/*!
 @brief Report an attribute type declaration.
 <p>Only the effective (first) declaration for an attribute will
 be reported.  The type will be one of the strings "CDATA",
 "ID", "IDREF", "IDREFS", "NMTOKEN", "NMTOKENS", "ENTITY",
 "ENTITIES", or "NOTATION", or a parenthesized token group with 
 the separator "|" and all whitespace removed.</p>
 @param eName The name of the associated element.
 @param aName The name of the attribute.
 @param type A string representing the attribute type.
 @param valueDefault A string representing the attribute default
 ("#IMPLIED", "#REQUIRED", or "#FIXED") or null if
 none of these applies.
 @param value A string representing the attribute's default value,
 or null if there is none.
 @exception SAXException The application may raise an exception.
 */
- (void)attributeDeclWithNSString:(NSString *)eName
                     withNSString:(NSString *)aName
                     withNSString:(NSString *)type
                     withNSString:(NSString *)valueDefault
                     withNSString:(NSString *)value;

/*!
 @brief Receive notification of character data inside an element.
 <p>By default, do nothing.  Application writers may override this
 method to take specific actions for each chunk of character data
 (such as adding the data to a node or buffer, or printing it to
 a file).</p>
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the
 character array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#characters
 @throws SAXException
 */
- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Clear all parameters set with setParameter.
 */
- (void)clearParameters;

/*!
 @brief Report an XML comment anywhere in the document.
 <p>This callback will be used for comments inside or outside the
 document element, including comments in the external DTD
 subset (if read).</p>
 @param ch An array holding the characters in the comment.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throws SAXException The application may raise an exception.
 */
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

/*!
 @brief Report an element type declaration.
 <p>The content model will consist of the string "EMPTY", the
 string "ANY", or a parenthesised group, optionally followed
 by an occurrence indicator.  The model will be normalized so
 that all whitespace is removed,and will include the enclosing
 parentheses.</p>
 @param name The element type name.
 @param model The content model as a normalized string.
 @exception SAXException The application may raise an exception.
 */
- (void)elementDeclWithNSString:(NSString *)name
                   withNSString:(NSString *)model;

/*!
 @brief Report the end of a CDATA section.
 @throws SAXException The application may raise an exception.
 - seealso: #startCDATA
 */
- (void)endCDATA;

/*!
 @brief Receive notification of the end of the document.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the end
 of a document (such as finalising a tree or closing an output
 file).</p>
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#endDocument
 @throws SAXException
 */
- (void)endDocument;

/*!
 @brief Report the end of DTD declarations.
 @throws SAXException The application may raise an exception.
 - seealso: #startDTD
 */
- (void)endDTD;

/*!
 @brief Receive notification of the end of an element.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the end of
 each element (such as finalising a tree node or writing
 output to a file).</p>
 @param uri The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param qName The qualified name (with prefix), or the
 empty string if qualified names are not available.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#endElement
 @throws SAXException
 */
- (void)endElementWithNSString:(NSString *)uri
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 @brief Report the end of an entity.
 @param name The name of the entity that is ending.
 @throws SAXException The application may raise an exception.
 - seealso: #startEntity
 */
- (void)endEntityWithNSString:(NSString *)name;

/*!
 @brief Receive notification of the end of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the end of
 each prefix mapping.</p>
 @param prefix The Namespace prefix being declared.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping
 @throws SAXException
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 @brief Report a parsed external entity declaration.
 <p>Only the effective (first) declaration for each entity
 will be reported.</p>
 @param name The name of the entity.  If it is a parameter
 entity, the name will begin with '%'.
 @param publicId The declared public identifier of the entity, or
 null if none was declared.
 @param systemId The declared system identifier of the entity.
 @exception SAXException The application may raise an exception.
 - seealso: #internalEntityDecl
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

/*!
 @brief Get the error event handler in effect for the transformation.
 @return The current error handler, which should never be null.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Get a copy of the output properties for the transformation.
 <p>The properties returned should contain properties set by the user,
 and properties set by the stylesheet, and these properties
 are "defaulted" by default properties specified by <a href="http://www.w3.org/TR/xslt#output">section 16 of the
 XSL Transformations (XSLT) W3C Recommendation</a>.  The properties that
 were specifically set by the user or the stylesheet should be in the base
 Properties list, while the XSLT default properties that were not
 specifically set should be the default Properties list.  Thus,
 getOutputProperties().getProperty(String key) will obtain any
 property in that was set by <code>setOutputProperty</code>,
 <code>setOutputProperties</code>, in the stylesheet, <em>or</em> the default
 properties, while
 getOutputProperties().get(String key) will only retrieve properties
 that were explicitly set by <code>setOutputProperty</code>,
 <code>setOutputProperties</code>, or in the stylesheet.</p>
 <p>Note that mutation of the Properties object returned will not
 effect the properties that the transformation contains.</p>
 <p>If any of the argument keys are not recognized and are not
 namespace qualified, the property will be ignored.  In other words the
 behaviour is not orthogonal with setOutputProperties.</p>
 @return A copy of the set of output properties in effect
 for the next transformation.
 - seealso: javax.xml.transform.OutputKeys
 - seealso: java.util.Properties
 */
- (JavaUtilProperties *)getOutputProperties;

/*!
 @brief Get an output property that is in effect for the
 transformation.
 The property specified may be a property
 that was set with setOutputProperty, or it may be a
 property specified in the stylesheet.
 @param name A non-null String that specifies an output
 property name, which may be namespace qualified.
 @return The string value of the output property, or null
 if no property was found.
 @throws IllegalArgumentException If the property is not supported.
 - seealso: javax.xml.transform.OutputKeys
 */
- (NSString *)getOutputPropertyWithNSString:(NSString *)name;

/*!
 @brief Get a parameter that was explicitly set with setParameter
 or setParameters.
 <p>This method does not return a default parameter value, which
 cannot be determined until the node context is evaluated during
 the transformation process.
 @param name Name of the parameter.
 @return A parameter that has been set with setParameter.
 */
- (id)getParameterWithNSString:(NSString *)name;

/*!
 @brief Get the base ID (URI or system ID) from where relative
 URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief Get the Transformer associated with this handler, which
 is needed in order to set parameters and output properties.
 @return non-null reference to the transformer.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Get an object that will be used to resolve URIs used in
 document(), etc.
 @return An object that implements the URIResolver interface,
 or null.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 <p>By default, do nothing.  Application writers may override this
 method to take specific actions for each chunk of ignorable
 whitespace (such as adding data to a node or buffer, or printing
 it to a file).</p>
 @param ch The whitespace characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the
 character array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace
 @throws SAXException
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Report an internal entity declaration.
 <p>Only the effective (first) declaration for each entity
 will be reported.</p>
 @param name The name of the entity.  If it is a parameter
 entity, the name will begin with '%'.
 @param value The replacement text of the entity.
 @exception SAXException The application may raise an exception.
 - seealso: #externalEntityDecl
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)internalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)value;

/*!
 @brief Receive notification of a notation declaration.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass if they wish to keep track of the notations
 declared in a document.</p>
 @param name The notation name.
 @param publicId The notation public identifier, or null if not
 available.
 @param systemId The notation system identifier.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.DTDHandler#notationDecl
 @throws SAXException
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a processing instruction.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions for each
 processing instruction, such as setting status variables or
 invoking other methods.</p>
 @param target The processing instruction target.
 @param data The processing instruction data, or null if
 none is supplied.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#processingInstruction
 @throws SAXException
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Reset the status of the transformer.
 */
- (void)reset;

/*!
 @brief Receive a Locator object for document events.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass if they wish to store the locator for use
 with other document events.</p>
 @param locator A locator for all SAX document events.
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator
 - seealso: org.xml.sax.Locator
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Set the error event listener in effect for the transformation.
 @param listener The new error listener.
 @throws IllegalArgumentException if listener is null.
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief Set the output properties for the transformation.
 These
 properties will override properties set in the Templates
 with xsl:output.
 <p>If argument to this function is null, any properties
 previously set are removed, and the value will revert to the value
 defined in the templates object.</p>
 <p>Pass a qualified property key name as a two-part string, the namespace URI
 enclosed in curly braces ({}), followed by the local name. If the
 name has a null URL, the String only contain the local name. An
 application can safely check for a non-null URI by testing to see if the first
 character of the name is a '{' character.</p>
 <p>For example, if a URI and local name were obtained from an element
 defined with &lt;xyz:foo xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
 then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo". Note that
 no prefix is used.</p>
 @param oformat A set of output properties that will be
 used to override any of the same properties in affect
 for the transformation.
 - seealso: javax.xml.transform.OutputKeys
 - seealso: java.util.Properties
 @throws IllegalArgumentException if any of the argument keys are not
 recognized and are not namespace qualified.
 */
- (void)setOutputPropertiesWithJavaUtilProperties:(JavaUtilProperties *)oformat;

/*!
 @brief Set an output property that will be in effect for the
 transformation.
 <p>Pass a qualified property name as a two-part string, the namespace URI
 enclosed in curly braces ({}), followed by the local name. If the
 name has a null URL, the String only contain the local name. An
 application can safely check for a non-null URI by testing to see if the first
 character of the name is a '{' character.</p>
 <p>For example, if a URI and local name were obtained from an element
 defined with &lt;xyz:foo xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
 then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo". Note that
 no prefix is used.</p>
 <p>The Properties object that was passed to <code>setOutputProperties</code> won't
 be effected by calling this method.</p>
 @param name A non-null String that specifies an output
 property name, which may be namespace qualified.
 @param value The non-null string value of the output property.
 @throws IllegalArgumentException If the property is not supported, and is
 not qualified with a namespace.
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)value;

/*!
 @brief Add a parameter for the transformation.
 <p>Pass a qualified name as a two-part string, the namespace URI
 enclosed in curly braces ({}), followed by the local name. If the
 name has a null URL, the String only contain the local name. An
 application can safely check for a non-null URI by testing to see if the first
 character of the name is a '{' character.</p>
 <p>For example, if a URI and local name were obtained from an element
 defined with &lt;xyz:foo xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
 then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo". Note that
 no prefix is used.</p>
 @param name The name of the parameter, which may begin with a namespace URI
 in curly braces ({}).
 @param value The value object.  This can be any valid Java object. It is
 up to the processor to provide the proper object coersion or to simply
 pass the object on for use in an extension.
 */
- (void)setParameterWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Enables the user of the TransformerHandler to set the
 to set the Result for the transformation.
 @param result A Result instance, should not be null.
 @throws IllegalArgumentException if result is invalid for some reason.
 */
- (void)setResultWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)result;

/*!
 @brief Set the base ID (URI or system ID) from where relative
 URLs will be resolved.
 @param systemID Base URI for the source tree.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

/*!
 @brief Set an object that will be used to resolve URIs used in
 document().
 <p>If the resolver argument is null, the URIResolver value will
 be cleared, and the default behavior will be used.</p>
 @param resolver An object that implements the URIResolver interface,
 or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

/*!
 @brief Receive notification of a skipped entity.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions for each
 processing instruction, such as setting status variables or
 invoking other methods.</p>
 @param name The name of the skipped entity.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#processingInstruction
 @throws SAXException
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Report the start of a CDATA section.
 <p>The contents of the CDATA section will be reported through
 the regular <code>characters</code>
  event.</p>
 @throws SAXException The application may raise an exception.
 - seealso: #endCDATA
 */
- (void)startCDATA;

/*!
 @brief Receive notification of the beginning of the document.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the beginning
 of a document (such as allocating the root node of a tree or
 creating an output file).</p>
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startDocument
 @throws SAXException
 */
- (void)startDocument;

/*!
 @brief Report the start of DTD declarations, if any.
 <p>Any declarations are assumed to be in the internal subset
 unless otherwise indicated by a <code>startEntity</code>
 event.</p>
 <p>Note that the start/endDTD events will appear within
 the start/endDocument events from ContentHandler and
 before the first startElement event.</p>
 @param name The document type name.
 @param publicId The declared public identifier for the
 external DTD subset, or null if none was declared.
 @param systemId The declared system identifier for the
 external DTD subset, or null if none was declared.
 @throws SAXException The application may raise an
 exception.
 - seealso: #endDTD
 - seealso: #startEntity
 */
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of the start of an element.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the start of
 each element (such as allocating a new tree node or writing
 output to a file).</p>
 @param uri The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param qName The qualified name (with prefix), or the
 empty string if qualified names are not available.
 @param attributes The specified or defaulted attributes.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startElement
 @throws SAXException
 */
- (void)startElementWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

/*!
 @brief Report the beginning of an entity in content.
 <p><strong>NOTE:</entity> entity references in attribute
 values -- and the start and end of the document entity --
 are never reported.</p>
 <p>The start and end of the external DTD subset are reported
 using the pseudo-name "[dtd]".  All other events must be
 properly nested within start/end entity events.</p>
 <p>Note that skipped entities will be reported through the
 <code>skippedEntity</code>
 event, which is part of the ContentHandler interface.</p>
 @param name The name of the entity.  If it is a parameter
 entity, the name will begin with '%'.
 @throws SAXException The application may raise an exception.
 - seealso: #endEntity
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl
 */
- (void)startEntityWithNSString:(NSString *)name;

/*!
 @brief Receive notification of the start of a Namespace mapping.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to take specific actions at the start of
 each Namespace prefix scope (such as storing the prefix mapping).</p>
 @param prefix The Namespace prefix being declared.
 @param uri The Namespace URI mapped to the prefix.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping
 @throws SAXException
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Process the source tree to the output result.
 @param source  The input for the source tree.
 @param outputTarget The output target.
 @throws TransformerException If an unrecoverable error occurs
 during the course of the transformation.
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

/*!
 @brief Receive notification of an unparsed entity declaration.
 <p>By default, do nothing.  Application writers may override this
 method in a subclass to keep track of the unparsed entities
 declared in a document.</p>
 @param name The entity name.
 @param publicId The entity public identifier, or null if not
 available.
 @param systemId The entity system identifier.
 @param notationName The name of the associated notation.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 @throws SAXException
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId
                          withNSString:(NSString *)notationName;

#pragma mark Protected

- (void)flushStartDoc;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerTransformerIdentityImpl)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerTransformerIdentityImpl, m_URIResolver_, id<JavaxXmlTransformURIResolver>)

FOUNDATION_EXPORT void OrgApacheXalanTransformerTransformerIdentityImpl_initWithBoolean_(OrgApacheXalanTransformerTransformerIdentityImpl *self, jboolean isSecureProcessing);

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerIdentityImpl *new_OrgApacheXalanTransformerTransformerIdentityImpl_initWithBoolean_(jboolean isSecureProcessing) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerIdentityImpl *create_OrgApacheXalanTransformerTransformerIdentityImpl_initWithBoolean_(jboolean isSecureProcessing);

FOUNDATION_EXPORT void OrgApacheXalanTransformerTransformerIdentityImpl_init(OrgApacheXalanTransformerTransformerIdentityImpl *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerIdentityImpl *new_OrgApacheXalanTransformerTransformerIdentityImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerTransformerIdentityImpl *create_OrgApacheXalanTransformerTransformerIdentityImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerTransformerIdentityImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerTransformerIdentityImpl")
