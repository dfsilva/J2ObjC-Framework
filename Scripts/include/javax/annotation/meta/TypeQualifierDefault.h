//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/jsr305/build_result/java/javax/annotation/meta/TypeQualifierDefault.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault")
#ifdef RESTRICT_JavaxAnnotationMetaTypeQualifierDefault
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault 0
#else
#define INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault 1
#endif
#undef RESTRICT_JavaxAnnotationMetaTypeQualifierDefault

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationMetaTypeQualifierDefault_) && (INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault || defined(INCLUDE_JavaxAnnotationMetaTypeQualifierDefault))
#define JavaxAnnotationMetaTypeQualifierDefault_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief This qualifier is applied to an annotation to denote that the annotation
  defines a default type qualifier that is visible within the scope of the
  element it is applied to.
 */
@protocol JavaxAnnotationMetaTypeQualifierDefault < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;

@end

@interface JavaxAnnotationMetaTypeQualifierDefault : NSObject < JavaxAnnotationMetaTypeQualifierDefault > {
 @public
  IOSObjectArray *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationMetaTypeQualifierDefault)

FOUNDATION_EXPORT id<JavaxAnnotationMetaTypeQualifierDefault> create_JavaxAnnotationMetaTypeQualifierDefault(IOSObjectArray *value);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationMetaTypeQualifierDefault)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationMetaTypeQualifierDefault")
