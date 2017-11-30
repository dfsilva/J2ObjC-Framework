//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/parsers/DocumentBuilder.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlParsersDocumentBuilder")
#ifdef RESTRICT_JavaxXmlParsersDocumentBuilder
#define INCLUDE_ALL_JavaxXmlParsersDocumentBuilder 0
#else
#define INCLUDE_ALL_JavaxXmlParsersDocumentBuilder 1
#endif
#undef RESTRICT_JavaxXmlParsersDocumentBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlParsersDocumentBuilder_) && (INCLUDE_ALL_JavaxXmlParsersDocumentBuilder || defined(INCLUDE_JavaxXmlParsersDocumentBuilder))
#define JavaxXmlParsersDocumentBuilder_

@class JavaIoFile;
@class JavaIoInputStream;
@class JavaxXmlValidationSchema;
@class OrgXmlSaxInputSource;
@protocol OrgW3cDomDOMImplementation;
@protocol OrgW3cDomDocument;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;

/*!
 @brief Defines the API to obtain DOM Document instances from an XML
  document.Using this class, an application programmer can obtain a 
 <code>Document</code> from XML.
 <p>
  An instance of this class can be obtained from the 
 <code>DocumentBuilderFactory.newDocumentBuilder()</code> method. Once
  an instance of this class is obtained, XML can be parsed from a
  variety of input sources. These input sources are InputStreams,
  Files, URLs, and SAX InputSources.<p>
  Note that this class reuses several classes from the SAX API. This
  does not require that the implementor of the underlying DOM
  implementation use a SAX parser to parse XML document into a 
 <code>Document</code>. It merely requires that the implementation
  communicate with the application using these existing APIs.
 @author <a href="mailto:Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 584483 $, $Date: 2007-10-13 19:54:48 -0700 (Sat, 13 Oct 2007) $
 */
@interface JavaxXmlParsersDocumentBuilder : NSObject

#pragma mark Public

/*!
 @brief Obtain an instance of a <code>DOMImplementation</code> object.
 @return A new instance of a <code>DOMImplementation</code>.
 */
- (id<OrgW3cDomDOMImplementation>)getDOMImplementation;

/*!
 @brief <p>Get a reference to the the <code>Schema</code> being used by
  the XML processor.
 </p>
  
 <p>If no schema is being used, <code>null</code> is returned.</p>
 @return <code>Schema</code> being used or <code>null</code>
   if none in use
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @since 1.5
 */
- (JavaxXmlValidationSchema *)getSchema;

/*!
 @brief Indicates whether or not this parser is configured to
  understand namespaces.
 @return true if this parser is configured to understand
          namespaces; false otherwise.
 */
- (jboolean)isNamespaceAware;

/*!
 @brief Indicates whether or not this parser is configured to
  validate XML documents.
 @return true if this parser is configured to validate
          XML documents; false otherwise.
 */
- (jboolean)isValidating;

/*!
 @brief <p>Get the XInclude processing mode for this parser.
 </p>
 @return the return value of
       the <code>DocumentBuilderFactory.isXIncludeAware()</code>
       when this parser was created from factory.
 @throw UnsupportedOperationException
 For backward compatibility, when implementations for
       earlier versions of JAXP is used, this exception will be
       thrown.
 @since 1.5
 - seealso: DocumentBuilderFactory#setXIncludeAware(boolean)
 */
- (jboolean)isXIncludeAware;

/*!
 @brief Obtain a new instance of a DOM <code>Document</code> object
  to build a DOM tree with.
 @return A new instance of a DOM Document object.
 */
- (id<OrgW3cDomDocument>)newDocument OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Parse the content of the given file as an XML document
  and return a new DOM <code>Document</code> object.
 An <code>IllegalArgumentException</code> is thrown if the 
 <code>File</code> is <code>null</code> null.
 @param f The file containing the XML to parse.
 @throw IOExceptionIf any IO errors occur.
 @throw SAXExceptionIf any parse errors occur.
 - seealso: org.xml.sax.DocumentHandler
 @return A new DOM Document object.
 */
- (id<OrgW3cDomDocument>)parseWithJavaIoFile:(JavaIoFile *)f;

/*!
 @brief Parse the content of the given input source as an XML document
  and return a new DOM <code>Document</code> object.
 An <code>IllegalArgumentException</code> is thrown if the 
 <code>InputSource</code> is <code>null</code> null.
 @param is InputSource containing the content to be parsed.
 @throw IOExceptionIf any IO errors occur.
 @throw SAXExceptionIf any parse errors occur.
 - seealso: org.xml.sax.DocumentHandler
 @return A new DOM Document object.
 */
- (id<OrgW3cDomDocument>)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)is;

/*!
 @brief Parse the content of the given <code>InputStream</code> as an XML
  document and return a new DOM <code>Document</code> object.
 An <code>IllegalArgumentException</code> is thrown if the 
 <code>InputStream</code> is null.
 @param is InputStream containing the content to be parsed.
 @return <code>Document</code> result of parsing the
   <code>InputStream</code>
 @throw IOExceptionIf any IO errors occur.
 @throw SAXExceptionIf any parse errors occur.
 - seealso: org.xml.sax.DocumentHandler
 */
- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is;

/*!
 @brief Parse the content of the given <code>InputStream</code> as an
  XML document and return a new DOM <code>Document</code> object.
 An <code>IllegalArgumentException</code> is thrown if the 
 <code>InputStream</code> is null.
 @param is InputStream containing the content to be parsed.
 @param systemId Provide a base for resolving relative URIs.
 @return A new DOM Document object.
 @throw IOExceptionIf any IO errors occur.
 @throw SAXExceptionIf any parse errors occur.
 - seealso: org.xml.sax.DocumentHandler
 */
- (id<OrgW3cDomDocument>)parseWithJavaIoInputStream:(JavaIoInputStream *)is
                                       withNSString:(NSString *)systemId;

/*!
 @brief Parse the content of the given URI as an XML document
  and return a new DOM <code>Document</code> object.
 An <code>IllegalArgumentException</code> is thrown if the
  URI is <code>null</code> null.
 @param uri The location of the content to be parsed.
 @return A new DOM Document object.
 @throw IOExceptionIf any IO errors occur.
 @throw SAXExceptionIf any parse errors occur.
 - seealso: org.xml.sax.DocumentHandler
 */
- (id<OrgW3cDomDocument>)parseWithNSString:(NSString *)uri;

/*!
 @brief <p>Reset this <code>DocumentBuilder</code> to its original configuration.
 </p>
  
 <p><code>DocumentBuilder</code> is reset to the same state as when it was created with 
 <code>DocumentBuilderFactory.newDocumentBuilder()</code>.
  <code>reset()</code> is designed to allow the reuse of existing <code>DocumentBuilder</code>s
  thus saving resources associated with the creation of new <code>DocumentBuilder</code>s.</p>
  
 <p>The reset <code>DocumentBuilder</code> is not guaranteed to have the same <code>EntityResolver</code> or <code>ErrorHandler</code>
  <code>Object</code>s, e.g. <code>obj)</code>.  It is guaranteed to have a functionally equal 
 <code>EntityResolver</code> and <code>ErrorHandler</code>.</p>
 @since 1.5
 */
- (void)reset;

/*!
 @brief Specify the <code>EntityResolver</code> to be used to resolve
  entities present in the XML document to be parsed.Setting
  this to <code>null</code> will result in the underlying
  implementation using it's own default implementation and
  behavior.
 @param er The  <code> EntityResolver </code>  to be used to resolve entities
             present in the XML document to be parsed.
 */
- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)er;

/*!
 @brief Specify the <code>ErrorHandler</code> to be used by the parser.
 Setting this to <code>null</code> will result in the underlying
  implementation using it's own default implementation and
  behavior.
 @param eh The  <code> ErrorHandler </code>  to be used by the parser.
 */
- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)eh;

#pragma mark Protected

/*!
 @brief Protected constructor
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlParsersDocumentBuilder)

FOUNDATION_EXPORT void JavaxXmlParsersDocumentBuilder_init(JavaxXmlParsersDocumentBuilder *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlParsersDocumentBuilder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlParsersDocumentBuilder")
