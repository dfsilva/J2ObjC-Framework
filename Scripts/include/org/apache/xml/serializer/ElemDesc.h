//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ElemDesc.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerElemDesc")
#ifdef RESTRICT_OrgApacheXmlSerializerElemDesc
#define INCLUDE_ALL_OrgApacheXmlSerializerElemDesc 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerElemDesc 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerElemDesc

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerElemDesc_) && (INCLUDE_ALL_OrgApacheXmlSerializerElemDesc || defined(INCLUDE_OrgApacheXmlSerializerElemDesc))
#define OrgApacheXmlSerializerElemDesc_

/*!
 @brief This class has a series of flags (bit values) that describe an HTML element
 <p>
 This class is not a public API.
 It is public because it is used outside of this package.
  internal
 */
@interface OrgApacheXmlSerializerElemDesc : NSObject

+ (jint)EMPTY;

+ (jint)BLOCK;

+ (jint)BLOCKFORM;

+ (jint)BLOCKFORMFIELDSET;

+ (jint)RAW;

+ (jint)INLINELABEL;

+ (jint)FONTSTYLE;

+ (jint)PHRASE;

+ (jint)FORMCTRL;

+ (jint)SPECIAL;

+ (jint)ASPECIAL;

+ (jint)HEADMISC;

+ (jint)HEAD;

+ (jint)LIST;

+ (jint)PREFORMATTED;

+ (jint)WHITESPACESENSITIVE;

+ (jint)HEADELEM;

+ (jint)HTMLELEM;

+ (jint)ATTRURL;

+ (jint)ATTREMPTY;

#pragma mark Public

/*!
 @brief Tell if any of the bits of interest are set for a named attribute type.
 @param name non-null reference to attribute name, in any case.
 @param flags flag mask.
 @return true if any of the flags are set for the named attribute.
 */
- (jboolean)isAttrFlagSetWithNSString:(NSString *)name
                              withInt:(jint)flags;

#pragma mark Package-Private

/*!
 @brief Construct an ElemDesc from a set of bit flags.
 @param flags Bit flags that describe the basic properties of this element type.
 */
- (instancetype)initWithInt:(jint)flags;

- (jint)getFlags;

/*!
 @brief Set an attribute name and it's bit properties.
 @param name non-null name of attribute, in upper case.
 @param flags flag bits.
 */
- (void)setAttrWithNSString:(NSString *)name
                    withInt:(jint)flags;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerElemDesc)

/*!
 @brief Bit position if this element type is empty.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_EMPTY();
#define OrgApacheXmlSerializerElemDesc_EMPTY 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, EMPTY, jint)

/*!
 @brief Bit position if this element type is a block.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_BLOCK();
#define OrgApacheXmlSerializerElemDesc_BLOCK 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, BLOCK, jint)

/*!
 @brief Bit position if this element type is a block form.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_BLOCKFORM();
#define OrgApacheXmlSerializerElemDesc_BLOCKFORM 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, BLOCKFORM, jint)

/*!
 @brief Bit position if this element type is a block form field set.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_BLOCKFORMFIELDSET();
#define OrgApacheXmlSerializerElemDesc_BLOCKFORMFIELDSET 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, BLOCKFORMFIELDSET, jint)

/*!
 @brief Bit position if this element type is should be raw characters.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_RAW();
#define OrgApacheXmlSerializerElemDesc_RAW 256
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, RAW, jint)

/*!
 @brief Bit position if this element type is an inline label.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_INLINELABEL();
#define OrgApacheXmlSerializerElemDesc_INLINELABEL 2048
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, INLINELABEL, jint)

/*!
 @brief Bit position if this element type is a font style.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_FONTSTYLE();
#define OrgApacheXmlSerializerElemDesc_FONTSTYLE 4096
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, FONTSTYLE, jint)

/*!
 @brief Bit position if this element type is a phrase.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_PHRASE();
#define OrgApacheXmlSerializerElemDesc_PHRASE 8192
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, PHRASE, jint)

/*!
 @brief Bit position if this element type is a form control.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_FORMCTRL();
#define OrgApacheXmlSerializerElemDesc_FORMCTRL 16384
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, FORMCTRL, jint)

/*!
 @brief Bit position if this element type is ???.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_SPECIAL();
#define OrgApacheXmlSerializerElemDesc_SPECIAL 32768
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, SPECIAL, jint)

/*!
 @brief Bit position if this element type is ???.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_ASPECIAL();
#define OrgApacheXmlSerializerElemDesc_ASPECIAL 65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, ASPECIAL, jint)

/*!
 @brief Bit position if this element type is an odd header element.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_HEADMISC();
#define OrgApacheXmlSerializerElemDesc_HEADMISC 131072
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, HEADMISC, jint)

/*!
 @brief Bit position if this element type is a head element (i.e.
 H1, H2, etc.) 
 */
inline jint OrgApacheXmlSerializerElemDesc_get_HEAD();
#define OrgApacheXmlSerializerElemDesc_HEAD 262144
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, HEAD, jint)

/*!
 @brief Bit position if this element type is a list.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_LIST();
#define OrgApacheXmlSerializerElemDesc_LIST 524288
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, LIST, jint)

/*!
 @brief Bit position if this element type is a preformatted type.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_PREFORMATTED();
#define OrgApacheXmlSerializerElemDesc_PREFORMATTED 1048576
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, PREFORMATTED, jint)

/*!
 @brief Bit position if this element type is whitespace sensitive.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_WHITESPACESENSITIVE();
#define OrgApacheXmlSerializerElemDesc_WHITESPACESENSITIVE 2097152
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, WHITESPACESENSITIVE, jint)

/*!
 @brief Bit position if this element type is a header element (i.e.
 HEAD). 
 */
inline jint OrgApacheXmlSerializerElemDesc_get_HEADELEM();
#define OrgApacheXmlSerializerElemDesc_HEADELEM 4194304
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, HEADELEM, jint)

/*!
 @brief Bit position if this element is the "HTML" element
 */
inline jint OrgApacheXmlSerializerElemDesc_get_HTMLELEM();
#define OrgApacheXmlSerializerElemDesc_HTMLELEM 8388608
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, HTMLELEM, jint)

/*!
 @brief Bit position if this attribute type is a URL.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_ATTRURL();
#define OrgApacheXmlSerializerElemDesc_ATTRURL 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, ATTRURL, jint)

/*!
 @brief Bit position if this attribute type is an empty type.
 */
inline jint OrgApacheXmlSerializerElemDesc_get_ATTREMPTY();
#define OrgApacheXmlSerializerElemDesc_ATTREMPTY 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlSerializerElemDesc, ATTREMPTY, jint)

FOUNDATION_EXPORT void OrgApacheXmlSerializerElemDesc_initWithInt_(OrgApacheXmlSerializerElemDesc *self, jint flags);

FOUNDATION_EXPORT OrgApacheXmlSerializerElemDesc *new_OrgApacheXmlSerializerElemDesc_initWithInt_(jint flags) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerElemDesc *create_OrgApacheXmlSerializerElemDesc_initWithInt_(jint flags);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerElemDesc)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerElemDesc")
