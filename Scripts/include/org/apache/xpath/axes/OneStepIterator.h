//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/OneStepIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator")
#ifdef RESTRICT_OrgApacheXpathAxesOneStepIterator
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesOneStepIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesOneStepIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator || defined(INCLUDE_OrgApacheXpathAxesOneStepIterator))
#define OrgApacheXpathAxesOneStepIterator_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "org/apache/xpath/axes/ChildTestIterator.h"

@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathExpression;
@protocol OrgApacheXmlDtmDTMAxisIterator;
@protocol OrgApacheXmlDtmDTMIterator;

/*!
 @brief This class implements a general iterator for
 those LocationSteps with only one step, and perhaps a predicate.
 - seealso: org.apache.xpath.axes#LocPathIterator
  advanced
 */
@interface OrgApacheXpathAxesOneStepIterator : OrgApacheXpathAxesChildTestIterator {
 @public
  /*!
   @brief The traversal axis from where the nodes will be filtered.
   */
  jint m_axis_;
  /*!
   @brief The DTM inner traversal class, that corresponds to the super axis.
   */
  id<OrgApacheXmlDtmDTMAxisIterator> m_iterator_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a OneStepIterator object.
 @param iterator The DTM iterator which this iterator will use.
 @param axis One of Axis.Child, etc., or -1 if the axis is unknown.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXmlDtmDTMAxisIterator:(id<OrgApacheXmlDtmDTMAxisIterator>)iterator
                                               withInt:(jint)axis;

/*!
 @brief Get a cloned iterator.
 @return A new iterator that can be used without mutating this one.
 @throws CloneNotSupportedException
 */
- (id)clone;

/*!
 @brief Get a cloned Iterator that is reset to the beginning
 of the query.
 @return A cloned NodeIterator set of the start of the query.
 @throws CloneNotSupportedException
 */
- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Detaches the iterator from the set which it iterated over, releasing
 any computational resources and placing the iterator in the INVALID
 state.
 After<code>detach</code> has been invoked, calls to
 <code>nextNode</code> or<code>previousNode</code> will raise the
 exception INVALID_STATE_ERR.
 */
- (void)detach;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

/*!
 @brief The number of nodes in the list.
 The range of valid child node indices
 is 0 to <code>length-1</code> inclusive.
 @return The number of nodes in the list, always greater or equal to zero.
 */
- (jint)getLength;

/*!
 @brief Tells if this is a reverse axes.
 Overrides AxesWalker#isReverseAxes.
 @return true for this class.
 */
- (jboolean)isReverseAxes;

/*!
 @brief Reset the iterator.
 */
- (void)reset;

/*!
 @brief Initialize the context values for this expression
 after it is cloned.
 @param context The XPath runtime context for this
 transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

#pragma mark Protected

/*!
 @brief Count backwards one proximity position.
 @param i The predicate index.
 */
- (void)countProximityPositionWithInt:(jint)i;

/*!
 @brief Get the next node via getFirstAttribute && getNextAttribute.
 */
- (jint)getNextNode;

/*!
 @brief Get the current sub-context position.
 In order to do the
 reverse axes count, for the moment this re-searches the axes
 up to the predicate.  An optimization on this is to cache
 the nodes searched, but, for the moment, this case is probably
 rare enough that the added complexity isn't worth it.
 @param predicateIndex The predicate index of the proximity position.
 @return The pridicate index, or -1.
 */
- (jint)getProximityPositionWithInt:(jint)predicateIndex;

#pragma mark Package-Private

/*!
 @brief Create a OneStepIterator object.
 @param compiler A reference to the Compiler that contains the op map.
 @param opPos The position within the op map, which contains the
 location path expression for this itterator.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesOneStepIterator)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesOneStepIterator, m_iterator_, id<OrgApacheXmlDtmDTMAxisIterator>)

inline jlong OrgApacheXpathAxesOneStepIterator_get_serialVersionUID();
#define OrgApacheXpathAxesOneStepIterator_serialVersionUID 4623710779664998283LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesOneStepIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesOneStepIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *new_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *create_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(OrgApacheXpathAxesOneStepIterator *self, id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis);

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *new_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesOneStepIterator *create_OrgApacheXpathAxesOneStepIterator_initWithOrgApacheXmlDtmDTMAxisIterator_withInt_(id<OrgApacheXmlDtmDTMAxisIterator> iterator, jint axis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesOneStepIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesOneStepIterator")
