//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ClassToInstanceMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonCollectClassToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectClassToInstanceMap

#if !defined (ComGoogleCommonCollectClassToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap || defined(INCLUDE_ComGoogleCommonCollectClassToInstanceMap))
#define ComGoogleCommonCollectClassToInstanceMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "../../../../../java/util/Map.h"

@class IOSClass;

@protocol ComGoogleCommonCollectClassToInstanceMap < JavaUtilMap, JavaObject >

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectClassToInstanceMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectClassToInstanceMap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectClassToInstanceMap")
