//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/XPathContext.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathXPathContext")
#ifdef RESTRICT_OrgApacheXpathXPathContext
#define INCLUDE_ALL_OrgApacheXpathXPathContext 0
#else
#define INCLUDE_ALL_OrgApacheXpathXPathContext 1
#endif
#undef RESTRICT_OrgApacheXpathXPathContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathXPathContext_) && (INCLUDE_ALL_OrgApacheXpathXPathContext || defined(INCLUDE_OrgApacheXpathXPathContext))
#define OrgApacheXpathXPathContext_

#define RESTRICT_OrgApacheXmlDtmDTMManager 1
#define INCLUDE_OrgApacheXmlDtmDTMManager 1
#include "org/apache/xml/dtm/DTMManager.h"

@class JavaUtilStack;
@class OrgApacheXmlUtilsIntStack;
@class OrgApacheXmlUtilsObjectStack;
@class OrgApacheXpathObjectsDTMXRTreeFrag;
@class OrgApacheXpathSourceTreeManager;
@class OrgApacheXpathVariableStack;
@class OrgApacheXpathXPathContext_XPathExpressionContext;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformSourceLocator;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgApacheXalanExtensionsExpressionContext;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMFilter;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlDtmDTMWSFilter;
@protocol OrgApacheXmlUtilsPrefixResolver;
@protocol OrgApacheXpathAxesSubContextList;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxXMLReader;

/*!
 @brief Default class for the runtime execution context for XPath.
 <p>This class extends DTMManager but does not directly implement it.</p>
  advanced
 */
@interface OrgApacheXpathXPathContext : OrgApacheXmlDtmDTMManager {
 @public
  OrgApacheXmlUtilsIntStack *m_last_pushed_rtfdtm_;
  /*!
   @brief Though XPathContext context extends 
 the DTMManager, it really is a proxy for this object, which 
 is the real DTMManager.
   */
  OrgApacheXmlDtmDTMManager *m_dtmManager_;
  /*!
   @brief The current stylesheet locator.
   */
  OrgApacheXmlUtilsObjectStack *m_saxLocations_;
  /*!
   @brief The reader of the primary source tree.
   */
  id<OrgXmlSaxXMLReader> m_primaryReader_;
  OrgApacheXpathXPathContext_XPathExpressionContext *expressionContext_;
}

+ (jint)RECURSIONLIMIT;

#pragma mark Public

/*!
 @brief Create an XPathContext instance.
 This is equivalent to calling
 the <code>XPathContext(boolean)</code> constructor with the value
 <code>true</code>.
 */
- (instancetype)init;

/*!
 @brief Create an XPathContext instance.
 @param recursiveVarContext A <code>boolean</code> value indicating whether
 the XPath context needs to support pushing of scopes for
 variable resolution
 */
- (instancetype)initWithBoolean:(jboolean)recursiveVarContext;

/*!
 @brief Create an XPathContext instance.
 This is equivalent to calling the
 constructor <code>XPathContext(java.lang.Object,boolean)</code> with the
 value of the second parameter set to <code>true</code>.
 @param owner Value that can be retrieved via the getOwnerObject() method.
 - seealso: #getOwnerObject
 */
- (instancetype)initWithId:(id)owner;

/*!
 @brief Create an XPathContext instance.
 @param owner Value that can be retrieved via the getOwnerObject() method.
 - seealso: #getOwnerObject
 @param recursiveVarContext A <code>boolean</code> value indicating whether
 the XPath context needs to support pushing of scopes for
 variable resolution
 */
- (instancetype)initWithId:(id)owner
               withBoolean:(jboolean)recursiveVarContext;

/*!
 @brief Creates an empty <code>DocumentFragment</code> object.
 @return A new <code>DocumentFragment handle</code>.
 */
- (id<OrgApacheXmlDtmDTM>)createDocumentFragment;

/*!
 @brief Create a new <code>DTMIterator</code> that holds exactly one node.
 @param node The node handle that the DTMIterator will iterate to.
 @return The newly created <code>DTMIterator</code>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)createDTMIteratorWithInt:(jint)node;

/*!
 @brief Create a new <code>DTMIterator</code> based only on a whatToShow and
 a DTMFilter.
 The traversal semantics are defined as the descendant
 access.
 @param whatToShow This flag specifies which node types may appear in
 the logical view of the tree presented by the iterator. See the
 description of <code>NodeFilter</code> for the set of possible
 <code>SHOW_</code> values.These flags can be combined using
 <code>OR</code>.
 @param filter The <code>NodeFilter</code> to be used with this
 <code>TreeWalker</code>, or <code>null</code> to indicate no filter.
 @param entityReferenceExpansion The value of this flag determines
 whether entity reference nodes are expanded.
 @return The newly created <code>NodeIterator</code>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)createDTMIteratorWithInt:(jint)whatToShow
                              withOrgApacheXmlDtmDTMFilter:(id<OrgApacheXmlDtmDTMFilter>)filter
                                               withBoolean:(jboolean)entityReferenceExpansion;

/*!
 @brief Create a new <code>DTMIterator</code> based on an XPath
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath>LocationPath</a> or
 a <a href="http://www.w3.org/TR/xpath#NT-UnionExpr">UnionExpr</a>.
 @param xpathCompiler ??? Somehow we need to pass in a subpart of the
 expression.  I hate to do this with strings, since the larger expression
 has already been parsed.
 @param pos The position in the expression.
 @return The newly created <code>DTMIterator</code>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)createDTMIteratorWithId:(id)xpathCompiler
                                                  withInt:(jint)pos;

/*!
 @brief Create a new <code>DTMIterator</code> based on an XPath
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath>LocationPath</a> or
 a <a href="http://www.w3.org/TR/xpath#NT-UnionExpr">UnionExpr</a>.
 @param xpathString Must be a valid string expressing a
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath>LocationPath</a> or
 a <a href="http://www.w3.org/TR/xpath#NT-UnionExpr">UnionExpr</a>.
 @param presolver An object that can resolve prefixes to namespace URLs.
 @return The newly created <code>DTMIterator</code>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)createDTMIteratorWithNSString:(NSString *)xpathString
                            withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)presolver;

- (JavaUtilStack *)getAxesIteratorStackStacks;

/*!
 @brief Get the current context node.
 @return The current context node.
 */
- (jint)getContextNode;

/*!
 @brief Get the current context node list.
 @return the <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a>,
 also refered to here as a <term>context node list</term>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getContextNodeList;

- (JavaUtilStack *)getContextNodeListsStack;

/*!
 @brief Get the current context node list.
 @return An iterator for the current context list, as
 defined in XSLT.
 */
- (id<OrgApacheXmlDtmDTMIterator>)getContextNodes;

/*!
 @brief Get the current node that is the expression's context (i.e. for current() support).
 @return The current sub-expression node.
 */
- (jint)getCurrentExpressionNode;

- (OrgApacheXmlUtilsIntStack *)getCurrentExpressionNodeStack;

/*!
 @brief Get the current context node.
 @return the <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>.
 */
- (jint)getCurrentNode;

/*!
 @brief Get the <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a> 
 as defined by the XSLT spec.
 @return the <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a>.
  internal
 */
- (id<OrgApacheXpathAxesSubContextList>)getCurrentNodeList;

- (OrgApacheXmlUtilsIntStack *)getCurrentNodeStack;

/*!
 @brief Get an instance of a DTM that "owns" a node handle.
 @param nodeHandle the nodeHandle.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithInt:(jint)nodeHandle;

/*!
 @brief Get an instance of a DTM, loaded with the content from the
 specified source.
 If the unique flag is true, a new instance will
 always be returned.  Otherwise it is up to the DTMManager to return a
 new instance or an instance that it already created and may be being used
 by someone else.
 (I think more parameters will need to be added for error handling, and entity
 resolution).
 @param source the specification of the source object, which may be null, 
 in which case it is assumed that node construction will take 
 by some other means.
 @param unique true if the returned DTM must be unique, probably because it
 is going to be mutated.
 @param wsfilter Enables filtering of whitespace nodes, and may be null.
 @param incremental true if the construction should try and be incremental.
 @param doIndexing true if the caller considers it worth it to use 
 indexing schemes.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                withBoolean:(jboolean)unique
                             withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)wsfilter
                                                withBoolean:(jboolean)incremental
                                                withBoolean:(jboolean)doIndexing;

/*!
 @brief Given a W3C DOM node, try and return a DTM handle.
 Note: calling this may be non-optimal.
 @param node Non-null reference to a DOM node.
 @return a valid DTM handle.
 */
- (jint)getDTMHandleFromNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief %TBD% Doc
 */
- (jint)getDTMIdentityWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief Return the DTMManager object.
 Though XPathContext context extends 
 the DTMManager, it really is a proxy for the real DTMManager.  If a 
 caller needs to make a lot of calls to the DTMManager, it is faster 
 if it gets the real one from this function.
 */
- (OrgApacheXmlDtmDTMManager *)getDTMManager;

/*!
 @brief Gets DTMXRTreeFrag object if one has already been created.
 Creates new DTMXRTreeFrag object and adds to m_DTMXRTreeFrags  HashMap,
 otherwise.  
 @param dtmIdentity
 @return DTMXRTreeFrag
 */
- (OrgApacheXpathObjectsDTMXRTreeFrag *)getDTMXRTreeFragWithInt:(jint)dtmIdentity;

/*!
 @brief Get the ErrorListener where errors and warnings are to be reported.
 @return A non-null ErrorListener reference.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief The the expression context for extensions for this context.
 @return An object that implements the ExpressionContext.
 */
- (id<OrgApacheXalanExtensionsExpressionContext>)getExpressionContext;

/*!
 @brief Get a DTM to be used as a container for a global Result Tree
 Fragment.
 This will always be an instance of (derived from? equivalent to?) 
 SAX2DTM, since each RTF is constructed by temporarily redirecting our SAX 
 output to it. It may be a single DTM containing for multiple fragments, 
 if the implementation supports that.
 Note: The distinction between this method and getRTFDTM() is that the latter
 allocates space from the dynamic variable stack (m_rtfdtm_stack), which may
 be pruned away again as the templates which defined those variables are exited.
 Global variables may be bound late (see XUnresolvedVariable), and never want to
 be discarded, hence we need to allocate them separately and don't actually need
 a stack to track them.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getGlobalRTFDTM;

/*!
 @brief Get the current location path iterator root.
 */
- (jint)getIteratorRoot;

/*!
 @brief Get the current namespace context for the xpath.
 @return the current prefix resolver for resolving prefixes to 
 namespace URLs.
 */
- (id<OrgApacheXmlUtilsPrefixResolver>)getNamespaceContext;

/*!
 @brief Get the "owner" context of this context, which should be,
 in the case of XSLT, the Transformer object.
 This is needed
 so that XSLT functions can get the Transformer.
 @return The owner object passed into the constructor, or null.
 */
- (id)getOwnerObject;

- (jint)getPredicatePos;

/*!
 @brief Get the current predicate root.
 */
- (jint)getPredicateRoot;

/*!
 @brief Get primary XMLReader associated with this execution context.
 @return The reader of the primary source tree.
 */
- (id<OrgXmlSaxXMLReader>)getPrimaryReader;

/*!
 @brief Get a DTM to be used as a container for a dynamic Result Tree
 Fragment.
 This will always be an instance of (derived from? equivalent to?) 
 SAX2DTM, since each RTF is constructed by temporarily redirecting our SAX 
 output to it. It may be a single DTM containing for multiple fragments, 
 if the implementation supports that.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getRTFDTM;

/*!
 @brief Get the current locater in the stylesheet.
 @return The location within the stylesheet, or null if not known.
 */
- (id<JavaxXmlTransformSourceLocator>)getSAXLocator;

/*!
 @brief Get the SourceTreeManager associated with this execution context.
 @return the SourceTreeManager associated with this execution context.
 */
- (OrgApacheXpathSourceTreeManager *)getSourceTreeManager;

/*!
 @brief Get the current axes iterator, or return null if none.
 @return the sub-context node list.
  internal
 */
- (id<OrgApacheXpathAxesSubContextList>)getSubContextList;

/*!
 @brief Get the URIResolver associated with this execution context.
 @return a URI resolver, which may be null.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Get the variable stack, which is in charge of variables and
 parameters.
 @return the variable stack, which should not be null.
 */
- (OrgApacheXpathVariableStack *)getVarStack;

/*!
 @brief Return the state of the secure processing feature
 */
- (jboolean)isSecureProcessing;

/*!
 @brief Pop the current context node list.
  internal
 */
- (void)popContextNodeList;

/*!
 @brief Pop the current node that is the expression's context 
 (i.e. for current() support).
 */
- (void)popCurrentExpressionNode;

/*!
 @brief Pop the current context node.
 */
- (void)popCurrentNode;

/*!
 @brief Set the current context node.
 */
- (void)popCurrentNodeAndExpression;

/*!
 @brief Pop the current context node, expression node, and prefix resolver.
 */
- (void)popExpressionState;

/*!
 @brief Pop the current location path iterator root.
 */
- (void)popIteratorRoot;

/*!
 @brief Pop the current namespace context for the xpath.
 */
- (void)popNamespaceContext;

- (void)popPredicatePos;

/*!
 @brief Pop the current predicate root.
 */
- (void)popPredicateRoot;

/*!
 @brief Pop the RTFDTM's context mark.
 This discards any RTFs added after the last
 mark was set. 
 If there is no RTF DTM, there's nothing to pop so this
 becomes a no-op. If pushes were issued before this was called, we count on
 the fact that popRewindMark is defined such that overpopping just resets
 to empty.
 Complicating factor: We need to handle the case of popping back to a previous
 RTF DTM, if one of the weird produce-an-RTF-to-build-an-RTF cases arose.
 Basically: If pop says this DTM is now empty, then return to the previous
 if one exists, in whatever state we left it in. UGLY, but hopefully the
 situation which forces us to consider this will arise exceedingly rarely.
 */
- (void)popRTFContext;

/*!
 @brief Pop the current locater.
 */
- (void)popSAXLocator;

/*!
 @brief Pop the last pushed axes iterator.
  internal
 */
- (void)popSubContextList;

/*!
 @brief Set the current context node list.
 @param nl the <a href="http://www.w3.org/TR/xslt#dt-current-node-list">current node list</a>,
 also refered to here as a <term>context node list</term>.
  internal
 */
- (void)pushContextNodeListWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)nl;

/*!
 @brief Set the current node that is the expression's context (i.e. for current() support).
 @param n The sub-expression node to be current.
 */
- (void)pushCurrentExpressionNodeWithInt:(jint)n;

/*!
 @brief Set the current context node.
 @param n the <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>.
 */
- (void)pushCurrentNodeWithInt:(jint)n;

/*!
 @brief Set the current context node and expression node.
 @param cn the <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>.
 @param en the sub-expression context node.
 */
- (void)pushCurrentNodeAndExpressionWithInt:(jint)cn
                                    withInt:(jint)en;

/*!
 @brief Push the current context node, expression node, and prefix resolver.
 @param cn the <a href="http://www.w3.org/TR/xslt#dt-current-node">current node</a>.
 @param en the sub-expression context node.
 @param nc the namespace context (prefix resolver.
 */
- (void)pushExpressionStateWithInt:(jint)cn
                           withInt:(jint)en
withOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nc;

/*!
 @brief Set the current location path iterator root.
 */
- (void)pushIteratorRootWithInt:(jint)n;

/*!
 @brief Push a current namespace context for the xpath.
 @param pr the prefix resolver to be used for resolving prefixes to 
 namespace URLs.
 */
- (void)pushNamespaceContextWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)pr;

/*!
 @brief Just increment the namespace contest stack, so that setNamespaceContext
 can be used on the slot.
 */
- (void)pushNamespaceContextNull;

- (void)pushPredicatePosWithInt:(jint)n;

/*!
 @brief Set the current predicate root.
 */
- (void)pushPredicateRootWithInt:(jint)n;

/*!
 @brief Push the RTFDTM's context mark, to allows discarding RTFs added after this
 point.
 (If it doesn't exist we don't push, since we might still be able to 
 get away with not creating it. That requires that excessive pops be harmless.)
 */
- (void)pushRTFContext;

/*!
 @brief Set the current locater in the stylesheet.
 @param location The location within the stylesheet.
 */
- (void)pushSAXLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)location;

/*!
 @brief Push a slot on the locations stack so that setSAXLocator can be 
 repeatedly called.
 */
- (void)pushSAXLocatorNull;

/*!
 @brief Push a TreeWalker on the stack.
 @param iter A sub-context AxesWalker.
  internal
 */
- (void)pushSubContextListWithOrgApacheXpathAxesSubContextList:(id<OrgApacheXpathAxesSubContextList>)iter;

/*!
 @brief Release a DTM either to a lru pool, or completely remove reference.
 DTMs without system IDs are always hard deleted.
 State: experimental.
 @param dtm The DTM to be released.
 @param shouldHardDelete True if the DTM should be removed no matter what.
 @return true if the DTM was removed, false if it was put back in a lru pool.
 */
- (jboolean)release__WithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
                                withBoolean:(jboolean)shouldHardDelete;

/*!
 @brief Reset for new run.
 */
- (void)reset;

- (void)setAxesIteratorStackStacksWithJavaUtilStack:(JavaUtilStack *)s;

- (void)setContextNodeListsStackWithJavaUtilStack:(JavaUtilStack *)s;

- (void)setCurrentExpressionNodeStackWithOrgApacheXmlUtilsIntStack:(OrgApacheXmlUtilsIntStack *)nv;

- (void)setCurrentNodeStackWithOrgApacheXmlUtilsIntStack:(OrgApacheXmlUtilsIntStack *)nv;

/*!
 @brief Set the ErrorListener where errors and warnings are to be reported.
 @param listener A non-null ErrorListener reference.
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief Get the current namespace context for the xpath.
 @param pr the prefix resolver to be used for resolving prefixes to 
 namespace URLs.
 */
- (void)setNamespaceContextWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)pr;

/*!
 @brief Set primary XMLReader associated with this execution context.
 @param reader The reader of the primary source tree.
 */
- (void)setPrimaryReaderWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)reader;

/*!
 @brief Set the current locater in the stylesheet.
 @param location The location within the stylesheet.
 */
- (void)setSAXLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)location;

/*!
 @brief Set the state of the secure processing feature
 */
- (void)setSecureProcessingWithBoolean:(jboolean)flag;

/*!
 @brief Set the SourceTreeManager associated with this execution context.
 @param mgr the SourceTreeManager to be associated with this 
 execution context.
 */
- (void)setSourceTreeManagerWithOrgApacheXpathSourceTreeManager:(OrgApacheXpathSourceTreeManager *)mgr;

/*!
 @brief Set the URIResolver associated with this execution context.
 @param resolver the URIResolver to be associated with this 
 execution context, may be null to clear an already set resolver.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

/*!
 @brief Get the variable stack, which is in charge of variables and
 parameters.
 @param varStack non-null reference to the variable stack.
 */
- (void)setVarStackWithOrgApacheXpathVariableStack:(OrgApacheXpathVariableStack *)varStack;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathContext)

J2OBJC_FIELD_SETTER(OrgApacheXpathXPathContext, m_last_pushed_rtfdtm_, OrgApacheXmlUtilsIntStack *)
J2OBJC_FIELD_SETTER(OrgApacheXpathXPathContext, m_dtmManager_, OrgApacheXmlDtmDTMManager *)
J2OBJC_FIELD_SETTER(OrgApacheXpathXPathContext, m_saxLocations_, OrgApacheXmlUtilsObjectStack *)
J2OBJC_FIELD_SETTER(OrgApacheXpathXPathContext, m_primaryReader_, id<OrgXmlSaxXMLReader>)
J2OBJC_FIELD_SETTER(OrgApacheXpathXPathContext, expressionContext_, OrgApacheXpathXPathContext_XPathExpressionContext *)

/*!
 @brief The ammount to use for stacks that record information during the 
 recursive execution.
 */
inline jint OrgApacheXpathXPathContext_get_RECURSIONLIMIT();
#define OrgApacheXpathXPathContext_RECURSIONLIMIT 4096
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathXPathContext, RECURSIONLIMIT, jint)

FOUNDATION_EXPORT void OrgApacheXpathXPathContext_init(OrgApacheXpathXPathContext *self);

FOUNDATION_EXPORT OrgApacheXpathXPathContext *new_OrgApacheXpathXPathContext_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathContext *create_OrgApacheXpathXPathContext_init();

FOUNDATION_EXPORT void OrgApacheXpathXPathContext_initWithBoolean_(OrgApacheXpathXPathContext *self, jboolean recursiveVarContext);

FOUNDATION_EXPORT OrgApacheXpathXPathContext *new_OrgApacheXpathXPathContext_initWithBoolean_(jboolean recursiveVarContext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathContext *create_OrgApacheXpathXPathContext_initWithBoolean_(jboolean recursiveVarContext);

FOUNDATION_EXPORT void OrgApacheXpathXPathContext_initWithId_(OrgApacheXpathXPathContext *self, id owner);

FOUNDATION_EXPORT OrgApacheXpathXPathContext *new_OrgApacheXpathXPathContext_initWithId_(id owner) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathContext *create_OrgApacheXpathXPathContext_initWithId_(id owner);

FOUNDATION_EXPORT void OrgApacheXpathXPathContext_initWithId_withBoolean_(OrgApacheXpathXPathContext *self, id owner, jboolean recursiveVarContext);

FOUNDATION_EXPORT OrgApacheXpathXPathContext *new_OrgApacheXpathXPathContext_initWithId_withBoolean_(id owner, jboolean recursiveVarContext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathContext *create_OrgApacheXpathXPathContext_initWithId_withBoolean_(id owner, jboolean recursiveVarContext);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathContext)

#endif

#if !defined (OrgApacheXpathXPathContext_XPathExpressionContext_) && (INCLUDE_ALL_OrgApacheXpathXPathContext || defined(INCLUDE_OrgApacheXpathXPathContext_XPathExpressionContext))
#define OrgApacheXpathXPathContext_XPathExpressionContext_

#define RESTRICT_OrgApacheXalanExtensionsExpressionContext 1
#define INCLUDE_OrgApacheXalanExtensionsExpressionContext 1
#include "org/apache/xalan/extensions/ExpressionContext.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@protocol JavaxXmlTransformErrorListener;
@protocol OrgW3cDomNode;
@protocol OrgW3cDomTraversalNodeIterator;

@interface OrgApacheXpathXPathContext_XPathExpressionContext : NSObject < OrgApacheXalanExtensionsExpressionContext >

#pragma mark Public

- (instancetype)initWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)outer$;

/*!
 @brief Get the current context node.
 @return The current context node.
 */
- (id<OrgW3cDomNode>)getContextNode;

/*!
 @brief Get the current context node list.
 @return An iterator for the current context list, as
 defined in XSLT.
 */
- (id<OrgW3cDomTraversalNodeIterator>)getContextNodes;

/*!
 @brief Return the DTMManager object.
 Though XPathContext context extends 
 the DTMManager, it really is a proxy for the real DTMManager.  If a 
 caller needs to make a lot of calls to the DTMManager, it is faster 
 if it gets the real one from this function.
 */
- (OrgApacheXmlDtmDTMManager *)getDTMManager;

/*!
 @brief Get the error listener.
 @return The registered error listener.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Get a variable based on it's qualified name.
 @param qname The qualified name of the variable.
 @return The evaluated value of the variable.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Return the XPathContext associated with this XPathExpressionContext.
 Extensions should use this judiciously and only when special processing
 requirements cannot be met another way.  Consider requesting an enhancement
 to the ExpressionContext interface to avoid having to call this method.
 @return the XPathContext associated with this XPathExpressionContext.
 */
- (OrgApacheXpathXPathContext *)getXPathContext;

/*!
 @brief Get the value of a node as a number.
 @param n Node to be converted to a number.  May be null.
 @return value of n as a number.
 */
- (jdouble)toNumberWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

/*!
 @brief Get the value of a node as a string.
 @param n Node to be converted to a string.  May be null.
 @return value of n as a string, or an empty string if n is null.
 */
- (NSString *)toStringWithOrgW3cDomNode:(id<OrgW3cDomNode>)n;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathXPathContext_XPathExpressionContext)

FOUNDATION_EXPORT void OrgApacheXpathXPathContext_XPathExpressionContext_initWithOrgApacheXpathXPathContext_(OrgApacheXpathXPathContext_XPathExpressionContext *self, OrgApacheXpathXPathContext *outer$);

FOUNDATION_EXPORT OrgApacheXpathXPathContext_XPathExpressionContext *new_OrgApacheXpathXPathContext_XPathExpressionContext_initWithOrgApacheXpathXPathContext_(OrgApacheXpathXPathContext *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathXPathContext_XPathExpressionContext *create_OrgApacheXpathXPathContext_XPathExpressionContext_initWithOrgApacheXpathXPathContext_(OrgApacheXpathXPathContext *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathXPathContext_XPathExpressionContext)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathXPathContext")
