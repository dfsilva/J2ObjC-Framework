//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/jsr305/build_result/java/javax/annotation/meta/TypeQualifierValidator.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierValidator
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationMetaTypeQualifierValidator_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierValidator))
#define JavaxAnnotationMetaTypeQualifierValidator_

@class JavaxAnnotationMetaWhen;
@protocol JavaLangAnnotationAnnotation;

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

@protocol JavaxAnnotationMetaTypeQualifierValidator < JavaObject >

/*!
 @brief Given a type qualifier, check to see if a known specific constant value
 is an instance of the set of values denoted by the qualifier.
 @param annotation
 the type qualifier
 @param value
 the value to check
 @return a value indicating whether or not the value is an member of the
 values denoted by the type qualifier
 */
- (JavaxAnnotationMetaWhen * __nonnull)forConstantValueWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation> __nonnull)annotation
                                                                                 withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierValidator)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierValidator)

#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierValidator")
