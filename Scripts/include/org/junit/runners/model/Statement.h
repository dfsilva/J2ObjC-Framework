//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/runners/model/Statement.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnersModelStatement")
#ifdef RESTRICT_OrgJunitRunnersModelStatement
#define INCLUDE_ALL_OrgJunitRunnersModelStatement 0
#else
#define INCLUDE_ALL_OrgJunitRunnersModelStatement 1
#endif
#undef RESTRICT_OrgJunitRunnersModelStatement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnersModelStatement_) && (INCLUDE_ALL_OrgJunitRunnersModelStatement || defined(INCLUDE_OrgJunitRunnersModelStatement))
#define OrgJunitRunnersModelStatement_

/*!
 @brief Represents one or more actions to be taken at runtime in the course
 of running a JUnit test suite.
 @since 4.5
 */
@interface OrgJunitRunnersModelStatement : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Run the action, throwing a <code>Throwable</code> if anything goes wrong.
 */
- (void)evaluate;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnersModelStatement)

FOUNDATION_EXPORT void OrgJunitRunnersModelStatement_init(OrgJunitRunnersModelStatement *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnersModelStatement)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnersModelStatement")
