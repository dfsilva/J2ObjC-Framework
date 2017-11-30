//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/UnknownFormatFlagsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilUnknownFormatFlagsException")
#ifdef RESTRICT_JavaUtilUnknownFormatFlagsException
#define INCLUDE_ALL_JavaUtilUnknownFormatFlagsException 0
#else
#define INCLUDE_ALL_JavaUtilUnknownFormatFlagsException 1
#endif
#undef RESTRICT_JavaUtilUnknownFormatFlagsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilUnknownFormatFlagsException_) && (INCLUDE_ALL_JavaUtilUnknownFormatFlagsException || defined(INCLUDE_JavaUtilUnknownFormatFlagsException))
#define JavaUtilUnknownFormatFlagsException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief Unchecked exception thrown when an unknown flag is given.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
  method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilUnknownFormatFlagsException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an instance of this class with the specified flags.
 @param f The set of format flags which contain an unknown flag
 */
- (instancetype)initWithNSString:(NSString *)f;

/*!
 @brief Returns the set of flags which contains an unknown flag.
 @return The flags
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilUnknownFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilUnknownFormatFlagsException_initWithNSString_(JavaUtilUnknownFormatFlagsException *self, NSString *f);

FOUNDATION_EXPORT JavaUtilUnknownFormatFlagsException *new_JavaUtilUnknownFormatFlagsException_initWithNSString_(NSString *f) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilUnknownFormatFlagsException *create_JavaUtilUnknownFormatFlagsException_initWithNSString_(NSString *f);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilUnknownFormatFlagsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilUnknownFormatFlagsException")
