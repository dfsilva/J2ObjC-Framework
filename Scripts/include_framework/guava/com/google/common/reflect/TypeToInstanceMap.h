//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/reflect/TypeToInstanceMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonReflectTypeToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonReflectTypeToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectTypeToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonReflectTypeToInstanceMap

#if !defined (ComGoogleCommonReflectTypeToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonReflectTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectTypeToInstanceMap))
#define ComGoogleCommonReflectTypeToInstanceMap_

#define RESTRICT_JavaUtilMap 1
#define INCLUDE_JavaUtilMap 1
#include "../../../../../java/util/Map.h"

@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

@protocol ComGoogleCommonReflectTypeToInstanceMap < JavaUtilMap, JavaObject >

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectTypeToInstanceMap)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectTypeToInstanceMap)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectTypeToInstanceMap")
