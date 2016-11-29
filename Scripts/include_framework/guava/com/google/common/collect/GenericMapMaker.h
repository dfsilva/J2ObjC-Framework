//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/GenericMapMaker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker")
#ifdef RESTRICT_ComGoogleCommonCollectGenericMapMaker
#define INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker 1
#endif
#undef RESTRICT_ComGoogleCommonCollectGenericMapMaker

#if !defined (ComGoogleCommonCollectGenericMapMaker_) && (INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker || defined(INCLUDE_ComGoogleCommonCollectGenericMapMaker))
#define ComGoogleCommonCollectGenericMapMaker_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonCollectMapMakerInternalMap;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonCollectMapMaker_RemovalListener;
@protocol JavaUtilConcurrentConcurrentMap;

@interface ComGoogleCommonCollectGenericMapMaker : NSObject {
 @public
  id<ComGoogleCommonCollectMapMaker_RemovalListener> removalListener_;
}

#pragma mark Public

- (ComGoogleCommonCollectGenericMapMaker *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCollectGenericMapMaker *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (id<JavaUtilConcurrentConcurrentMap>)makeMap;

- (ComGoogleCommonCollectGenericMapMaker *)weakKeys;

- (ComGoogleCommonCollectGenericMapMaker *)weakValues;

#pragma mark Package-Private

- (instancetype)init;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterAccessWithLong:(jlong)duration
                                      withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCollectGenericMapMaker *)expireAfterWriteWithLong:(jlong)duration
                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<ComGoogleCommonCollectMapMaker_RemovalListener>)getRemovalListener;

- (ComGoogleCommonCollectGenericMapMaker *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (id<JavaUtilConcurrentConcurrentMap>)makeComputingMapWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)computingFunction;

- (ComGoogleCommonCollectMapMakerInternalMap *)makeCustomMap;

- (ComGoogleCommonCollectGenericMapMaker *)maximumSizeWithInt:(jint)maximumSize;

- (ComGoogleCommonCollectGenericMapMaker *)softValues;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectGenericMapMaker)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectGenericMapMaker, removalListener_, id<ComGoogleCommonCollectMapMaker_RemovalListener>)

FOUNDATION_EXPORT void ComGoogleCommonCollectGenericMapMaker_init(ComGoogleCommonCollectGenericMapMaker *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGenericMapMaker)

#endif

#if !defined (ComGoogleCommonCollectGenericMapMaker_NullListener_) && (INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker || defined(INCLUDE_ComGoogleCommonCollectGenericMapMaker_NullListener))
#define ComGoogleCommonCollectGenericMapMaker_NullListener_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCollectMapMaker 1
#define INCLUDE_ComGoogleCommonCollectMapMaker_RemovalListener 1
#include "../../../../../com/google/common/collect/MapMaker.h"

@class ComGoogleCommonCollectMapMaker_RemovalNotification;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCollectGenericMapMaker_NullListener_Enum) {
  ComGoogleCommonCollectGenericMapMaker_NullListener_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonCollectGenericMapMaker_NullListener : JavaLangEnum < NSCopying, ComGoogleCommonCollectMapMaker_RemovalListener >

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCollectMapMaker_RemovalNotification:(ComGoogleCommonCollectMapMaker_RemovalNotification *)notification;

+ (ComGoogleCommonCollectGenericMapMaker_NullListener *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCollectGenericMapMaker_NullListener)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListener *ComGoogleCommonCollectGenericMapMaker_NullListener_values_[];

inline ComGoogleCommonCollectGenericMapMaker_NullListener *ComGoogleCommonCollectGenericMapMaker_NullListener_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCollectGenericMapMaker_NullListener, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCollectGenericMapMaker_NullListener_values();

FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListener *ComGoogleCommonCollectGenericMapMaker_NullListener_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCollectGenericMapMaker_NullListener *ComGoogleCommonCollectGenericMapMaker_NullListener_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectGenericMapMaker_NullListener)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectGenericMapMaker")
