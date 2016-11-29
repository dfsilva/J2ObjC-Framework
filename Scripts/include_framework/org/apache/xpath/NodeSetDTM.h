//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/NodeSetDTM.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathNodeSetDTM")
#ifdef RESTRICT_OrgApacheXpathNodeSetDTM
#define INCLUDE_ALL_OrgApacheXpathNodeSetDTM 0
#else
#define INCLUDE_ALL_OrgApacheXpathNodeSetDTM 1
#endif
#undef RESTRICT_OrgApacheXpathNodeSetDTM

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathNodeSetDTM_) && (INCLUDE_ALL_OrgApacheXpathNodeSetDTM || defined(INCLUDE_OrgApacheXpathNodeSetDTM))
#define OrgApacheXpathNodeSetDTM_

#define RESTRICT_OrgApacheXmlUtilsNodeVector 1
#define INCLUDE_OrgApacheXmlUtilsNodeVector 1
#include "../../../org/apache/xml/utils/NodeVector.h"

#define RESTRICT_OrgApacheXmlDtmDTMIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMIterator 1
#include "../../../org/apache/xml/dtm/DTMIterator.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMFilter;
@protocol OrgW3cDomNodeList;
@protocol OrgW3cDomTraversalNodeIterator;

/*!
 @brief <p>The NodeSetDTM class can act as either a NodeVector,
 NodeList, or NodeIterator.
 However, in order for it to
 act as a NodeVector or NodeList, it's required that
 setShouldCacheNodes(true) be called before the first
 nextNode() is called, in order that nodes can be added
 as they are fetched.  Derived classes that implement iterators
 must override runTo(int index), in order that they may
 run the iteration to the given index. </p>
 <p>Note that we directly implement the DOM's NodeIterator
 interface. We do not emulate all the behavior of the
 standard NodeIterator. In particular, we do not guarantee
 to present a "live view" of the document ... but in XSLT,
 the source document should never be mutated, so this should
 never be an issue.</p>
 <p>Thought: Should NodeSetDTM really implement NodeList and NodeIterator,
 or should there be specific subclasses of it which do so? The
 advantage of doing it all here is that all NodeSetDTMs will respond
 to the same calls; the disadvantage is that some of them may return
 less-than-enlightening results when you do so.</p>
  advanced
 */
@interface OrgApacheXpathNodeSetDTM : OrgApacheXmlUtilsNodeVector < OrgApacheXmlDtmDTMIterator, NSCopying > {
 @public
  OrgApacheXmlDtmDTMManager *m_manager_;
  /*!
   @brief If this node is being used as an iterator, the next index that nextNode()
 will return.
   */
  jint m_next_;
  /*!
   @brief True if this list can be mutated.
   */
  jboolean m_mutable_;
  /*!
   @brief True if this list is cached.
     
   */
  jboolean m_cacheNodes_;
  /*!
   @brief The root of the iteration, if available.
   */
  jint m_root_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a NodeSetDTM, and copy the members of the
 given DTMIterator into it.
 @param ni Iterator which yields Nodes to be made members of the new set.
 */
- (instancetype)initWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)ni;

/*!
 @brief Create an empty nodelist.
 */
- (instancetype)initWithOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmManager;

/*!
 @brief Create a NodeSetDTM which contains the given Node.
 @param node Single node to be added to the new set.
 */
- (instancetype)initWithInt:(jint)node
withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmManager;

/*!
 @brief Create an empty, using the given block size.
 @param blocksize Size of blocks to allocate
 @param dummy pass zero for right now...
 */
- (instancetype)initWithInt:(jint)blocksize
                    withInt:(jint)dummy
withOrgApacheXmlDtmDTMManager:(OrgApacheXmlDtmDTMManager *)dtmManager;

/*!
 @brief Create a NodeSetDTM, and copy the members of the
 given DTMIterator into it.
 @param iterator Iterator which yields Nodes to be made members of the new set.
 */
- (instancetype)initWithOrgW3cDomTraversalNodeIterator:(id<OrgW3cDomTraversalNodeIterator>)iterator
                        withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Create a NodeSetDTM, and copy the members of the
 given DTMIterator into it.
 */
- (instancetype)initWithOrgW3cDomNodeList:(id<OrgW3cDomNodeList>)nodeList
           withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Create a NodeSetDTM, and copy the members of the
 given NodeSetDTM into it.
 @param nodelist Set of Nodes to be made members of the new set.
 */
- (instancetype)initWithOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)nodelist;

/*!
 @brief Append a Node onto the vector.
 @param value The node to be added.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)addElementWithInt:(jint)value;

/*!
 @brief Add a node to the NodeSetDTM.
 Not all types of NodeSetDTMs support this
 operation
 @param n Node to be added
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)addNodeWithInt:(jint)n;

/*!
 @brief Add the node into a vector of nodes where it should occur in
 document order.
 @param node The node to be added.
 @param test true if we should test for doc order
 @param support The XPath runtime context.
 @return insertIndex.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (jint)addNodeInDocOrderWithInt:(jint)node
                     withBoolean:(jboolean)test
  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Add the node into a vector of nodes where it should occur in
 document order.
 @param node The node to be added.
 @param support The XPath runtime context.
 @return The index where it was inserted.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (jint)addNodeInDocOrderWithInt:(jint)node
  withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Copy NodeList members into this nodelist, adding in
 document order.
 Null references are not added.
 @param iterator DTMIterator which yields the nodes to be added.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)addNodesWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)iterator;

/*!
 @brief Copy NodeList members into this nodelist, adding in
 document order.
 If a node is null, don't add it.
 @param iterator DTMIterator which yields the nodes to be added.
 @param support The XPath runtime context.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)addNodesInDocOrderWithOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)iterator
                          withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Specify if it's OK for detach to release the iterator for reuse.
 @param allowRelease true if it is OK for detach to release this iterator 
 for pooling.
 */
- (void)allowDetachToReleaseWithBoolean:(jboolean)allowRelease;

/*!
 @brief Append the nodes to the list.
 @param nodes The nodes to be appended to this node set.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)appendNodesWithOrgApacheXmlUtilsNodeVector:(OrgApacheXmlUtilsNodeVector *)nodes;

/*!
 @brief Clone this NodeSetDTM.
 At this time, we only expect this to be used with LocPathIterators;
 it may not work with other kinds of NodeSetDTMs.
 @return a new NodeSetDTM of the same type, having the same state...
 though unless overridden in the subclasses, it may not copy all
 the state information.
 @throws CloneNotSupportedException if this subclass of NodeSetDTM
 does not support the clone() operation.
 */
- (id)clone;

/*!
 @brief Get a cloned Iterator, and reset its state to the beginning of the
 iteration.
 @return a new NodeSetDTM of the same type, having the same state...
 except that the reset() operation has been called.
 @throws CloneNotSupportedException if this subclass of NodeSetDTM
 does not support the clone() operation.
 */
- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

/*!
 @brief Tell if the table contains the given node.
 @param s Node to look for
 @return True if the given node was found.
 */
- (jboolean)containsWithInt:(jint)s;

/*!
 @brief Detaches the iterator from the set which it iterated over, releasing
 any computational resources and placing the iterator in the INVALID
 state.
 After<code>detach</code> has been invoked, calls to
 <code>nextNode</code> or<code>previousNode</code> will raise the
 exception INVALID_STATE_ERR.
 <p>
 This operation is a no-op in NodeSetDTM, and will not cause 
 INVALID_STATE_ERR to be raised by later operations.
 </p>
 */
- (void)detach;

/*!
 @brief Get the nth element.
 @param i The index of the requested node.
 @return Node at specified index.
 */
- (jint)elementAtWithInt:(jint)i;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

/*!
 @brief Return the last fetched node.
 Needed to support the UnionPathIterator.
 @return the last fetched node.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a cached type, and thus doesn't permit indexed access.
 */
- (jint)getCurrentNode;

/*!
 @brief Get the current position, which is one less than
 the next nextNode() call will retrieve.
 i.e. if
 you call getCurrentPos() and the return is 0, the next
 fetch will take place at index 1.
 @return The the current position index.
 */
- (jint)getCurrentPos;

/*!
 @brief Get an instance of a DTM that "owns" a node handle.
 Since a node 
 iterator may be passed without a DTMManager, this allows the 
 caller to easily get the DTM using just the iterator.
 @param nodeHandle the nodeHandle.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithInt:(jint)nodeHandle;

/*!
 @brief Get an instance of the DTMManager.
 Since a node 
 iterator may be passed without a DTMManager, this allows the 
 caller to easily get the DTMManager using just the iterator.
 @return a non-null DTMManager reference.
 */
- (OrgApacheXmlDtmDTMManager *)getDTMManager;

/*!
 @brief The value of this flag determines whether the children of entity
 reference nodes are visible to the iterator.
 If false, they will be
 skipped over.
 <br> To produce a view of the document that has entity references
 expanded and does not expose the entity reference node itself, use the
 whatToShow flags to hide the entity reference node and set
 expandEntityReferences to true when creating the iterator. To produce
 a view of the document that has entity reference nodes but no entity
 expansion, use the whatToShow flags to show the entity reference node
 and set expandEntityReferences to false.
 @return true for all iterators based on NodeSetDTM, meaning that the
 contents of EntityRefrence nodes may be returned (though whatToShow
 says that the EntityReferences themselves are not shown.)
 */
- (jboolean)getExpandEntityReferences;

/*!
 @brief The filter object used to screen nodes.
 Filters are applied to
 further reduce (and restructure) the DTMIterator's view of the
 document. In our case, we will be using hardcoded filters built
 into our iterators... but getFilter() is part of the DOM's 
 DTMIterator interface, so we have to support it.
 @return null, which is slightly misleading. True, there is no
 user-written filter object, but in fact we are doing some very
 sophisticated custom filtering. A DOM purist might suggest
 returning a placeholder object just to indicate that this is
 not going to return all nodes selected by whatToShow.
 */
- (id<OrgApacheXmlDtmDTMFilter>)getFilter;

- (jint)getLast;

/*!
 @brief The number of nodes in the list.
 The range of valid child node indices is
 0 to <code>length-1</code> inclusive. Note that this operation requires
 finding all the matching nodes, which may defeat attempts to defer
 that work.
 @return integer indicating how many nodes are represented by this list.
 */
- (jint)getLength;

/*!
 @return The root node of the Iterator, as specified when it was created.
 For non-Iterator NodeSetDTMs, this will be null.
 */
- (jint)getRoot;

/*!
 @brief Get whether or not this is a cached node set.
 @return True if this list is cached.
 */
- (jboolean)getShouldCacheNodes;

/*!
 @brief This attribute determines which node types are presented via the
 iterator.
 The available set of constants is defined in the
 <code>DTMFilter</code> interface. For NodeSetDTMs, the mask has been
 hardcoded to show all nodes except EntityReference nodes, which have
 no equivalent in the XPath data model.
 @return integer used as a bit-array, containing flags defined in
 the DOM's DTMFilter class. The value will be 
 <code>SHOW_ALL & ~SHOW_ENTITY_REFERENCE</code>, meaning that
 only entity references are suppressed.
 */
- (jint)getWhatToShow;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem Node to look for
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithInt:(jint)elem;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem Node to look for
 @param index Index of where to start the search
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithInt:(jint)elem
               withInt:(jint)index;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
 the specified index is shifted upward to have an index one greater
 than the value it had previously.
 @param value The node to be inserted.
 @param at The index where the insert should occur.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)insertElementAtWithInt:(jint)value
                       withInt:(jint)at;

/*!
 @brief Insert a node at a given position.
 @param n Node to be added
 @param pos Offset at which the node is to be inserted,
 with 0 being the first position.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)insertNodeWithInt:(jint)n
                  withInt:(jint)pos;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
 order.
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Tells if this NodeSetDTM is "fresh", in other words, if
 the first nextNode() that is called will return the
 first node in the set.
 @return true if nextNode() would return the first node in the set,
 false if it would return a later one.
 */
- (jboolean)isFresh;

/*!
 @brief Tells if this iterator can have nodes added to it or set via 
 the <code>setItem(int node, int index)</code> method.
 @return True if the nodelist can be mutated.
 */
- (jboolean)isMutable;

/*!
 @brief Returns the <code>index</code>th item in the collection.
 If
 <code>index</code> is greater than or equal to the number of nodes in
 the list, this returns <code>null</code>.
 TODO: What happens if index is out of range?
 @param index Index into the collection.
 @return The node at the <code>index</code>th position in the
 <code>NodeList</code>, or <code>null</code> if that is not a valid
 index.
 */
- (jint)itemWithInt:(jint)index;

/*!
 @brief Returns the next node in the set and advances the position of the
 iterator in the set.
 After a DTMIterator is created, the first call
 to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
 <code>DTM.NULL</code> if there are no more members in that set.
 @throws DOMException
 INVALID_STATE_ERR: Raised if this method is called after the
 <code>detach</code> method was invoked.
 */
- (jint)nextNode;

/*!
 @brief Returns the previous node in the set and moves the position of the
 iterator backwards in the set.
 @return The previous <code>Node</code> in the set being iterated over,
 or<code>DTM.NULL</code> if there are no more members in that set.
 @throws DOMException
 INVALID_STATE_ERR: Raised if this method is called after the
 <code>detach</code> method was invoked.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a cached type, and hence doesn't know what the previous node was.
 */
- (jint)previousNode;

/*!
 @brief Inserts the specified node in this vector at the specified index.
 Each component in this vector with an index greater or equal to
 the specified index is shifted upward to have an index one greater
 than the value it had previously.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)removeAllElements;

/*!
 @brief Removes the first occurrence of the argument from this vector.
 If the object is found in this vector, each component in the vector
 with an index greater or equal to the object's index is shifted
 downward to have an index one smaller than the value it had
 previously.
 @param s The node to be removed.
 @return True if the node was successfully removed
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (jboolean)removeElementWithInt:(jint)s;

/*!
 @brief Deletes the component at the specified index.
 Each component in
 this vector with an index greater or equal to the specified
 index is shifted downward to have an index one smaller than
 the value it had previously.
 @param i The index of the node to be removed.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)removeElementAtWithInt:(jint)i;

/*!
 @brief Remove a node.
 @param n Node to be added
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)removeNodeWithInt:(jint)n;

/*!
 @brief Reset the iterator.
 May have no effect on non-iterator Nodesets.
 */
- (void)reset;

/*!
 @brief If an index is requested, NodeSetDTM will call this method
 to run the iterator to the index.
 By default this sets
 m_next to the index.  If the index argument is -1, this
 signals that the iterator should be run to the end.
 @param index Position to advance (or retreat) to, with
 0 requesting the reset ("fresh") position and -1 (or indeed
 any out-of-bounds value) requesting the final position.
 @throws RuntimeException thrown if this NodeSetDTM is not
 one of the types which supports indexing/counting.
 */
- (void)runToWithInt:(jint)index;

/*!
 @brief Set the current position in the node set.
 @param i Must be a valid index.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a cached type, and thus doesn't permit indexed access.
 */
- (void)setCurrentPosWithInt:(jint)i;

/*!
 @brief Sets the component at the specified index of this vector to be the
 specified object.
 The previous component at that position is discarded.
 The index must be a value greater than or equal to 0 and less
 than the current size of the vector.
 @param node  The node to be set.
 @param index The index of the node to be replaced.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)setElementAtWithInt:(jint)node
                    withInt:(jint)index;

/*!
 @brief Set the environment in which this iterator operates, which should provide:
 a node (the context node... same value as "root" defined below) 
 a pair of non-zero positive integers (the context position and the context size) 
 a set of variable bindings 
 a function library 
 the set of namespace declarations in scope for the expression.
 <p>At this time the exact implementation of this environment is application 
 dependent.  Probably a proper interface will be created fairly soon.</p>
 @param environment The environment object.
 */
- (void)setEnvironmentWithId:(id)environment;

/*!
 @brief Same as setElementAt.
 @param node  The node to be set.
 @param index The index of the node to be replaced.
 @throws RuntimeException thrown if this NodeSetDTM is not of 
 a mutable type.
 */
- (void)setItemWithInt:(jint)node
               withInt:(jint)index;

- (void)setLastWithInt:(jint)last;

/*!
 @brief Initialize the context values for this expression
 after it is cloned.
 @param context The XPath runtime context for this
 transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

/*!
 @brief If setShouldCacheNodes(true) is called, then nodes will
 be cached.
 They are not cached by default. This switch must
 be set before the first call to nextNode is made, to ensure
 that all nodes are cached.
 @param b true if this node set should be cached.
 @throws RuntimeException thrown if an attempt is made to
 request caching after we've already begun stepping through the
 nodes in this set.
 */
- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

/*!
 @brief Get the length of the list.
 @return The size of this node set.
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathNodeSetDTM)

J2OBJC_FIELD_SETTER(OrgApacheXpathNodeSetDTM, m_manager_, OrgApacheXmlDtmDTMManager *)

inline jlong OrgApacheXpathNodeSetDTM_get_serialVersionUID();
#define OrgApacheXpathNodeSetDTM_serialVersionUID 7686480133331317070LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathNodeSetDTM, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXpathNodeSetDTM *self, OrgApacheXmlDtmDTMManager *dtmManager);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmManager) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMManager_(OrgApacheXmlDtmDTMManager *dtmManager);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithInt_withInt_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathNodeSetDTM *self, jint blocksize, jint dummy, OrgApacheXmlDtmDTMManager *dtmManager);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithInt_withInt_withOrgApacheXmlDtmDTMManager_(jint blocksize, jint dummy, OrgApacheXmlDtmDTMManager *dtmManager) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithInt_withInt_withOrgApacheXmlDtmDTMManager_(jint blocksize, jint dummy, OrgApacheXmlDtmDTMManager *dtmManager);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithOrgApacheXpathNodeSetDTM_(OrgApacheXpathNodeSetDTM *self, OrgApacheXpathNodeSetDTM *nodelist);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithOrgApacheXpathNodeSetDTM_(OrgApacheXpathNodeSetDTM *nodelist) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithOrgApacheXpathNodeSetDTM_(OrgApacheXpathNodeSetDTM *nodelist);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMIterator_(OrgApacheXpathNodeSetDTM *self, id<OrgApacheXmlDtmDTMIterator> ni);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> ni) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithOrgApacheXmlDtmDTMIterator_(id<OrgApacheXmlDtmDTMIterator> ni);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(OrgApacheXpathNodeSetDTM *self, id<OrgW3cDomTraversalNodeIterator> iterator, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(id<OrgW3cDomTraversalNodeIterator> iterator, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithOrgW3cDomTraversalNodeIterator_withOrgApacheXpathXPathContext_(id<OrgW3cDomTraversalNodeIterator> iterator, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(OrgApacheXpathNodeSetDTM *self, id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithOrgW3cDomNodeList_withOrgApacheXpathXPathContext_(id<OrgW3cDomNodeList> nodeList, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT void OrgApacheXpathNodeSetDTM_initWithInt_withOrgApacheXmlDtmDTMManager_(OrgApacheXpathNodeSetDTM *self, jint node, OrgApacheXmlDtmDTMManager *dtmManager);

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *new_OrgApacheXpathNodeSetDTM_initWithInt_withOrgApacheXmlDtmDTMManager_(jint node, OrgApacheXmlDtmDTMManager *dtmManager) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathNodeSetDTM *create_OrgApacheXpathNodeSetDTM_initWithInt_withOrgApacheXmlDtmDTMManager_(jint node, OrgApacheXmlDtmDTMManager *dtmManager);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathNodeSetDTM)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathNodeSetDTM")
