//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/test/suitebuilder/annotation/Smoke.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSmoke")
#ifdef RESTRICT_AndroidTestSuitebuilderAnnotationSmoke
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSmoke 0
#else
#define INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSmoke 1
#endif
#undef RESTRICT_AndroidTestSuitebuilderAnnotationSmoke

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTestSuitebuilderAnnotationSmoke_) && (INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSmoke || defined(INCLUDE_AndroidTestSuitebuilderAnnotationSmoke))
#define AndroidTestSuitebuilderAnnotationSmoke_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Marks a test that should run as part of the smoke tests.
 The <code>android.test.suitebuilder.SmokeTestSuiteBuilder</code>
  will run all tests with this annotation.
 */
@protocol AndroidTestSuitebuilderAnnotationSmoke < JavaLangAnnotationAnnotation >

@end

@interface AndroidTestSuitebuilderAnnotationSmoke : NSObject < AndroidTestSuitebuilderAnnotationSmoke >

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTestSuitebuilderAnnotationSmoke)

FOUNDATION_EXPORT id<AndroidTestSuitebuilderAnnotationSmoke> create_AndroidTestSuitebuilderAnnotationSmoke(void);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTestSuitebuilderAnnotationSmoke)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTestSuitebuilderAnnotationSmoke")
