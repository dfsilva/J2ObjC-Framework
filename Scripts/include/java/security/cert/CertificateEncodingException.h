//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateEncodingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateEncodingException")
#ifdef RESTRICT_JavaSecurityCertCertificateEncodingException
#define INCLUDE_ALL_JavaSecurityCertCertificateEncodingException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateEncodingException 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateEncodingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertificateEncodingException_) && (INCLUDE_ALL_JavaSecurityCertCertificateEncodingException || defined(INCLUDE_JavaSecurityCertCertificateEncodingException))
#define JavaSecurityCertCertificateEncodingException_

#define RESTRICT_JavaSecurityCertCertificateException 1
#define INCLUDE_JavaSecurityCertCertificateException 1
#include "java/security/cert/CertificateException.h"

/*!
 @brief The exception that is thrown when an error occurs while a <code>Certificate</code>
 is being encoded.
 */
@interface JavaSecurityCertCertificateEncodingException : JavaSecurityCertCertificateException

#pragma mark Public

/*!
 @brief Creates a new <code>CertificateEncodingException</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new <code>CertificateEncodingException</code> with the specified
 message.
 @param msg
 The detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a new <code>CertificateEncodingException</code> with the specified
 message and cause.
 @param message
 the detail message for the exception.
 @param cause
 the cause.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Creates a new <code>CertificateEncodingException</code> with the specified
 cause.
 @param cause
 the cause.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateEncodingException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateEncodingException_initWithNSString_(JavaSecurityCertCertificateEncodingException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *new_JavaSecurityCertCertificateEncodingException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *create_JavaSecurityCertCertificateEncodingException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCertificateEncodingException_init(JavaSecurityCertCertificateEncodingException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *new_JavaSecurityCertCertificateEncodingException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *create_JavaSecurityCertCertificateEncodingException_init();

FOUNDATION_EXPORT void JavaSecurityCertCertificateEncodingException_initWithNSString_withNSException_(JavaSecurityCertCertificateEncodingException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *new_JavaSecurityCertCertificateEncodingException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *create_JavaSecurityCertCertificateEncodingException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertificateEncodingException_initWithNSException_(JavaSecurityCertCertificateEncodingException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *new_JavaSecurityCertCertificateEncodingException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateEncodingException *create_JavaSecurityCertCertificateEncodingException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateEncodingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateEncodingException")
