//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URLEncoder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURLEncoder")
#ifdef RESTRICT_JavaNetURLEncoder
#define INCLUDE_ALL_JavaNetURLEncoder 0
#else
#define INCLUDE_ALL_JavaNetURLEncoder 1
#endif
#undef RESTRICT_JavaNetURLEncoder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetURLEncoder_) && (INCLUDE_ALL_JavaNetURLEncoder || defined(INCLUDE_JavaNetURLEncoder))
#define JavaNetURLEncoder_

@class JavaUtilBitSet;

/*!
 @brief Utility class for HTML form encoding.This class contains static methods
  for converting a String to the <CODE>application/x-www-form-urlencoded</CODE> MIME
  format.
 For more information about HTML form encoding, consult the HTML 
 <A HREF="http://www.w3.org/TR/html4/">specification</A>.
  
 <p>
  When encoding a String, the following rules apply: 
 <p>
  <ul>
  <li>The alphanumeric characters &quot;<code>a</code>&quot; through
      &quot;<code>z</code>&quot;, &quot;<code>A</code>&quot; through
      &quot;<code>Z</code>&quot; and &quot;<code>0</code>&quot;
      through &quot;<code>9</code>&quot; remain the same. 
 <li>The special characters &quot;<code>.</code>&quot;,
      &quot;<code>-</code>&quot;, &quot;<code>
 *</code>&quot;, and     &quot;<code>_</code>&quot; remain the same. 
 <li>The space character &quot;<code>&nbsp;</code>&quot; is
      converted into a plus sign &quot;<code>+</code>&quot;.
  <li>All other characters are unsafe and are first converted into
      one or more bytes using some encoding scheme. Then each byte is
      represented by the 3-character string     
 &quot;<code>%<i>xy</i></code>&quot;, where <i>xy</i> is the
      two-digit hexadecimal representation of the byte.
      The recommended encoding scheme to use is UTF-8. However,
      for compatibility reasons, if an encoding is not specified,
      then the default encoding of the platform is used. 
 </ul>
  
 <p>
  For example using UTF-8 as the encoding scheme the string &quot;The
  string &#252;@@foo-bar&quot; would get converted to 
 &quot;The+string+%C3%BC%40foo-bar&quot; because in UTF-8 the character 
 &#252; is encoded as two bytes C3 (hex) and BC (hex), and the
  character @@ is encoded as one byte 40 (hex).
 @author Herb Jellinek
 @since JDK1.0
 */
@interface JavaNetURLEncoder : NSObject

+ (JavaUtilBitSet *)dontNeedEncoding;

+ (void)setDontNeedEncoding:(JavaUtilBitSet *)value;

+ (jint)caseDiff;

+ (NSString *)dfltEncName;

+ (void)setDfltEncName:(NSString *)value;

#pragma mark Public

/*!
 @brief Translates a string into <code>x-www-form-urlencoded</code>
  format.This method uses the platform's default encoding
  as the encoding scheme to obtain the bytes for unsafe characters.
 @param s <code> String </code>  to be translated.
 @return the translated <code>String</code>.
 */
+ (NSString *)encodeWithNSString:(NSString *)s __attribute__((deprecated));

/*!
 @brief Translates a string into <code>application/x-www-form-urlencoded</code>
  format using a specific encoding scheme.This method uses the
  supplied encoding scheme to obtain the bytes for unsafe
  characters.
 <p>
  <em><strong>Note:</strong> The <a href="http://www.w3.org/TR/html40/appendix/notes.html#non-ascii-chars">
  World Wide Web Consortium Recommendation</a> states that
  UTF-8 should be used. Not doing so may introduce
  incompatibilites.</em>
 @param s <code> String </code>  to be translated.
 @param enc The name of a supported     
  <a href="../lang/package-summary.html#charenc"> character     encoding
  </a> .
 @return the translated <code>String</code>.
 @throw UnsupportedEncodingException
 If the named encoding is not supported
 - seealso: URLDecoder#decode(java.lang.String, java.lang.String)
 @since 1.4
 */
+ (NSString *)encodeWithNSString:(NSString *)s
                    withNSString:(NSString *)enc;

@end

J2OBJC_STATIC_INIT(JavaNetURLEncoder)

inline JavaUtilBitSet *JavaNetURLEncoder_get_dontNeedEncoding(void);
inline JavaUtilBitSet *JavaNetURLEncoder_set_dontNeedEncoding(JavaUtilBitSet *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaUtilBitSet *JavaNetURLEncoder_dontNeedEncoding;
J2OBJC_STATIC_FIELD_OBJ(JavaNetURLEncoder, dontNeedEncoding, JavaUtilBitSet *)

inline jint JavaNetURLEncoder_get_caseDiff(void);
#define JavaNetURLEncoder_caseDiff 32
J2OBJC_STATIC_FIELD_CONSTANT(JavaNetURLEncoder, caseDiff, jint)

inline NSString *JavaNetURLEncoder_get_dfltEncName(void);
inline NSString *JavaNetURLEncoder_set_dfltEncName(NSString *value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *JavaNetURLEncoder_dfltEncName;
J2OBJC_STATIC_FIELD_OBJ(JavaNetURLEncoder, dfltEncName, NSString *)

FOUNDATION_EXPORT NSString *JavaNetURLEncoder_encodeWithNSString_(NSString *s);

FOUNDATION_EXPORT NSString *JavaNetURLEncoder_encodeWithNSString_withNSString_(NSString *s, NSString *enc);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURLEncoder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURLEncoder")
