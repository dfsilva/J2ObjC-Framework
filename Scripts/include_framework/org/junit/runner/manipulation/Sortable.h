//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/runner/manipulation/Sortable.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRunnerManipulationSortable")
#ifdef RESTRICT_OrgJunitRunnerManipulationSortable
#define INCLUDE_ALL_OrgJunitRunnerManipulationSortable 0
#else
#define INCLUDE_ALL_OrgJunitRunnerManipulationSortable 1
#endif
#undef RESTRICT_OrgJunitRunnerManipulationSortable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRunnerManipulationSortable_) && (INCLUDE_ALL_OrgJunitRunnerManipulationSortable || defined(INCLUDE_OrgJunitRunnerManipulationSortable))
#define OrgJunitRunnerManipulationSortable_

@class OrgJunitRunnerManipulationSorter;

/*!
 @brief Interface for runners that allow sorting of tests.
 By sorting tests based on when they last failed, most recently
 failed first, you can reduce the average time to the first test failing. Test sorting should not be used to
 cope with order dependencies between tests. Tests that are isolated from each other are less
 expensive to maintain and can be run individually.
 @since 4.0
 */
@protocol OrgJunitRunnerManipulationSortable < JavaObject >

/*!
 @brief Sorts the tests using <code>sorter</code>
 @param sorter the <code>Sorter</code> to use for sorting the tests
 */
- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRunnerManipulationSortable)

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRunnerManipulationSortable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRunnerManipulationSortable")
