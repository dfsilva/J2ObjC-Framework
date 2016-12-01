//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/Version.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerVersion")
#ifdef RESTRICT_OrgApacheXmlSerializerVersion
#define INCLUDE_ALL_OrgApacheXmlSerializerVersion 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerVersion 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerVersion

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerVersion_) && (INCLUDE_ALL_OrgApacheXmlSerializerVersion || defined(INCLUDE_OrgApacheXmlSerializerVersion))
#define OrgApacheXmlSerializerVersion_

@class IOSObjectArray;

/*!
 @brief Administrative class to keep track of the version number of
 the Serializer release.
 <P>This class implements the upcoming standard of having
 org.apache.project-name.Version.getVersion() be a standard way 
 to get version information.</P> 
  general
 */
@interface OrgApacheXmlSerializerVersion : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Development Drop Number.
 Optional identifier designates development drop of
 a specific release. D01 is the first development drop
 of a new release.
 Development drops are works in progress towards a
 compeleted, final release. A specific development drop
 may not completely implement all aspects of a new
 feature, which may take several development drops to
 complete. At the point of the final drop for the
 release, the D suffix will be omitted.
 Each 'D' drops can contain functional enhancements as
 well as defect fixes. 'D' drops may not be as stable as
 the final releases.
 */
+ (jint)getDevelopmentVersionNum;

/*!
 @brief Implementation Language: Java.
 */
+ (NSString *)getImplementationLanguage;

/*!
 @brief Maintenance Drop Number.
 Optional identifier used to designate maintenance
 drop applied to a specific release and contains
 fixes for defects reported. It maintains compatibility
 with the release and contains no API changes.
 When missing, it designates the final and complete
 development drop for a release.
 */
+ (jint)getMaintenanceVersionNum;

/*!
 @brief Major version number.
 Version number. This changes only when there is a
 significant, externally apparent enhancement from
 the previous release. 'n' represents the n'th
 version.
 Clients should carefully consider the implications
 of new versions as external interfaces and behaviour
 may have changed.
 */
+ (jint)getMajorVersionNum;

/*!
 @brief Name of product: Serializer.
 */
+ (NSString *)getProduct;

/*!
 @brief Release Number.
 Release number. This changes when:
 -  a new set of functionality is to be added, eg,
 implementation of a new W3C specification.
 -  API or behaviour change.
 -  its designated as a reference release.
 */
+ (jint)getReleaseVersionNum;

/*!
 @brief Get the basic version string for the current Serializer.
 Version String formatted like 
 <CODE>"<B>Serializer</B> <B>Java</B> v.r[.dd| <B>D</B>nn]"</CODE>.
 Futurework: have this read version info from jar manifest.
 @return String denoting our current version
 */
+ (NSString *)getVersion;

/*!
 @brief Print the processor version to the command line.
 @param argv command line arguments, unused.
 */
+ (void)mainWithNSStringArray:(IOSObjectArray *)argv;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerVersion)

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerVersion_getVersion();

FOUNDATION_EXPORT void OrgApacheXmlSerializerVersion_mainWithNSStringArray_(IOSObjectArray *argv);

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerVersion_getProduct();

FOUNDATION_EXPORT NSString *OrgApacheXmlSerializerVersion_getImplementationLanguage();

FOUNDATION_EXPORT jint OrgApacheXmlSerializerVersion_getMajorVersionNum();

FOUNDATION_EXPORT jint OrgApacheXmlSerializerVersion_getReleaseVersionNum();

FOUNDATION_EXPORT jint OrgApacheXmlSerializerVersion_getMaintenanceVersionNum();

FOUNDATION_EXPORT jint OrgApacheXmlSerializerVersion_getDevelopmentVersionNum();

FOUNDATION_EXPORT void OrgApacheXmlSerializerVersion_init(OrgApacheXmlSerializerVersion *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerVersion *new_OrgApacheXmlSerializerVersion_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerVersion *create_OrgApacheXmlSerializerVersion_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerVersion)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerVersion")
