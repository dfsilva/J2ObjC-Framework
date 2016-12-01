//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/JAXPPrefixResolver.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver")
#ifdef RESTRICT_OrgApacheXpathJaxpJAXPPrefixResolver
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpJAXPPrefixResolver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathJaxpJAXPPrefixResolver_) && (INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver || defined(INCLUDE_OrgApacheXpathJaxpJAXPPrefixResolver))
#define OrgApacheXpathJaxpJAXPPrefixResolver_

#define RESTRICT_OrgApacheXmlUtilsPrefixResolver 1
#define INCLUDE_OrgApacheXmlUtilsPrefixResolver 1
#include "../../../../org/apache/xml/utils/PrefixResolver.h"

@protocol JavaxXmlNamespaceNamespaceContext;
@protocol OrgW3cDomNode;

/*!
 @brief <meta name="usage" content="general"/>
 This class implements a Default PrefixResolver which
 can be used to perform prefix-to-namespace lookup
 for the XPath object.
 This class delegates the resolution to the passed NamespaceContext
 */
@interface OrgApacheXpathJaxpJAXPPrefixResolver : NSObject < OrgApacheXmlUtilsPrefixResolver >

+ (NSString *)S_XMLNAMESPACEURI;

#pragma mark Public

- (instancetype)initWithJavaxXmlNamespaceNamespaceContext:(id<JavaxXmlNamespaceNamespaceContext>)nsContext;

/*!
 @brief Return the base identifier.
 @return null
 */
- (NSString *)getBaseIdentifier;

- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix;

/*!
 @brief Given a prefix and a Context Node, get the corresponding namespace.
 Warning: This will not work correctly if namespaceContext
 is an attribute node.
 @param prefix Prefix to resolve.
 @param namespaceContext Node from which to start searching for a
 xmlns attribute that binds a prefix to a namespace.
 @return Namespace that prefix resolves to, or null if prefix
 is not bound.
 */
- (NSString *)getNamespaceForPrefixWithNSString:(NSString *)prefix
                              withOrgW3cDomNode:(id<OrgW3cDomNode>)namespaceContext;

/*!
 - seealso: PrefixResolver#handlesNullPrefixes()
 */
- (jboolean)handlesNullPrefixes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathJaxpJAXPPrefixResolver)

/*!
 @brief The URI for the XML namespace.
 (Duplicate of that found in org.apache.xpath.XPathContext). 
 */
inline NSString *OrgApacheXpathJaxpJAXPPrefixResolver_get_S_XMLNAMESPACEURI();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXpathJaxpJAXPPrefixResolver_S_XMLNAMESPACEURI;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathJaxpJAXPPrefixResolver, S_XMLNAMESPACEURI, NSString *)

FOUNDATION_EXPORT void OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(OrgApacheXpathJaxpJAXPPrefixResolver *self, id<JavaxXmlNamespaceNamespaceContext> nsContext);

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPPrefixResolver *new_OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(id<JavaxXmlNamespaceNamespaceContext> nsContext) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpJAXPPrefixResolver *create_OrgApacheXpathJaxpJAXPPrefixResolver_initWithJavaxXmlNamespaceNamespaceContext_(id<JavaxXmlNamespaceNamespaceContext> nsContext);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpJAXPPrefixResolver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpJAXPPrefixResolver")
