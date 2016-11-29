//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableClassToInstanceMap.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableClassToInstanceMap
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableClassToInstanceMap

#if !defined (ComGoogleCommonCollectImmutableClassToInstanceMap_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap || defined(INCLUDE_ComGoogleCommonCollectImmutableClassToInstanceMap))
#define ComGoogleCommonCollectImmutableClassToInstanceMap_

#define RESTRICT_ComGoogleCommonCollectForwardingMap 1
#define INCLUDE_ComGoogleCommonCollectForwardingMap 1
#include "../../../../../com/google/common/collect/ForwardingMap.h"

#define RESTRICT_ComGoogleCommonCollectClassToInstanceMap 1
#define INCLUDE_ComGoogleCommonCollectClassToInstanceMap 1
#include "../../../../../com/google/common/collect/ClassToInstanceMap.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class ComGoogleCommonCollectImmutableClassToInstanceMap_Builder;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableClassToInstanceMap : ComGoogleCommonCollectForwardingMap < ComGoogleCommonCollectClassToInstanceMap, JavaIoSerializable >

#pragma mark Public

+ (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)builder;

+ (ComGoogleCommonCollectImmutableClassToInstanceMap *)copyOfWithJavaUtilMap:(id<JavaUtilMap>)map OBJC_METHOD_FAMILY_NONE;

- (id)getInstanceWithIOSClass:(IOSClass *)type;

+ (ComGoogleCommonCollectImmutableClassToInstanceMap *)of;

+ (ComGoogleCommonCollectImmutableClassToInstanceMap *)ofWithIOSClass:(IOSClass *)type
                                                               withId:(id)value;

- (id)putInstanceWithIOSClass:(IOSClass *)type
                       withId:(id)value;

#pragma mark Protected

- (id<JavaUtilMap>)delegate;

#pragma mark Package-Private

- (id)readResolve;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectImmutableClassToInstanceMap)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap *ComGoogleCommonCollectImmutableClassToInstanceMap_of();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap *ComGoogleCommonCollectImmutableClassToInstanceMap_ofWithIOSClass_withId_(IOSClass *type, id value);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *ComGoogleCommonCollectImmutableClassToInstanceMap_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap *ComGoogleCommonCollectImmutableClassToInstanceMap_copyOfWithJavaUtilMap_(id<JavaUtilMap> map);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableClassToInstanceMap)

#endif

#if !defined (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap || defined(INCLUDE_ComGoogleCommonCollectImmutableClassToInstanceMap_Builder))
#define ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_

@class ComGoogleCommonCollectImmutableClassToInstanceMap;
@class IOSClass;
@protocol JavaUtilMap;

@interface ComGoogleCommonCollectImmutableClassToInstanceMap_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (ComGoogleCommonCollectImmutableClassToInstanceMap *)build;

- (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)putWithIOSClass:(IOSClass *)key
                                                                        withId:(id)value;

- (ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *)putAllWithJavaUtilMap:(id<JavaUtilMap>)map;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder)

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_init(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *self);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *new_ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableClassToInstanceMap_Builder *create_ComGoogleCommonCollectImmutableClassToInstanceMap_Builder_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableClassToInstanceMap_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableClassToInstanceMap")