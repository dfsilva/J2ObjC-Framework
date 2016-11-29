//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/awt/font/NumericShaper.java
//

/*!
 @author Ilya S. Okomin
 @version $Revision$
 */
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaAwtFontNumericShaper")
#ifdef RESTRICT_JavaAwtFontNumericShaper
#define INCLUDE_ALL_JavaAwtFontNumericShaper 0
#else
#define INCLUDE_ALL_JavaAwtFontNumericShaper 1
#endif
#undef RESTRICT_JavaAwtFontNumericShaper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaAwtFontNumericShaper_) && (INCLUDE_ALL_JavaAwtFontNumericShaper || defined(INCLUDE_JavaAwtFontNumericShaper))
#define JavaAwtFontNumericShaper_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSCharArray;

/*!
 @brief The Class NumericShaper provides methods to convert latin character codes
 to unicode character codes.
 For tables of the character codes used,
 see <a href="http://www.unicode.org/Public/UNIDATA/">unicode.org</a>.
 */
@interface JavaAwtFontNumericShaper : NSObject < JavaIoSerializable >

+ (jint)EUROPEAN;

+ (jint)ARABIC;

+ (jint)EASTERN_ARABIC;

+ (jint)DEVANAGARI;

+ (jint)BENGALI;

+ (jint)GURMUKHI;

+ (jint)GUJARATI;

+ (jint)ORIYA;

+ (jint)TAMIL;

+ (jint)TELUGU;

+ (jint)KANNADA;

+ (jint)MALAYALAM;

+ (jint)THAI;

+ (jint)LAO;

+ (jint)TIBETAN;

+ (jint)MYANMAR;

+ (jint)ETHIOPIC;

+ (jint)KHMER;

+ (jint)MONGOLIAN;

+ (jint)ALL_RANGES;

#pragma mark Public

- (jboolean)isEqual:(id)obj;

/*!
 @brief Gets the NumericShaper for the specified unicode ranges.
 The OR logical operation should be used for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 The NumericShaper returned by this method is contextual
 in that it supports multiple character ranges, depending
 on the context.
 @param ranges the unicode ranges.
 @return the NumericShaper for the specified ranges.
 */
+ (JavaAwtFontNumericShaper *)getContextualShaperWithInt:(jint)ranges;

/*!
 @brief Gets the NumericShaper for the specified unicode ranges
 and default unicode range.
 The defaultContext parameter
 is used as the starting context (which indicates the
 language/script being used). The OR logical operation
 should be used for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 The NumericShaper returned by this method is contextual
 in that it supports multiple character ranges, depending
 on the context.
 @param ranges the unicode ranges.
 @param defaultContext the default, starting context.
 @return the NumericShaper for the specified ranges.
 */
+ (JavaAwtFontNumericShaper *)getContextualShaperWithInt:(jint)ranges
                                                 withInt:(jint)defaultContext;

/*!
 @brief Gets the masks for all of the ranges supported by this NumericShaper,
 packed into an int value using the logical OR logical operation
 for multiple ranges:
 NumericShaper.DEVANAGARI | NumericShaper.BENGALI.
 @return all ranges of this NumericShaper.
 */
- (jint)getRanges;

/*!
 @brief Gets a NumericShaper for the specified unicode range.
 The NumericShaper supports only a single range and
 hence is not contextual.
 @param singleRange the specified unicode single range.
 @return the NumericShaper for the specified unicode range.
 */
+ (JavaAwtFontNumericShaper *)getShaperWithInt:(jint)singleRange;

- (NSUInteger)hash;

/*!
 @brief Checks if this NumericShaper is contextual (supporting
 multiple script ranges) or not.
 @return true, if this NumericShaper is contextual, false otherwise.
 */
- (jboolean)isContextual;

/*!
 @brief Transforms the encoding of the text, starting from the character
 at index start and transforming count characters.
 @param text the text to be shaped.
 @param start the start offset of the text.
 @param count the number of characters to be shaped.
 */
- (void)shapeWithCharArray:(IOSCharArray *)text
                   withInt:(jint)start
                   withInt:(jint)count;

/*!
 @brief Transforms the encoding of the text, starting from the character
 at index start and transforming count characters,
 using the specified context.
 @param text the text to be shaped.
 @param start the start offset of the text.
 @param count the number of characters to be shaped.
 @param context the context to be used for shaping.
 */
- (void)shapeWithCharArray:(IOSCharArray *)text
                   withInt:(jint)start
                   withInt:(jint)count
                   withInt:(jint)context;

- (NSString *)description;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaAwtFontNumericShaper)

/*!
 @brief The Constant EUROPEAN indicates the latin and extended range,
 and latin decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_EUROPEAN();
#define JavaAwtFontNumericShaper_EUROPEAN 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, EUROPEAN, jint)

/*!
 @brief The Constant ARABIC indicates the ARABIC range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_ARABIC();
#define JavaAwtFontNumericShaper_ARABIC 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, ARABIC, jint)

/*!
 @brief The Constant EASTERN_ARABIC indicates the ARABIC range and
 ARABIC_EXTENDED decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_EASTERN_ARABIC();
#define JavaAwtFontNumericShaper_EASTERN_ARABIC 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, EASTERN_ARABIC, jint)

/*!
 @brief The Constant DEVANAGARI indicates the DEVANAGARI range and
 decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_DEVANAGARI();
#define JavaAwtFontNumericShaper_DEVANAGARI 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, DEVANAGARI, jint)

/*!
 @brief The Constant BENGALI indicates the BENGALI range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_BENGALI();
#define JavaAwtFontNumericShaper_BENGALI 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, BENGALI, jint)

/*!
 @brief The Constant GURMUKHI indicates the GURMUKHI range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_GURMUKHI();
#define JavaAwtFontNumericShaper_GURMUKHI 32
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, GURMUKHI, jint)

/*!
 @brief The Constant GUJARATI indicates the GUJARATI range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_GUJARATI();
#define JavaAwtFontNumericShaper_GUJARATI 64
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, GUJARATI, jint)

/*!
 @brief The Constant ORIYA indicates the ORIYA range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_ORIYA();
#define JavaAwtFontNumericShaper_ORIYA 128
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, ORIYA, jint)

/*!
 @brief The Constant TAMIL indicates the TAMIL range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_TAMIL();
#define JavaAwtFontNumericShaper_TAMIL 256
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, TAMIL, jint)

/*!
 @brief The Constant TELUGU indicates the TELUGU range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_TELUGU();
#define JavaAwtFontNumericShaper_TELUGU 512
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, TELUGU, jint)

/*!
 @brief The Constant KANNADA indicates the KANNADA range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_KANNADA();
#define JavaAwtFontNumericShaper_KANNADA 1024
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, KANNADA, jint)

/*!
 @brief The Constant MALAYALAM indicates the MALAYALAM range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_MALAYALAM();
#define JavaAwtFontNumericShaper_MALAYALAM 2048
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, MALAYALAM, jint)

/*!
 @brief The Constant THAI indicates the THAI range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_THAI();
#define JavaAwtFontNumericShaper_THAI 4096
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, THAI, jint)

/*!
 @brief The Constant LAO indicates the LAO range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_LAO();
#define JavaAwtFontNumericShaper_LAO 8192
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, LAO, jint)

/*!
 @brief The Constant TIBETAN indicates the TIBETAN range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_TIBETAN();
#define JavaAwtFontNumericShaper_TIBETAN 16384
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, TIBETAN, jint)

/*!
 @brief The Constant MYANMAR indicates the MYANMAR range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_MYANMAR();
#define JavaAwtFontNumericShaper_MYANMAR 32768
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, MYANMAR, jint)

/*!
 @brief The Constant ETHIOPIC indicates the ETHIOPIC range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_ETHIOPIC();
#define JavaAwtFontNumericShaper_ETHIOPIC 65536
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, ETHIOPIC, jint)

/*!
 @brief The Constant KHMER indicates the KHMER range and decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_KHMER();
#define JavaAwtFontNumericShaper_KHMER 131072
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, KHMER, jint)

/*!
 @brief The Constant MONGOLIAN indicates the MONGOLIAN range and
 decimal base.
 */
inline jint JavaAwtFontNumericShaper_get_MONGOLIAN();
#define JavaAwtFontNumericShaper_MONGOLIAN 262144
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, MONGOLIAN, jint)

/*!
 @brief The Constant ALL_RANGES indicates all ranges.
 */
inline jint JavaAwtFontNumericShaper_get_ALL_RANGES();
#define JavaAwtFontNumericShaper_ALL_RANGES 524287
J2OBJC_STATIC_FIELD_CONSTANT(JavaAwtFontNumericShaper, ALL_RANGES, jint)

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getContextualShaperWithInt_withInt_(jint ranges, jint defaultContext);

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getContextualShaperWithInt_(jint ranges);

FOUNDATION_EXPORT JavaAwtFontNumericShaper *JavaAwtFontNumericShaper_getShaperWithInt_(jint singleRange);

J2OBJC_TYPE_LITERAL_HEADER(JavaAwtFontNumericShaper)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaAwtFontNumericShaper")
