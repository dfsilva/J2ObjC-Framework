//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/TypeNotPresentException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangTypeNotPresentException")
#ifdef RESTRICT_JavaLangTypeNotPresentException
#define INCLUDE_ALL_JavaLangTypeNotPresentException 0
#else
#define INCLUDE_ALL_JavaLangTypeNotPresentException 1
#endif
#undef RESTRICT_JavaLangTypeNotPresentException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangTypeNotPresentException_) && (INCLUDE_ALL_JavaLangTypeNotPresentException || defined(INCLUDE_JavaLangTypeNotPresentException))
#define JavaLangTypeNotPresentException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Thrown when an application tries to access a type using a string
 representing the type's name, but no definition for the type with
 the specified name can be found.
 This exception differs from
 <code>ClassNotFoundException</code> in that <tt>ClassNotFoundException</tt> is a
 checked exception, whereas this exception is unchecked.
 <p>Note that this exception may be used when undefined type variables
 are accessed as well as when types (e.g., classes, interfaces or
 annotation types) are loaded.
 In particular, this exception can be thrown by the API used to read annotations
 reflectively
 .
 @author Josh Bloch
 - seealso: java.lang.reflect.AnnotatedElement
 @since 1.5
 */
@interface JavaLangTypeNotPresentException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <tt>TypeNotPresentException</tt> for the named type
 with the specified cause.
 @param typeName the fully qualified name of the unavailable type
 @param cause the exception that was thrown when the system attempted to
 load the named type, or <tt>null</tt> if unavailable or inapplicable
 */
- (instancetype)initWithNSString:(NSString *)typeName
                 withNSException:(NSException *)cause;

/*!
 @brief Returns the fully qualified name of the unavailable type.
 @return the fully qualified name of the unavailable type
 */
- (NSString *)typeName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangTypeNotPresentException)

FOUNDATION_EXPORT void JavaLangTypeNotPresentException_initWithNSString_withNSException_(JavaLangTypeNotPresentException *self, NSString *typeName, NSException *cause);

FOUNDATION_EXPORT JavaLangTypeNotPresentException *new_JavaLangTypeNotPresentException_initWithNSString_withNSException_(NSString *typeName, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangTypeNotPresentException *create_JavaLangTypeNotPresentException_initWithNSString_withNSException_(NSString *typeName, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangTypeNotPresentException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangTypeNotPresentException")
