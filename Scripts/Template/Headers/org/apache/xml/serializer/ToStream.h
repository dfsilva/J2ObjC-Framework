//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToStream.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToStream")
#ifdef RESTRICT_OrgApacheXmlSerializerToStream
#define INCLUDE_ALL_OrgApacheXmlSerializerToStream 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToStream 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerToStream_) && (INCLUDE_ALL_OrgApacheXmlSerializerToStream || defined(INCLUDE_OrgApacheXmlSerializerToStream))
#define OrgApacheXmlSerializerToStream_

#define RESTRICT_OrgApacheXmlSerializerSerializerBase 1
#define INCLUDE_OrgApacheXmlSerializerSerializerBase 1
#include "../../../../org/apache/xml/serializer/SerializerBase.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaUtilProperties;
@class JavaUtilVector;
@class JavaxXmlTransformTransformer;
@class OrgApacheXmlSerializerCharInfo;
@class OrgApacheXmlSerializerEncodingInfo;
@class OrgApacheXmlSerializerToStream_BoolStack;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This abstract class is a base class for other stream 
 serializers (xml, html, text ...) that write output to a stream.
  internal
 */
@interface OrgApacheXmlSerializerToStream : OrgApacheXmlSerializerSerializerBase {
 @public
  /*!
   @brief Stack to keep track of disabling output escaping.
   */
  OrgApacheXmlSerializerToStream_BoolStack *m_disableOutputEscapingStates_;
  /*!
   @brief The encoding information associated with this serializer.
   Although initially there is no encoding,
 there is a dummy EncodingInfo object that will say
 that every character is in the encoding. This is useful
 for a serializer that is in temporary output state and has
 no associated encoding. A serializer in final output state
 will have an encoding, and will worry about whether 
 single chars or surrogate pairs of high/low chars form
 characters in the output encoding. 
   */
  OrgApacheXmlSerializerEncodingInfo *m_encodingInfo_;
  /*!
   @brief Stack to keep track of whether or not we need to
 preserve whitespace.
   Used to push/pop values used for the field m_ispreserve, but
 m_ispreserve is only relevant if m_doIndent is true.
 If m_doIndent is false this field has no impact.
   */
  OrgApacheXmlSerializerToStream_BoolStack *m_preserves_;
  /*!
   @brief State flag to tell if preservation of whitespace
 is important.
   Used only in shouldIndent() but only if m_doIndent is true.
 If m_doIndent is false this flag has no impact.
   */
  jboolean m_ispreserve_;
  /*!
   @brief State flag that tells if the previous node processed
 was text, so we can tell if we should preserve whitespace.
   Used in endDocument() and shouldIndent() but
 only if m_doIndent is true. 
 If m_doIndent is false this flag has no impact.
   */
  jboolean m_isprevtext_;
  /*!
   @brief The system line separator for writing out line breaks.
   The default value is from the system property,
 but this value can be set through the xsl:output
 extension attribute xalan:line-separator.
   */
  IOSCharArray *m_lineSep_;
  /*!
   @brief True if the the system line separator is to be used.
   */
  jboolean m_lineSepUse_;
  /*!
   @brief The length of the line seperator, since the write is done
 one character at a time.
   */
  jint m_lineSepLen_;
  /*!
   @brief Map that tells which characters should have special treatment, and it
 provides character to entity name lookup.
   */
  OrgApacheXmlSerializerCharInfo *m_charInfo_;
  /*!
   @brief True if we control the buffer, and we should flush the output on endDocument.
   */
  jboolean m_shouldFlush_;
  /*!
   @brief Add space before '/>' for XHTML.
   */
  jboolean m_spaceBeforeClose_;
  /*!
   @brief Flag to signal that a newline should be added.
   Used only in indent() which is called only if m_doIndent is true.
 If m_doIndent is false this flag has no impact.
   */
  jboolean m_startNewLine_;
  /*!
   @brief Tells if we're in an internal document type subset.
   */
  jboolean m_inDoctype_;
  /*!
   @brief Flag to quickly tell if the encoding is UTF8.
   */
  jboolean m_isUTF8_;
  /*!
   @brief remembers if we are in between the startCDATA() and endCDATA() callbacks
   */
  jboolean m_cdataStartCalled_;
  /*!
   @brief Taken from XSLTC
   */
  jboolean m_escaping_;
  JavaIoOutputStream *m_outputStream_;
}

#pragma mark Public

/*!
 @brief Default constructor
 */
- (instancetype)init;

/*!
 @brief Adds the given attribute to the set of attributes, even if there is
 no currently open element.
 This is useful if a SAX startPrefixMapping()
 should need to add an attribute before the element name is seen.
 This method is a copy of its super classes method, except that some
 tracing of events is done.  This is so the tracing is only done for
 stream serializers, not for SAX ones.
 @param uri the URI of the attribute
 @param localName the local name of the attribute
 @param rawName   the qualified name of the attribute
 @param type the type of the attribute (probably CDATA)
 @param value the value of the attribute
 @param xslAttribute true if this attribute is coming from an xsl:attribute element.
 @return true if the attribute value was added, 
 false if the attribute already existed and the value was
 replaced with the new value.
 */
- (jboolean)addAttributeAlwaysWithNSString:(NSString *)uri
                              withNSString:(NSString *)localName
                              withNSString:(NSString *)rawName
                              withNSString:(NSString *)type
                              withNSString:(NSString *)value
                               withBoolean:(jboolean)xslAttribute;

/*!
 @brief Remembers the cdata sections specified in the cdata-section-elements by appending the given
 cdata section elements to the list.
 This method can be called multiple times, but once an
 element is put in the list of cdata section elements it can not be removed.
 This method should be used by both Xalan and XSLTC.
 @param URI_and_localNames a whitespace separated list of element names, each element
 is a URI in curly braces (optional) and a local name. An example of such a parameter is:
 "{http://company.com}price {myURI2}book chapter"
 */
- (void)addCdataSectionElementsWithNSString:(NSString *)URI_and_localNames;

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
 @brief Receive notification of character data.
 <p>The Parser will call this method to report each chunk of
 character data.  SAX parsers may return all contiguous character
 data in a single chunk, or they may split it into several
 chunks; however, all of the characters in any single event
 must come from the same external entity, so that the Locator
 provides useful information.</p>
 <p>The application must not attempt to read from the array
 outside of the specified range.</p>
 <p>Note that some parsers will report whitespace using the
 ignorableWhitespace() method rather than this one (validating
 parsers must do so).</p>
 @param chars The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 @throws org.xml.sax.SAXException
 */
- (void)charactersWithCharArray:(IOSCharArray *)chars
                        withInt:(jint)start
                        withInt:(jint)length;

/*!
 @brief Receive notification of character data.
 @param s The string of characters to process.
 @throws org.xml.sax.SAXException
 */
- (void)charactersWithNSString:(NSString *)s;

/*!
 @brief Receive notification of an XML comment anywhere in the document.
 This
 callback will be used for comments inside or outside the document
 element, including comments in the external DTD subset (if read).
 @param ch An array holding the characters in the comment.
 @param start The starting position in the array.
 @param length The number of characters to use from the array.
 @throws org.xml.sax.SAXException The application may raise an exception.
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
 @throws org.xml.sax.SAXException The application may raise an exception.
 - seealso: #startCDATA
 */
- (void)endCDATA;

/*!
 @brief Report the end of DTD declarations.
 @throws org.xml.sax.SAXException The application may raise an exception.
 - seealso: #startDTD
 */
- (void)endDTD;

/*!
 @brief Receive notification of the end of an element.
 @param name The element type name
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)endElementWithNSString:(NSString *)name;

/*!
 @brief Receive notification of the end of an element.
 @param namespaceURI The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param name The element type name
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 @throws org.xml.sax.SAXException
 */
- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)name;

/*!
 @brief Ends an un-escaping section.
 - seealso: #startNonEscaping
 @throws org.xml.sax.SAXException
 */
- (void)endNonEscaping;

/*!
 @brief End the scope of a prefix-URI Namespace mapping.
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping
 @param prefix The prefix that was being mapping.
 @throws org.xml.sax.SAXException The client may throw
 an exception during processing.
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
 @brief This method flushes any pending events, which can be startDocument()
 closing the opening tag of an element, or closing an open CDATA section.
 */
- (void)flushPending;

/*!
 @brief Returns the m_indentAmount.
 @return int
 */
- (jint)getIndentAmount;

/*!
 @brief Returns the output format for this serializer.
 @return The output format in use
 */
- (JavaUtilProperties *)getOutputFormat;

/*!
 @brief Get the output stream where the events will be serialized to.
 @return reference to the result stream, or null of only a writer was
 set.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Get the character stream where the events will be serialized to.
 @return Reference to the result Writer, or null.
 */
- (JavaIoWriter *)getWriter;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 Not sure how to get this invoked quite yet.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: #characters
 @throws org.xml.sax.SAXException
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
 @brief If this method is called, the serializer is used as a
 DTDHandler, which changes behavior how the serializer 
 handles document entities.
 - seealso: org.xml.sax.DTDHandler#notationDecl(java.lang.String,java.lang.String,java.lang.String)
 */
- (void)notationDeclWithNSString:(NSString *)name
                    withNSString:(NSString *)pubID
                    withNSString:(NSString *)sysID;

/*!
 @brief Process the attributes, which means to write out the currently
 collected attributes to the writer.
 The attributes are not
 cleared by this method
 @param writer the writer to write processed attributes to.
 @param nAttrs the number of attributes in m_attributes 
 to be processed
 @throws java.io.IOException
 @throws org.xml.sax.SAXException
 */
- (void)processAttributesWithJavaIoWriter:(JavaIoWriter *)writer
                                  withInt:(jint)nAttrs;

/*!
 @brief Try's to reset the super class and reset this class for 
 re-use, so that you don't need to create a new serializer 
 (mostly for performance reasons).
 @return true if the class was successfuly reset.
 */
- (jboolean)reset;

/*!
 @brief Serializes the DOM node.
 Throws an exception only if an I/O
 exception occured while serializing.
 @param node Node to serialize.
 @throws IOException An I/O exception occured while serializing
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Remembers the cdata sections specified in the cdata-section-elements.
 The "official way to set URI and localName pairs. 
 This method should be used by both Xalan and XSLTC.
 @param URI_and_localNames a vector of pairs of Strings (URI/local)
 */
- (void)setCdataSectionElementsWithJavaUtilVector:(JavaUtilVector *)URI_and_localNames;

- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 @brief If set to false the serializer does not expand DTD entities,
 but leaves them as is, the default value is true;
 */
- (void)setDTDEntityExpansionWithBoolean:(jboolean)expand;

/*!
 @brief Sets the character encoding coming from the xsl:output encoding stylesheet attribute.
 @param encoding the character encoding
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 - seealso: SerializationHandler#setEscaping(boolean)
 */
- (jboolean)setEscapingWithBoolean:(jboolean)escape;

/*!
 @brief Sets the m_indentAmount.
 @param m_indentAmount The m_indentAmount to set
 */
- (void)setIndentAmountWithInt:(jint)m_indentAmount;

/*!
 @brief Set if the operating systems end-of-line line separator should
 be used when serializing.
 If set false NL character 
 (decimal 10) is left alone, otherwise the new-line will be replaced on
 output with the systems line separator. For example on UNIX this is
 NL, while on Windows it is two characters, CR NL, where CR is the
 carriage-return (decimal 13).
 @param use_sytem_line_break True if an input NL is replaced with the 
 operating systems end-of-line separator.
 @return The previously set value of the serializer.
 */
- (jboolean)setLineSepUseWithBoolean:(jboolean)use_sytem_line_break;

/*!
 @brief Sets the end of line characters to be used during serialization
 @param eolChars A character array corresponding to the characters to be used.
 */
- (void)setNewLineWithCharArray:(IOSCharArray *)eolChars;

/*!
 @brief Specifies an output format for this serializer.
 It the
 serializer has already been associated with an output format,
 it will switch to the new format. This method should not be
 called while the serializer is in the process of serializing
 a document.
 @param format The output format to use
 */
- (void)setOutputFormatWithJavaUtilProperties:(JavaUtilProperties *)format;

/*!
 @brief Specifies an output stream to which the document should be
 serialized.
 This method should not be called while the
 serializer is in the process of serializing a document.
 <p>
 The encoding specified in the output properties is used, or
 if no encoding was specified, the default for the selected
 output method.
 @param output The output stream
 */
- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)output;

/*!
 - seealso: SerializationHandler#setTransformer(Transformer)
 */
- (void)setTransformerWithJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)transformer;

/*!
 @brief Specifies a writer to which the document should be serialized.
 This method should not be called while the serializer is in
 the process of serializing a document.
 @param writer The output writer stream
 */
- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 @brief Receive notification of a skipped entity.
 - seealso: org.xml.sax.ContentHandler#skippedEntity
 @param name The name of the skipped entity.  If it is a
 parameter                   entity, the name will begin with '%',
 and if it is the external DTD subset, it will be the string
 "[dtd]".
 @throws org.xml.sax.SAXException Any SAX exception, possibly wrapping
 another exception.
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Report the start of a CDATA section.
 @throws org.xml.sax.SAXException The application may raise an exception.
 - seealso: #endCDATA
 */
- (void)startCDATA;

/*!
 @brief Report the start of DTD declarations, if any.
 Any declarations are assumed to be in the internal subset unless
 otherwise indicated.
 @param name The document type name.
 @param publicId The declared public identifier for the
 external DTD subset, or null if none was declared.
 @param systemId The declared system identifier for the
 external DTD subset, or null if none was declared.
 @throws org.xml.sax.SAXException The application may raise an
 exception.
 - seealso: #endDTD
 - seealso: #startEntity
 */
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

- (void)startElementWithNSString:(NSString *)elementName;

/*!
 @brief Receive notification of the beginning of an element, additional
 namespace or attribute information can occur before or after this call,
 that is associated with this element.
 @param elementNamespaceURI The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param elementLocalName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param elementName The element type name.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.AttributeList
 @throws org.xml.sax.SAXException
 */
- (void)startElementWithNSString:(NSString *)elementNamespaceURI
                    withNSString:(NSString *)elementLocalName
                    withNSString:(NSString *)elementName;

/*!
 @brief Receive notification of the beginning of an element, although this is a
 SAX method additional namespace or attribute information can occur before
 or after this call, that is associated with this element.
 @param namespaceURI The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param name The element type name.
 @param atts The attributes attached to the element, if any.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.AttributeList
 @throws org.xml.sax.SAXException
 */
- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Report the beginning of an entity.
 The start and end of the document entity are not reported.
 The start and end of the external DTD subset are reported
 using the pseudo-name "[dtd]".  All other events must be
 properly nested within start/end entity events.
 @param name The name of the entity.  If it is a parameter
 entity, the name will begin with '%'.
 @throws org.xml.sax.SAXException The application may raise an exception.
 - seealso: #endEntity
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl
 */
- (void)startEntityWithNSString:(NSString *)name;

/*!
 @brief Starts an un-escaping section.
 All characters printed within an un-
 escaping section are printed as is, without escaping special characters
 into entity references. Only XML and HTML serializers need to support
 this method.
 <p> The contents of the un-escaping section will be delivered through the
 regular <tt>characters</tt> event.
 @throws org.xml.sax.SAXException
 */
- (void)startNonEscaping;

/*!
 @brief Begin the scope of a prefix-URI Namespace mapping
 just before another element is about to start.
 This call will close any open tags so that the prefix mapping
 will not apply to the current element, but the up comming child.
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping
 @param prefix The Namespace prefix being declared.
 @param uri The Namespace URI the prefix is mapped to.
 @throws org.xml.sax.SAXException The client may throw
 an exception during processing.
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Handle a prefix/uri mapping, which is associated with a startElement()
 that is soon to follow.
 Need to close any open start tag to make
 sure than any name space attributes due to this event are associated wih
 the up comming element, not the current one.
 - seealso: ExtendedContentHandler#startPrefixMapping
 @param prefix The Namespace prefix being declared.
 @param uri The Namespace URI the prefix is mapped to.
 @param shouldFlush true if any open tags need to be closed first, this
 will impact which element the mapping applies to (open parent, or its up
 comming child)
 @return returns true if the call made a change to the current 
 namespace information, false if it did not change anything, e.g. if the
 prefix/namespace mapping was already in scope from before.
 @throws org.xml.sax.SAXException The client may throw
 an exception during processing.
 */
- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

/*!
 @brief If this method is called, the serializer is used as a
 DTDHandler, which changes behavior how the serializer 
 handles document entities.
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl(java.lang.String,java.lang.String,java.lang.String,java.lang.String)
 */
- (void)unparsedEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)pubID
                          withNSString:(NSString *)sysID
                          withNSString:(NSString *)notationName;

/*!
 @brief Returns the specified <var>string</var> after substituting <VAR>specials</VAR>,
 and UTF-16 surrogates for chracter references <CODE>&amp;#xnn</CODE>.
 @param string      String to convert to XML format.
 @param encoding    CURRENTLY NOT IMPLEMENTED.
 @throws java.io.IOException
 */
- (void)writeAttrStringWithJavaIoWriter:(JavaIoWriter *)writer
                           withNSString:(NSString *)string
                           withNSString:(NSString *)encoding;

#pragma mark Protected

/*!
 @brief Receive notification of cdata.
 <p>The Parser will call this method to report each chunk of
 character data.  SAX parsers may return all contiguous character
 data in a single chunk, or they may split it into several
 chunks; however, all of the characters in any single event
 must come from the same external entity, so that the Locator
 provides useful information.</p>
 <p>The application must not attempt to read from the array
 outside of the specified range.</p>
 <p>Note that some parsers will report whitespace using the
 ignorableWhitespace() method rather than this one (validating
 parsers must do so).</p>
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: #ignorableWhitespace
 - seealso: org.xml.sax.Locator
 @throws org.xml.sax.SAXException
 */
- (void)cdataWithCharArray:(IOSCharArray *)ch
                   withInt:(jint)start
                   withInt:(jint)length;

/*!
 @brief If available, when the disable-output-escaping attribute is used,
 output raw text without escaping.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @throws org.xml.sax.SAXException
 */
- (void)charactersRawWithCharArray:(IOSCharArray *)ch
                           withInt:(jint)start
                           withInt:(jint)length;

/*!
 @brief This helper method to writes out "]]>" when closing a CDATA section.
 @throws org.xml.sax.SAXException
 */
- (void)closeCDATA;

/*!
 @brief For the enclosing elements starting tag write out
 out any attributes followed by ">"
 @throws org.xml.sax.SAXException
 */
- (void)closeStartTag;

/*!
 @brief Makes sure that the namespace URI for the given qualified attribute name
 is declared.
 @param ns the namespace URI
 @param rawName the qualified name
 @return returns null if no action is taken, otherwise it returns the
 prefix used in declaring the namespace.
 @throws SAXException
 */
- (NSString *)ensureAttributesNamespaceIsDeclaredWithNSString:(NSString *)ns
                                                 withNSString:(NSString *)localName
                                                 withNSString:(NSString *)rawName;

/*!
 @brief Tell if this character can be written without escaping.
 */
- (jboolean)escapingNotNeededWithChar:(jchar)ch;

/*!
 @brief To fire off the pseudo characters of attributes, as they currently
 exist.
 This method should be called everytime an attribute is added,
 or when an attribute value is changed, or an element is created.
 */
- (void)firePseudoAttributes;

/*!
 @brief Flush the formatter's result stream.
 @throws org.xml.sax.SAXException
 */
- (void)flushWriter;

/*!
 @brief Indent at the current element nesting depth.
 @throws IOException
 */
- (void)indent;

/*!
 @brief Might print a newline character and the indentation amount
 of the given depth.
 @param depth the indentation depth (element nesting depth)
 @throws org.xml.sax.SAXException if an error occurs during writing.
 */
- (void)indentWithInt:(jint)depth;

/*!
 @brief Output a system-dependent line break.
 @throws org.xml.sax.SAXException
 */
- (void)outputLineSep;

/*!
 @brief Tell if, based on space preservation constraints and the doIndent property,
 if an indent should occur.
 @return True if an indent should occur.
 */
- (jboolean)shouldIndent;

/*!
 @brief Once a surrogate has been detected, write out the pair of
 characters if it is in the encoding, or if there is no
 encoding, otherwise write out an entity reference
 of the value of the unicode code point of the character
 represented by the high/low surrogate pair.
 <p>
 An exception is thrown if there is no low surrogate in the pair,
 because the array ends unexpectely, or if the low char is there
 but its value is such that it is not a low surrogate.
 @param c the first (high) part of the surrogate, which
 must be confirmed before calling this method.
 @param ch Character array.
 @param i position Where the surrogate was detected.
 @param end The end index of the significant characters.
 @return 0 if the pair of characters was written out as-is,
 the unicode code point of the character represented by
 the surrogate pair if an entity reference with that value
 was written out.
 @throws IOException
 @throws org.xml.sax.SAXException if invalid UTF-16 surrogate detected.
 */
- (jint)writeUTF16SurrogateWithChar:(jchar)c
                      withCharArray:(IOSCharArray *)ch
                            withInt:(jint)i
                            withInt:(jint)end;

#pragma mark Package-Private

/*!
 @brief Handle one of the default entities, return false if it
 is not a default entity.
 @param ch character to be escaped.
 @param i index into character array.
 @param chars non-null reference to character array.
 @param len length of chars.
 @param fromTextNode true if the characters being processed
 are from a text node, false if they are from an attribute value
 @param escLF true if the linefeed should be escaped.
 @return i+1 if the character was written, else i.
 @throws java.io.IOException
 */
- (jint)accumDefaultEntityWithJavaIoWriter:(JavaIoWriter *)writer
                                  withChar:(jchar)ch
                                   withInt:(jint)i
                             withCharArray:(IOSCharArray *)chars
                                   withInt:(jint)len
                               withBoolean:(jboolean)fromTextNode
                               withBoolean:(jboolean)escLF;

- (void)ensurePrefixIsDeclaredWithNSString:(NSString *)ns
                              withNSString:(NSString *)rawName;

/*!
 @brief Output the doc type declaration.
 @param name non-null reference to document type name.
 NEEDSDOC @@param closeDecl
 @throws java.io.IOException
 */
- (void)outputDocTypeDeclWithNSString:(NSString *)name
                          withBoolean:(jboolean)closeDecl;

/*!
 @brief Output the doc type declaration.
 @param name non-null reference to document type name.
 NEEDSDOC @@param value
 @throws org.xml.sax.SAXException
 */
- (void)outputEntityDeclWithNSString:(NSString *)name
                        withNSString:(NSString *)value;

- (void)setPropWithNSString:(NSString *)name
               withNSString:(NSString *)val
                withBoolean:(jboolean)defaultVal;

/*!
 @brief Normalize the characters, but don't escape.
 @param ch The characters from the XML document.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @param isCData true if a CDATA block should be built around the characters.
 @param useSystemLineSeparator true if the operating systems 
 end-of-line separator should be output rather than a new-line character.
 @throws IOException
 @throws org.xml.sax.SAXException
 */
- (void)writeNormalizedCharsWithCharArray:(IOSCharArray *)ch
                                  withInt:(jint)start
                                  withInt:(jint)length
                              withBoolean:(jboolean)isCData
                              withBoolean:(jboolean)useSystemLineSeparator;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerToStream)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_disableOutputEscapingStates_, OrgApacheXmlSerializerToStream_BoolStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_encodingInfo_, OrgApacheXmlSerializerEncodingInfo *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_preserves_, OrgApacheXmlSerializerToStream_BoolStack *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_lineSep_, IOSCharArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_charInfo_, OrgApacheXmlSerializerCharInfo *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerToStream, m_outputStream_, JavaIoOutputStream *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToStream_init(OrgApacheXmlSerializerToStream *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToStream)

#endif

#if !defined (OrgApacheXmlSerializerToStream_BoolStack_) && (INCLUDE_ALL_OrgApacheXmlSerializerToStream || defined(INCLUDE_OrgApacheXmlSerializerToStream_BoolStack))
#define OrgApacheXmlSerializerToStream_BoolStack_

/*!
 @brief Simple stack for boolean values.
 This class is a copy of the one in org.apache.xml.utils. 
 It exists to cut the serializers dependancy on that package.
 A minor changes from that package are:
 doesn't implement Clonable
  internal
 */
@interface OrgApacheXmlSerializerToStream_BoolStack : NSObject

#pragma mark Public

/*!
 @brief Default constructor.
 Note that the default
 block size is very small, for small lists.
 */
- (instancetype)init;

/*!
 @brief Construct a IntVector, using the given block size.
 @param size array size to allocate
 */
- (instancetype)initWithInt:(jint)size;

/*!
 @brief Clears the stack.
 */
- (void)clear;

/*!
 @brief Tests if this stack is empty.
 @return <code>true</code> if this stack is empty;
 <code>false</code> otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 @return the object at the top of this stack.
 @throws EmptyStackException  if this stack is empty.
 */
- (jboolean)peek;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 If the stack is empty, it returns false.
 @return the object at the top of this stack.
 */
- (jboolean)peekOrFalse;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 If the stack is empty, it returns true.
 @return the object at the top of this stack.
 */
- (jboolean)peekOrTrue;

/*!
 @brief Removes the object at the top of this stack and returns that
 object as the value of this function.
 @return The object at the top of this stack.
 @throws EmptyStackException  if this stack is empty.
 */
- (jboolean)pop;

/*!
 @brief Removes the object at the top of this stack and returns the
 next object at the top as the value of this function.
 @return Next object to the top or false if none there
 */
- (jboolean)popAndTop;

/*!
 @brief Pushes an item onto the top of this stack.
 @param val the boolean to be pushed onto this stack.
 @return the <code>item</code> argument.
 */
- (jboolean)pushWithBoolean:(jboolean)val;

/*!
 @brief Set the item at the top of this stack
 @param b Object to set at the top of this stack
 */
- (void)setTopWithBoolean:(jboolean)b;

/*!
 @brief Get the length of the list.
 @return Current length of the list
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToStream_BoolStack)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToStream_BoolStack_init(OrgApacheXmlSerializerToStream_BoolStack *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToStream_BoolStack *new_OrgApacheXmlSerializerToStream_BoolStack_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToStream_BoolStack *create_OrgApacheXmlSerializerToStream_BoolStack_init();

FOUNDATION_EXPORT void OrgApacheXmlSerializerToStream_BoolStack_initWithInt_(OrgApacheXmlSerializerToStream_BoolStack *self, jint size);

FOUNDATION_EXPORT OrgApacheXmlSerializerToStream_BoolStack *new_OrgApacheXmlSerializerToStream_BoolStack_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToStream_BoolStack *create_OrgApacheXmlSerializerToStream_BoolStack_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToStream_BoolStack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToStream")
