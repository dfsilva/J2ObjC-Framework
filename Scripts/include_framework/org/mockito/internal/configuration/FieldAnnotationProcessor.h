//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/FieldAnnotationProcessor.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationFieldAnnotationProcessor")
#ifdef RESTRICT_OrgMockitoInternalConfigurationFieldAnnotationProcessor
#define INCLUDE_ALL_OrgMockitoInternalConfigurationFieldAnnotationProcessor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationFieldAnnotationProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationFieldAnnotationProcessor_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationFieldAnnotationProcessor || defined(INCLUDE_OrgMockitoInternalConfigurationFieldAnnotationProcessor))
#define OrgMockitoInternalConfigurationFieldAnnotationProcessor_

@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief Simple annotation processor interface.
 */
@protocol OrgMockitoInternalConfigurationFieldAnnotationProcessor < JavaObject >

- (id)processWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationFieldAnnotationProcessor)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationFieldAnnotationProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationFieldAnnotationProcessor")