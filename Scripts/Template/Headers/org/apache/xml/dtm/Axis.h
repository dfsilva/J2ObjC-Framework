//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/Axis.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmAxis")
#ifdef RESTRICT_OrgApacheXmlDtmAxis
#define INCLUDE_ALL_OrgApacheXmlDtmAxis 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmAxis 1
#endif
#undef RESTRICT_OrgApacheXmlDtmAxis

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmAxis_) && (INCLUDE_ALL_OrgApacheXmlDtmAxis || defined(INCLUDE_OrgApacheXmlDtmAxis))
#define OrgApacheXmlDtmAxis_

/*!
 @brief Specifies values related to XPath Axes.
 <p>The ancestor, descendant, following, preceding and self axes partition a
 document (ignoring attribute and namespace nodes): they do not overlap
 and together they contain all the nodes in the document.</p>
 */
@interface OrgApacheXmlDtmAxis : NSObject

+ (jint)ANCESTOR;

+ (jint)ANCESTORORSELF;

+ (jint)ATTRIBUTE;

+ (jint)CHILD;

+ (jint)DESCENDANT;

+ (jint)DESCENDANTORSELF;

+ (jint)FOLLOWING;

+ (jint)FOLLOWINGSIBLING;

+ (jint)NAMESPACEDECLS;

+ (jint)NAMESPACE;

+ (jint)PARENT;

+ (jint)PRECEDING;

+ (jint)PRECEDINGSIBLING;

+ (jint)SELF;

+ (jint)ALLFROMNODE;

+ (jint)PRECEDINGANDANCESTOR;

+ (jint)ALL;

+ (jint)DESCENDANTSFROMROOT;

+ (jint)DESCENDANTSORSELFFROMROOT;

+ (jint)ROOT;

+ (jint)FILTEREDLIST;

#pragma mark Public

- (instancetype)init;

+ (NSString *)getNamesWithInt:(jint)index;

+ (jint)getNamesLength;

+ (jboolean)isReverseWithInt:(jint)axis;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmAxis)

/*!
 @brief The ancestor axis contains the ancestors of the context node;
 the ancestors of the context node consist of the parent of context
 node and the parent's parent and so on; thus, the ancestor axis will
 always include the root node, unless the context node is the root node.
 */
inline jint OrgApacheXmlDtmAxis_get_ANCESTOR();
#define OrgApacheXmlDtmAxis_ANCESTOR 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ANCESTOR, jint)

/*!
 @brief the ancestor-or-self axis contains the context node and the ancestors of
 the context node; thus, the ancestor axis will always include the
 root node.
 */
inline jint OrgApacheXmlDtmAxis_get_ANCESTORORSELF();
#define OrgApacheXmlDtmAxis_ANCESTORORSELF 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ANCESTORORSELF, jint)

/*!
 @brief the attribute axis contains the attributes of the context node; the axis
 will be empty unless the context node is an element.
 */
inline jint OrgApacheXmlDtmAxis_get_ATTRIBUTE();
#define OrgApacheXmlDtmAxis_ATTRIBUTE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ATTRIBUTE, jint)

/*!
 @brief The child axis contains the children of the context node.
 */
inline jint OrgApacheXmlDtmAxis_get_CHILD();
#define OrgApacheXmlDtmAxis_CHILD 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, CHILD, jint)

/*!
 @brief The descendant axis contains the descendants of the context node;
 a descendant is a child or a child of a child and so on; thus the
 descendant axis never contains attribute or namespace nodes.
 */
inline jint OrgApacheXmlDtmAxis_get_DESCENDANT();
#define OrgApacheXmlDtmAxis_DESCENDANT 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, DESCENDANT, jint)

/*!
 @brief The descendant-or-self axis contains the context node and the
 descendants of the context node.
 */
inline jint OrgApacheXmlDtmAxis_get_DESCENDANTORSELF();
#define OrgApacheXmlDtmAxis_DESCENDANTORSELF 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, DESCENDANTORSELF, jint)

/*!
 @brief the following axis contains all nodes in the same document as the
 context node that are after the context node in document order, excluding
 any descendants and excluding attribute nodes and namespace nodes.
 */
inline jint OrgApacheXmlDtmAxis_get_FOLLOWING();
#define OrgApacheXmlDtmAxis_FOLLOWING 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, FOLLOWING, jint)

/*!
 @brief The following-sibling axis contains all the following siblings of the
 context node; if the context node is an attribute node or namespace node,
 the following-sibling axis is empty.
 */
inline jint OrgApacheXmlDtmAxis_get_FOLLOWINGSIBLING();
#define OrgApacheXmlDtmAxis_FOLLOWINGSIBLING 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, FOLLOWINGSIBLING, jint)

/*!
 @brief The namespace axis contains the namespace nodes of the context node; the
 axis will be empty unless the context node is an element.
 */
inline jint OrgApacheXmlDtmAxis_get_NAMESPACEDECLS();
#define OrgApacheXmlDtmAxis_NAMESPACEDECLS 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, NAMESPACEDECLS, jint)

/*!
 @brief The namespace axis contains the namespace nodes of the context node; the
 axis will be empty unless the context node is an element.
 */
inline jint OrgApacheXmlDtmAxis_get_NAMESPACE();
#define OrgApacheXmlDtmAxis_NAMESPACE 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, NAMESPACE, jint)

/*!
 @brief The parent axis contains the parent of the context node,
 if there is one.
 */
inline jint OrgApacheXmlDtmAxis_get_PARENT();
#define OrgApacheXmlDtmAxis_PARENT 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, PARENT, jint)

/*!
 @brief The preceding axis contains all nodes in the same document as the context
 node that are before the context node in document order, excluding any
 ancestors and excluding attribute nodes and namespace nodes
 */
inline jint OrgApacheXmlDtmAxis_get_PRECEDING();
#define OrgApacheXmlDtmAxis_PRECEDING 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, PRECEDING, jint)

/*!
 @brief The preceding-sibling axis contains all the preceding siblings of the
 context node; if the context node is an attribute node or namespace node,
 the preceding-sibling axis is empty.
 */
inline jint OrgApacheXmlDtmAxis_get_PRECEDINGSIBLING();
#define OrgApacheXmlDtmAxis_PRECEDINGSIBLING 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, PRECEDINGSIBLING, jint)

/*!
 @brief The self axis contains just the context node itself.
 */
inline jint OrgApacheXmlDtmAxis_get_SELF();
#define OrgApacheXmlDtmAxis_SELF 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, SELF, jint)

/*!
 @brief A non-xpath axis, traversing the subtree including the subtree
 root, descendants, attributes, and namespace node decls.
 */
inline jint OrgApacheXmlDtmAxis_get_ALLFROMNODE();
#define OrgApacheXmlDtmAxis_ALLFROMNODE 14
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ALLFROMNODE, jint)

/*!
 @brief A non-xpath axis, traversing the the preceding and the ancestor nodes, 
 needed for inverseing select patterns to match patterns.
 */
inline jint OrgApacheXmlDtmAxis_get_PRECEDINGANDANCESTOR();
#define OrgApacheXmlDtmAxis_PRECEDINGANDANCESTOR 15
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, PRECEDINGANDANCESTOR, jint)

/*!
 @brief A non-xpath axis, returns all nodes in the tree from and including the 
 root.
 */
inline jint OrgApacheXmlDtmAxis_get_ALL();
#define OrgApacheXmlDtmAxis_ALL 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ALL, jint)

/*!
 @brief A non-xpath axis, returns all nodes that aren't namespaces or attributes, 
 from and including the root.
 */
inline jint OrgApacheXmlDtmAxis_get_DESCENDANTSFROMROOT();
#define OrgApacheXmlDtmAxis_DESCENDANTSFROMROOT 17
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, DESCENDANTSFROMROOT, jint)

/*!
 @brief A non-xpath axis, returns all nodes that aren't namespaces or attributes, 
 from and including the root.
 */
inline jint OrgApacheXmlDtmAxis_get_DESCENDANTSORSELFFROMROOT();
#define OrgApacheXmlDtmAxis_DESCENDANTSORSELFFROMROOT 18
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, DESCENDANTSORSELFFROMROOT, jint)

/*!
 @brief A non-xpath axis, returns root only.
 */
inline jint OrgApacheXmlDtmAxis_get_ROOT();
#define OrgApacheXmlDtmAxis_ROOT 19
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, ROOT, jint)

/*!
 @brief A non-xpath axis, for functions.
 */
inline jint OrgApacheXmlDtmAxis_get_FILTEREDLIST();
#define OrgApacheXmlDtmAxis_FILTEREDLIST 20
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmAxis, FILTEREDLIST, jint)

FOUNDATION_EXPORT jboolean OrgApacheXmlDtmAxis_isReverseWithInt_(jint axis);

FOUNDATION_EXPORT NSString *OrgApacheXmlDtmAxis_getNamesWithInt_(jint index);

FOUNDATION_EXPORT jint OrgApacheXmlDtmAxis_getNamesLength();

FOUNDATION_EXPORT void OrgApacheXmlDtmAxis_init(OrgApacheXmlDtmAxis *self);

FOUNDATION_EXPORT OrgApacheXmlDtmAxis *new_OrgApacheXmlDtmAxis_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmAxis *create_OrgApacheXmlDtmAxis_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmAxis)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmAxis")
