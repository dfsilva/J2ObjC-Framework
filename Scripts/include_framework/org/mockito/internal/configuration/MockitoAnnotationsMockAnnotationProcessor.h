//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/MockitoAnnotationsMockAnnotationProcessor.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor")
#ifdef RESTRICT_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor
#define INCLUDE_ALL_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor || defined(INCLUDE_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor))
#define OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_

#define RESTRICT_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#define INCLUDE_OrgMockitoInternalConfigurationFieldAnnotationProcessor 1
#include "../../../../org/mockito/internal/configuration/FieldAnnotationProcessor.h"

@class JavaLangReflectField;
@protocol OrgMockitoMockitoAnnotations_Mock;

/*!
 @brief Instantiates a mock on a field annotated by <code>Mock</code>
 */
@interface OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor : NSObject < OrgMockitoInternalConfigurationFieldAnnotationProcessor >

#pragma mark Public

- (instancetype)init;

- (id)processWithJavaLangAnnotationAnnotation:(id<OrgMockitoMockitoAnnotations_Mock>)annotation
                     withJavaLangReflectField:(JavaLangReflectField *)field;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor *new_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor *create_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationMockitoAnnotationsMockAnnotationProcessor")
