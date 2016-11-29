//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/rules/Timeout.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesTimeout")
#ifdef RESTRICT_OrgJunitRulesTimeout
#define INCLUDE_ALL_OrgJunitRulesTimeout 0
#else
#define INCLUDE_ALL_OrgJunitRulesTimeout 1
#endif
#undef RESTRICT_OrgJunitRulesTimeout

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesTimeout_) && (INCLUDE_ALL_OrgJunitRulesTimeout || defined(INCLUDE_OrgJunitRulesTimeout))
#define OrgJunitRulesTimeout_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "../../../org/junit/rules/TestRule.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief The Timeout Rule applies the same timeout to all test methods in a class:
 @code

  public static class HasGlobalTimeout {
  public static String log;
  &#064;Rule
  public Timeout globalTimeout= new Timeout(20);
  &#064;Test
  public void testInfiniteLoop1() {
      log+= &quot;ran1&quot;;
      for (;;) {
         }
     }
  &#064;Test
  public void testInfiniteLoop2() {
      log+= &quot;ran2&quot;;
      for (;;) {
         }
     }
  }
  
@endcode
 @since 4.7
 */
@interface OrgJunitRulesTimeout : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

/*!
 @param millis the millisecond timeout
 */
- (instancetype)initWithInt:(jint)millis;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesTimeout)

FOUNDATION_EXPORT void OrgJunitRulesTimeout_initWithInt_(OrgJunitRulesTimeout *self, jint millis);

FOUNDATION_EXPORT OrgJunitRulesTimeout *new_OrgJunitRulesTimeout_initWithInt_(jint millis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitRulesTimeout *create_OrgJunitRulesTimeout_initWithInt_(jint millis);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesTimeout)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesTimeout")