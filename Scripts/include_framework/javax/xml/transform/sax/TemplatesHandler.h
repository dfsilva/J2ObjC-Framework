//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/sax/TemplatesHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformSaxTemplatesHandler")
#ifdef RESTRICT_JavaxXmlTransformSaxTemplatesHandler
#define INCLUDE_ALL_JavaxXmlTransformSaxTemplatesHandler 0
#else
#define INCLUDE_ALL_JavaxXmlTransformSaxTemplatesHandler 1
#endif
#undef RESTRICT_JavaxXmlTransformSaxTemplatesHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformSaxTemplatesHandler_) && (INCLUDE_ALL_JavaxXmlTransformSaxTemplatesHandler || defined(INCLUDE_JavaxXmlTransformSaxTemplatesHandler))
#define JavaxXmlTransformSaxTemplatesHandler_

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "org/xml/sax/ContentHandler.h"

@protocol JavaxXmlTransformTemplates;

/*!
 @brief A SAX ContentHandler that may be used to process SAX
  parse events (parsing transformation instructions) into a Templates object.
 <p>Note that TemplatesHandler does not need to implement LexicalHandler.</p>
 */
@protocol JavaxXmlTransformSaxTemplatesHandler < OrgXmlSaxContentHandler, JavaObject >

/*!
 @brief When a TemplatesHandler object is used as a ContentHandler
  for the parsing of transformation instructions, it creates a Templates object,
  which the caller can get once the SAX events have been completed.
 @return The Templates object that was created during
  the SAX event process, or null if no Templates object has
  been created.
 */
- (id<JavaxXmlTransformTemplates>)getTemplates;

/*!
 @brief Set the base ID (URI or system ID) for the Templates object
  created by this builder.This must be set in order to
  resolve relative URIs in the stylesheet.
 This must be
  called before the startDocument event.
 @param systemID Base URI for this stylesheet.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

/*!
 @brief Get the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxTemplatesHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxTemplatesHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformSaxTemplatesHandler")
