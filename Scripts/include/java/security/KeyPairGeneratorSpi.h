//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyPairGeneratorSpi.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi")
#ifdef RESTRICT_JavaSecurityKeyPairGeneratorSpi
#define INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi 0
#else
#define INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi 1
#endif
#undef RESTRICT_JavaSecurityKeyPairGeneratorSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyPairGeneratorSpi_) && (INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi || defined(INCLUDE_JavaSecurityKeyPairGeneratorSpi))
#define JavaSecurityKeyPairGeneratorSpi_

@class JavaSecurityKeyPair;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <code>KeyPairGeneratorSpi</code> is the Service Provider Interface (SPI)
 definition for <code>KeyPairGenerator</code>.
 - seealso: KeyPairGenerator
 */
@interface JavaSecurityKeyPairGeneratorSpi : NSObject

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>KeyPairGeneratorSpi</code>.
 */
- (instancetype)init;

/*!
 @brief Computes and returns a new unique <code>KeyPair</code> each time this method
 is called.
 @return a new unique <code>KeyPair</code> each time this method is called.
 */
- (JavaSecurityKeyPair *)generateKeyPair;

/*!
 @brief Initializes this <code>KeyPairGeneratorSpi</code> with the given <code>AlgorithmParameterSpec</code>
  and the given <code>SecureRandom</code>.
 @param params
 the parameters to use.
 @param random
 the source of randomness.
 @throws InvalidAlgorithmParameterException
 if the specified parameters are not supported.
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
                                  withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this <code>KeyPairGeneratorSpi</code> with the given key size and
 the given <code>SecureRandom</code>.
 The default parameter set will be used.
 @param keysize
 the key size (number of bits).
 @param random
 the source of randomness.
 */
- (void)initialize__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyPairGeneratorSpi)

FOUNDATION_EXPORT void JavaSecurityKeyPairGeneratorSpi_init(JavaSecurityKeyPairGeneratorSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyPairGeneratorSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyPairGeneratorSpi")
