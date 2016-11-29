//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/jsr305/build_result/java/javax/annotation/concurrent/ThreadSafe.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe")
#ifdef RESTRICT_JavaxAnnotationConcurrentThreadSafe
#define INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentThreadSafe

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationConcurrentThreadSafe_) && (INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe || defined(INCLUDE_JavaxAnnotationConcurrentThreadSafe))
#define JavaxAnnotationConcurrentThreadSafe_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

/*!
 @brief ThreadSafe
 The class to which this annotation is applied is thread-safe.
 This means that
 no sequences of accesses (reads and writes to public fields, calls to public
 methods) may put the object into an invalid state, regardless of the
 interleaving of those actions by the runtime, and without requiring any
 additional synchronization or coordination on the part of the caller.
 */
@protocol JavaxAnnotationConcurrentThreadSafe < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentThreadSafe)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentThreadSafe)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentThreadSafe")