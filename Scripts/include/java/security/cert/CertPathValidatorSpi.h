//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertPathValidatorSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorSpi")
#ifdef RESTRICT_JavaSecurityCertCertPathValidatorSpi
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorSpi 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertPathValidatorSpi 1
#endif
#undef RESTRICT_JavaSecurityCertCertPathValidatorSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertPathValidatorSpi_) && (INCLUDE_ALL_JavaSecurityCertCertPathValidatorSpi || defined(INCLUDE_JavaSecurityCertCertPathValidatorSpi))
#define JavaSecurityCertCertPathValidatorSpi_

@class JavaSecurityCertCertPath;
@protocol JavaSecurityCertCertPathChecker;
@protocol JavaSecurityCertCertPathParameters;
@protocol JavaSecurityCertCertPathValidatorResult;

/*!
 @brief The <i>Service Provider Interface</i> (<b>SPI</b>)
  for the <code>CertPathValidator</code> class.All
  <code>CertPathValidator</code> implementations must include a class (the
  SPI class) that extends this class (<code>CertPathValidatorSpi</code>)
  and implements all of its methods.
 In general, instances of this class
  should only be accessed through the <code>CertPathValidator</code> class.
  For details, see the Java Cryptography Architecture. 
 <p>
  <b>Concurrent Access</b>
  <p>
  Instances of this class need not be protected against concurrent
  access from multiple threads. Threads that need to access a single 
 <code>CertPathValidatorSpi</code> instance concurrently should synchronize
  amongst themselves and provide the necessary locking before calling the
  wrapping <code>CertPathValidator</code> object. 
 <p>
  However, implementations of <code>CertPathValidatorSpi</code> may still
  encounter concurrency issues, since multiple threads each
  manipulating a different <code>CertPathValidatorSpi</code> instance need not
  synchronize.
 @since 1.4
 @author Yassir Elley
 */
@interface JavaSecurityCertCertPathValidatorSpi : NSObject

#pragma mark Public

/*!
 @brief The default constructor.
 */
- (instancetype)init;

/*!
 @brief Returns a <code>CertPathChecker</code> that this implementation uses to
  check the revocation status of certificates.A PKIX implementation
  returns objects of type <code>PKIXRevocationChecker</code>.
 <p>The primary purpose of this method is to allow callers to specify
  additional input parameters and options specific to revocation checking.
  See the class description of <code>CertPathValidator</code> for an example. 
 <p>This method was added to version 1.8 of the Java Platform Standard
  Edition. In order to maintain backwards compatibility with existing
  service providers, this method cannot be abstract and by default throws
  an <code>UnsupportedOperationException</code>.
 @return a <code>CertPathChecker</code> that this implementation uses to
  check the revocation status of certificates
 @throw UnsupportedOperationExceptionif this method is not supported
 @since 1.8
 */
- (id<JavaSecurityCertCertPathChecker>)engineGetRevocationChecker;

/*!
 @brief Validates the specified certification path using the specified
  algorithm parameter set.
 <p>
  The <code>CertPath</code> specified must be of a type that is
  supported by the validation algorithm, otherwise an 
 <code>InvalidAlgorithmParameterException</code> will be thrown. For
  example, a <code>CertPathValidator</code> that implements the PKIX
  algorithm validates <code>CertPath</code> objects of type X.509.
 @param certPath the <code>CertPath</code>  to be validated
 @param params the algorithm parameters
 @return the result of the validation algorithm
 @throw CertPathValidatorExceptionif the <code>CertPath</code>
  does not validate
 @throw InvalidAlgorithmParameterExceptionif the specified
  parameters or the type of the specified <code>CertPath</code> are
  inappropriate for this <code>CertPathValidator</code>
 */
- (id<JavaSecurityCertCertPathValidatorResult>)engineValidateWithJavaSecurityCertCertPath:(JavaSecurityCertCertPath *)certPath
                                                   withJavaSecurityCertCertPathParameters:(id<JavaSecurityCertCertPathParameters>)params;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertPathValidatorSpi)

FOUNDATION_EXPORT void JavaSecurityCertCertPathValidatorSpi_init(JavaSecurityCertCertPathValidatorSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertPathValidatorSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertPathValidatorSpi")
