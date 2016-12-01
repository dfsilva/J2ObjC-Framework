//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/SystemIDResolver.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSystemIDResolver")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsSystemIDResolver
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSystemIDResolver 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSystemIDResolver 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsSystemIDResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerUtilsSystemIDResolver_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsSystemIDResolver || defined(INCLUDE_OrgApacheXmlSerializerUtilsSystemIDResolver))
#define OrgApacheXmlSerializerUtilsSystemIDResolver_

/*!
 @brief This class is used to resolve relative URIs and SystemID
 strings into absolute URIs.
 <p>This is a generic utility for resolving URIs, other than the
 fact that it's declared to throw TransformerException.  Please
 see code comments for details on how resolution is performed.</p>
 This class is a copy of the one in org.apache.xml.utils.
 It exists to cut the serializers dependancy on that package.
 This class is not a public API, it is only public because it is
 used in org.apache.xml.serializer.
  internal
 */
@interface OrgApacheXmlSerializerUtilsSystemIDResolver : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Take a SystemID string and try to turn it into a good absolute URI.
 @param systemId A URI string, which may be absolute or relative.
 @return The resolved absolute URI
 */
+ (NSString *)getAbsoluteURIWithNSString:(NSString *)systemId;

/*!
 @brief Take a SystemID string and try to turn it into a good absolute URI.
 @param urlString SystemID string
 @param base The URI string used as the base for resolving the systemID
 @return The resolved absolute URI
 @throws TransformerException thrown if the string can't be turned into a URI.
 */
+ (NSString *)getAbsoluteURIWithNSString:(NSString *)urlString
                            withNSString:(NSString *)base;

/*!
 @brief Get an absolute URI from a given relative URI (local path).
 <p>The relative URI is a local filesystem path. The path can be
 absolute or relative. If it is a relative path, it is resolved relative
 to the system property "user.dir" if it is available; if not (i.e. in an
 Applet perhaps which throws SecurityException) then we just return the
 relative path. The space and backslash characters are also replaced to
 generate a good absolute URI.</p>
 @param localPath The relative URI to resolve
 @return Resolved absolute URI
 */
+ (NSString *)getAbsoluteURIFromRelativeWithNSString:(NSString *)localPath;

/*!
 @brief Return true if the local path is an absolute path.
 @param systemId The path string
 @return true if the path is absolute
 */
+ (jboolean)isAbsolutePathWithNSString:(NSString *)systemId;

/*!
 @brief Return true if the systemId denotes an absolute URI .
 @param systemId The systemId string
 @return true if the systemId is an an absolute URI
 */
+ (jboolean)isAbsoluteURIWithNSString:(NSString *)systemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsSystemIDResolver)

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerUtilsSystemIDResolver_getAbsoluteURIFromRelativeWithNSString_(NSString *localPath);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsSystemIDResolver_isAbsoluteURIWithNSString_(NSString *systemId);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsSystemIDResolver_isAbsolutePathWithNSString_(NSString *systemId);

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerUtilsSystemIDResolver_getAbsoluteURIWithNSString_(NSString *systemId);

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerUtilsSystemIDResolver_getAbsoluteURIWithNSString_withNSString_(NSString *urlString, NSString *base);

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsSystemIDResolver_init(OrgApacheXmlSerializerUtilsSystemIDResolver *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSystemIDResolver *new_OrgApacheXmlSerializerUtilsSystemIDResolver_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSystemIDResolver *create_OrgApacheXmlSerializerUtilsSystemIDResolver_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsSystemIDResolver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSystemIDResolver")
