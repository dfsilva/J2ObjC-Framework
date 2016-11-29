//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/CountersTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerCountersTable")
#ifdef RESTRICT_OrgApacheXalanTransformerCountersTable
#define INCLUDE_ALL_OrgApacheXalanTransformerCountersTable 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerCountersTable 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerCountersTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerCountersTable_) && (INCLUDE_ALL_OrgApacheXalanTransformerCountersTable || defined(INCLUDE_OrgApacheXalanTransformerCountersTable))
#define OrgApacheXalanTransformerCountersTable_

#define RESTRICT_JavaUtilHashtable 1
#define INCLUDE_JavaUtilHashtable 1
#include "java/util/Hashtable.h"

@class JavaUtilVector;
@class OrgApacheXalanTemplatesElemNumber;
@class OrgApacheXpathNodeSetDTM;
@class OrgApacheXpathXPathContext;

/*!
 @brief This is a table of counters, keyed by ElemNumber objects, each
 of which has a list of Counter objects.
 This really isn't a true
 table, it is more like a list of lists (there must be a technical
 term for that...).
  internal
 */
@interface OrgApacheXalanTransformerCountersTable : JavaUtilHashtable {
 @public
  /*!
   @brief Number of counters created so far
   */
  jint m_countersMade_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a CountersTable.
 */
- (instancetype)init;

/*!
 @brief Count forward until the given node is found, or until
 we have looked to the given amount.
 @param support The XPath context to use
 @param numberElem The given xsl:number element.
 @param node The node to count.
 @return The node count, or 0 if not found.
 @throws TransformerException
 */
- (jint)countNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support
          withOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem
                                        withInt:(jint)node;

#pragma mark Package-Private

/*!
 @brief Add a list of counted nodes that were built in backwards document
 order, or a list of counted nodes that are in forwards document
 order.
 @param flist Vector of nodes built in forwards document order
 @param blist Vector of nodes built in backwards document order
 */
- (void)appendBtoFListWithOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)flist
                      withOrgApacheXpathNodeSetDTM:(OrgApacheXpathNodeSetDTM *)blist;

/*!
 @brief Get the list of counters that corresponds to
 the given ElemNumber object.
 @param numberElem the given xsl:number element.
 @return the list of counters that corresponds to
 the given ElemNumber object.
 */
- (JavaUtilVector *)getCountersWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem;

/*!
 @brief Put a counter into the table and create an empty
 vector as it's value.
 @param numberElem the given xsl:number element.
 @return an empty vector to be used to store counts
 for this number element.
 */
- (JavaUtilVector *)putElemNumberWithOrgApacheXalanTemplatesElemNumber:(OrgApacheXalanTemplatesElemNumber *)numberElem;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerCountersTable)

inline jlong OrgApacheXalanTransformerCountersTable_get_serialVersionUID();
#define OrgApacheXalanTransformerCountersTable_serialVersionUID 2159100770924179875LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTransformerCountersTable, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTransformerCountersTable_init(OrgApacheXalanTransformerCountersTable *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerCountersTable *new_OrgApacheXalanTransformerCountersTable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerCountersTable *create_OrgApacheXalanTransformerCountersTable_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerCountersTable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerCountersTable")
