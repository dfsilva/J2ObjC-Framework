//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/Normalizer.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextNormalizer")
#ifdef RESTRICT_JavaTextNormalizer
#define INCLUDE_ALL_JavaTextNormalizer 0
#else
#define INCLUDE_ALL_JavaTextNormalizer 1
#endif
#undef RESTRICT_JavaTextNormalizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextNormalizer_) && (INCLUDE_ALL_JavaTextNormalizer || defined(INCLUDE_JavaTextNormalizer))
#define JavaTextNormalizer_

@class JavaTextNormalizer_Form;
@protocol JavaLangCharSequence;

/*!
 @brief Provides normalization functions according to
 <a href="http://www.unicode.org/unicode/reports/tr15/tr15-23.html">Unicode Standard Annex #15:
 Unicode Normalization Forms</a>.
 Normalization can decompose and compose
 characters for equivalency checking.
 @since 1.6
 */
@interface JavaTextNormalizer : NSObject

#pragma mark Public

/*!
 @brief Check whether the given character sequence <code>src</code> is normalized
 according to the normalization method <code>form</code>.
 @param src character sequence to check
 @param form normalization form to check against
 @return true if normalized according to <code>form</code>
 */
+ (jboolean)isNormalizedWithJavaLangCharSequence:(id<JavaLangCharSequence>)src
                     withJavaTextNormalizer_Form:(JavaTextNormalizer_Form *)form;

/*!
 @brief Normalize the character sequence <code>src</code> according to the
 normalization method <code>form</code>.
 @param src character sequence to read for normalization
 @param form normalization form
 @return string normalized according to <code>form</code>
 */
+ (NSString *)normalizeWithJavaLangCharSequence:(id<JavaLangCharSequence>)src
                    withJavaTextNormalizer_Form:(JavaTextNormalizer_Form *)form;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextNormalizer)

FOUNDATION_EXPORT jboolean JavaTextNormalizer_isNormalizedWithJavaLangCharSequence_withJavaTextNormalizer_Form_(id<JavaLangCharSequence> src, JavaTextNormalizer_Form *form);

FOUNDATION_EXPORT NSString *JavaTextNormalizer_normalizeWithJavaLangCharSequence_withJavaTextNormalizer_Form_(id<JavaLangCharSequence> src, JavaTextNormalizer_Form *form);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNormalizer)

#endif

#if !defined (JavaTextNormalizer_Form_) && (INCLUDE_ALL_JavaTextNormalizer || defined(INCLUDE_JavaTextNormalizer_Form))
#define JavaTextNormalizer_Form_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaTextNormalizer_Form_Enum) {
  JavaTextNormalizer_Form_Enum_NFD = 0,
  JavaTextNormalizer_Form_Enum_NFC = 1,
  JavaTextNormalizer_Form_Enum_NFKD = 2,
  JavaTextNormalizer_Form_Enum_NFKC = 3,
};

/*!
 @brief The normalization forms supported by the Normalizer.
 These are specified in
 <a href="http://www.unicode.org/unicode/reports/tr15/tr15-23.html">Unicode Standard
 Annex #15</a>.
 */
@interface JavaTextNormalizer_Form : JavaLangEnum < NSCopying >

+ (JavaTextNormalizer_Form *)NFD;

+ (JavaTextNormalizer_Form *)NFC;

+ (JavaTextNormalizer_Form *)NFKD;

+ (JavaTextNormalizer_Form *)NFKC;

#pragma mark Public

+ (JavaTextNormalizer_Form *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaTextNormalizer_Form_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaTextNormalizer_Form)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaTextNormalizer_Form *JavaTextNormalizer_Form_values_[];

/*!
 @brief Normalization Form D - Canonical Decomposition.
 */
inline JavaTextNormalizer_Form *JavaTextNormalizer_Form_get_NFD();
J2OBJC_ENUM_CONSTANT(JavaTextNormalizer_Form, NFD)

/*!
 @brief Normalization Form C - Canonical Decomposition, followed by Canonical Composition.
 */
inline JavaTextNormalizer_Form *JavaTextNormalizer_Form_get_NFC();
J2OBJC_ENUM_CONSTANT(JavaTextNormalizer_Form, NFC)

/*!
 @brief Normalization Form KD - Compatibility Decomposition.
 */
inline JavaTextNormalizer_Form *JavaTextNormalizer_Form_get_NFKD();
J2OBJC_ENUM_CONSTANT(JavaTextNormalizer_Form, NFKD)

/*!
 @brief Normalization Form KC - Compatibility Decomposition, followed by Canonical Composition.
 */
inline JavaTextNormalizer_Form *JavaTextNormalizer_Form_get_NFKC();
J2OBJC_ENUM_CONSTANT(JavaTextNormalizer_Form, NFKC)

FOUNDATION_EXPORT IOSObjectArray *JavaTextNormalizer_Form_values();

FOUNDATION_EXPORT JavaTextNormalizer_Form *JavaTextNormalizer_Form_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaTextNormalizer_Form *JavaTextNormalizer_Form_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextNormalizer_Form)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextNormalizer")
