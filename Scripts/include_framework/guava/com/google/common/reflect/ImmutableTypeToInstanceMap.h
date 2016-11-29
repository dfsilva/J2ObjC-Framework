//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/reflect/ImmutableTypeToInstanceMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonReflectImmutableTypeToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonReflectImmutableTypeToInstanceMap

#if !defined (ComGoogleCommonReflectImmutableTypeToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectImmutableTypeToInstanceMap))
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "../../../../../com/google/common/collect/ForwardingMap.h"

#define RESTRICT_ComGoogleCommonReflectTypeToInstanceMap 1
#define INCLUDE_ComGoogleCommonReflectTypeToInstanceMap 1
#include "../../../../../com/google/common/reflect/TypeToInstanceMap.h"

@class ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonReflectImmutableTypeToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonReflectTypeToInstanceMap >

#pragma mark Public

+ (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)builder;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

- (id)getInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type;

+ (ComGoogleCommonReflectImmutableTypeToInstanceMap *)of;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

- (id)putInstanceWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)type
                                              withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap *ComGoogleCommonReflectImmutableTypeToInstanceMap_of();

FOUNDATION_EXPORT ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *ComGoogleCommonReflectImmutableTypeToInstanceMap_builder();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap)

#endif

#if !defined (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap || defined(INCLUDE_ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder))
#define ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder_

@class ComGoogleCommonReflectImmutableTypeToInstanceMap;
@class ComGoogleCommonReflectTypeToken;
@class IOSClass;

@interface ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonReflectImmutableTypeToInstanceMap *)build;

- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithIOSClass:(IOSClass *)key
                                                                       withId:(id)value;

- (ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder *)putWithComGoogleCommonReflectTypeToken:(ComGoogleCommonReflectTypeToken *)key
                                                                                              withId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonReflectImmutableTypeToInstanceMap_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonReflectImmutableTypeToInstanceMap")
