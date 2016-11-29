//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOMErrorImpl.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOMErrorImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerDom3DOMErrorImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOMErrorImpl))
#define OrgApacheXmlSerializerDom3DOMErrorImpl_

#define RESTRICT_OrgW3cDomDOMError 1
#define INCLUDE_OrgW3cDomDOMError 1
#include "../../../../../org/w3c/dom/DOMError.h"

@class JavaLangException;
@class OrgApacheXmlSerializerDom3DOMLocatorImpl;
@protocol OrgW3cDomDOMLocator;

/*!
 @brief Implementation of the DOM Level 3 DOMError interface.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407/core.html#ERROR-Interfaces-DOMError'>DOMError Interface definition from Document Object Model (DOM) Level 3 Core Specification</a>.
  internal 
 */
@interface OrgApacheXmlSerializerDom3DOMErrorImpl : NSObject < OrgW3cDomDOMError >

#pragma mark Public

/*!
 @param severity
 @param message
 @param type
 */
- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type;

/*!
 @param severity
 @param message
 @param type
 @param exception
 */
- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type
        withJavaLangException:(JavaLangException *)exception;

/*!
 @param severity
 @param message
 @param type
 @param exception
 @param relatedData
 @param location
 */
- (instancetype)initWithShort:(jshort)severity
                 withNSString:(NSString *)message
                 withNSString:(NSString *)type
        withJavaLangException:(JavaLangException *)exception
                       withId:(id)relatedData
withOrgApacheXmlSerializerDom3DOMLocatorImpl:(OrgApacheXmlSerializerDom3DOMLocatorImpl *)location;

/*!
 @brief The location of the DOMError.
 @return A DOMLocator object containing the DOMError location.
 */
- (id<OrgW3cDomDOMLocator>)getLocation;

/*!
 @brief The DOMError message string.
 @return String
 */
- (NSString *)getMessage;

/*!
 @brief The related DOMError.type dependent data if any.
 @return java.lang.Object
 */
- (id)getRelatedData;

/*!
 @brief The related platform dependent exception if any.
 @return A java.lang.Exception
 */
- (id)getRelatedException;

/*!
 @brief The severity of the error, either <code>SEVERITY_WARNING</code>, 
 <code>SEVERITY_ERROR</code>, or <code>SEVERITY_FATAL_ERROR</code>.
 @return A short containing the DOMError severity
 */
- (jshort)getSeverity;

/*!
 @brief Returns a String indicating which related data is expected in relatedData.
 @return A String
 */
- (NSString *)getType;

- (void)reset;

#pragma mark Package-Private

/*!
 @brief Default constructor.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOMErrorImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_init(OrgApacheXmlSerializerDom3DOMErrorImpl *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_init();

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(jshort severity, NSString *message, NSString *type) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_(jshort severity, NSString *message, NSString *type);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type, JavaLangException *exception);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(jshort severity, NSString *message, NSString *type, JavaLangException *exception) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_(jshort severity, NSString *message, NSString *type, JavaLangException *exception);

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(OrgApacheXmlSerializerDom3DOMErrorImpl *self, jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *new_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOMErrorImpl *create_OrgApacheXmlSerializerDom3DOMErrorImpl_initWithShort_withNSString_withNSString_withJavaLangException_withId_withOrgApacheXmlSerializerDom3DOMLocatorImpl_(jshort severity, NSString *message, NSString *type, JavaLangException *exception, id relatedData, OrgApacheXmlSerializerDom3DOMLocatorImpl *location);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOMErrorImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOMErrorImpl")
