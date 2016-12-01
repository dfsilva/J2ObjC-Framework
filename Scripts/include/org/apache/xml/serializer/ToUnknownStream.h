//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToUnknownStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToUnknownStream")
#ifdef RESTRICT_OrgApacheXmlSerializerToUnknownStream
#define INCLUDE_ALL_OrgApacheXmlSerializerToUnknownStream 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToUnknownStream 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToUnknownStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerToUnknownStream_) && (INCLUDE_ALL_OrgApacheXmlSerializerToUnknownStream || defined(INCLUDE_OrgApacheXmlSerializerToUnknownStream))
#define OrgApacheXmlSerializerToUnknownStream_

#define RESTRICT_OrgApacheXmlSerializerSerializerBase 1
#define INCLUDE_OrgApacheXmlSerializerSerializerBase 1
#include "org/apache/xml/serializer/SerializerBase.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaUtilProperties;
@class JavaUtilVector;
@class JavaxXmlTransformTransformer;
@class OrgApacheXmlSerializerNamespaceMappings;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgApacheXmlSerializerDOMSerializer;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxLocator;

/*!
 @brief This class wraps another SerializationHandler.
 The wrapped object will either
 handler XML or HTML, which is not known until a little later when the first XML
 tag is seen.  If the first tag is <html> then the wrapped object is an HTML
 handler, otherwise it is an XML handler.
 This class effectively caches the first few calls to it then passes them
 on to the wrapped handler (once it exists).  After that subsequent calls a
 simply passed directly to the wrapped handler.
 The user of this class doesn't know if the output is ultimatley XML or HTML.
 This class is not a public API, it is public because it is used within Xalan.
  internal
 */
@interface OrgApacheXmlSerializerToUnknownStream : OrgApacheXmlSerializerSerializerBase

#pragma mark Public

/*!
 @brief Default constructor.
 Initially this object wraps an XML Stream object, so _handler is never null.
 That may change later to an HTML Stream object.
 */
- (instancetype)init;

/*!
 @brief Adds an attribute to the currenly open tag
 @param rawName the attribute name, with prefix (if any)
 @param value the value of the parameter
 - seealso: ExtendedContentHandler#addAttribute(String,String)
 */
- (void)addAttributeWithNSString:(NSString *)rawName
                    withNSString:(NSString *)value;

/*!
 @brief Adds an attribute to the currenly open tag
 @param uri the URI of a namespace
 @param localName the attribute name, without prefix
 @param rawName the attribute name, with prefix (if any)
 @param type the type of the attribute, typically "CDATA"
 @param value the value of the parameter
 @param XSLAttribute true if this attribute is coming from an xsl:attribute element
 - seealso: ExtendedContentHandler#addAttribute(String,String,String,String,String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 - seealso: ExtendedContentHandler#addAttributes(org.xml.sax.Attributes)
 */
- (void)addAttributesWithOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Adds a unique attribute to the currenly open tag
 */
- (void)addUniqueAttributeWithNSString:(NSString *)rawName
                          withNSString:(NSString *)value
                               withInt:(jint)flags;

/*!
 - seealso: Serializer#asContentHandler()
 @return the wrapped XML or HTML handler
 */
- (id<OrgXmlSaxContentHandler>)asContentHandler;

/*!
 - seealso: org.apache.xml.serializer.Serializer#asDOM3Serializer()
 */
- (id)asDOM3Serializer;

/*!
 - seealso: Serializer#asDOMSerializer()
 */
- (id<OrgApacheXmlSerializerDOMSerializer>)asDOMSerializer;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.DeclHandler#attributeDecl(String,String,String,String,String)
 */
- (void)attributeDeclWithNSString:(NSString *)arg0
                     withNSString:(NSString *)arg1
                     withNSString:(NSString *)arg2
                     withNSString:(NSString *)arg3
                     withNSString:(NSString *)arg4;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#characters(char[],int,int)
 */
- (void)charactersWithCharArray:(IOSCharArray *)characters
                        withInt:(jint)offset
                        withInt:(jint)length;

/*!
 @brief Converts the String to a character array and calls the SAX method 
 characters(char[],int,int);
 - seealso: ExtendedContentHandler#characters(String)
 */
- (void)charactersWithNSString:(NSString *)chars;

/*!
 - seealso: SerializationHandler#close()
 */
- (void)close;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#comment(char[],int,int)
 */
- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: ExtendedLexicalHandler#comment(String)
 */
- (void)commentWithNSString:(NSString *)comment;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.DeclHandler#elementDecl(String,String)
 */
- (void)elementDeclWithNSString:(NSString *)arg0
                   withNSString:(NSString *)arg1;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#endCDATA()
 */
- (void)endCDATA;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#endDocument()
 */
- (void)endDocument;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#endDTD()
 */
- (void)endDTD;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elementName;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#endElement(String,String,String)
 */
- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#endEntity(String)
 */
- (void)endEntityWithNSString:(NSString *)name;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping(String)
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 - seealso: ExtendedContentHandler#entityReference(java.lang.String)
 */
- (void)entityReferenceWithNSString:(NSString *)entityName;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl(String,String,String)
 */
- (void)externalEntityDeclWithNSString:(NSString *)name
                          withNSString:(NSString *)publicId
                          withNSString:(NSString *)systemId;

/*!
 - seealso: SerializationHandler#flushPending()
 */
- (void)flushPending;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getDoctypePublic()
 */
- (NSString *)getDoctypePublic;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getDoctypeSystem()
 */
- (NSString *)getDoctypeSystem;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getEncoding()
 */
- (NSString *)getEncoding;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getIndent()
 */
- (jboolean)getIndent;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getIndentAmount()
 */
- (jint)getIndentAmount;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getMediaType()
 */
- (NSString *)getMediaType;

/*!
 @brief Get the current namespace mappings.
 Simply returns the mappings of the wrapped handler.
 - seealso: ExtendedContentHandler#getNamespaceMappings()
 */
- (OrgApacheXmlSerializerNamespaceMappings *)getNamespaceMappings;

/*!
 - seealso: ExtendedContentHandler#getNamespaceURI(java.lang.String,boolean)
 */
- (NSString *)getNamespaceURIWithNSString:(NSString *)qname
                              withBoolean:(jboolean)isElement;

- (NSString *)getNamespaceURIFromPrefixWithNSString:(NSString *)prefix;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getOmitXMLDeclaration()
 */
- (jboolean)getOmitXMLDeclaration;

/*!
 - seealso: Serializer#getOutputFormat()
 @return the properties of the underlying handler
 */
- (JavaUtilProperties *)getOutputFormat;

/*!
 - seealso: Serializer#getOutputStream()
 @return the OutputStream of the underlying XML or HTML handler
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 - seealso: ExtendedContentHandler#getPrefix
 */
- (NSString *)getPrefixWithNSString:(NSString *)namespaceURI;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getStandalone()
 */
- (NSString *)getStandalone;

- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#getVersion()
 */
- (NSString *)getVersion;

/*!
 - seealso: Serializer#getWriter()
 @return the Writer of the underlying XML or HTML handler
 */
- (JavaIoWriter *)getWriter;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace(char[],int,int)
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl(String,String)
 */
- (void)internalEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1;

/*!
 @brief This method is used when a prefix/uri namespace mapping
 is indicated after the element was started with a
 startElement() and before and endElement().
 startPrefixMapping(prefix,uri) would be used before the
 startElement() call.
 @param uri the URI of the namespace
 @param prefix the prefix associated with the given URI.
 - seealso: ExtendedContentHandler#namespaceAfterStartElement(String,String)
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#processingInstruction(String,String)
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief passes the call on to the underlying HTML or XML handler
 - seealso: Serializer#reset()
 @return ???
 */
- (jboolean)reset;

/*!
 @brief Converts the DOM node to output
 @param node the DOM node to transform to output
 - seealso: DOMSerializer#serialize(Node)
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @param URI_and_localNames Vector a list of pairs of URI/localName
 specified in the cdata-section-elements attribute.
 - seealso: SerializationHandler#setCdataSectionElements(java.util.Vector)
 */
- (void)setCdataSectionElementsWithJavaUtilVector:(JavaUtilVector *)URI_and_localNames;

/*!
 - seealso: SerializationHandler#setContentHandler(org.xml.sax.ContentHandler)
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

/*!
 - seealso: XSLOutputAttributes#setDoctype(String,String)
 */
- (void)setDoctypeWithNSString:(NSString *)system
                  withNSString:(NSString *)pub;

/*!
 @brief Set the doctype in the underlying XML handler.
 Remember that this method
 was called, just in case we need to transfer this doctype to an HTML handler
 @param doctype the public doctype to set
 - seealso: XSLOutputAttributes#setDoctypePublic(String)
 */
- (void)setDoctypePublicWithNSString:(NSString *)doctype;

/*!
 @brief Set the doctype in the underlying XML handler.
 Remember that this method
 was called, just in case we need to transfer this doctype to an HTML handler
 @param doctype the system doctype to set
 - seealso: XSLOutputAttributes#setDoctypeSystem(String)
 */
- (void)setDoctypeSystemWithNSString:(NSString *)doctype;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator(Locator)
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#setEncoding(String)
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 - seealso: SerializationHandler#setEscaping(boolean)
 */
- (jboolean)setEscapingWithBoolean:(jboolean)escape;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#setIndent(boolean)
 */
- (void)setIndentWithBoolean:(jboolean)indent;

/*!
 @brief Pass the call on to the underlying handler
 */
- (void)setIndentAmountWithInt:(jint)value;

/*!
 - seealso: XSLOutputAttributes#setMediaType(String)
 */
- (void)setMediaTypeWithNSString:(NSString *)mediaType;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#setOmitXMLDeclaration(boolean)
 */
- (void)setOmitXMLDeclarationWithBoolean:(jboolean)b;

/*!
 @brief Set the properties of the handler
 @param format the output properties to set
 - seealso: Serializer#setOutputFormat(Properties)
 */
- (void)setOutputFormatWithJavaUtilProperties:(JavaUtilProperties *)format;

/*!
 @brief Sets the output stream to write to
 @param output the OutputStream to write to
 - seealso: Serializer#setOutputStream(OutputStream)
 */
- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)output;

/*!
 @brief This method is used to set the source locator, which might be used to
 generated an error message.
 @param locator the source locator
 - seealso: ExtendedContentHandler#setSourceLocator(javax.xml.transform.SourceLocator)
 */
- (void)setSourceLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: XSLOutputAttributes#setStandalone(String)
 */
- (void)setStandaloneWithNSString:(NSString *)standalone;

- (void)setTransformerWithJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)t;

/*!
 @brief This method cannot be cached because default is different in
 HTML and XML (we need more than a boolean).
 */
- (void)setVersionWithNSString:(NSString *)version_;

/*!
 @brief Sets the writer to write to
 @param writer the writer to write to
 - seealso: Serializer#setWriter(Writer)
 */
- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ContentHandler#skippedEntity(String)
 */
- (void)skippedEntityWithNSString:(NSString *)name;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#startCDATA()
 */
- (void)startCDATA;

/*!
 - seealso: org.xml.sax.ContentHandler#startDocument()
 */
- (void)startDocument;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#startDTD(String,String,String)
 */
- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

- (void)startElementWithNSString:(NSString *)qName;

- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName;

- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)elementName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 @brief Pass the call on to the underlying handler
 - seealso: org.xml.sax.ext.LexicalHandler#startEntity(String)
 */
- (void)startEntityWithNSString:(NSString *)name;

/*!
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping(String,String)
 @param prefix The prefix that maps to the URI
 @param uri The URI for the namespace
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

#pragma mark Protected

- (void)firePseudoElementWithNSString:(NSString *)elementName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToUnknownStream)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToUnknownStream_init(OrgApacheXmlSerializerToUnknownStream *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToUnknownStream *new_OrgApacheXmlSerializerToUnknownStream_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToUnknownStream *create_OrgApacheXmlSerializerToUnknownStream_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToUnknownStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToUnknownStream")