//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/NewInstance.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersNewInstance")
#ifdef RESTRICT_OrgXmlSaxHelpersNewInstance
#define INCLUDE_ALL_OrgXmlSaxHelpersNewInstance 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersNewInstance 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersNewInstance

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxHelpersNewInstance_) && (INCLUDE_ALL_OrgXmlSaxHelpersNewInstance || defined(INCLUDE_OrgXmlSaxHelpersNewInstance))
#define OrgXmlSaxHelpersNewInstance_

@class JavaLangClassLoader;

/*!
 @brief Create a new instance of a class by name.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This class contains a static method for creating an instance of a
 class from an explicit class name.  It tries to use the thread's context
 ClassLoader if possible and falls back to using
 Class.forName(String).</p>
 <p>This code is designed to compile and run on JDK version 1.1 and later
 including versions of Java 2.</p>
 @author Edwin Goei, David Brownell
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersNewInstance : NSObject

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Figure out which ClassLoader to use.
 For JDK 1.2 and later use
 the context ClassLoader.
 */
+ (JavaLangClassLoader *)getClassLoader;

/*!
 @brief Creates a new instance of the specified class name
 Package private so this code is not exposed at the API level.
 */
+ (id)newInstanceWithNSString:(NSString *)className_ OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersNewInstance)

FOUNDATION_EXPORT id OrgXmlSaxHelpersNewInstance_newInstanceWithNSString_(NSString *className_);

FOUNDATION_EXPORT JavaLangClassLoader *OrgXmlSaxHelpersNewInstance_getClassLoader();

FOUNDATION_EXPORT void OrgXmlSaxHelpersNewInstance_init(OrgXmlSaxHelpersNewInstance *self);

FOUNDATION_EXPORT OrgXmlSaxHelpersNewInstance *new_OrgXmlSaxHelpersNewInstance_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxHelpersNewInstance *create_OrgXmlSaxHelpersNewInstance_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersNewInstance)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersNewInstance")
