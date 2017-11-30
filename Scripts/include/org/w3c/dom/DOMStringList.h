//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMStringList.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMStringList")
#ifdef RESTRICT_OrgW3cDomDOMStringList
#define INCLUDE_ALL_OrgW3cDomDOMStringList 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMStringList 1
#endif
#undef RESTRICT_OrgW3cDomDOMStringList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMStringList_) && (INCLUDE_ALL_OrgW3cDomDOMStringList || defined(INCLUDE_OrgW3cDomDOMStringList))
#define OrgW3cDomDOMStringList_

/*!
 @brief The <code>DOMStringList</code> interface provides the abstraction of an
  ordered collection of <code>DOMString</code> values, without defining or
  constraining how this collection is implemented.The items in the 
 <code>DOMStringList</code> are accessible via an integral index, starting
  from 0.
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMStringList < JavaObject >

/*!
 @brief Returns the <code>index</code>th item in the collection.If
  <code>index</code> is greater than or equal to the number of 
 <code>DOMString</code>s in the list, this returns <code>null</code>.
 @param index Index into the collection.
 @return The <code>DOMString</code> at the <code>index</code>th
    position in the <code>DOMStringList</code>, or <code>null</code> if
    that is not a valid index.
 */
- (NSString *)itemWithInt:(jint)index;

/*!
 @brief The number of <code>DOMString</code>s in the list.The range of valid
  child node indices is 0 to <code>length-1</code> inclusive.
 */
- (jint)getLength;

/*!
 @brief Test if a string is part of this <code>DOMStringList</code>.
 @param str The string to look for.
 @return <code>true</code> if the string has been found,
    <code>false</code> otherwise.
 */
- (jboolean)containsWithNSString:(NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMStringList)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMStringList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMStringList")
