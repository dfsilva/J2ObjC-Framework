//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/DTMChildIterNodeList.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMChildIterNodeList")
#ifdef RESTRICT_OrgApacheXmlDtmRefDTMChildIterNodeList
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMChildIterNodeList 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefDTMChildIterNodeList 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefDTMChildIterNodeList

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefDTMChildIterNodeList_) && (INCLUDE_ALL_OrgApacheXmlDtmRefDTMChildIterNodeList || defined(INCLUDE_OrgApacheXmlDtmRefDTMChildIterNodeList))
#define OrgApacheXmlDtmRefDTMChildIterNodeList_

#define RESTRICT_OrgApacheXmlDtmRefDTMNodeListBase 1
#define INCLUDE_OrgApacheXmlDtmRefDTMNodeListBase 1
#include "../../../../../org/apache/xml/dtm/ref/DTMNodeListBase.h"

@protocol OrgApacheXmlDtmDTM;
@protocol OrgW3cDomNode;

/*!
 @brief <code>DTMNodeList</code> gives us an implementation of the DOM's
 NodeList interface wrapped around a DTM Iterator.
 The author
 considers this something of an abominations, since NodeList was not
 intended to be a general purpose "list of nodes" API and is
 generally considered by the DOM WG to have be a mistake... but I'm
 told that some of the XPath/XSLT folks say they must have this
 solution.
 Please note that this is not necessarily equivlaent to a DOM
 NodeList operating over the same document. In particular:
 <ul>
 <li>If there are several Text nodes in logical succession (ie,
 across CDATASection and EntityReference boundaries), we will return
 only the first; the caller is responsible for stepping through
 them.
 (%REVIEW% Provide a convenience routine here to assist, pending
 proposed DOM Level 3 getAdjacentText() operation?) </li>
 <li>Since the whole XPath/XSLT architecture assumes that the source
 document is not altered while we're working with it, we do not
 promise to implement the DOM NodeList's "live view" response to
 document mutation. </li>
 </ul>
 <p>State: In progress!!</p>
 */
@interface OrgApacheXmlDtmRefDTMChildIterNodeList : OrgApacheXmlDtmRefDTMNodeListBase

#pragma mark Public

/*!
 @brief Public constructor: Create a NodeList to support
 DTMNodeProxy.getChildren().
 Unfortunately AxisIterators and DTMIterators don't share an API,
 so I can't use the existing Axis.CHILD iterator. Rather than
 create Yet Another Class, let's set up a special case of this
 one.
 @param parentDTM The DTM containing this node
 @param parentHandle DTM node-handle integer
 */
- (instancetype)initWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)parentDTM
                                   withInt:(jint)parentHandle;

/*!
 @brief The number of nodes in the list.
 The range of valid child node indices 
 is 0 to <code>length-1</code> inclusive. 
 */
- (jint)getLength;

/*!
 @brief Returns the <code>index</code>th item in the collection.
 If 
 <code>index</code> is greater than or equal to the number of nodes in 
 the list, this returns <code>null</code>.
 @param index Index into the collection.
 @return The node at the <code>index</code>th position in the 
 <code>NodeList</code>, or <code>null</code> if that is not a valid 
 index.
 */
- (id<OrgW3cDomNode>)itemWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefDTMChildIterNodeList)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefDTMChildIterNodeList_initWithOrgApacheXmlDtmDTM_withInt_(OrgApacheXmlDtmRefDTMChildIterNodeList *self, id<OrgApacheXmlDtmDTM> parentDTM, jint parentHandle);

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMChildIterNodeList *new_OrgApacheXmlDtmRefDTMChildIterNodeList_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> parentDTM, jint parentHandle) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefDTMChildIterNodeList *create_OrgApacheXmlDtmRefDTMChildIterNodeList_initWithOrgApacheXmlDtmDTM_withInt_(id<OrgApacheXmlDtmDTM> parentDTM, jint parentHandle);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefDTMChildIterNodeList)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefDTMChildIterNodeList")
