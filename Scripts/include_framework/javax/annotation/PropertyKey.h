//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/jsr305/build_result/java/javax/annotation/PropertyKey.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationPropertyKey")
#ifdef RESTRICT_JavaxAnnotationPropertyKey
#define INCLUDE_ALL_JavaxAnnotationPropertyKey 0
#else
#define INCLUDE_ALL_JavaxAnnotationPropertyKey 1
#endif
#undef RESTRICT_JavaxAnnotationPropertyKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationPropertyKey_) && (INCLUDE_ALL_JavaxAnnotationPropertyKey || defined(INCLUDE_JavaxAnnotationPropertyKey))
#define JavaxAnnotationPropertyKey_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

@protocol JavaxAnnotationPropertyKey < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

@end

@interface JavaxAnnotationPropertyKey : NSObject < JavaxAnnotationPropertyKey > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationPropertyKey)

FOUNDATION_EXPORT id<JavaxAnnotationPropertyKey> create_JavaxAnnotationPropertyKey(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationPropertyKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationPropertyKey")