//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/UnmappableCharacterException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException")
#ifdef RESTRICT_JavaNioCharsetUnmappableCharacterException
#define INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException 0
#else
#define INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException 1
#endif
#undef RESTRICT_JavaNioCharsetUnmappableCharacterException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetUnmappableCharacterException_) && (INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException || defined(INCLUDE_JavaNioCharsetUnmappableCharacterException))
#define JavaNioCharsetUnmappableCharacterException_

#define RESTRICT_JavaNioCharsetCharacterCodingException 1
#define INCLUDE_JavaNioCharsetCharacterCodingException 1
#include "java/nio/charset/CharacterCodingException.h"

/*!
 @brief An <code>UnmappableCharacterException</code> is thrown when an unmappable
 character for the given charset is encountered.
 */
@interface JavaNioCharsetUnmappableCharacterException : JavaNioCharsetCharacterCodingException

#pragma mark Public

/*!
 @brief Constructs a new <code>UnmappableCharacterException</code>.
 @param length
 the length of the unmappable character.
 */
- (instancetype)initWithInt:(jint)length;

/*!
 @brief Returns the length of the unmappable character.
 */
- (jint)getInputLength;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetUnmappableCharacterException)

FOUNDATION_EXPORT void JavaNioCharsetUnmappableCharacterException_initWithInt_(JavaNioCharsetUnmappableCharacterException *self, jint length);

FOUNDATION_EXPORT JavaNioCharsetUnmappableCharacterException *new_JavaNioCharsetUnmappableCharacterException_initWithInt_(jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioCharsetUnmappableCharacterException *create_JavaNioCharsetUnmappableCharacterException_initWithInt_(jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetUnmappableCharacterException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetUnmappableCharacterException")