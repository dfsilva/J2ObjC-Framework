//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/SAXSourceLocator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsSAXSourceLocator")
#ifdef RESTRICT_OrgApacheXmlUtilsSAXSourceLocator
#define INCLUDE_ALL_OrgApacheXmlUtilsSAXSourceLocator 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsSAXSourceLocator 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsSAXSourceLocator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsSAXSourceLocator_) && (INCLUDE_ALL_OrgApacheXmlUtilsSAXSourceLocator || defined(INCLUDE_OrgApacheXmlUtilsSAXSourceLocator))
#define OrgApacheXmlUtilsSAXSourceLocator_

#define RESTRICT_OrgXmlSaxHelpersLocatorImpl 1
#define INCLUDE_OrgXmlSaxHelpersLocatorImpl 1
#include "org/xml/sax/helpers/LocatorImpl.h"

#define RESTRICT_JavaxXmlTransformSourceLocator 1
#define INCLUDE_JavaxXmlTransformSourceLocator 1
#include "javax/xml/transform/SourceLocator.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxLocator;

/*!
 @brief Class SAXSourceLocator extends org.xml.sax.helpers.LocatorImpl
 for the purpose of implementing the SourceLocator interface, 
 and thus can be both a SourceLocator and a SAX Locator.
 */
@interface OrgApacheXmlUtilsSAXSourceLocator : OrgXmlSaxHelpersLocatorImpl < JavaxXmlTransformSourceLocator, JavaIoSerializable > {
 @public
  /*!
   @brief The SAX Locator object.
   */
  id<OrgXmlSaxLocator> m_locator_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor SAXSourceLocator
 */
- (instancetype)init;

/*!
 @brief Constructor SAXSourceLocator
 @param locator Source locator
 */
- (instancetype)initWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Constructor SAXSourceLocator
 @param spe SAXParseException exception.
 */
- (instancetype)initWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)spe;

/*!
 @brief Constructor SAXSourceLocator
 @param locator Source locator
 */
- (instancetype)initWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Return the column number where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
 is intended only as an approximation for the sake of error
 reporting; it is not intended to provide sufficient information
 to edit the character content of the original XML document.</p>
 <p>The return value is an approximation of the column number
 in the document entity or external parsed entity where the
 markup triggering the event appears.</p>
 @return The column number, or -1 if none is available.
 - seealso: #getLineNumber
 */
- (jint)getColumnNumber;

/*!
 @brief Return the line number where the current document event ends.
 <p><strong>Warning:</strong> The return value from the method
 is intended only as an approximation for the sake of error
 reporting; it is not intended to provide sufficient information
 to edit the character content of the original XML document.</p>
 <p>The return value is an approximation of the line number
 in the document entity or external parsed entity where the
 markup triggering the event appears.</p>
 @return The line number, or -1 if none is available.
 - seealso: #getColumnNumber
 */
- (jint)getLineNumber;

/*!
 @brief Return the public identifier for the current document event.
 <p>The return value is the public identifier of the document
 entity or of the external parsed entity in which the markup
 triggering the event appears.</p>
 @return A string containing the public identifier, or
 null if none is available.
 - seealso: #getSystemId
 */
- (NSString *)getPublicId;

/*!
 @brief Return the system identifier for the current document event.
 <p>The return value is the system identifier of the document
 entity or of the external parsed entity in which the markup
 triggering the event appears.</p>
 <p>If the system identifier is a URL, the parser must resolve it
 fully before passing it to the application.</p>
 @return A string containing the system identifier, or null
 if none is available.
 - seealso: #getPublicId
 */
- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsSAXSourceLocator)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsSAXSourceLocator, m_locator_, id<OrgXmlSaxLocator>)

inline jlong OrgApacheXmlUtilsSAXSourceLocator_get_serialVersionUID();
#define OrgApacheXmlUtilsSAXSourceLocator_serialVersionUID 3181680946321164112LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsSAXSourceLocator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsSAXSourceLocator_init(OrgApacheXmlUtilsSAXSourceLocator *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *new_OrgApacheXmlUtilsSAXSourceLocator_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *create_OrgApacheXmlUtilsSAXSourceLocator_init();

FOUNDATION_EXPORT void OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxLocator_(OrgApacheXmlUtilsSAXSourceLocator *self, id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *new_OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxLocator_(id<OrgXmlSaxLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *create_OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxLocator_(id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT void OrgApacheXmlUtilsSAXSourceLocator_initWithJavaxXmlTransformSourceLocator_(OrgApacheXmlUtilsSAXSourceLocator *self, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *new_OrgApacheXmlUtilsSAXSourceLocator_initWithJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *create_OrgApacheXmlUtilsSAXSourceLocator_initWithJavaxXmlTransformSourceLocator_(id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT void OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxSAXParseException_(OrgApacheXmlUtilsSAXSourceLocator *self, OrgXmlSaxSAXParseException *spe);

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *new_OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxSAXParseException_(OrgXmlSaxSAXParseException *spe) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSAXSourceLocator *create_OrgApacheXmlUtilsSAXSourceLocator_initWithOrgXmlSaxSAXParseException_(OrgXmlSaxSAXParseException *spe);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsSAXSourceLocator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsSAXSourceLocator")
