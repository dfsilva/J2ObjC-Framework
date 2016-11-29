//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/CDATASection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomCDATASection")
#ifdef RESTRICT_OrgW3cDomCDATASection
#define INCLUDE_ALL_OrgW3cDomCDATASection 0
#else
#define INCLUDE_ALL_OrgW3cDomCDATASection 1
#endif
#undef RESTRICT_OrgW3cDomCDATASection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomCDATASection_) && (INCLUDE_ALL_OrgW3cDomCDATASection || defined(INCLUDE_OrgW3cDomCDATASection))
#define OrgW3cDomCDATASection_

#define RESTRICT_OrgW3cDomText 1
#define INCLUDE_OrgW3cDomText 1
#include "org/w3c/dom/Text.h"

/*!
 @brief CDATA sections are used to escape blocks of text containing characters that
 would otherwise be regarded as markup.
 The only delimiter that is
 recognized in a CDATA section is the "]]&gt;" string that ends the CDATA
 section. CDATA sections cannot be nested. Their primary purpose is for
 including material such as XML fragments, without needing to escape all
 the delimiters.
 <p>The <code>CharacterData.data</code> attribute holds the text that is
 contained by the CDATA section. Note that this <em>may</em> contain characters that need to be escaped outside of CDATA sections and
 that, depending on the character encoding ("charset") chosen for
 serialization, it may be impossible to write out some characters as part
 of a CDATA section.
 <p>The <code>CDATASection</code> interface inherits from the
 <code>CharacterData</code> interface through the <code>Text</code>
 interface. Adjacent <code>CDATASection</code> nodes are not merged by use
 of the <code>normalize</code> method of the <code>Node</code> interface.
 <p> No lexical check is done on the content of a CDATA section and it is
 therefore possible to have the character sequence <code>"]]&gt;"</code>
 in the content, which is illegal in a CDATA section per section 2.7 of [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>]. The
 presence of this character sequence must generate a fatal error during
 serialization or the cdata section must be splitted before the
 serialization (see also the parameter <code>"split-cdata-sections"</code>
 in the <code>DOMConfiguration</code> interface).
 <p ><b>Note:</b> Because no markup is recognized within a
 <code>CDATASection</code>, character numeric references cannot be used as
 an escape mechanism when serializing. Therefore, action needs to be taken
 when serializing a <code>CDATASection</code> with a character encoding
 where some of the contained characters cannot be represented. Failure to
 do so would not produce well-formed XML.
 <p ><b>Note:</b> One potential solution in the serialization process is to
 end the CDATA section before the character, output the character using a
 character reference or entity reference, and open a new CDATA section for
 any further characters in the text node. Note, however, that some code
 conversion libraries at the time of writing do not return an error or
 exception when a character is missing from the encoding, making the task
 of ensuring that data is not corrupted on serialization more difficult.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomCDATASection < OrgW3cDomText, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomCDATASection)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomCDATASection)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomCDATASection")
