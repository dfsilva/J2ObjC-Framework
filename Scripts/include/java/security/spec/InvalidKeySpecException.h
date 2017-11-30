//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/spec/InvalidKeySpecException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecInvalidKeySpecException")
#ifdef RESTRICT_JavaSecuritySpecInvalidKeySpecException
#define INCLUDE_ALL_JavaSecuritySpecInvalidKeySpecException 0
#else
#define INCLUDE_ALL_JavaSecuritySpecInvalidKeySpecException 1
#endif
#undef RESTRICT_JavaSecuritySpecInvalidKeySpecException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecInvalidKeySpecException_) && (INCLUDE_ALL_JavaSecuritySpecInvalidKeySpecException || defined(INCLUDE_JavaSecuritySpecInvalidKeySpecException))
#define JavaSecuritySpecInvalidKeySpecException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

@class JavaLangThrowable;

/*!
 @brief This is the exception for invalid key specifications.
 @author Jan Luehe
 - seealso: KeySpec
 @since 1.2
 */
@interface JavaSecuritySpecInvalidKeySpecException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs an InvalidKeySpecException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype)init;

/*!
 @brief Constructs an InvalidKeySpecException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>InvalidKeySpecException</code> with the specified
  detail message and cause.
 @param message the detail message (which is saved for later retrieval         by the 
 <code>getMessage()</code>  method).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Creates a <code>InvalidKeySpecException</code> with the specified cause
  and a detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
  (which typically contains the class and detail message of 
 <tt>cause</tt>).
 @param cause the cause (which is saved for later retrieval by the         
 <code>getCause()</code>  method).  (A  <tt> null </tt>  value is permitted,         and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecInvalidKeySpecException)

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_init(JavaSecuritySpecInvalidKeySpecException *self);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *create_JavaSecuritySpecInvalidKeySpecException_init(void);

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithNSString_(JavaSecuritySpecInvalidKeySpecException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *create_JavaSecuritySpecInvalidKeySpecException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithNSString_withJavaLangThrowable_(JavaSecuritySpecInvalidKeySpecException *self, NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *create_JavaSecuritySpecInvalidKeySpecException_initWithNSString_withJavaLangThrowable_(NSString *message, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSecuritySpecInvalidKeySpecException_initWithJavaLangThrowable_(JavaSecuritySpecInvalidKeySpecException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *new_JavaSecuritySpecInvalidKeySpecException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecInvalidKeySpecException *create_JavaSecuritySpecInvalidKeySpecException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecInvalidKeySpecException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecInvalidKeySpecException")
