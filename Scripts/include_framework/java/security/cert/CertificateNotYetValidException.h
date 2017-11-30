//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertificateNotYetValidException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateNotYetValidException")
#ifdef RESTRICT_JavaSecurityCertCertificateNotYetValidException
#define INCLUDE_ALL_JavaSecurityCertCertificateNotYetValidException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateNotYetValidException 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateNotYetValidException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertificateNotYetValidException_) && (INCLUDE_ALL_JavaSecurityCertCertificateNotYetValidException || defined(INCLUDE_JavaSecurityCertCertificateNotYetValidException))
#define JavaSecurityCertCertificateNotYetValidException_

#define RESTRICT_JavaSecurityCertCertificateException 1
#define INCLUDE_JavaSecurityCertCertificateException 1
#include "../../../java/security/cert/CertificateException.h"

@class JavaLangThrowable;

/*!
 @brief Certificate is not yet valid exception.This is thrown whenever
  the current <code>Date</code> or the specified <code>Date</code>
  is before the <code>notBefore</code> date/time in the Certificate
  validity period.
 @author Hemma Prafullchandra
 */
@interface JavaSecurityCertCertificateNotYetValidException : JavaSecurityCertCertificateException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a CertificateNotYetValidException with no detail message.A
  detail message is a String that describes this particular
  exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a CertificateNotYetValidException with the specified detail
  message.A detail message is a String that describes this
  particular exception.
 @param message the detail message.
 */
- (instancetype)initWithNSString:(NSString *)message;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateNotYetValidException)

inline jlong JavaSecurityCertCertificateNotYetValidException_get_serialVersionUID(void);
#define JavaSecurityCertCertificateNotYetValidException_serialVersionUID 4355919900041064702LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityCertCertificateNotYetValidException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaSecurityCertCertificateNotYetValidException_init(JavaSecurityCertCertificateNotYetValidException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *new_JavaSecurityCertCertificateNotYetValidException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *create_JavaSecurityCertCertificateNotYetValidException_init(void);

FOUNDATION_EXPORT void JavaSecurityCertCertificateNotYetValidException_initWithNSString_(JavaSecurityCertCertificateNotYetValidException *self, NSString *message);

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *new_JavaSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateNotYetValidException *create_JavaSecurityCertCertificateNotYetValidException_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateNotYetValidException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateNotYetValidException")
