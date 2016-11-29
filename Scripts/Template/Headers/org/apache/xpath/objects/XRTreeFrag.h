//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XRTreeFrag.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFrag")
#ifdef RESTRICT_OrgApacheXpathObjectsXRTreeFrag
#define INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFrag 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFrag 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXRTreeFrag

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsXRTreeFrag_) && (INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFrag || defined(INCLUDE_OrgApacheXpathObjectsXRTreeFrag))
#define OrgApacheXpathObjectsXRTreeFrag_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "../../../../org/apache/xpath/objects/XObject.h"

@class OrgApacheXmlUtilsFastStringBuffer;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsXMLString;
@protocol OrgApacheXpathExpressionNode;
@protocol OrgW3cDomNodeList;

/*!
 @brief This class represents an XPath result tree fragment object, and is capable of
 converting the RTF to other types, such as a string.
  general
 */
@interface OrgApacheXpathObjectsXRTreeFrag : OrgApacheXpathObjectsXObject < NSCopying > {
 @public
  jboolean m_allowRelease_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create an XRTreeFrag Object.
 */
- (instancetype)initWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief Create an XRTreeFrag Object.
 */
- (instancetype)initWithInt:(jint)root
withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Create an XRTreeFrag Object.
 */
- (instancetype)initWithInt:(jint)root
withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
withOrgApacheXpathExpressionNode:(id<OrgApacheXpathExpressionNode>)parent;

/*!
 @brief Specify if it's OK for detach to release the iterator for reuse.
 @param allowRelease true if it is OK for detach to release this iterator 
 for pooling.
 */
- (void)allowDetachToReleaseWithBoolean:(jboolean)allowRelease;

/*!
 @brief Cast result object to a string.
 @return The string this wraps or the empty string if null
 */
- (void)appendToFsbWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb;

/*!
 @brief Cast result object to a DTMIterator.
 dml - modified to return an RTFIterator for
 benefit of EXSLT object-type function in 
 <code>org.apache.xalan.lib.ExsltCommon</code>.
 @return The document fragment as a DTMIterator
 */
- (id<OrgApacheXmlDtmDTMIterator>)asNodeIterator;

/*!
 @brief Cast result object to a boolean.
 This always returns true for a RTreeFrag
 because it is treated like a node-set with a single root node.
 @return true
 */
- (jboolean)bool__;

/*!
 @brief Cast result object to a nodelist.
 (special function).
 @return The document fragment as a nodelist
 */
- (id<OrgW3cDomNodeList>)convertToNodeset;

/*!
 @brief Detaches the <code>DTMIterator</code> from the set which it iterated
 over, releasing any computational resources and placing the iterator
 in the INVALID state.
 After <code>detach</code> has been invoked,
 calls to <code>nextNode</code> or <code>previousNode</code> will
 raise a runtime exception.
 In general, detach should only be called once on the object.
 */
- (void)detach;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare this to
 @return True if the two objects are equal
 @throws javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell what kind of class this is.
 @return type CLASS_RTREEFRAG
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#RTREEFRAG"
 */
- (NSString *)getTypeString;

/*!
 @brief Cast result object to a number.
 @return The result tree fragment as a number or NaN
 */
- (jdouble)num;

/*!
 @brief Return a java object that's closest to the representation
 that should be handed to an extension.
 @return The object that this class wraps
 */
- (id)object;

/*!
 @brief Cast result object to a result tree fragment.
 @return The document fragment this wraps
 */
- (jint)rtf;

/*!
 @brief Cast result object to a string.
 @return The document fragment node data or the empty string.
 */
- (NSString *)str;

/*!
 @brief Cast result object to an XMLString.
 @return The document fragment node data or the empty string.
 */
- (id<OrgApacheXmlUtilsXMLString>)xstr;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXRTreeFrag)

inline jlong OrgApacheXpathObjectsXRTreeFrag_get_serialVersionUID();
#define OrgApacheXpathObjectsXRTreeFrag_serialVersionUID -3201553822254911567LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXRTreeFrag, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_withOrgApacheXpathExpressionNode_(OrgApacheXpathObjectsXRTreeFrag *self, jint root, OrgApacheXpathXPathContext *xctxt, id<OrgApacheXpathExpressionNode> parent);

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *new_OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_withOrgApacheXpathExpressionNode_(jint root, OrgApacheXpathXPathContext *xctxt, id<OrgApacheXpathExpressionNode> parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *create_OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_withOrgApacheXpathExpressionNode_(jint root, OrgApacheXpathXPathContext *xctxt, id<OrgApacheXpathExpressionNode> parent);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(OrgApacheXpathObjectsXRTreeFrag *self, jint root, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *new_OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(jint root, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *create_OrgApacheXpathObjectsXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(jint root, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXRTreeFrag_initWithOrgApacheXpathExpression_(OrgApacheXpathObjectsXRTreeFrag *self, OrgApacheXpathExpression *expr);

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *new_OrgApacheXpathObjectsXRTreeFrag_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXRTreeFrag *create_OrgApacheXpathObjectsXRTreeFrag_initWithOrgApacheXpathExpression_(OrgApacheXpathExpression *expr);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXRTreeFrag)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXRTreeFrag")