//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/SAXNotSupportedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxSAXNotSupportedException")
#ifdef RESTRICT_OrgXmlSaxSAXNotSupportedException
#define INCLUDE_ALL_OrgXmlSaxSAXNotSupportedException 0
#else
#define INCLUDE_ALL_OrgXmlSaxSAXNotSupportedException 1
#endif
#undef RESTRICT_OrgXmlSaxSAXNotSupportedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxSAXNotSupportedException_) && (INCLUDE_ALL_OrgXmlSaxSAXNotSupportedException || defined(INCLUDE_OrgXmlSaxSAXNotSupportedException))
#define OrgXmlSaxSAXNotSupportedException_

#define RESTRICT_OrgXmlSaxSAXException 1
#define INCLUDE_OrgXmlSaxSAXException 1
#include "../../../org/xml/sax/SAXException.h"

@class JavaLangException;

/*!
 @brief Exception class for an unsupported operation.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>An XMLReader will throw this exception when it recognizes a
  feature or property identifier, but cannot perform the requested
  operation (setting a state or value).  Other SAX2 applications and
  extensions may use this class for similar purposes.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.SAXNotRecognizedException
 */
@interface OrgXmlSaxSAXNotSupportedException : OrgXmlSaxSAXException

#pragma mark Public

/*!
 @brief Construct a new exception with no message.
 */
- (instancetype)init;

/*!
 @brief Construct a new exception with the given message.
 @param message The text message of the exception.
 */
- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangException:(JavaLangException *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangException:(JavaLangException *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXNotSupportedException)

FOUNDATION_EXPORT void OrgXmlSaxSAXNotSupportedException_init(OrgXmlSaxSAXNotSupportedException *self);

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *new_OrgXmlSaxSAXNotSupportedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *create_OrgXmlSaxSAXNotSupportedException_init(void);

FOUNDATION_EXPORT void OrgXmlSaxSAXNotSupportedException_initWithNSString_(OrgXmlSaxSAXNotSupportedException *self, NSString *message);

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *new_OrgXmlSaxSAXNotSupportedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXNotSupportedException *create_OrgXmlSaxSAXNotSupportedException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXNotSupportedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxSAXNotSupportedException")
