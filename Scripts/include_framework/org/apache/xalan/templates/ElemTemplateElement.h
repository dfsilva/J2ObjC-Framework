//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemTemplateElement.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplateElement")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemTemplateElement
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplateElement 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplateElement 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemTemplateElement

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemTemplateElement_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplateElement || defined(INCLUDE_OrgApacheXalanTemplatesElemTemplateElement))
#define OrgApacheXalanTemplatesElemTemplateElement_

#define RESTRICT_OrgApacheXmlUtilsUnImplNode 1
#define INCLUDE_OrgApacheXmlUtilsUnImplNode 1
#include "../../../../org/apache/xml/utils/UnImplNode.h"

#define RESTRICT_OrgApacheXmlUtilsPrefixResolver 1
#define INCLUDE_OrgApacheXmlUtilsPrefixResolver 1
#include "../../../../org/apache/xml/utils/PrefixResolver.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

#define RESTRICT_OrgApacheXpathExpressionNode 1
#define INCLUDE_OrgApacheXpathExpressionNode 1
#include "../../../../org/apache/xpath/ExpressionNode.h"

#define RESTRICT_OrgApacheXpathWhitespaceStrippingElementMatcher 1
#define INCLUDE_OrgApacheXpathWhitespaceStrippingElementMatcher 1
#include "../../../../org/apache/xpath/WhitespaceStrippingElementMatcher.h"

#define RESTRICT_OrgApacheXalanTemplatesXSLTVisitable 1
#define INCLUDE_OrgApacheXalanTemplatesXSLTVisitable 1
#include "../../../../org/apache/xalan/templates/XSLTVisitable.h"

@class IOSObjectArray;
@class OrgApacheXalanTemplatesElemTemplate;
@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetComposed;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXMLNSDecl;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathXPathContext;
@class OrgXmlSaxHelpersNamespaceSupport;
@protocol JavaUtilList;
@protocol JavaxXmlTransformSourceLocator;
@protocol OrgW3cDomDocument;
@protocol OrgW3cDomElement;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomNodeList;

/*!
 @brief An instance of this class represents an element inside
 an xsl:template class.
 It has a single "execute" method
 which is expected to perform the given action on the
 result tree.
 This class acts like a Element node, and implements the
 Element interface, but is not a full implementation
 of that interface... it only implements enough for
 basic traversal of the tree.
 - seealso: Stylesheet
  advanced
 */
@interface OrgApacheXalanTemplatesElemTemplateElement : OrgApacheXmlUtilsUnImplNode < OrgApacheXmlUtilsPrefixResolver, JavaIoSerializable, OrgApacheXpathExpressionNode, OrgApacheXpathWhitespaceStrippingElementMatcher, OrgApacheXalanTemplatesXSLTVisitable > {
 @public
  /*!
   @brief Tell if this element only has one text child, for optimization purposes.
   */
  jboolean m_hasVariableDecl_;
  /*!
   @brief The *relative* document order number of this element.
    
   */
  jint m_docOrderNumber_;
  /*!
   @brief Parent node.
   */
  OrgApacheXalanTemplatesElemTemplateElement *m_parentNode_;
  /*!
   @brief Next sibling.
   */
  OrgApacheXalanTemplatesElemTemplateElement *m_nextSibling_;
  /*!
   @brief First child.
   */
  OrgApacheXalanTemplatesElemTemplateElement *m_firstChild_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a template element instance.
 */
- (instancetype)init;

/*!
 @brief Add a child to the child list.
 NOTE: This presumes the child did not previously have a parent.
 Making that assumption makes this a less expensive operation -- but
 requires that if you *do* want to reparent a node, you use removeChild()
 first to remove it from its previous context. Failing to do so will
 damage the tree.
 @param elem Child to be added to child list
 @return Child just added to the child list
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

/*!
 @brief Add a child to the child list.
 NOTE: This presumes the child did not previously have a parent.
 Making that assumption makes this a less expensive operation -- but
 requires that if you *do* want to reparent a node, you use removeChild()
 first to remove it from its previous context. Failing to do so will
 damage the tree.
 @param newChild Child to be added to child list
 @return Child just added to the child list
 @throws DOMException
 */
- (id<OrgW3cDomNode>)appendChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild;

/*!
 - seealso: XSLTVisitable#callVisitors(XSLTVisitor)
 */
- (void)callVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Tell if this element can accept variable declarations.
 @return true if the element can accept and process variable declarations.
 */
- (jboolean)canAcceptVariables;

/*!
 @brief Get information about whether or not whitespace can be stripped.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @return true if the whitespace can be stripped.
 */
- (jboolean)canStripWhiteSpace;

/*!
 @brief Compares this object with the specified object for precedence order.
 The order is determined by the getImportCountComposed() of the containing
 composed stylesheet and the getUid() of this element.
 Returns a negative integer, zero, or a positive integer as this
 object is less than, equal to, or greater than the specified object.
 @param o The object to be compared to this object
 @return a negative integer, zero, or a positive integer as this object is
 less than, equal to, or greater than the specified object.
 @throws ClassCastException if the specified object's
 type prevents it from being compared to this Object.
 */
- (jint)compareToWithId:(id)o;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Get whether or not the passed URL is contained flagged by
 the "extension-element-prefixes" property.
 This method is overridden 
 by <code>ElemLiteralResult.containsExcludeResultPrefix</code>.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
 @param prefix non-null reference to prefix that might be excluded.
 @return true if the prefix should normally be excluded.
 */
- (jboolean)containsExcludeResultPrefixWithNSString:(NSString *)prefix
                                       withNSString:(NSString *)uri;

/*!
 @brief This after the template's children have been composed.
 */
- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)errorWithNSString:(NSString *)msg;

/*!
 @brief Throw a template element runtime error.
 (Note: should we throw a TransformerException instead?)
 @param msg key of the error that occured.
 @param args Arguments to be used in the message
 */
- (void)errorWithNSString:(NSString *)msg
        withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Execute the element's primary function.
 Subclasses of this
 function may recursivly execute down the element tree.
 @param transformer The XSLT TransformerFactory.
 @throws TransformerException if any checked exception occurs.
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief This method tells the node to add its argument to the node's
 list of children.
 @param n Must be a ElemTemplateElement.
 */
- (void)exprAddChildWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)n
                                             withInt:(jint)i;

/*!
 @brief This method returns a child node.
 The children are numbered
 from zero, left to right. 
 */
- (id<OrgApacheXpathExpressionNode>)exprGetChildWithInt:(jint)i;

/*!
 @brief Return the number of children the node has.
 */
- (jint)exprGetNumChildren;

/*!
 @brief Get the ExpressionNode parent of this node.
 */
- (id<OrgApacheXpathExpressionNode>)exprGetParent;

/*!
 @brief Set the parent of this node.
 @param n Must be a ElemTemplateElement.
 */
- (void)exprSetParentWithOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)n;

/*!
 @brief Return the base identifier.
 @return The base identifier
 */
- (NSString *)getBaseIdentifier;

/*!
 @brief Return the nodelist (same reference).
 @return The nodelist containing the child nodes (this)
 */
- (id<OrgW3cDomNodeList>)getChildNodes;

/*!
 @brief Return the column number where the current document event ends.
 Note that this is the column number of the first
 character after the text associated with the document
 event.  The first column in a line is position 1.
 @return The column number, or -1 if none is available.
 - seealso: #getLineNumber
 */
- (jint)getColumnNumber;

/*!
 @brief Return a table that contains all prefixes available
 within this element context.
 @return Vector containing the prefixes available within this
 element context
 */
- (id<JavaUtilList>)getDeclaredPrefixes;

/*!
 @brief If this stylesheet was created from a DOM, get the
 DOM backpointer that this element originated from.
 For tooling use.
 @return DOM backpointer that this element originated from or null.
 */
- (id<OrgW3cDomNode>)getDOMBackPointer;

/*!
 @brief Return the column number where the current document event ends.
 Note that this is the column number of the first
 character after the text associated with the document
 event.  The first column in a line is position 1.
 @return The column number, or -1 if none is available.
 - seealso: #getLineNumber
 */
- (jint)getEndColumnNumber;

/*!
 @brief Return the line number where the current document event ends.
 Note that this is the line position of the first character
 after the text associated with the document event.
 @return The line number, or -1 if none is available.
 - seealso: #getColumnNumber
 */
- (jint)getEndLineNumber;

/*!
 @brief Get the first child as a Node.
 @return This node's first child or null
 */
- (id<OrgW3cDomNode>)getFirstChild;

/*!
 @brief Get the first child as a ElemTemplateElement.
 @return This node's first child (as a ElemTemplateElement) or null
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getFirstChildElem;

/*!
 @brief Get the last child.
 @return This node's last child
 */
- (id<OrgW3cDomNode>)getLastChild;

/*!
 @brief Get the last child.
 @return This node's last child
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getLastChildElem;

/*!
 @brief NodeList method: Count the immediate children of this node
 @return The count of children of this node
 */
- (jint)getLength;

/*!
 @brief Return the line number where the current document event ends.
 Note that this is the line position of the first character
 after the text associated with the document event.
 @return The line number, or -1 if none is available.
 - seealso: #getColumnNumber
 */
- (jint)getLineNumber;

/*!
 @brief For now, just return the result of getNodeName(), which 
 the local name.
 @return The result of getNodeName().
 */
- (NSString *)getLocalName;

/*!
 @brief Given a namespace, get the corrisponding prefix.
 9/15/00: This had been iteratively examining the m_declaredPrefixes
 field for this node and its parents.
 That makes life difficult for
 the compilation experiment, which doesn't have a static vector of
 local declarations. Replaced a recursive solution, which permits
 easier subclassing/overriding.
 @param prefix non-null reference to prefix string, which should map 
 to a namespace URL.
 @return The namespace URL that the prefix maps to, or null if no 
 mapping can be found.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

/*!
 @brief Fullfill the PrefixResolver interface.
 Calling this for this class 
 will throw an error.
 @param prefix The prefix to look up, which may be an empty string ("") 
 for the default Namespace.
 @param context The node context from which to look up the URI.
 @return null if the error listener does not choose to throw an exception.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)context;

/*!
 @brief Get the next sibling (as a Node) or return null.
 @return this node's next sibling or null
 */
- (id<OrgW3cDomNode>)getNextSibling;

/*!
 @brief Get the next sibling (as a ElemTemplateElement) or return null.
 @return This node's next sibling (as a ElemTemplateElement) or null
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getNextSiblingElem;

/*!
 @brief Return the node name.
 @return An invalid node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the type of the node.
 @return Constant for this node type
 */
- (jshort)getNodeType;

/*!
 @brief Get the stylesheet owner.
 @return The stylesheet owner
 */
- (id<OrgW3cDomDocument>)getOwnerDocument;

/*!
 @brief Get the owning xsl:template element.
 @return The owning xsl:template element, this element if it is a xsl:template, or null if not found.
 */
- (OrgApacheXalanTemplatesElemTemplate *)getOwnerXSLTemplate;

/*!
 @brief Get the parent as an ElemTemplateElement.
 @return This node's parent as an ElemTemplateElement
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getParentElem;

/*!
 @brief Get the parent as a Node.
 @return This node's parent node
 */
- (id<OrgW3cDomNode>)getParentNode;

/*!
 @brief Get the parent element.
 @return This node's next parent (as a ElemTemplateElement) or null
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getParentNodeElem;

/*!
 @brief Get the previous sibling (as a Node) or return null.
 Note that this may be expensive if the parent has many kids;
 we accept that price in exchange for avoiding the prev pointer
 TODO: If we were sure parents and sibs are always ElemTemplateElements,
 we could hit the fields directly rather than thru accessors.
 @return This node's previous sibling or null
 */
- (id<OrgW3cDomNode>)getPreviousSibling;

/*!
 @brief Get the previous sibling (as a Node) or return null.
 Note that this may be expensive if the parent has many kids;
 we accept that price in exchange for avoiding the prev pointer
 TODO: If we were sure parents and sibs are always ElemTemplateElements,
 we could hit the fields directly rather than thru accessors.
 @return This node's previous sibling or null
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getPreviousSiblingElem;

/*!
 @brief Return the public identifier for the current document event.
 <p>This will be the public identifier
 @return A string containing the public identifier, or
 null if none is available.
 - seealso: #getSystemId
 */
- (NSString *)getPublicId;

/*!
 @brief Get the owning stylesheet.
 This looks up the
 inheritance chain until it calls getStylesheet
 on a Stylesheet object, which will return itself.
 @return the owning stylesheet
 */
- (OrgApacheXalanTemplatesStylesheet *)getStylesheet;

/*!
 @brief Get the owning "composed" stylesheet.
 This looks up the
 inheritance chain until it calls getStylesheetComposed
 on a Stylesheet object, which will Get the owning
 aggregated stylesheet, or that stylesheet if it is aggregated.
 @return the owning "composed" stylesheet.
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getStylesheetComposed;

/*!
 @brief Get the owning root stylesheet.
 This looks up the
 inheritance chain until it calls StylesheetRoot
 on a Stylesheet object, which will return a reference
 to the root stylesheet.
 @return the owning root stylesheet
 */
- (OrgApacheXalanTemplatesStylesheetRoot *)getStylesheetRoot;

/*!
 @brief Return the system identifier for the current document event.
 <p>If the system identifier is a URL, the parser must resolve it
 fully before passing it to the application.</p>
 @return A string containing the system identifier, or null
 if none is available.
 - seealso: #getPublicId
 */
- (NSString *)getSystemId;

/*!
 @brief Return the element name.
 @return The element name
 */
- (NSString *)getTagName;

/*!
 @brief Get the UID (document order index).
 @return Index of this child
 */
- (jint)getUid;

/*!
 @brief Get the "xml:space" attribute.
 A text node is preserved if an ancestor element of the text node
 has an xml:space attribute with a value of preserve, and
 no closer ancestor element has xml:space with a value of default.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Text">section-Creating-Text in XSLT Specification</a>
 @return The value of the xml:space attribute
 */
- (jboolean)getXmlSpace;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
 Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

/*!
 - seealso: PrefixResolver#handlesNullPrefixes()
 */
- (jboolean)handlesNullPrefixes;

/*!
 @brief Tell if there are child nodes.
 @return True if there are child nodes
 */
- (jboolean)hasChildNodes;

/*!
 @brief Tell if this element only has one text child, for optimization purposes.
 @return true of this element only has one text literal child.
 */
- (jboolean)hasTextLitOnly;

- (jboolean)hasVariableDecl;

/*!
 @brief Unimplemented.
 See org.w3c.dom.Node
 @param newChild New child node to insert
 @param refChild Insert in front of this child
 @return null
 @throws DOMException
 */
- (id<OrgW3cDomNode>)insertBeforeWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)refChild;

/*!
 @brief Tell if this template is a compiled template.
 @return Boolean flag indicating whether this is a compiled template
 */
- (jboolean)isCompiledTemplate;

/*!
 @brief NodeList method: Return the Nth immediate child of this node, or
 null if the index is out of bounds.
 @param index Index of child to find
 @return org.w3c.dom.Node: the child node at given index
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

/*!
 @brief This function is called during recomposition to
 control how this element is composed.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Remove a child.
 ADDED 9/8/200 to support compilation.
 TODO: ***** Alternative is "removeMe() from my parent if any"
 ... which is less well checked, but more convenient in some cases.
 Given that we assume only experts are calling this class, it might
 be preferable. It's less DOMish, though.
 @param childETE The child to remove. This operation is a no-op
 if oldChild is not a child of this node.
 @return the removed child, or null if the specified
 node was not a child of this element.
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)removeChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)childETE;

/*!
 @brief Replace the old child with a new child.
 @param newChildElem New child to replace with
 @param oldChildElem Old child to be replaced
 @return The new child
 @throws DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)replaceChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChildElem
                                                            withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)oldChildElem;

/*!
 @brief Replace the old child with a new child.
 @param newChild New child to replace with
 @param oldChild Old child to be replaced
 @return The new child
 @throws DOMException
 */
- (id<OrgW3cDomNode>)replaceChildWithOrgW3cDomNode:(id<OrgW3cDomNode>)newChild
                                 withOrgW3cDomNode:(id<OrgW3cDomNode>)oldChild;

/*!
 @brief Combine the parent's namespaces with this namespace
 for fast processing, taking care to reference the
 parent's namespace if this namespace adds nothing new.
 (Recursive method, walking the elements depth-first,
 processing parents before children).
 Note that this method builds m_prefixTable with aliased 
 namespaces, *not* the original namespaces.
 @throws TransformerException
 */
- (void)resolvePrefixTables;

/*!
 @brief This function will be called on top-level elements
 only, just before the transform begins.
 @param transformer The XSLT TransformerFactory.
 @throws TransformerException
 */
- (void)runtimeInitWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief If this stylesheet was created from a DOM, set the
 DOM backpointer that this element originated from.
 For tooling use.
 @param n DOM backpointer that this element originated from.
 */
- (void)setDOMBackPointerWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Set the end location information for this element.
 @param locator Source Locator with location information for this element
 */
- (void)setEndLocaterInfoWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Set the location information for this element.
 @param locator Source Locator with location information for this element
 */
- (void)setLocaterInfoWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Set the parent as an ElemTemplateElement.
 @param p This node's parent as an ElemTemplateElement
 */
- (void)setParentElemWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)p;

/*!
 @brief From the SAX2 helper class, set the namespace table for
 this element.
 Take care to call resolveInheritedNamespaceDecls.
 after all namespace declarations have been added.
 @param nsSupport non-null reference to NamespaceSupport from 
 the ContentHandler.
 @throws TransformerException
 */
- (void)setPrefixesWithOrgXmlSaxHelpersNamespaceSupport:(OrgXmlSaxHelpersNamespaceSupport *)nsSupport;

/*!
 @brief Copy the namespace declarations from the NamespaceSupport object.
 Take care to call resolveInheritedNamespaceDecls.
 after all namespace declarations have been added.
 @param nsSupport non-null reference to NamespaceSupport from 
 the ContentHandler.
 @param excludeXSLDecl true if XSLT namespaces should be ignored.
 @throws TransformerException
 */
- (void)setPrefixesWithOrgXmlSaxHelpersNamespaceSupport:(OrgXmlSaxHelpersNamespaceSupport *)nsSupport
                                            withBoolean:(jboolean)excludeXSLDecl;

/*!
 @brief Set the UID (document order index).
 @param i Index of this child.
 */
- (void)setUidWithInt:(jint)i;

/*!
 @brief Set the "xml:space" attribute.
 A text node is preserved if an ancestor element of the text node
 has an xml:space attribute with a value of preserve, and
 no closer ancestor element has xml:space with a value of default.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-Text">section-Creating-Text in XSLT Specification</a>
 @param v  Enumerated value, either Constants.ATTRVAL_PRESERVE 
 or Constants.ATTRVAL_STRIP.
 */
- (void)setXmlSpaceWithInt:(jint)v;

/*!
 @brief Get information about whether or not an element should strip whitespace.
 - seealso: <a href="http://www.w3.org/TR/xslt#strip">strip in XSLT Specification</a>
 @param support The XPath runtime state.
 @param targetElement Element to check
 @return true if the whitespace should be stripped.
 @throws TransformerException
 */
- (jboolean)shouldStripWhiteSpaceWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
                                           withOrgW3cDomElement:(id<OrgW3cDomElement>)targetElement;

#pragma mark Protected

/*!
 @brief Accept a visitor and call the appropriate method 
 for this class.
 @param visitor The visitor whose appropriate method will be called.
 @return true if the children of the object should be visited.
 */
- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttributes;

#pragma mark Package-Private

/*!
 @brief Add or replace this namespace declaration in list
 of namespaces in scope for this element.
 @param newDecl namespace declaration to add to list
 */
- (void)addOrReplaceDeclsWithOrgApacheXalanTemplatesXMLNSDecl:(OrgApacheXalanTemplatesXMLNSDecl *)newDecl;

/*!
 @brief Send startPrefixMapping events to the result tree handler
 for all declared prefix mappings in the stylesheet.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeNSDeclsWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Send startPrefixMapping events to the result tree handler
 for all declared prefix mappings in the stylesheet.
 @param transformer non-null reference to the the current transform-time state.
 @param ignorePrefix string prefix to not startPrefixMapping
 @throws TransformerException
 */
- (void)executeNSDeclsWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                      withNSString:(NSString *)ignorePrefix;

/*!
 @brief Return a table that contains all prefixes available
 within this element context.
 @return reference to vector of <code>XMLNSDecl</code>s, which may be null.
 */
- (id<JavaUtilList>)getPrefixTable;

/*!
 @brief Return whether we need to check namespace prefixes 
 against and exclude result prefixes list.
 */
- (jboolean)needToCheckExclude;

- (void)setPrefixTableWithJavaUtilList:(id<JavaUtilList>)list;

/*!
 @brief Send endPrefixMapping events to the result tree handler
 for all declared prefix mappings in the stylesheet.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)unexecuteNSDeclsWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Send endPrefixMapping events to the result tree handler
 for all declared prefix mappings in the stylesheet.
 @param transformer non-null reference to the the current transform-time state.
 @param ignorePrefix string prefix to not endPrefixMapping
 @throws TransformerException
 */
- (void)unexecuteNSDeclsWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                                                        withNSString:(NSString *)ignorePrefix;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemTemplateElement)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemTemplateElement, m_parentNode_, OrgApacheXalanTemplatesElemTemplateElement *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemTemplateElement, m_nextSibling_, OrgApacheXalanTemplatesElemTemplateElement *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemTemplateElement, m_firstChild_, OrgApacheXalanTemplatesElemTemplateElement *)

inline jlong OrgApacheXalanTemplatesElemTemplateElement_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemTemplateElement_serialVersionUID 4440018597841834447LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemTemplateElement, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemTemplateElement_init(OrgApacheXalanTemplatesElemTemplateElement *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTemplateElement *new_OrgApacheXalanTemplatesElemTemplateElement_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemTemplateElement *create_OrgApacheXalanTemplatesElemTemplateElement_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemTemplateElement)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemTemplateElement")
