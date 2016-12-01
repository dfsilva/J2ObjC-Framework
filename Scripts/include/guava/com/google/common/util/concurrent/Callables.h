//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/Callables.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCallables")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentCallables
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCallables 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentCallables 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentCallables

#if !defined (ComGoogleCommonUtilConcurrentCallables_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentCallables || defined(INCLUDE_ComGoogleCommonUtilConcurrentCallables))
#define ComGoogleCommonUtilConcurrentCallables_

@protocol ComGoogleCommonBaseSupplier;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentCallables : NSObject

#pragma mark Public

+ (id<JavaUtilConcurrentCallable>)returningWithId:(id)value;

#pragma mark Package-Private

+ (id<JavaUtilConcurrentCallable>)threadRenamingWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                               withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

+ (id<JavaLangRunnable>)threadRenamingWithJavaLangRunnable:(id<JavaLangRunnable>)task
                           withComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)nameSupplier;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentCallables)

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> ComGoogleCommonUtilConcurrentCallables_returningWithId_(id value);

FOUNDATION_EXPORT id<JavaUtilConcurrentCallable> ComGoogleCommonUtilConcurrentCallables_threadRenamingWithJavaUtilConcurrentCallable_withComGoogleCommonBaseSupplier_(id<JavaUtilConcurrentCallable> callable, id<ComGoogleCommonBaseSupplier> nameSupplier);

FOUNDATION_EXPORT id<JavaLangRunnable> ComGoogleCommonUtilConcurrentCallables_threadRenamingWithJavaLangRunnable_withComGoogleCommonBaseSupplier_(id<JavaLangRunnable> task, id<ComGoogleCommonBaseSupplier> nameSupplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentCallables)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentCallables")