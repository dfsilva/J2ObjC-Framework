//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/FinalizablePhantomReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizablePhantomReference
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizablePhantomReference

#if !defined (ComGoogleCommonBaseFinalizablePhantomReference_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference || defined(INCLUDE_ComGoogleCommonBaseFinalizablePhantomReference))
#define ComGoogleCommonBaseFinalizablePhantomReference_

#define RESTRICT_JavaLangRefPhantomReference 1
#define INCLUDE_JavaLangRefPhantomReference 1
#include "java/lang/ref/PhantomReference.h"

#define RESTRICT_ComGoogleCommonBaseFinalizableReference 1
#define INCLUDE_ComGoogleCommonBaseFinalizableReference 1
#include "com/google/common/base/FinalizableReference.h"

@class ComGoogleCommonBaseFinalizableReferenceQueue;

@interface ComGoogleCommonBaseFinalizablePhantomReference : JavaLangRefPhantomReference < ComGoogleCommonBaseFinalizableReference >

#pragma mark Protected

- (instancetype)initWithId:(id)referent
withComGoogleCommonBaseFinalizableReferenceQueue:(ComGoogleCommonBaseFinalizableReferenceQueue *)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizablePhantomReference)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizablePhantomReference_initWithId_withComGoogleCommonBaseFinalizableReferenceQueue_(ComGoogleCommonBaseFinalizablePhantomReference *self, id referent, ComGoogleCommonBaseFinalizableReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizablePhantomReference)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizablePhantomReference")
