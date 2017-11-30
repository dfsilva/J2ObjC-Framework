//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/w3c/dom/EntityReference.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgW3cDomEntityReference")
#ifdef RESTRICT_OrgW3cDomEntityReference
#define INCLUDE_ALL_OrgW3cDomEntityReference 0
#else
#define INCLUDE_ALL_OrgW3cDomEntityReference 1
#endif
#undef RESTRICT_OrgW3cDomEntityReference

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgW3cDomEntityReference_) && (INCLUDE_ALL_OrgW3cDomEntityReference || defined(INCLUDE_OrgW3cDomEntityReference))
#define OrgW3cDomEntityReference_

#define RESTRICT_OrgW3cDomNode 1
#define INCLUDE_OrgW3cDomNode 1
#include "../../../org/w3c/dom/Node.h"

/*!
 @brief <code>EntityReference</code> nodes may be used to represent an entity
  reference in the tree.Note that character references and references to
  predefined entities are considered to be expanded by the HTML or XML
  processor so that characters are represented by their Unicode equivalent
  rather than by an entity reference.
 Moreover, the XML processor may
  completely expand references to entities while building the 
 <code>Document</code>, instead of providing <code>EntityReference</code>
  nodes. If it does provide such nodes, then for an 
 <code>EntityReference</code> node that represents a reference to a known
  entity an <code>Entity</code> exists, and the subtree of the 
 <code>EntityReference</code> node is a copy of the <code>Entity</code>
  node subtree. However, the latter may not be true when an entity contains
  an unbound namespace prefix. In such a case, because the namespace prefix
  resolution depends on where the entity reference is, the descendants of the 
 <code>EntityReference</code> node may be bound to different namespace
  URIs. When an <code>EntityReference</code> node represents a reference to
  an unknown entity, the node has no children and its replacement value,
  when used by <code>Attr.value</code> for example, is empty. 
 <p>As for <code>Entity</code> nodes, <code>EntityReference</code> nodes and
  all their descendants are readonly. 
 <p><b>Note:</b> <code>EntityReference</code> nodes may cause element
  content and attribute value normalization problems when, such as in XML
  1.0 and XML Schema, the normalization is performed after entity reference
  are expanded. 
 <p>See also the <a href='http://www.w3.org/TR/2004/REC-DOM-Level-3-Core-20040407'>Document Object Model (DOM) Level 3 Core Specification</a>.
 */
@protocol OrgW3cDomEntityReference < OrgW3cDomNode, JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgW3cDomEntityReference)

J2OBJC_TYPE_LITERAL_HEADER(OrgW3cDomEntityReference)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgW3cDomEntityReference")
