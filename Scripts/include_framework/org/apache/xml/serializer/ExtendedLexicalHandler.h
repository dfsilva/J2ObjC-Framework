//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ExtendedLexicalHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerExtendedLexicalHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerExtendedLexicalHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerExtendedLexicalHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerExtendedLexicalHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerExtendedLexicalHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerExtendedLexicalHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerExtendedLexicalHandler || defined(INCLUDE_OrgApacheXmlSerializerExtendedLexicalHandler))
#define OrgApacheXmlSerializerExtendedLexicalHandler_

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "../../../../org/xml/sax/ext/LexicalHandler.h"

/*!
 @brief This interface has extensions to the standard SAX LexicalHandler interface.
 This interface is intended to be used by a serializer.
  internal
 */
@protocol OrgApacheXmlSerializerExtendedLexicalHandler < OrgXmlSaxExtLexicalHandler, JavaObject >

/*!
 @brief This method is used to notify of a comment
 @param comment the comment, but unlike the SAX comment() method this
 method takes a String rather than a character array.
 @throws SAXException
 */
- (void)commentWithNSString:(NSString *)comment;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerExtendedLexicalHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerExtendedLexicalHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerExtendedLexicalHandler")
