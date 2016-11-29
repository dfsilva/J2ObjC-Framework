//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/DOMLocator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomDOMLocator")
#ifdef RESTRICT_OrgW3cDomDOMLocator
#define INCLUDE_ALL_OrgW3cDomDOMLocator 0
#else
#define INCLUDE_ALL_OrgW3cDomDOMLocator 1
#endif
#undef RESTRICT_OrgW3cDomDOMLocator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomDOMLocator_) && (INCLUDE_ALL_OrgW3cDomDOMLocator || defined(INCLUDE_OrgW3cDomDOMLocator))
#define OrgW3cDomDOMLocator_

@protocol OrgW3cDomNode;

/*!
 @brief <code>DOMLocator</code> is an interface that describes a location (e.g.
 where an error occurred).
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 @since DOM Level 3
 */
@protocol OrgW3cDomDOMLocator < JavaObject >

/*!
 @brief The line number this locator is pointing to, or <code>-1</code> if
 there is no column number available.
 */
- (jint)getLineNumber;

/*!
 @brief The column number this locator is pointing to, or <code>-1</code> if
 there is no column number available.
 */
- (jint)getColumnNumber;

/*!
 @brief The byte offset into the input source this locator is pointing to or
 <code>-1</code> if there is no byte offset available.
 */
- (jint)getByteOffset;

/*!
 @brief The UTF-16, as defined in [Unicode] and Amendment 1 of [ISO/IEC 10646], offset into the input source this locator is pointing to or
 <code>-1</code> if there is no UTF-16 offset available.
 */
- (jint)getUtf16Offset;

/*!
 @brief The node this locator is pointing to, or <code>null</code> if no node
 is available.
 */
- (id<OrgW3cDomNode>)getRelatedNode;

/*!
 @brief The URI this locator is pointing to, or <code>null</code> if no URI is
 available.
 */
- (NSString *)getUri;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomDOMLocator)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomDOMLocator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomDOMLocator")
