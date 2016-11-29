//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/FixMethodOrder.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitFixMethodOrder")
#ifdef RESTRICT_OrgJunitFixMethodOrder
#define INCLUDE_ALL_OrgJunitFixMethodOrder 0
#else
#define INCLUDE_ALL_OrgJunitFixMethodOrder 1
#endif
#undef RESTRICT_OrgJunitFixMethodOrder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitFixMethodOrder_) && (INCLUDE_ALL_OrgJunitFixMethodOrder || defined(INCLUDE_OrgJunitFixMethodOrder))
#define OrgJunitFixMethodOrder_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class OrgJunitRunnersMethodSorters;

/*!
 @brief This class allows the user to choose the order of execution of the methods within a test class.
 <br/>
 <br/>
 The default order of execution of JUnit tests within a class is deterministic but not predictable.
 The order of execution is not guaranteed for Java 7 (and some previous versions), and can even change
 from run to run, so the order of execution was changed to be deterministic (in JUnit 4.11)
 <br/>
 It is recommended that test methods be written so that they are independent of the order that they are executed.
 However, there may be a number of dependent tests either through error or by design.
 This class allows the user to specify the order of execution of test methods.
 <br/>
 For possibilities, see <code>MethodSorters</code>
 Here is an example:
 @code

  &#064;FixMethodOrder(MethodSorters.NAME_ASCENDING)
  public class MyTest {
  }
  
@endcode
 - seealso: org.junit.runners.MethodSorters
 @since 4.11
 */
@protocol OrgJunitFixMethodOrder < JavaLangAnnotationAnnotation >

@property (readonly) OrgJunitRunnersMethodSorters *value;

@end

@interface OrgJunitFixMethodOrder : NSObject < OrgJunitFixMethodOrder > {
 @public
  OrgJunitRunnersMethodSorters *value_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitFixMethodOrder)

FOUNDATION_EXPORT id<OrgJunitFixMethodOrder> create_OrgJunitFixMethodOrder(OrgJunitRunnersMethodSorters *value);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitFixMethodOrder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitFixMethodOrder")
