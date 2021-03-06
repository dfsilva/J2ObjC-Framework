//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/MalformedParameterizedTypeException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException")
#ifdef RESTRICT_JavaLangReflectMalformedParameterizedTypeException
#define INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException 0
#else
#define INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException 1
#endif
#undef RESTRICT_JavaLangReflectMalformedParameterizedTypeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectMalformedParameterizedTypeException_) && (INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException || defined(INCLUDE_JavaLangReflectMalformedParameterizedTypeException))
#define JavaLangReflectMalformedParameterizedTypeException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../java/lang/RuntimeException.h"

/*!
 @brief Indicates that a malformed parameterized type has been encountered by a
 reflective method.
 @since 1.5
 */
@interface JavaLangReflectMalformedParameterizedTypeException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a new <code>MalformedParameterizedTypeException</code> instance.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectMalformedParameterizedTypeException)

FOUNDATION_EXPORT void JavaLangReflectMalformedParameterizedTypeException_init(JavaLangReflectMalformedParameterizedTypeException *self);

FOUNDATION_EXPORT JavaLangReflectMalformedParameterizedTypeException *new_JavaLangReflectMalformedParameterizedTypeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangReflectMalformedParameterizedTypeException *create_JavaLangReflectMalformedParameterizedTypeException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectMalformedParameterizedTypeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectMalformedParameterizedTypeException")
