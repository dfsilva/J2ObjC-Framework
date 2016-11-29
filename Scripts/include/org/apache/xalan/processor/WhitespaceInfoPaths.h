//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/WhitespaceInfoPaths.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths")
#ifdef RESTRICT_OrgApacheXalanProcessorWhitespaceInfoPaths
#define INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorWhitespaceInfoPaths

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorWhitespaceInfoPaths_) && (INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths || defined(INCLUDE_OrgApacheXalanProcessorWhitespaceInfoPaths))
#define OrgApacheXalanProcessorWhitespaceInfoPaths_

#define RESTRICT_OrgApacheXalanTemplatesWhiteSpaceInfo 1
#define INCLUDE_OrgApacheXalanTemplatesWhiteSpaceInfo 1
#include "org/apache/xalan/templates/WhiteSpaceInfo.h"

@class JavaUtilVector;
@class OrgApacheXalanTemplatesStylesheet;

@interface OrgApacheXalanProcessorWhitespaceInfoPaths : OrgApacheXalanTemplatesWhiteSpaceInfo

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor WhitespaceInfoPaths
 @param thisSheet The current stylesheet
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)thisSheet;

- (void)clearElements;

/*!
 @brief Set from the elements attribute.
 This is a list of 
 whitespace delimited element qualified names that specify
 preservation of whitespace.
 @param elems Should be a non-null reference to a list 
 of <code>org.apache.xpath.XPath</code> objects.
 */
- (void)setElementsWithJavaUtilVector:(JavaUtilVector *)elems;

#pragma mark Package-Private

/*!
 @brief Get the property set by setElements().
 This is a list of 
 whitespace delimited element qualified names that specify
 preservation of whitespace.
 @return A reference to a list of <code>org.apache.xpath.XPath</code> objects, 
 or null.
 */
- (JavaUtilVector *)getElements;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorWhitespaceInfoPaths)

inline jlong OrgApacheXalanProcessorWhitespaceInfoPaths_get_serialVersionUID();
#define OrgApacheXalanProcessorWhitespaceInfoPaths_serialVersionUID 5954766719577516723LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorWhitespaceInfoPaths, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanProcessorWhitespaceInfoPaths *self, OrgApacheXalanTemplatesStylesheet *thisSheet);

FOUNDATION_EXPORT OrgApacheXalanProcessorWhitespaceInfoPaths *new_OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorWhitespaceInfoPaths *create_OrgApacheXalanProcessorWhitespaceInfoPaths_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *thisSheet);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorWhitespaceInfoPaths)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorWhitespaceInfoPaths")
