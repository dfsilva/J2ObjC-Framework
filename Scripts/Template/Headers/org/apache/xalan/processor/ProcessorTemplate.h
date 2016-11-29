//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorTemplate.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorTemplate
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorTemplate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorTemplate_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate || defined(INCLUDE_OrgApacheXalanProcessorProcessorTemplate))
#define OrgApacheXalanProcessorProcessorTemplate_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "../../../../org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;

/*!
 @brief TransformerFactory for xsl:template markup.
 */
@interface OrgApacheXalanProcessorProcessorTemplate : OrgApacheXalanProcessorProcessorTemplateElem

+ (jlong)serialVersionUID;

#pragma mark Protected

/*!
 @brief Append the current template element to the current
 template element, and then push it onto the current template
 element stack.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param elem Must be a non-null reference to a <code>org.apache.xalan.templates.ElemTemplate</code> object.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)appendAndPushWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                   withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorTemplate)

inline jlong OrgApacheXalanProcessorProcessorTemplate_get_serialVersionUID();
#define OrgApacheXalanProcessorProcessorTemplate_serialVersionUID -8457812845473603860LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorTemplate, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorTemplate_init(OrgApacheXalanProcessorProcessorTemplate *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorTemplate *new_OrgApacheXalanProcessorProcessorTemplate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorTemplate *create_OrgApacheXalanProcessorProcessorTemplate_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorTemplate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorTemplate")