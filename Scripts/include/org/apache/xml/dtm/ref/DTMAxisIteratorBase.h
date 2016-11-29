//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMAxisIteratorBase.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMAxisIteratorBase
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMAxisIteratorBase

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDTMAxisIteratorBase_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase || defined(INCLUDE_OrgApacheXmlDtmRefDTMAxisIteratorBase))
#define OrgApacheXmlDtmRefDTMAxisIteratorBase_

#define RESTRICT_OrgApacheXmlDtmDTMAxisIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMAxisIterator 1
#include "org/apache/xml/dtm/DTMAxisIterator.h"

/*!
 @brief This class serves as a default base for implementations of mutable
 DTMAxisIterators.
 */
@interface OrgApacheXmlDtmRefDTMAxisIteratorBase : NSObject < OrgApacheXmlDtmDTMAxisIterator > {
 @public
  /*!
   @brief The position of the last node within the iteration, as defined by XPath.
   Note that this is _not_ the node's handle within the DTM. Also, don't
 confuse it with the current (most recently returned) position.
   */
  jint _last_;
  /*!
   @brief The position of the current node within the iteration, as defined by XPath.
   Note that this is _not_ the node's handle within the DTM!
   */
  jint _position_;
  /*!
   @brief The position of the marked node within the iteration;
 a saved itaration state that we may want to come back to.
   Note that only one mark is maintained; there is no stack.
   */
  jint _markedNode_;
  /*!
   @brief The handle to the start, or root, of the iteration.
   Set this to END to construct an empty iterator.
   */
  jint _startNode_;
  /*!
   @brief True if the start node should be considered part of the iteration.
   False will cause it to be skipped.
   */
  jboolean _includeSelf_;
  /*!
   @brief True if this iteration can be restarted.
   False otherwise (eg, if
 we are iterating over a stream that can not be re-scanned, or if
 the iterator was produced by cloning another iterator.)
   */
  jboolean _isRestartable_;
}

#pragma mark Public

- (instancetype)init;

/*!
 @brief Returns a deep copy of this iterator.
 Cloned iterators may not be
 restartable. The iterator being cloned may or may not become
 non-restartable as a side effect of this operation.
 @return a deep copy of this iterator.
 */
- (id<OrgApacheXmlDtmDTMAxisIterator>)cloneIterator;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

/*!
 @brief Returns the position of the last node within the iteration, as
 defined by XPath.
 In a forward iterator, I believe this equals the number of nodes which this
 iterator will yield. In a reverse iterator, I believe it should return
 1 (since the "last" is the first produced.)
 This may be an expensive operation when called the first time, since
 it may have to iterate through a large part of the document to produce
 its answer.
 @return The number of nodes in this iterator (forward) or 1 (reverse).
 */
- (jint)getLast;

/*!
 @brief Return the node at the given position.
 @param position The position
 @return The node at the given position.
 */
- (jint)getNodeByPositionWithInt:(jint)position;

/*!
 @return The position of the current node within the set, as defined by
 XPath. Note that this is one-based, not zero-based.
 */
- (jint)getPosition;

/*!
 @brief Get start to END should 'close' the iterator,
 i.e. subsequent call to next() should return END.
 @return The root node of the iteration.
 */
- (jint)getStartNode;

/*!
 @brief Set the flag to include the start node in the iteration.
 @return This default method returns just returns this DTMAxisIterator,
 after setting the flag.
 (Returning "this" permits C++-style chaining of
 method calls into a single expression.)
 */
- (id<OrgApacheXmlDtmDTMAxisIterator>)includeSelf;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
 order.
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @return true if this iterator has a reversed axis, else false
 */
- (jboolean)isReverse;

/*!
 @return A DTMAxisIterator which has been reset to the start node,
 which may or may not be the same as this iterator.
 */
- (id<OrgApacheXmlDtmDTMAxisIterator>)reset;

- (void)setRestartableWithBoolean:(jboolean)isRestartable;

#pragma mark Protected

/*!
 @brief Reset the position to zero.
 NOTE that this does not change the iteration
 state, only the position number associated with that state.
 %REVIEW% Document when this would be used?
 @return This instance.
 */
- (id<OrgApacheXmlDtmDTMAxisIterator>)resetPosition;

/*!
 @brief Do any final cleanup that is required before returning the node that was
 passed in, and then return it.
 The intended use is
 <br />
 <code>return returnNode(node);</code>
 %REVIEW% If we're calling it purely for side effects, should we really
 be bothering with a return value? Something like
 <br />
 <code> accept(node); return node; </code>
 <br />
 would probably optimize just about as well and avoid questions
 about whether what's returned could ever be different from what's
 passed in.
 @param node Node handle which iteration is about to yield.
 @return The node handle passed in.
 */
- (jint)returnNodeWithInt:(jint)node;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMAxisIteratorBase)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMAxisIteratorBase_init(OrgApacheXmlDtmRefDTMAxisIteratorBase *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMAxisIteratorBase)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMAxisIteratorBase")