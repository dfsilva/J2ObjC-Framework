//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/MethodHandleInfo.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeMethodHandleInfo")
#ifdef RESTRICT_JavaLangInvokeMethodHandleInfo
#define INCLUDE_ALL_JavaLangInvokeMethodHandleInfo 0
#else
#define INCLUDE_ALL_JavaLangInvokeMethodHandleInfo 1
#endif
#undef RESTRICT_JavaLangInvokeMethodHandleInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInvokeMethodHandleInfo_) && (INCLUDE_ALL_JavaLangInvokeMethodHandleInfo || defined(INCLUDE_JavaLangInvokeMethodHandleInfo))
#define JavaLangInvokeMethodHandleInfo_

@class IOSClass;
@class JavaLangInvokeMethodHandles_Lookup;
@class JavaLangInvokeMethodType;
@protocol JavaLangReflectMember;

@protocol JavaLangInvokeMethodHandleInfo < JavaObject >

- (jint)getReferenceKind;

- (IOSClass *)getDeclaringClass;

- (NSString *)getName;

- (JavaLangInvokeMethodType *)getMethodType;

- (id<JavaLangReflectMember>)reflectAsWithIOSClass:(IOSClass *)expected
            withJavaLangInvokeMethodHandles_Lookup:(JavaLangInvokeMethodHandles_Lookup *)lookup;

- (jint)getModifiers;

- (jboolean)isVarArgs;

@end

@interface JavaLangInvokeMethodHandleInfo : NSObject

+ (NSString *)referenceKindToStringWithInt:(jint)referenceKind;

+ (NSString *)toStringWithInt:(jint)kind
                 withIOSClass:(IOSClass *)defc
                 withNSString:(NSString *)name
 withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

+ (jint)REF_getField;

+ (jint)REF_getStatic;

+ (jint)REF_putField;

+ (jint)REF_putStatic;

+ (jint)REF_invokeVirtual;

+ (jint)REF_invokeStatic;

+ (jint)REF_invokeSpecial;

+ (jint)REF_newInvokeSpecial;

+ (jint)REF_invokeInterface;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeMethodHandleInfo)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_getField(void);
#define JavaLangInvokeMethodHandleInfo_REF_getField 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_getField, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_getStatic(void);
#define JavaLangInvokeMethodHandleInfo_REF_getStatic 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_getStatic, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_putField(void);
#define JavaLangInvokeMethodHandleInfo_REF_putField 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_putField, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_putStatic(void);
#define JavaLangInvokeMethodHandleInfo_REF_putStatic 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_putStatic, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_invokeVirtual(void);
#define JavaLangInvokeMethodHandleInfo_REF_invokeVirtual 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_invokeVirtual, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_invokeStatic(void);
#define JavaLangInvokeMethodHandleInfo_REF_invokeStatic 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_invokeStatic, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_invokeSpecial(void);
#define JavaLangInvokeMethodHandleInfo_REF_invokeSpecial 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_invokeSpecial, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_newInvokeSpecial(void);
#define JavaLangInvokeMethodHandleInfo_REF_newInvokeSpecial 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_newInvokeSpecial, jint)

inline jint JavaLangInvokeMethodHandleInfo_get_REF_invokeInterface(void);
#define JavaLangInvokeMethodHandleInfo_REF_invokeInterface 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandleInfo, REF_invokeInterface, jint)

FOUNDATION_EXPORT jboolean JavaLangInvokeMethodHandleInfo_isVarArgs(id<JavaLangInvokeMethodHandleInfo> self);

FOUNDATION_EXPORT NSString *JavaLangInvokeMethodHandleInfo_referenceKindToStringWithInt_(jint referenceKind);

FOUNDATION_EXPORT NSString *JavaLangInvokeMethodHandleInfo_toStringWithInt_withIOSClass_withNSString_withJavaLangInvokeMethodType_(jint kind, IOSClass *defc, NSString *name, JavaLangInvokeMethodType *type);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeMethodHandleInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeMethodHandleInfo")
