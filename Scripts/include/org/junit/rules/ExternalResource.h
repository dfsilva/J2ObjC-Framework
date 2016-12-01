//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/ExternalResource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesExternalResource")
#ifdef RESTRICT_OrgJunitRulesExternalResource
#define INCLUDE_ALL_OrgJunitRulesExternalResource 0
#else
#define INCLUDE_ALL_OrgJunitRulesExternalResource 1
#endif
#undef RESTRICT_OrgJunitRulesExternalResource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesExternalResource_) && (INCLUDE_ALL_OrgJunitRulesExternalResource || defined(INCLUDE_OrgJunitRulesExternalResource))
#define OrgJunitRulesExternalResource_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief A base class for Rules (like TemporaryFolder) that set up an external
 resource before a test (a file, socket, server, database connection, etc.),
 and guarantee to tear it down afterward:
 @code

  public static class UsesExternalResource {
  Server myServer= new Server();
  &#064;Rule
  public ExternalResource resource= new ExternalResource() {
      &#064;Override
      protected void before() throws Throwable {
          myServer.connect();
         };
      &#064;Override
      protected void after() {
          myServer.disconnect();
         };
     };
  &#064;Test
  public void testFoo() {
      new Client().run(myServer);
     }
  }
  
@endcode
 @since 4.7
 */
@interface OrgJunitRulesExternalResource : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

#pragma mark Protected

/*!
 @brief Override to tear down your specific external resource.
 */
- (void)after;

/*!
 @brief Override to set up your specific external resource.
 @throws if setup fails (which will disable <code>after</code>
 */
- (void)before;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesExternalResource)

FOUNDATION_EXPORT void OrgJunitRulesExternalResource_init(OrgJunitRulesExternalResource *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesExternalResource)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesExternalResource")
