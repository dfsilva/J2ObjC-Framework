//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMManager.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMManager")
#ifdef RESTRICT_OrgApacheXmlDtmDTMManager
#define INCLUDE_ALL_OrgApacheXmlDtmDTMManager 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMManager 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMManager

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmDTMManager_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMManager || defined(INCLUDE_OrgApacheXmlDtmDTMManager))
#define OrgApacheXmlDtmDTMManager_

@class OrgApacheXmlUtilsXMLStringFactory;
@protocol JavaxXmlTransformSource;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMFilter;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlDtmDTMWSFilter;
@protocol OrgApacheXmlUtilsPrefixResolver;
@protocol OrgW3cDomNode;

/*!
 @brief A DTMManager instance can be used to create DTM and
 DTMIterator objects, and manage the DTM objects in the system.
 <p>The system property that determines which Factory implementation
 to create is named "org.apache.xml.utils.DTMFactory". This
 property names a concrete subclass of the DTMFactory abstract
 class. If the property is not defined, a platform default is be used.</p>
 <p>An instance of this class <emph>must</emph> be safe to use across
 thread instances.  It is expected that a client will create a single instance
 of a DTMManager to use across multiple threads.  This will allow sharing
 of DTMs across multiple processes.</p>
 <p>Note: this class is incomplete right now.  It will be pretty much
 modeled after javax.xml.transform.TransformerFactory in terms of its
 factory support.</p>
 <p>State: In progress!!</p>
 */
@interface OrgApacheXmlDtmDTMManager : NSObject {
 @public
  /*!
   @brief Factory for creating XMLString objects.
   %TBD% Make this set by the caller.
   */
  OrgApacheXmlUtilsXMLStringFactory *m_xsf_;
  jboolean m_incremental_;
  jboolean m_source_location_;
}

+ (jint)IDENT_DTM_NODE_BITS;

+ (jint)IDENT_NODE_DEFAULT;

+ (jint)IDENT_DTM_DEFAULT;

+ (jint)IDENT_MAX_DTMS;

#pragma mark Public

/*!
 @brief Creates a DTM representing an empty <code>DocumentFragment</code> object.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)createDocumentFragment;

/*!
 @brief Create a new <code>DTMIterator</code> that holds exactly one node.
 @param node The node handle that the DTMIterator will iterate to.
 @return The newly created <code>DTMIterator</code>.
 */
- (id<OrgApacheXmlDtmDTMIterator>)createDTMIteratorWithInt:(jint)node;

/*!
 @brief Create a new <code>DTMIterator</code> based only on a whatToShow
 and a DTMFilter.
 The traversal semantics are defined as the
 descendant access.
 <p>
 Note that DTMIterators may not be an exact match to DOM
 NodeIterators. They are initialized and used in much the same way
 as a NodeIterator, but their response to document mutation is not
 currently defined.
 @param whatToShow This flag specifies which node types may appear in
 the logical view of the tree presented by the iterator. See the
 description of <code>NodeFilter</code> for the set of possible
 <code>SHOW_</code> values.These flags can be combined using
 <code>OR</code>.
 @param filter The <code>NodeFilter</code> to be used with this
 <code>DTMFilter</code>, or <code>null</code> to indicate no filter.
 @param entityReferenceExpansion The value of this flag determines
 whether entity reference nodes are expanded.
 @return The newly created <code>DTMIterator</code>.
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

/*!
 @brief Get the instance of DTM that "owns" a node handle.
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
 (More parameters may eventually need to be added for error handling
 and entity resolution, and to better control selection of implementations.)
 @param source the specification of the source object, which may be null,
 in which case it is assumed that node construction will take
 by some other means.
 @param unique true if the returned DTM must be unique, probably because it
 is going to be mutated.
 @param whiteSpaceFilter Enables filtering of whitespace nodes, and may
 be null.
 @param incremental true if the DTM should be built incrementally, if
 possible.
 @param doIndexing true if the caller considers it worth it to use 
 indexing schemes.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                withBoolean:(jboolean)unique
                             withOrgApacheXmlDtmDTMWSFilter:(id<OrgApacheXmlDtmDTMWSFilter>)whiteSpaceFilter
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
 NEEDSDOC @@param dtm
 NEEDSDOC ($objectName$) @@return
 */
- (jint)getDTMIdentityWithOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm;

/*!
 @brief %TBD% Doc
 NEEDSDOC ($objectName$) @@return
 */
- (jint)getDTMIdentityMask;

/*!
 @brief Get a flag indicating whether an incremental transform is desired
 @return incremental boolean.
 */
- (jboolean)getIncremental;

/*!
 @brief %TBD% Doc
 NEEDSDOC ($objectName$) @@return
 */
- (jint)getNodeIdentityMask;

/*!
 @brief Get a flag indicating whether the transformation phase should
 keep track of line and column numbers for the input source
 document.
 @return source location boolean
 */
- (jboolean)getSource_location;

/*!
 @brief Get the XMLStringFactory used for the DTMs.
 @return a valid XMLStringFactory object, or null if it hasn't been set yet.
 */
- (OrgApacheXmlUtilsXMLStringFactory *)getXMLStringFactory;

/*!
 @brief Obtain a new instance of a <code>DTMManager</code>.
 This static method creates a new factory instance
 This method uses the following ordered lookup procedure to determine
 the <code>DTMManager</code> implementation class to
 load:
 <ul>
 <li>
 Use the <code>org.apache.xml.dtm.DTMManager</code> system
 property.
 </li>
 <li>
 Use the JAVA_HOME(the parent directory where jdk is
 installed)/lib/xalan.properties for a property file that contains the
 name of the implementation class keyed on the same value as the
 system property defined above.
 </li>
 <li>
 Use the Services API (as detailed in the JAR specification), if
 available, to determine the classname. The Services API will look
 for a classname in the file
 <code>META-INF/services/org.apache.xml.dtm.DTMManager</code>
 in jars available to the runtime.
 </li>
 <li>
 Use the default <code>DTMManager</code> classname, which is
 <code>org.apache.xml.dtm.ref.DTMManagerDefault</code>.
 </li>
 </ul>
 Once an application has obtained a reference to a <code>
 DTMManager</code> it can use the factory to configure
 and obtain parser instances.
 @return new DTMManager instance, never null.
 @throws DTMConfigurationException
 if the implementation is not available or cannot be instantiated.
 */
+ (OrgApacheXmlDtmDTMManager *)newInstanceWithOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xsf OBJC_METHOD_FAMILY_NONE;

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
 @brief Set a flag indicating whether an incremental transform is desired
 This flag should have the same value as the FEATURE_INCREMENTAL feature
 which is set by the TransformerFactory.setAttribut() method before a
 DTMManager is created
 @param incremental boolean to use to set m_incremental.
 */
- (void)setIncrementalWithBoolean:(jboolean)incremental;

/*!
 @brief Set a flag indicating whether the transformation phase should
 keep track of line and column numbers for the input source
 document.
 This flag should have the same value as the FEATURE_SOURCE_LOCATION feature
 which is set by the TransformerFactory.setAttribut() method before a
 DTMManager is created
 @param sourceLocation boolean to use to set m_source_location
 */
- (void)setSource_locationWithBoolean:(jboolean)sourceLocation;

/*!
 @brief Set the XMLStringFactory used for the DTMs.
 @param xsf a valid XMLStringFactory object, should not be null.
 */
- (void)setXMLStringFactoryWithOrgApacheXmlUtilsXMLStringFactory:(OrgApacheXmlUtilsXMLStringFactory *)xsf;

#pragma mark Protected

/*!
 @brief Default constructor is protected on purpose.
 */
- (instancetype)init;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmDTMManager)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmDTMManager, m_xsf_, OrgApacheXmlUtilsXMLStringFactory *)

/*!
 @brief This value, set at compile time, controls how many bits of the
 DTM node identifier numbers are used to identify a node within a
 document, and thus sets the maximum number of nodes per
 document.
 The remaining bits are used to identify the DTM
 document which contains this node.
 If you change IDENT_DTM_NODE_BITS, be sure to rebuild _ALL_ the
 files which use it... including the IDKey testcases.
 (FuncGenerateKey currently uses the node identifier directly and
 thus is affected when this changes. The IDKEY results will still be
 _correct_ (presuming no other breakage), but simple equality
 comparison against the previous "golden" files will probably
 complain.)
 */
inline jint OrgApacheXmlDtmDTMManager_get_IDENT_DTM_NODE_BITS();
#define OrgApacheXmlDtmDTMManager_IDENT_DTM_NODE_BITS 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMManager, IDENT_DTM_NODE_BITS, jint)

/*!
 @brief When this bitmask is ANDed with a DTM node handle number, the result
 is the low bits of the node's index number within that DTM.
 To obtain
 the high bits, add the DTM ID portion's offset as assigned in the DTM 
 Manager.
 */
inline jint OrgApacheXmlDtmDTMManager_get_IDENT_NODE_DEFAULT();
#define OrgApacheXmlDtmDTMManager_IDENT_NODE_DEFAULT 65535
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMManager, IDENT_NODE_DEFAULT, jint)

/*!
 @brief When this bitmask is ANDed with a DTM node handle number, the result
 is the DTM's document identity number.
 */
inline jint OrgApacheXmlDtmDTMManager_get_IDENT_DTM_DEFAULT();
#define OrgApacheXmlDtmDTMManager_IDENT_DTM_DEFAULT -65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMManager, IDENT_DTM_DEFAULT, jint)

/*!
 @brief This is the maximum number of DTMs available.
 The highest DTM is
 one less than this.
 */
inline jint OrgApacheXmlDtmDTMManager_get_IDENT_MAX_DTMS();
#define OrgApacheXmlDtmDTMManager_IDENT_MAX_DTMS 65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMManager, IDENT_MAX_DTMS, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMManager_init(OrgApacheXmlDtmDTMManager *self);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMManager *OrgApacheXmlDtmDTMManager_newInstanceWithOrgApacheXmlUtilsXMLStringFactory_(OrgApacheXmlUtilsXMLStringFactory *xsf);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMManager)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMManager")
