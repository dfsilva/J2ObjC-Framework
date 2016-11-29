//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/jsr305/build_result/java/javax/annotation/Nonnegative.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationNonnegative")
#ifdef RESTRICT_JavaxAnnotationNonnegative
#define INCLUDE_ALL_JavaxAnnotationNonnegative 0
#else
#define INCLUDE_ALL_JavaxAnnotationNonnegative 1
#endif
#undef RESTRICT_JavaxAnnotationNonnegative

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationNonnegative_) && (INCLUDE_ALL_JavaxAnnotationNonnegative || defined(INCLUDE_JavaxAnnotationNonnegative))
#define JavaxAnnotationNonnegative_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

/*!
 @brief Used to annotate a value that should only contain nonnegative values
 */
@protocol JavaxAnnotationNonnegative < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationMetaWhen *when;

@end

@interface JavaxAnnotationNonnegative : NSObject < JavaxAnnotationNonnegative > {
 @public
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative)

FOUNDATION_EXPORT id<JavaxAnnotationNonnegative> create_JavaxAnnotationNonnegative(JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative)

#endif

#if !defined (JavaxAnnotationNonnegative_Checker_) && (INCLUDE_ALL_JavaxAnnotationNonnegative || defined(INCLUDE_JavaxAnnotationNonnegative_Checker))
#define JavaxAnnotationNonnegative_Checker_

#define RESTRICT_JavaxAnnotationMetaTypeQualifierValidator 1
#define INCLUDE_JavaxAnnotationMetaTypeQualifierValidator 1
#include "../../javax/annotation/meta/TypeQualifierValidator.h"

@class JavaxAnnotationMetaWhen;
@protocol JavaxAnnotationNonnegative;

@interface JavaxAnnotationNonnegative_Checker : NSObject < JavaxAnnotationMetaTypeQualifierValidator >

#pragma mark Public

- (instancetype)init;

- (JavaxAnnotationMetaWhen *)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaxAnnotationNonnegative>)annotation
                                                                       withId:(id)v;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationNonnegative_Checker)

FOUNDATION_EXPORT void JavaxAnnotationNonnegative_Checker_init(JavaxAnnotationNonnegative_Checker *self);

FOUNDATION_EXPORT JavaxAnnotationNonnegative_Checker *new_JavaxAnnotationNonnegative_Checker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxAnnotationNonnegative_Checker *create_JavaxAnnotationNonnegative_Checker_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationNonnegative_Checker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationNonnegative")
