//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/experimental/max/MaxHistory.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitExperimentalMaxMaxHistory")
#ifdef RESTRICT_OrgJunitExperimentalMaxMaxHistory
#define INCLUDE_ALL_OrgJunitExperimentalMaxMaxHistory 0
#else
#define INCLUDE_ALL_OrgJunitExperimentalMaxMaxHistory 1
#endif
#undef RESTRICT_OrgJunitExperimentalMaxMaxHistory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitExperimentalMaxMaxHistory_) && (INCLUDE_ALL_OrgJunitExperimentalMaxMaxHistory || defined(INCLUDE_OrgJunitExperimentalMaxMaxHistory))
#define OrgJunitExperimentalMaxMaxHistory_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class JavaIoFile;
@class JavaLangLong;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunListener;
@protocol JavaUtilComparator;

/*!
 @brief Stores a subset of the history of each test:
 <ul>
 <li>Last failure timestamp
 <li>Duration of last execution
 </ul>
 */
@interface OrgJunitExperimentalMaxMaxHistory : NSObject < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Loads a <code>MaxHistory</code> from <code>file</code>, or generates a new one that
 will be saved to <code>file</code>.
 */
+ (OrgJunitExperimentalMaxMaxHistory *)forFolderWithJavaIoFile:(JavaIoFile *)file;

/*!
 @return a listener that will update this history based on the test
 results reported.
 */
- (OrgJunitRunnerNotificationRunListener *)listener;

/*!
 @return a comparator that ranks tests based on the JUnit Max sorting
 rules, as described in the <code>MaxCore</code> class comment.
 */
- (id<JavaUtilComparator>)testComparator;

#pragma mark Package-Private

- (JavaLangLong *)getFailureTimestampWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)key;

- (JavaLangLong *)getTestDurationWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)key;

- (jboolean)isNewTestWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)key;

- (void)putTestDurationWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
                                            withLong:(jlong)duration;

- (void)putTestFailureTimestampWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)key
                                                    withLong:(jlong)end;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitExperimentalMaxMaxHistory)

FOUNDATION_EXPORT OrgJunitExperimentalMaxMaxHistory *OrgJunitExperimentalMaxMaxHistory_forFolderWithJavaIoFile_(JavaIoFile *file);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitExperimentalMaxMaxHistory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitExperimentalMaxMaxHistory")
