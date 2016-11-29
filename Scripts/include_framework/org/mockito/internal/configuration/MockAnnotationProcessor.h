//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/MockAnnotationProcessor.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationMockAnnotationProcessor")
#ifdef RESTRICT_OrgMockitoInternalConfigurationMockAnnotationProcessor
#define INCLUDE_ALL_OrgMockitoInternalConfigurationMockAnnotationProcessor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationMockAnnotationProcessor 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationMockAnnotationProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationMockAnnotationProcessor_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationMockAnnotationProcessor || defined(INCLUDE_OrgMockitoInternalConfigurationMockAnnotationProcessor))
#define OrgMockitoInternalConfigurationMockAnnotationProcessor_

#define RESTRICT_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#define INCLUDE_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#include "../../../../org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoMock;

/*!
 @brief Instantiates a mock on a field annotated by <code>Mock</code>
 */
@interface OrgMockitoInternalConfigurationMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationMockAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationMockAnnotationProcessor_init(OrgMockitoInternalConfigurationMockAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockAnnotationProcessor *new_OrgMockitoInternalConfigurationMockAnnotationProcessor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockAnnotationProcessor *create_OrgMockitoInternalConfigurationMockAnnotationProcessor_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationMockAnnotationProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationMockAnnotationProcessor")
