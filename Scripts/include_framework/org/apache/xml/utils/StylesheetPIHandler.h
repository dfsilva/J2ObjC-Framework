//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/StylesheetPIHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsStylesheetPIHandler")
#ifdef RESTRICT_OrgApacheXmlUtilsStylesheetPIHandler
#define INCLUDE_ALL_OrgApacheXmlUtilsStylesheetPIHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsStylesheetPIHandler 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsStylesheetPIHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsStylesheetPIHandler_) && (INCLUDE_ALL_OrgApacheXmlUtilsStylesheetPIHandler || defined(INCLUDE_OrgApacheXmlUtilsStylesheetPIHandler))
#define OrgApacheXmlUtilsStylesheetPIHandler_

#define RESTRICT_OrgXmlSaxHelpersDefaultHandler 1
#define INCLUDE_OrgXmlSaxHelpersDefaultHandler 1
#include "../../../../org/xml/sax/helpers/DefaultHandler.h"

@class JavaUtilVector;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgXmlSaxAttributes;

/*!
 @brief Search for the xml-stylesheet processing instructions in an XML document.
 - seealso: <a href="http://www.w3.org/TR/xml-stylesheet/">Associating Style Sheets with XML documents, Version 1.0</a>
 */
@interface OrgApacheXmlUtilsStylesheetPIHandler : OrgXmlSaxHelpersDefaultHandler {
 @public
  /*!
   @brief The baseID of the document being processed.
   */
  NSString *m_baseID_;
  /*!
   @brief The desired media criteria.
   */
  NSString *m_media_;
  /*!
   @brief The desired title criteria.
   */
  NSString *m_title_;
  /*!
   @brief The desired character set criteria.
   */
  NSString *m_charset_;
  /*!
   @brief A list of SAXSource objects that match the criteria.
   */
  JavaUtilVector *m_stylesheets_;
  /*!
   @brief The object that implements the URIResolver interface,
 or null.
   */
  id<JavaxXmlTransformURIResolver> m_uriResolver_;
}

#pragma mark Public

/*!
 @brief Construct a StylesheetPIHandler instance that will search 
 for xml-stylesheet PIs based on the given criteria.
 @param baseID The base ID of the XML document, needed to resolve 
 relative IDs.
 @param media The desired media criteria.
 @param title The desired title criteria.
 @param charset The desired character set criteria.
 */
- (instancetype)initWithNSString:(NSString *)baseID
                    withNSString:(NSString *)media
                    withNSString:(NSString *)title
                    withNSString:(NSString *)charset;

/*!
 @brief Return the last stylesheet found that match the constraints.
 @return Source object that references the last stylesheet reference 
 that matches the constraints.
 */
- (id<JavaxXmlTransformSource>)getAssociatedStylesheet;

- (NSString *)getBaseId;

/*!
 @brief Get the object that will be used to resolve URIs in href 
 in xml-stylesheet processing instruction.
 @return The URIResolver that was set with setURIResolver.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Handle the xml-stylesheet processing instruction.
 @param target The processing instruction target.
 @param data The processing instruction data, or null if
 none is supplied.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#processingInstruction
 - seealso: <a href="http://www.w3.org/TR/xml-stylesheet/">Associating Style Sheets with XML documents, Version 1.0</a>
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Added additional getter and setter methods for the Base Id
 to fix bugzilla bug 24187
 */
- (void)setBaseIdWithNSString:(NSString *)baseId;

/*!
 @brief Get the object that will be used to resolve URIs in href 
 in xml-stylesheet processing instruction.
 @param resolver An object that implements the URIResolver interface,
 or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

/*!
 @brief The spec notes that "The xml-stylesheet processing instruction is allowed only in the prolog of an XML document
 .",
 so, at least for right now, I'm going to go ahead an throw a TransformerException
 in order to stop the parse.
 @param namespaceURI The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param qName The qualified name (with prefix).
 @param atts  The specified or defaulted attributes.
 @throws StopParseException since there can be no valid xml-stylesheet processing 
 instructions past the first element.
 */
- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsStylesheetPIHandler)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_baseID_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_media_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_title_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_charset_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_stylesheets_, JavaUtilVector *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsStylesheetPIHandler, m_uriResolver_, id<JavaxXmlTransformURIResolver>)

FOUNDATION_EXPORT void OrgApacheXmlUtilsStylesheetPIHandler_initWithNSString_withNSString_withNSString_withNSString_(OrgApacheXmlUtilsStylesheetPIHandler *self, NSString *baseID, NSString *media, NSString *title, NSString *charset);

FOUNDATION_EXPORT OrgApacheXmlUtilsStylesheetPIHandler *new_OrgApacheXmlUtilsStylesheetPIHandler_initWithNSString_withNSString_withNSString_withNSString_(NSString *baseID, NSString *media, NSString *title, NSString *charset) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsStylesheetPIHandler *create_OrgApacheXmlUtilsStylesheetPIHandler_initWithNSString_withNSString_withNSString_withNSString_(NSString *baseID, NSString *media, NSString *title, NSString *charset);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsStylesheetPIHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsStylesheetPIHandler")
