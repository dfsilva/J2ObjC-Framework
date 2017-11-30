//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/crypto/spec/DHParameterSpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxCryptoSpecDHParameterSpec")
#ifdef RESTRICT_JavaxCryptoSpecDHParameterSpec
#define INCLUDE_ALL_JavaxCryptoSpecDHParameterSpec 0
#else
#define INCLUDE_ALL_JavaxCryptoSpecDHParameterSpec 1
#endif
#undef RESTRICT_JavaxCryptoSpecDHParameterSpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxCryptoSpecDHParameterSpec_) && (INCLUDE_ALL_JavaxCryptoSpecDHParameterSpec || defined(INCLUDE_JavaxCryptoSpecDHParameterSpec))
#define JavaxCryptoSpecDHParameterSpec_

#define RESTRICT_JavaSecuritySpecAlgorithmParameterSpec 1
#define INCLUDE_JavaSecuritySpecAlgorithmParameterSpec 1
#include "../../../java/security/spec/AlgorithmParameterSpec.h"

@class JavaMathBigInteger;

/*!
 @brief This class specifies the set of parameters used with the Diffie-Hellman
  algorithm, as specified in PKCS #3: <i>Diffie-Hellman Key-Agreement
  Standard</i>.
 <p>A central authority generates parameters and gives them to the two
  entities seeking to generate a secret key. The parameters are a prime 
 <code>p</code>, a base <code>g</code>, and optionally the length
  in bits of the private value, <code>l</code>.
  
 <p>It is possible that more than one instance of parameters may be
  generated by a given central authority, and that there may be more than
  one central authority. Indeed, each individual may be its own central
  authority, with different entities having different parameters. 
 <p>Note that this class does not perform any validation on specified
  parameters. Thus, the specified values are returned directly even
  if they are null.
 @author Jan Luehe
 - seealso: javax.crypto.KeyAgreement
 @since 1.4
 */
@interface JavaxCryptoSpecDHParameterSpec : NSObject < JavaSecuritySpecAlgorithmParameterSpec >

#pragma mark Public

/*!
 @brief Constructs a parameter set for Diffie-Hellman, using a prime modulus 
 <code>p</code> and a base generator <code>g</code>.
 @param p the prime modulus
 @param g the base generator
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)g;

/*!
 @brief Constructs a parameter set for Diffie-Hellman, using a prime modulus 
 <code>p</code>, a base generator <code>g</code>,
  and the size in bits, <code>l</code>, of the random exponent
  (private value).
 @param p the prime modulus
 @param g the base generator
 @param l the size in bits of the random exponent (private value)
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)p
                    withJavaMathBigInteger:(JavaMathBigInteger *)g
                                   withInt:(jint)l;

/*!
 @brief Returns the base generator <code>g</code>.
 @return the base generator <code>g</code>
 */
- (JavaMathBigInteger *)getG;

/*!
 @brief Returns the size in bits, <code>l</code>, of the random exponent
  (private value).
 @return the size in bits, <code>l</code>, of the random exponent
  (private value), or 0 if this size has not been set
 */
- (jint)getL;

/*!
 @brief Returns the prime modulus <code>p</code>.
 @return the prime modulus <code>p</code>
 */
- (JavaMathBigInteger *)getP;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxCryptoSpecDHParameterSpec)

FOUNDATION_EXPORT void JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaxCryptoSpecDHParameterSpec *self, JavaMathBigInteger *p, JavaMathBigInteger *g);

FOUNDATION_EXPORT JavaxCryptoSpecDHParameterSpec *new_JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *p, JavaMathBigInteger *g) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDHParameterSpec *create_JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *p, JavaMathBigInteger *g);

FOUNDATION_EXPORT void JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaxCryptoSpecDHParameterSpec *self, JavaMathBigInteger *p, JavaMathBigInteger *g, jint l);

FOUNDATION_EXPORT JavaxCryptoSpecDHParameterSpec *new_JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *p, JavaMathBigInteger *g, jint l) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxCryptoSpecDHParameterSpec *create_JavaxCryptoSpecDHParameterSpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withInt_(JavaMathBigInteger *p, JavaMathBigInteger *g, jint l);

J2OBJC_TYPE_LITERAL_HEADER(JavaxCryptoSpecDHParameterSpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxCryptoSpecDHParameterSpec")
