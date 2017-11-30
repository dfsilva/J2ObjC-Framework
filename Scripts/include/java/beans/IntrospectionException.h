//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/IntrospectionException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansIntrospectionException")
#ifdef RESTRICT_JavaBeansIntrospectionException
#define INCLUDE_ALL_JavaBeansIntrospectionException 0
#else
#define INCLUDE_ALL_JavaBeansIntrospectionException 1
#endif
#undef RESTRICT_JavaBeansIntrospectionException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansIntrospectionException_) && (INCLUDE_ALL_JavaBeansIntrospectionException || defined(INCLUDE_JavaBeansIntrospectionException))
#define JavaBeansIntrospectionException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

@interface JavaBeansIntrospectionException : JavaLangException

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansIntrospectionException)

FOUNDATION_EXPORT void JavaBeansIntrospectionException_initWithNSString_(JavaBeansIntrospectionException *self, NSString *message);

FOUNDATION_EXPORT JavaBeansIntrospectionException *new_JavaBeansIntrospectionException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansIntrospectionException *create_JavaBeansIntrospectionException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansIntrospectionException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansIntrospectionException")
