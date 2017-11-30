//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/org/xml/sax/SAXNotRecognizedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxSAXNotRecognizedException")
#ifdef RESTRICT_OrgXmlSaxSAXNotRecognizedException
#define INCLUDE_ALL_OrgXmlSaxSAXNotRecognizedException 0
#else
#define INCLUDE_ALL_OrgXmlSaxSAXNotRecognizedException 1
#endif
#undef RESTRICT_OrgXmlSaxSAXNotRecognizedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxSAXNotRecognizedException_) && (INCLUDE_ALL_OrgXmlSaxSAXNotRecognizedException || defined(INCLUDE_OrgXmlSaxSAXNotRecognizedException))
#define OrgXmlSaxSAXNotRecognizedException_

#define RESTRICT_OrgXmlSaxSAXException 1
#define INCLUDE_OrgXmlSaxSAXException 1
#include "../../../org/xml/sax/SAXException.h"

@class JavaLangException;

/*!
 @brief Exception class for an unrecognized identifier.
 <blockquote>
  <em>This module, both source code and documentation, is in the
  Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
  See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
  for further information. 
 </blockquote>
  
 <p>An XMLReader will throw this exception when it finds an
  unrecognized feature or property identifier; SAX applications and
  extensions may use this class for other, similar purposes.</p>
 @since SAX 2.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.SAXNotSupportedException
 */
@interface OrgXmlSaxSAXNotRecognizedException : OrgXmlSaxSAXException

#pragma mark Public

/*!
 @brief Default constructor.
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

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXNotRecognizedException)

FOUNDATION_EXPORT void OrgXmlSaxSAXNotRecognizedException_init(OrgXmlSaxSAXNotRecognizedException *self);

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *new_OrgXmlSaxSAXNotRecognizedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *create_OrgXmlSaxSAXNotRecognizedException_init(void);

FOUNDATION_EXPORT void OrgXmlSaxSAXNotRecognizedException_initWithNSString_(OrgXmlSaxSAXNotRecognizedException *self, NSString *message);

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *new_OrgXmlSaxSAXNotRecognizedException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXNotRecognizedException *create_OrgXmlSaxSAXNotRecognizedException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXNotRecognizedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxSAXNotRecognizedException")
