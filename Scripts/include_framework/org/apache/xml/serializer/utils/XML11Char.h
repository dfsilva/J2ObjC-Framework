//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/XML11Char.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsXML11Char")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsXML11Char
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsXML11Char 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsXML11Char 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsXML11Char

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerUtilsXML11Char_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsXML11Char || defined(INCLUDE_OrgApacheXmlSerializerUtilsXML11Char))
#define OrgApacheXmlSerializerUtilsXML11Char_

/*!
 @brief THIS IS A COPY OF THE XERCES-2J CLASS org.apache.xerces.utls.XMLChar
 This class defines the basic properties of characters in XML 1.1.
 The data
 in this class can be used to verify that a character is a valid
 XML 1.1 character or if the character is a space, name start, or name
 character.
 <p>
 A series of convenience methods are supplied to ease the burden
 of the developer.  Using the character as an index into the <code>XML11CHARS</code>
 array and applying the appropriate mask flag (e.g.
 <code>MASK_VALID</code>), yields the same results as calling the
 convenience methods. There is one exception: check the comments
 for the <code>isValid</code> method for details.
 @author Glenn Marcy, IBM
 @author Andy Clark, IBM
 @author Arnaud  Le Hors, IBM
 @author Neil Graham, IBM
 @author Michael Glavassevich, IBM
 @version $Id: $
 */
@interface OrgApacheXmlSerializerUtilsXML11Char : NSObject

+ (jint)MASK_XML11_VALID;

+ (jint)MASK_XML11_SPACE;

+ (jint)MASK_XML11_NAME_START;

+ (jint)MASK_XML11_NAME;

+ (jint)MASK_XML11_CONTROL;

+ (jint)MASK_XML11_CONTENT;

+ (jint)MASK_XML11_NCNAME_START;

+ (jint)MASK_XML11_NCNAME;

+ (jint)MASK_XML11_CONTENT_INTERNAL;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns true if the specified character can be considered 
 content in an external parsed entity.
 @param c The character to check.
 */
+ (jboolean)isXML11ContentWithInt:(jint)c;

/*!
 @brief Returns true if the specified character can be considered 
 content in an internal parsed entity.
 @param c The character to check.
 */
+ (jboolean)isXML11InternalEntityContentWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is invalid.
 @param c The character to check.
 */
+ (jboolean)isXML11InvalidWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is a valid name
 character as defined by production [4a] in the XML 1.1
 specification.
 @param c The character to check.
 */
+ (jboolean)isXML11NameWithInt:(jint)c;

/*!
 @brief Returns whether the given character is a valid 
 high surrogate for a name character.
 This includes
 all high surrogates for characters [0x10000-0xEFFFF].
 In other words everything excluding planes 15 and 16.
 @param c The character to check.
 */
+ (jboolean)isXML11NameHighSurrogateWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is a valid name start
 character as defined by production [4] in the XML 1.1
 specification.
 @param c The character to check.
 */
+ (jboolean)isXML11NameStartWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is a valid NCName
 character as defined by production [5] in Namespaces in XML
 1.1 recommendation.
 @param c The character to check.
 */
+ (jboolean)isXML11NCNameWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is a valid NCName start
 character as defined by production [4] in Namespaces in XML
 1.1 recommendation.
 @param c The character to check.
 */
+ (jboolean)isXML11NCNameStartWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is a space character
 as amdended in the XML 1.1 specification.
 @param c The character to check.
 */
+ (jboolean)isXML11SpaceWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is valid.
 This method
 also checks the surrogate character range from 0x10000 to 0x10FFFF.
 <p>
 If the program chooses to apply the mask directly to the
 <code>XML11CHARS</code> array, then they are responsible for checking
 the surrogate character range.
 @param c The character to check.
 */
+ (jboolean)isXML11ValidWithInt:(jint)c;

/*!
 @brief Returns true if the specified character is valid and permitted outside
 of a character reference.
 That is, this method will return false for the same set as
 isXML11Valid, except it also reports false for "control characters".
 @param c The character to check.
 */
+ (jboolean)isXML11ValidLiteralWithInt:(jint)c;

/*!
 @brief Check to see if a string is a valid Name according to [5]
 in the XML 1.1 Recommendation
 @param name string to check
 @return true if name is a valid Name
 */
+ (jboolean)isXML11ValidNameWithNSString:(NSString *)name;

/*!
 @brief Check to see if a string is a valid NCName according to [4]
 from the XML Namespaces 1.1 Recommendation
 @param ncName string to check
 @return true if name is a valid NCName
 */
+ (jboolean)isXML11ValidNCNameWithNSString:(NSString *)ncName;

/*!
 @brief Check to see if a string is a valid Nmtoken according to [7]
 in the XML 1.1 Recommendation
 @param nmtoken string to check
 @return true if nmtoken is a valid Nmtoken
 */
+ (jboolean)isXML11ValidNmtokenWithNSString:(NSString *)nmtoken;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlSerializerUtilsXML11Char)

/*!
 @brief XML 1.1 Valid character mask.
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_VALID();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_VALID 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_VALID, jint)

/*!
 @brief XML 1.1 Space character mask.
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_SPACE();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_SPACE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_SPACE, jint)

/*!
 @brief XML 1.1 Name start character mask.
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_NAME_START();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_NAME_START 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_NAME_START, jint)

/*!
 @brief XML 1.1 Name character mask.
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_NAME();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_NAME 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_NAME, jint)

/*!
 @brief XML 1.1 control character mask
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_CONTROL();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_CONTROL 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_CONTROL, jint)

/*!
 @brief XML 1.1 content for external entities (valid - "special" chars - control chars)
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_CONTENT();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_CONTENT 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_CONTENT, jint)

/*!
 @brief XML namespaces 1.1 NCNameStart
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_NCNAME_START();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_NCNAME_START 64
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_NCNAME_START, jint)

/*!
 @brief XML namespaces 1.1 NCName
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_NCNAME();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_NCNAME 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_NCNAME, jint)

/*!
 @brief XML 1.1 content for internal entities (valid - "special" chars)
 */
inline jint OrgApacheXmlSerializerUtilsXML11Char_get_MASK_XML11_CONTENT_INTERNAL();
#define OrgApacheXmlSerializerUtilsXML11Char_MASK_XML11_CONTENT_INTERNAL 48
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerUtilsXML11Char, MASK_XML11_CONTENT_INTERNAL, jint)

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11SpaceWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ValidWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11InvalidWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ValidLiteralWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ContentWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11InternalEntityContentWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11NameStartWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11NameWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11NCNameStartWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11NCNameWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11NameHighSurrogateWithInt_(jint c);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ValidNameWithNSString_(NSString *name);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ValidNCNameWithNSString_(NSString *ncName);

FOUNDATION_EXPORT jboolean OrgApacheXmlSerializerUtilsXML11Char_isXML11ValidNmtokenWithNSString_(NSString *nmtoken);

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsXML11Char_init(OrgApacheXmlSerializerUtilsXML11Char *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsXML11Char *new_OrgApacheXmlSerializerUtilsXML11Char_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsXML11Char *create_OrgApacheXmlSerializerUtilsXML11Char_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsXML11Char)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsXML11Char")
