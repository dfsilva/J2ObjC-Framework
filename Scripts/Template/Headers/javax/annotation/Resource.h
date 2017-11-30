//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/javax/annotation/Resource.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationResource")
#ifdef RESTRICT_JavaxAnnotationResource
#define INCLUDE_ALL_JavaxAnnotationResource 0
#else
#define INCLUDE_ALL_JavaxAnnotationResource 1
#endif
#undef RESTRICT_JavaxAnnotationResource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaxAnnotationResource_) && (INCLUDE_ALL_JavaxAnnotationResource || defined(INCLUDE_JavaxAnnotationResource))
#define JavaxAnnotationResource_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationResource_AuthenticationType;

/*!
 @brief javax.annotation.Resource annotation.No code was referenced,
  created using just its public API.
 */
@protocol JavaxAnnotationResource < JavaLangAnnotationAnnotation >

@property (readonly) JavaxAnnotationResource_AuthenticationType *authenticationType;
@property (readonly) NSString *description__;
@property (readonly) NSString *mappedName;
@property (readonly) NSString *name;
@property (readonly) jboolean shareable;
@property (readonly) IOSClass *type;

@end

@interface JavaxAnnotationResource : NSObject < JavaxAnnotationResource > {
 @public
  JavaxAnnotationResource_AuthenticationType *authenticationType_;
  NSString *description___;
  NSString *mappedName_;
  NSString *name_;
  jboolean shareable_;
  IOSClass *type_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationResource)

FOUNDATION_EXPORT id<JavaxAnnotationResource> create_JavaxAnnotationResource(JavaxAnnotationResource_AuthenticationType *authenticationType, NSString *description__, NSString *mappedName, NSString *name, jboolean shareable, IOSClass *type);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource)

#endif

#if !defined (JavaxAnnotationResource_AuthenticationType_) && (INCLUDE_ALL_JavaxAnnotationResource || defined(INCLUDE_JavaxAnnotationResource_AuthenticationType))
#define JavaxAnnotationResource_AuthenticationType_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxAnnotationResource_AuthenticationType_Enum) {
  JavaxAnnotationResource_AuthenticationType_Enum_APPLICATION = 0,
  JavaxAnnotationResource_AuthenticationType_Enum_CONTAINER = 1,
};

@interface JavaxAnnotationResource_AuthenticationType : JavaLangEnum

+ (JavaxAnnotationResource_AuthenticationType * __nonnull)APPLICATION;

+ (JavaxAnnotationResource_AuthenticationType * __nonnull)CONTAINER;

#pragma mark Public

+ (JavaxAnnotationResource_AuthenticationType *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaxAnnotationResource_AuthenticationType_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaxAnnotationResource_AuthenticationType)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *JavaxAnnotationResource_AuthenticationType_values_[];

inline JavaxAnnotationResource_AuthenticationType *JavaxAnnotationResource_AuthenticationType_get_APPLICATION(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationResource_AuthenticationType, APPLICATION)

inline JavaxAnnotationResource_AuthenticationType *JavaxAnnotationResource_AuthenticationType_get_CONTAINER(void);
J2OBJC_ENUM_CONSTANT(JavaxAnnotationResource_AuthenticationType, CONTAINER)

FOUNDATION_EXPORT IOSObjectArray *JavaxAnnotationResource_AuthenticationType_values(void);

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *JavaxAnnotationResource_AuthenticationType_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxAnnotationResource_AuthenticationType *JavaxAnnotationResource_AuthenticationType_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationResource_AuthenticationType)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationResource")
