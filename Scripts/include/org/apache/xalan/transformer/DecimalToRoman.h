//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/DecimalToRoman.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerDecimalToRoman")
#ifdef RESTRICT_OrgApacheXalanTransformerDecimalToRoman
#define INCLUDE_ALL_OrgApacheXalanTransformerDecimalToRoman 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerDecimalToRoman 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerDecimalToRoman

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerDecimalToRoman_) && (INCLUDE_ALL_OrgApacheXalanTransformerDecimalToRoman || defined(INCLUDE_OrgApacheXalanTransformerDecimalToRoman))
#define OrgApacheXalanTransformerDecimalToRoman_

/*!
 @brief Structure to help in converting integers to roman numerals
  internal
 */
@interface OrgApacheXalanTransformerDecimalToRoman : NSObject {
 @public
  /*!
   @brief Minimum value for a given range of roman numbers
   */
  jlong m_postValue_;
  /*!
   @brief Correspoding letter (roman) to m_postValue
   */
  NSString *m_postLetter_;
  /*!
   @brief Value of last prefixed number within that same range
   */
  jlong m_preValue_;
  /*!
   @brief Correspoding letter (roman) to m_preValue
   */
  NSString *m_preLetter_;
}

#pragma mark Public

/*!
 @brief Constructor DecimalToRoman
 @param postValue Minimum value for a given range of 
 roman numbers
 @param postLetter Correspoding letter (roman) to postValue
 @param preValue Value of last prefixed number within 
 that same range (i.e. IV if postval is 5 (V))
 @param preLetter Correspoding letter(roman) to preValue
 */
- (instancetype)initWithLong:(jlong)postValue
                withNSString:(NSString *)postLetter
                    withLong:(jlong)preValue
                withNSString:(NSString *)preLetter;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerDecimalToRoman)

J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerDecimalToRoman, m_postLetter_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTransformerDecimalToRoman, m_preLetter_, NSString *)

FOUNDATION_EXPORT void OrgApacheXalanTransformerDecimalToRoman_initWithLong_withNSString_withLong_withNSString_(OrgApacheXalanTransformerDecimalToRoman *self, jlong postValue, NSString *postLetter, jlong preValue, NSString *preLetter);

FOUNDATION_EXPORT OrgApacheXalanTransformerDecimalToRoman *new_OrgApacheXalanTransformerDecimalToRoman_initWithLong_withNSString_withLong_withNSString_(jlong postValue, NSString *postLetter, jlong preValue, NSString *preLetter) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerDecimalToRoman *create_OrgApacheXalanTransformerDecimalToRoman_initWithLong_withNSString_withLong_withNSString_(jlong postValue, NSString *postLetter, jlong preValue, NSString *preLetter);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerDecimalToRoman)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerDecimalToRoman")