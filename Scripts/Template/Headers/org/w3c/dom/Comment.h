//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/Comment.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomComment")
#ifdef RESTRICT_OrgW3cDomComment
#define INCLUDE_ALL_OrgW3cDomComment 0
#else
#define INCLUDE_ALL_OrgW3cDomComment 1
#endif
#undef RESTRICT_OrgW3cDomComment

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomComment_) && (INCLUDE_ALL_OrgW3cDomComment || defined(INCLUDE_OrgW3cDomComment))
#define OrgW3cDomComment_

#define RESTRICT_OrgW3cDomCharacterData 1
#define INCLUDE_OrgW3cDomCharacterData 1
#include "../../../org/w3c/dom/CharacterData.h"

/*!
 @brief This interface inherits from <code>CharacterData</code> and represents the
  content of a comment, i.e., all the characters between the starting ' 
 <code>&lt;!
 --</code>' and ending '<code>--&gt;</code>'.Note that this is
  the definition of a comment in XML, and, in practice, HTML, although some
  HTML tools may implement the full SGML comment structure. 
 <p> No lexical check is done on the content of a comment and it is
  therefore possible to have the character sequence <code>"--"</code>
  (double-hyphen) in the content, which is illegal in a comment per section
  2.5 of [<a href='http://www.w3.org/TR/2004/REC-xml-20040204'>XML 1.0</a>]. The
  presence of this character sequence must generate a fatal error during
  serialization. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomComment < OrgW3cDomCharacterData, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomComment)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomComment)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomComment")
