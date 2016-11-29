//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/Test.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitTest")
#ifdef RESTRICT_OrgJunitTest
#define INCLUDE_ALL_OrgJunitTest 0
#else
#define INCLUDE_ALL_OrgJunitTest 1
#endif
#undef RESTRICT_OrgJunitTest

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitTest_) && (INCLUDE_ALL_OrgJunitTest || defined(INCLUDE_OrgJunitTest))
#define OrgJunitTest_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief <p>The <code>Test</code> annotation tells JUnit that the <code>public void</code> method
 to which it is attached can be run as a test case.
 To run the method,
 JUnit first constructs a fresh instance of the class then invokes the
 annotated method. Any exceptions thrown by the test will be reported
 by JUnit as a failure. If no exceptions are thrown, the test is assumed
 to have succeeded.</p>
 <p>A simple test looks like this:
 @code

  public class Example {
    <b>&#064;Test</b>
    public void method() {
       org.junit.Assert.assertTrue( new ArrayList().isEmpty() );
    }
  }
  
@endcode
 </p>
 <p>The <code>Test</code> annotation supports two optional parameters.
 The first, <code>expected</code>, declares that a test method should throw
 an exception. If it doesn't throw an exception or if it throws a different exception
 than the one declared, the test fails. For example, the following test succeeds:
 @code

    &#064;Test(<b>expected=IndexOutOfBoundsException.class</b>) public void outOfBounds() {
       new ArrayList&lt;Object&gt;().get(1);
    }
  
@endcode</p>
 <p>The second optional parameter, <code>timeout</code>, causes a test to fail if it takes
 longer than a specified amount of clock time (measured in milliseconds). The following test fails:
 @code

    &#064;Test(<b>timeout=100</b>) public void infinity() {
       while(true);
    }
  
@endcode</p>
 @since 4.0
 */
@protocol OrgJunitTest < JavaLangAnnotationAnnotation >

@property (readonly) IOSClass *expected;
@property (readonly) jlong timeout;

@end

@interface OrgJunitTest : NSObject < OrgJunitTest > {
 @public
  IOSClass *expected_;
  jlong timeout_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitTest)

FOUNDATION_EXPORT id<OrgJunitTest> create_OrgJunitTest(IOSClass *expected, jlong timeout);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitTest)

#endif

#if !defined (OrgJunitTest_None_) && (INCLUDE_ALL_OrgJunitTest || defined(INCLUDE_OrgJunitTest_None))
#define OrgJunitTest_None_

/*!
 @brief Default empty exception
 */
@interface OrgJunitTest_None : NSException

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitTest_None)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitTest_None)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitTest")
