//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/SecuritySupport.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport")
#ifdef RESTRICT_OrgApacheXmlDtmRefSecuritySupport
#define INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefSecuritySupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefSecuritySupport_) && (INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport || defined(INCLUDE_OrgApacheXmlDtmRefSecuritySupport))
#define OrgApacheXmlDtmRefSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
 API.
 Base class with security related methods that work on JDK 1.1.
 */
@interface OrgApacheXmlDtmRefSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Return an appropriate instance of this class, depending on whether
 we're on a JDK 1.1 or J2SE 1.2 (or later) system.
 */
+ (OrgApacheXmlDtmRefSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmRefSecuritySupport)

FOUNDATION_EXPORT OrgApacheXmlDtmRefSecuritySupport *OrgApacheXmlDtmRefSecuritySupport_getInstance();

FOUNDATION_EXPORT void OrgApacheXmlDtmRefSecuritySupport_init(OrgApacheXmlDtmRefSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefSecuritySupport *new_OrgApacheXmlDtmRefSecuritySupport_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefSecuritySupport *create_OrgApacheXmlDtmRefSecuritySupport_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefSecuritySupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport")
