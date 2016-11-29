//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/configuration/AnnotationEngine.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoConfigurationAnnotationEngine")
#ifdef RESTRICT_OrgMockitoConfigurationAnnotationEngine
#define INCLUDE_ALL_OrgMockitoConfigurationAnnotationEngine 0
#else
#define INCLUDE_ALL_OrgMockitoConfigurationAnnotationEngine 1
#endif
#undef RESTRICT_OrgMockitoConfigurationAnnotationEngine

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoConfigurationAnnotationEngine_) && (INCLUDE_ALL_OrgMockitoConfigurationAnnotationEngine || defined(INCLUDE_OrgMockitoConfigurationAnnotationEngine))
#define OrgMockitoConfigurationAnnotationEngine_

@class IOSClass;
@class JavaLangReflectField;
@protocol JavaLangAnnotationAnnotation;

/*!
 @brief Configures mock creation logic behind &#064;Mock, &#064;Captor and &#064;Spy annotations
 <p>
 If you are interested then see implementations or source code of <code>MockitoAnnotations.initMocks(Object)</code>
 */
@protocol OrgMockitoConfigurationAnnotationEngine < JavaObject >

/*!
 @param annotation Annotation
 @param field Field details
 */
- (id)createMockForWithJavaLangAnnotationAnnotation:(id<JavaLangAnnotationAnnotation>)annotation
                           withJavaLangReflectField:(JavaLangReflectField *)field __attribute__((deprecated));

/*!
 @brief Allows extending the interface to perform action on specific fields on the test class.
 <p>
 See the implementation of this method to figure out what is it for.
 @param clazz Class where to extract field information, check implementation for details
 @param testInstance Test instance
 */
- (void)processWithIOSClass:(IOSClass *)clazz
                     withId:(id)testInstance;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoConfigurationAnnotationEngine)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoConfigurationAnnotationEngine)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoConfigurationAnnotationEngine")
