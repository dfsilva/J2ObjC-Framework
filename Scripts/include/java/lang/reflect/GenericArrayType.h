//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/GenericArrayType.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectGenericArrayType")
#ifdef RESTRICT_JavaLangReflectGenericArrayType
#define INCLUDE_ALL_JavaLangReflectGenericArrayType 0
#else
#define INCLUDE_ALL_JavaLangReflectGenericArrayType 1
#endif
#undef RESTRICT_JavaLangReflectGenericArrayType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectGenericArrayType_) && (INCLUDE_ALL_JavaLangReflectGenericArrayType || defined(INCLUDE_JavaLangReflectGenericArrayType))
#define JavaLangReflectGenericArrayType_

#define RESTRICT_JavaLangReflectType 1
#define INCLUDE_JavaLangReflectType 1
#include "java/lang/reflect/Type.h"

/*!
 @brief <code>GenericArrayType</code> represents an array type whose component
  type is either a parameterized type or a type variable.
 @since 1.5
 */
@protocol JavaLangReflectGenericArrayType < JavaLangReflectType, JavaObject >

/*!
 @brief Returns a <code>Type</code> object representing the component type
  of this array.This method creates the component type of the
  array.
 See the declaration of <code>ParameterizedType</code>
  for the
  semantics of the creation process for parameterized types and
  see <code>TypeVariable</code> for the
  creation process for type variables.
 @return a <code>Type</code> object representing the component type
      of this array
 @throw TypeNotPresentExceptionif the underlying array type's
      component type refers to a non-existent type declaration
 @throw MalformedParameterizedTypeExceptionif  the
      underlying array type's component type refers to a
      parameterized type that cannot be instantiated for any reason
 */
- (id<JavaLangReflectType>)getGenericComponentType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectGenericArrayType)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectGenericArrayType)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectGenericArrayType")
