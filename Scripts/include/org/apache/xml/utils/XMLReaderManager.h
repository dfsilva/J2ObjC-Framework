//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/XMLReaderManager.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsXMLReaderManager")
#ifdef RESTRICT_OrgApacheXmlUtilsXMLReaderManager
#define INCLUDE_ALL_OrgApacheXmlUtilsXMLReaderManager 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsXMLReaderManager 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsXMLReaderManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsXMLReaderManager_) && (INCLUDE_ALL_OrgApacheXmlUtilsXMLReaderManager || defined(INCLUDE_OrgApacheXmlUtilsXMLReaderManager))
#define OrgApacheXmlUtilsXMLReaderManager_

@protocol OrgXmlSaxXMLReader;

/*!
 @brief Creates XMLReader objects and caches them for re-use.
 This class follows the singleton pattern.
 */
@interface OrgApacheXmlUtilsXMLReaderManager : NSObject

#pragma mark Public

/*!
 @brief Retrieves the singleton reader manager
 */
+ (OrgApacheXmlUtilsXMLReaderManager *)getInstance;

/*!
 @brief Retrieves a cached XMLReader for this thread, or creates a new
 XMLReader, if the existing reader is in use.
 When the caller no
 longer needs the reader, it must release it with a call to
 <code>releaseXMLReader</code>.
 */
- (id<OrgXmlSaxXMLReader>)getXMLReader;

/*!
 @brief Mark the cached XMLReader as available.
 If the reader was not
 actually in the cache, do nothing.
 @param reader The XMLReader that's being released.
 */
- (void)releaseXMLReaderWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)reader;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsXMLReaderManager)

FOUNDATION_EXPORT OrgApacheXmlUtilsXMLReaderManager *OrgApacheXmlUtilsXMLReaderManager_getInstance();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsXMLReaderManager)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsXMLReaderManager")
