//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ExecutionList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionList")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentExecutionList
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionList 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionList 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentExecutionList

#if !defined (ComGoogleCommonUtilConcurrentExecutionList_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionList || defined(INCLUDE_ComGoogleCommonUtilConcurrentExecutionList))
#define ComGoogleCommonUtilConcurrentExecutionList_

@class JavaUtilLoggingLogger;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentExecutionList : NSObject

#pragma mark Public

- (instancetype)init;

- (void)addWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
 withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)execute;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentExecutionList)

inline JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentExecutionList_get_log();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentExecutionList_log;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonUtilConcurrentExecutionList, log, JavaUtilLoggingLogger *)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentExecutionList_init(ComGoogleCommonUtilConcurrentExecutionList *self);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionList *new_ComGoogleCommonUtilConcurrentExecutionList_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentExecutionList *create_ComGoogleCommonUtilConcurrentExecutionList_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentExecutionList)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentExecutionList")
