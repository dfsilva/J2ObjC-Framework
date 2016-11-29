//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/XSLTElementProcessor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementProcessor")
#ifdef RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor
#define INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementProcessor 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementProcessor 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorXSLTElementProcessor_) && (INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementProcessor || defined(INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor))
#define OrgApacheXalanProcessorXSLTElementProcessor_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class IOSCharArray;
@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanProcessorXSLTElementDef;
@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxAttributes;

/*!
 @brief This class acts as the superclass for all stylesheet element
 processors, and deals with things that are common to all elements.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 */
@interface OrgApacheXalanProcessorXSLTElementProcessor : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Receive notification of character data inside an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the
 character array.
 */
- (void)charactersWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                 withCharArray:(IOSCharArray *)ch
                                                       withInt:(jint)start
                                                       withInt:(jint)length;

/*!
 @brief Receive notification of the end of an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

/*!
 @brief Receive notification of ignorable whitespace in element content.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param ch The whitespace characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the
 character array.
 */
- (void)ignorableWhitespaceWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                          withCharArray:(IOSCharArray *)ch
                                                                withInt:(jint)start
                                                                withInt:(jint)length;

/*!
 @brief Receive notification of a notation declaration.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param name The notation name.
 @param publicId The notation public identifier, or null if not
 available.
 @param systemId The notation system identifier.
 - seealso: org.xml.sax.DTDHandler#notationDecl
 */
- (void)notationDeclWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)name
                                                    withNSString:(NSString *)publicId
                                                    withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a processing instruction.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param target The processing instruction target.
 @param data The processing instruction data, or null if
 none is supplied.
 */
- (void)processingInstructionWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                             withNSString:(NSString *)target
                                                             withNSString:(NSString *)data;

/*!
 @brief Resolve an external entity.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param publicId The public identifer, or null if none is
 available.
 @param systemId The system identifier provided in the XML
 document.
 @return The new input source, or null to require the
 default behaviour.
 */
- (OrgXmlSaxInputSource *)resolveEntityWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                                       withNSString:(NSString *)publicId
                                                                       withNSString:(NSString *)systemId;

/*!
 @brief Receive notification of a skipped entity.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param name The name of the skipped entity.
 */
- (void)skippedEntityWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                     withNSString:(NSString *)name;

/*!
 @brief Receive notification of the start of an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 @param attributes The specified or defaulted attributes.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

/*!
 @brief Receive notification of the start of the non-text event.
 This
 is sent to the current processor when any non-text event occurs.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 */
- (void)startNonTextWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

/*!
 @brief Receive notification of an unparsed entity declaration.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param name The entity name.
 @param publicId The entity public identifier, or null if not
 available.
 @param systemId The entity system identifier.
 @param notationName The name of the associated notation.
 - seealso: org.xml.sax.DTDHandler#unparsedEntityDecl
 */
- (void)unparsedEntityDeclWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                          withNSString:(NSString *)name
                                                          withNSString:(NSString *)publicId
                                                          withNSString:(NSString *)systemId
                                                          withNSString:(NSString *)notationName;

#pragma mark Package-Private

/*!
 @brief Construct a processor for top-level elements.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 */
- (instancetype)init;

/*!
 @brief Get the element definition that belongs to this element.
 @return The element definition object that produced and constrains this element.
 */
- (OrgApacheXalanProcessorXSLTElementDef *)getElemDef;

/*!
 @brief Set the element definition that belongs to this element.
 @param def The element definition object that produced and constrains this element.
 */
- (void)setElemDefWithOrgApacheXalanProcessorXSLTElementDef:(OrgApacheXalanProcessorXSLTElementDef *)def;

/*!
 @brief Set the properties of an object from the given attribute list.
 @param handler The stylesheet's Content handler, needed for
 error reporting.
 @param rawName The raw name of the owner element, needed for
 error reporting.
 @param attributes The list of attributes.
 @param target The target element where the properties will be set.
 */
- (void)setPropertiesFromAttributesWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                                   withNSString:(NSString *)rawName
                                                        withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes
                                 withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)target;

/*!
 @brief Set the properties of an object from the given attribute list.
 @param handler The stylesheet's Content handler, needed for
 error reporting.
 @param rawName The raw name of the owner element, needed for
 error reporting.
 @param attributes The list of attributes.
 @param target The target element where the properties will be set.
 @param throwError True if it should throw an error if an
 attribute is not defined.
 @return the attributes not allowed on this element.
 @throws TransformerException
 */
- (id<OrgXmlSaxAttributes>)setPropertiesFromAttributesWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                                                      withNSString:(NSString *)rawName
                                                                           withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes
                                                    withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)target
                                                                                       withBoolean:(jboolean)throwError;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorXSLTElementProcessor)

inline jlong OrgApacheXalanProcessorXSLTElementProcessor_get_serialVersionUID();
#define OrgApacheXalanProcessorXSLTElementProcessor_serialVersionUID 5597421564955304421LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorXSLTElementProcessor, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorXSLTElementProcessor_init(OrgApacheXalanProcessorXSLTElementProcessor *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementProcessor *new_OrgApacheXalanProcessorXSLTElementProcessor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorXSLTElementProcessor *create_OrgApacheXalanProcessorXSLTElementProcessor_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorXSLTElementProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorXSLTElementProcessor")
