//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/UsingToStringOrdering.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectUsingToStringOrdering")
#ifdef RESTRICT_ComGoogleCommonCollectUsingToStringOrdering
#define INCLUDE_ALL_ComGoogleCommonCollectUsingToStringOrdering 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectUsingToStringOrdering 1
#endif
#undef RESTRICT_ComGoogleCommonCollectUsingToStringOrdering

#if !defined (ComGoogleCommonCollectUsingToStringOrdering_) && (INCLUDE_ALL_ComGoogleCommonCollectUsingToStringOrdering || defined(INCLUDE_ComGoogleCommonCollectUsingToStringOrdering))
#define ComGoogleCommonCollectUsingToStringOrdering_

#define RESTRICT_ComGoogleCommonCollectOrdering 1
#define INCLUDE_ComGoogleCommonCollectOrdering 1
#include "com/google/common/collect/Ordering.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@interface ComGoogleCommonCollectUsingToStringOrdering : ComGoogleCommonCollectOrdering < JavaIoSerializable >

#pragma mark Public

- (jint)compareWithId:(id)left
               withId:(id)right;

- (NSString *)description;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectUsingToStringOrdering)

inline ComGoogleCommonCollectUsingToStringOrdering *ComGoogleCommonCollectUsingToStringOrdering_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCollectUsingToStringOrdering *ComGoogleCommonCollectUsingToStringOrdering_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCollectUsingToStringOrdering, INSTANCE, ComGoogleCommonCollectUsingToStringOrdering *)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectUsingToStringOrdering)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectUsingToStringOrdering")
