//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/KeyPairGenerator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyPairGenerator")
#ifdef RESTRICT_JavaSecurityKeyPairGenerator
#define INCLUDE_ALL_JavaSecurityKeyPairGenerator 0
#else
#define INCLUDE_ALL_JavaSecurityKeyPairGenerator 1
#endif
#undef RESTRICT_JavaSecurityKeyPairGenerator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyPairGenerator_) && (INCLUDE_ALL_JavaSecurityKeyPairGenerator || defined(INCLUDE_JavaSecurityKeyPairGenerator))
#define JavaSecurityKeyPairGenerator_

#define RESTRICT_JavaSecurityKeyPairGeneratorSpi 1
#define INCLUDE_JavaSecurityKeyPairGeneratorSpi 1
#include "java/security/KeyPairGeneratorSpi.h"

@class JavaSecurityKeyPair;
@class JavaSecurityProvider;
@class JavaSecuritySecureRandom;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief The KeyPairGenerator class is used to generate pairs of
  public and private keys.Key pair generators are constructed using the 
 <code>getInstance</code> factory methods (static methods that
  return instances of a given class).
 <p>A Key pair generator for a particular algorithm creates a public/private
  key pair that can be used with this algorithm. It also associates
  algorithm-specific parameters with each of the generated keys. 
 <p>There are two ways to generate a key pair: in an algorithm-independent
  manner, and in an algorithm-specific manner.
  The only difference between the two is the initialization of the object: 
 <ul>
  <li><b>Algorithm-Independent Initialization</b>
  <p>All key pair generators share the concepts of a keysize and a
  source of randomness. The keysize is interpreted differently for different
  algorithms (e.g., in the case of the <i>DSA</i> algorithm, the keysize
  corresponds to the length of the modulus).
  There is an 
 <code>initialize</code>
  method in this KeyPairGenerator class that takes these two universally
  shared types of arguments. There is also one that takes just a 
 <code>keysize</code> argument, and uses the <code>SecureRandom</code>
  implementation of the highest-priority installed provider as the source
  of randomness. (If none of the installed providers supply an implementation of 
 <code>SecureRandom</code>, a system-provided source of randomness is
  used.) 
 <p>Since no other parameters are specified when you call the above
  algorithm-independent <code>initialize</code> methods, it is up to the
  provider what to do about the algorithm-specific parameters (if any) to be
  associated with each of the keys. 
 <p>If the algorithm is the <i>DSA</i> algorithm, and the keysize (modulus
  size) is 512, 768, or 1024, then the <i>Sun</i> provider uses a set of
  precomputed values for the <code>p</code>, <code>q</code>, and 
 <code>g</code> parameters. If the modulus size is not one of the above
  values, the <i>Sun</i> provider creates a new set of parameters. Other
  providers might have precomputed parameter sets for more than just the
  three modulus sizes mentioned above. Still others might not have a list of
  precomputed parameters at all and instead always create new parameter sets. 
 <p>
  
 <li><b>Algorithm-Specific Initialization</b>
  <p>For situations where a set of algorithm-specific parameters already
  exists (e.g., so-called <i>community parameters</i> in DSA), there are two 
 <code>initialize</code>
  methods that have an <code>AlgorithmParameterSpec</code>
  argument. One also has a <code>SecureRandom</code> argument, while the
  the other uses the <code>SecureRandom</code>
  implementation of the highest-priority installed provider as the source
  of randomness. (If none of the installed providers supply an implementation of 
 <code>SecureRandom</code>, a system-provided source of randomness is
  used.) 
 </ul>
  
 <p>In case the client does not explicitly initialize the KeyPairGenerator
  (via a call to an <code>initialize</code> method), each provider must
  supply (and document) a default initialization.
  For example, the <i>Sun</i> provider uses a default modulus size (keysize)
  of 1024 bits. 
 <p>Note that this class is abstract and extends from 
 <code>KeyPairGeneratorSpi</code> for historical reasons.
  Application developers should only take notice of the methods defined in
  this <code>KeyPairGenerator</code> class; all the methods in
  the superclass are intended for cryptographic service providers who wish to
  supply their own implementations of key pair generators. 
 <p> Android provides the following <code>KeyPairGenerator</code> algorithms: 
 <table>
      <thead>
          <tr>
              <th>Name</th>
              <th>Supported (API Levels)</th>
          </tr>
      </thead>
      <tbody>
          <tr>
              <td>DH</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>DSA</td>
              <td>1+</td>
          </tr>
          <tr>
              <td>EC</td>
              <td>11+</td>
          </tr>
          <tr>
              <td>RSA</td>
              <td>1+</td>
          </tr>
      </tbody>
  </table>
  These algorithms are described in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
  KeyPairGenerator section</a> of the
  Java Cryptography Architecture Standard Algorithm Name Documentation.
 @author Benjamin Renaud
 - seealso: java.security.spec.AlgorithmParameterSpec
 */
@interface JavaSecurityKeyPairGenerator : JavaSecurityKeyPairGeneratorSpi {
 @public
  JavaSecurityProvider *provider_;
}

#pragma mark Public

/*!
 @brief Generates a key pair.
 <p>If this KeyPairGenerator has not been initialized explicitly,
  provider-specific defaults will be used for the size and other
  (algorithm-specific) values of the generated keys. 
 <p>This will generate a new key pair every time it is called. 
 <p>This method is functionally equivalent to 
 <code>genKeyPair</code>.
 @return the generated key pair
 */
- (JavaSecurityKeyPair *)generateKeyPair;

/*!
 @brief Generates a key pair.
 <p>If this KeyPairGenerator has not been initialized explicitly,
  provider-specific defaults will be used for the size and other
  (algorithm-specific) values of the generated keys. 
 <p>This will generate a new key pair every time it is called. 
 <p>This method is functionally equivalent to 
 <code>generateKeyPair</code>.
 @return the generated key pair
 @since 1.2
 */
- (JavaSecurityKeyPair *)genKeyPair;

/*!
 @brief Returns the standard name of the algorithm for this key pair generator.
 See the KeyPairGenerator section in the <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
  Java Cryptography Architecture Standard Algorithm Name Documentation</a>
  for information about standard algorithm names.
 @return the standard string name of the algorithm.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns a KeyPairGenerator object that generates public/private
  key pairs for the specified algorithm.
 <p> This method traverses the list of registered security Providers,
  starting with the most preferred Provider.
  A new KeyPairGenerator object encapsulating the
  KeyPairGeneratorSpi implementation from the first
  Provider that supports the specified algorithm is returned. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard string name of the algorithm.  See the KeyPairGenerator section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @return the new KeyPairGenerator object.
 @throw NoSuchAlgorithmExceptionif no Provider supports a
           KeyPairGeneratorSpi implementation for the
           specified algorithm.
 - seealso: Provider
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Returns a KeyPairGenerator object that generates public/private
  key pairs for the specified algorithm.
 <p> A new KeyPairGenerator object encapsulating the
  KeyPairGeneratorSpi implementation from the specified Provider
  object is returned.  Note that the specified Provider object
  does not have to be registered in the provider list.
 @param algorithm the standard string name of the algorithm.  See the KeyPairGenerator section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the provider.
 @return the new KeyPairGenerator object.
 @throw NoSuchAlgorithmExceptionif a KeyPairGeneratorSpi
           implementation for the specified algorithm is not available
           from the specified Provider object.
 @throw IllegalArgumentExceptionif the specified provider is null.
 - seealso: Provider
 @since 1.4
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                 withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Returns a KeyPairGenerator object that generates public/private
  key pairs for the specified algorithm.
 <p> A new KeyPairGenerator object encapsulating the
  KeyPairGeneratorSpi implementation from the specified provider
  is returned.  The specified provider must be registered
  in the security provider list. 
 <p> Note that the list of registered providers may be retrieved via the 
 <code>Security.getProviders()</code> method.
 @param algorithm the standard string name of the algorithm.  See the KeyPairGenerator section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 @param provider the string name of the provider.
 @return the new KeyPairGenerator object.
 @throw NoSuchAlgorithmExceptionif a KeyPairGeneratorSpi
           implementation for the specified algorithm is not
           available from the specified provider.
 @throw NoSuchProviderExceptionif the specified provider is not
           registered in the security provider list.
 @throw IllegalArgumentExceptionif the provider name is null
           or empty.
 - seealso: Provider
 */
+ (JavaSecurityKeyPairGenerator *)getInstanceWithNSString:(NSString *)algorithm
                                             withNSString:(NSString *)provider;

/*!
 @brief Returns the provider of this key pair generator object.
 @return the provider of this key pair generator object
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes the key pair generator using the specified parameter
  set and the <code>SecureRandom</code>
  implementation of the highest-priority installed provider as the source
  of randomness.
 (If none of the installed providers supply an implementation of 
 <code>SecureRandom</code>, a system-provided source of randomness is
  used.). 
 <p>This concrete method has been added to this previously-defined
  abstract class.
  This method calls the KeyPairGeneratorSpi 
 <code>initialize</code>
  method,
  passing it <code>params</code> and a source of randomness (obtained
  from the highest-priority installed provider or system-provided if none
  of the installed providers supply one).
  That <code>initialize</code> method always throws an
  UnsupportedOperationException if it is not overridden by the provider.
 @param params the parameter set used to generate the keys.
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key pair generator.
 @since 1.2
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes the key pair generator with the given parameter
  set and source of randomness.
 <p>This concrete method has been added to this previously-defined
  abstract class.
  This method calls the KeyPairGeneratorSpi <code>initialize</code>
  method,
  passing it <code>params</code> and <code>random</code>.
  That <code>initialize</code>
  method always throws an
  UnsupportedOperationException if it is not overridden by the provider.
 @param params the parameter set used to generate the keys.
 @param random the source of randomness.
 @throw InvalidAlgorithmParameterExceptionif the given parameters
  are inappropriate for this key pair generator.
 @since 1.2
 */
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)params
                                  withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes the key pair generator for a certain keysize using
  a default parameter set and the <code>SecureRandom</code>
  implementation of the highest-priority installed provider as the source
  of randomness.
 (If none of the installed providers supply an implementation of 
 <code>SecureRandom</code>, a system-provided source of randomness is
  used.)
 @param keysize the keysize. This is an  algorithm-specific metric, such as modulus length, specified in
   number of bits.
 @throw InvalidParameterExceptionif the <code>keysize</code> is not
  supported by this KeyPairGenerator object.
 */
- (void)initialize__WithInt:(jint)keysize OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes the key pair generator for a certain keysize with
  the given source of randomness (and a default parameter set).
 @param keysize the keysize. This is an  algorithm-specific metric, such as modulus length, specified in
   number of bits.
 @param random the source of randomness.
 @throw InvalidParameterExceptionif the <code>keysize</code> is not
  supported by this KeyPairGenerator object.
 @since 1.2
 */
- (void)initialize__WithInt:(jint)keysize
withJavaSecuritySecureRandom:(JavaSecuritySecureRandom *)random OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Creates a KeyPairGenerator object for the specified algorithm.
 @param algorithm the standard string name of the algorithm.  See the KeyPairGenerator section in the 
  <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/security/StandardNames.html#KeyPairGenerator">
   Java Cryptography Architecture Standard Algorithm Name Documentation
  </a>  for information about standard algorithm names.
 */
- (instancetype)initWithNSString:(NSString *)algorithm;

#pragma mark Package-Private

- (void)disableFailover;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyPairGenerator)

J2OBJC_FIELD_SETTER(JavaSecurityKeyPairGenerator, provider_, JavaSecurityProvider *)

FOUNDATION_EXPORT void JavaSecurityKeyPairGenerator_initWithNSString_(JavaSecurityKeyPairGenerator *self, NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaSecurityKeyPairGenerator *JavaSecurityKeyPairGenerator_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyPairGenerator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyPairGenerator")
