//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/junit/framework/Test.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkTest")
#ifdef RESTRICT_JunitFrameworkTest
#define INCLUDE_ALL_JunitFrameworkTest 0
#else
#define INCLUDE_ALL_JunitFrameworkTest 1
#endif
#undef RESTRICT_JunitFrameworkTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkTest_) && (INCLUDE_ALL_JunitFrameworkTest || defined(INCLUDE_JunitFrameworkTest))
#define JunitFrameworkTest_

@class JunitFrameworkTestResult;

/*!
 @brief A <em>Test</em> can be run and collect its results.
 - seealso: TestResult
 */
@protocol JunitFrameworkTest < JavaObject >

/*!
 @brief Counts the number of test cases that will be run by this test.
 */
- (jint)countTestCases;

/*!
 @brief Runs a test and collects its result in a TestResult instance.
 */
- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkTest)

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkTest)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkTest")