//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/NamespaceSupport2.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2")
#ifdef RESTRICT_OrgApacheXmlUtilsNamespaceSupport2
#define INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsNamespaceSupport2

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsNamespaceSupport2_) && (INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2 || defined(INCLUDE_OrgApacheXmlUtilsNamespaceSupport2))
#define OrgApacheXmlUtilsNamespaceSupport2_

#define RESTRICT_OrgXmlSaxHelpersNamespaceSupport 1
#define INCLUDE_OrgXmlSaxHelpersNamespaceSupport 1
#include "../../../../org/xml/sax/helpers/NamespaceSupport.h"

@class IOSObjectArray;
@protocol JavaUtilEnumeration;

/*!
 @brief Encapsulate Namespace tracking logic for use by SAX drivers.
 <p>This class is an attempt to rewrite the SAX NamespaceSupport
 "helper" class for improved efficiency. It can be used to track the
 namespace declarations currently in scope, providing lookup
 routines to map prefixes to URIs and vice versa.</p>
 <p>ISSUE: For testing purposes, I've extended NamespaceSupport even
 though I'm completely reasserting all behaviors and fields.
 Wasteful.... But SAX did not put an interface under that object and
 we seem to have written that SAX class into our APIs... and I don't
 want to argue with it right now. </p>
 - seealso: org.xml.sax.helpers.NamespaceSupport
 */
@interface OrgApacheXmlUtilsNamespaceSupport2 : OrgXmlSaxHelpersNamespaceSupport

+ (NSString *)XMLNS;

#pragma mark Public

/*!
 @brief Create a new Namespace support object.
 */
- (instancetype)init;

/*!
 @brief Declare a Namespace prefix.
 <p>This method declares a prefix in the current Namespace
 context; the prefix will remain in force until this context
 is popped, unless it is shadowed in a descendant context.</p>
 <p>To declare a default Namespace, use the empty string.  The
 prefix must not be "xml" or "xmlns".</p>
 <p>Note that you must <em>not</em> declare a prefix after
 you've pushed and popped another Namespace.</p>
 <p>Note that there is an asymmetry in this library: while <code>getPrefix</code>
  will not return the default "" prefix,
 even if you have declared one; to check for a default prefix,
 you have to look it up explicitly using <code>getURI</code>.
 This asymmetry exists to make it easier to look up prefixes
 for attribute names, where the default prefix is not allowed.</p>
 @param prefix The prefix to declare, or null for the empty
 string.
 @param uri The Namespace URI to associate with the prefix.
 @return true if the prefix was legal, false otherwise
 - seealso: #processName
 - seealso: #getURI
 - seealso: #getPrefix
 */
- (jboolean)declarePrefixWithNSString:(NSString *)prefix
                         withNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes declared in this context.
 <p>The empty (default) prefix will be included in this 
 enumeration; note that this behaviour differs from that of
 <code>getPrefix</code> and <code>getPrefixes</code>.</p>
 @return An enumeration of all prefixes declared in this
 context.
 - seealso: #getPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getDeclaredPrefixes;

/*!
 @brief Return one of the prefixes mapped to a Namespace URI.
 <p>If more than one prefix is currently mapped to the same
 URI, this method will make an arbitrary selection; if you
 want all of the prefixes, use the <code>getPrefixes</code>
 method instead.</p>
 <p><strong>Note:</strong> this will never return the empty
 (default) prefix; to check for a default prefix, use the <code>getURI</code>
  method with an argument of "".</p>
 @param uri The Namespace URI.
 @return One of the prefixes currently mapped to the URI supplied,
 or null if none is mapped or if the URI is assigned to
 the default Namespace.
 - seealso: #getPrefixes(java.lang.String)
 - seealso: #getURI
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes currently declared.
 <p><strong>Note:</strong> if there is a default prefix, it will not be
 returned in this enumeration; check for the default prefix
 using the <code>getURI</code> with an argument of "".</p>
 @return An enumeration of all prefixes declared in the
 current context except for the empty (default)
 prefix.
 - seealso: #getDeclaredPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getPrefixes;

/*!
 @brief Return an enumeration of all prefixes currently declared for a URI.
 <p>This method returns prefixes mapped to a specific Namespace
 URI.  The xml: prefix will be included.  If you want only one
 prefix that's mapped to the Namespace URI, and you don't care 
 which one you get, use the <code>getPrefix</code>
 method instead.</p>
 <p><strong>Note:</strong> the empty (default) prefix is
 <em>never</em> included in this enumeration; to check for the
 presence of a default Namespace, use the <code>getURI</code>
 method with an argument of "".</p>
 @param uri The Namespace URI.
 @return An enumeration of all prefixes declared in the
 current context.
 - seealso: #getPrefix
 - seealso: #getDeclaredPrefixes
 - seealso: #getURI
 */
- (id<JavaUtilEnumeration>)getPrefixesWithNSString:(NSString *)uri;

/*!
 @brief Look up a prefix and get the currently-mapped Namespace URI.
 <p>This method looks up the prefix in the current context.
 Use the empty string ("") for the default Namespace.</p>
 @param prefix The prefix to look up.
 @return The associated Namespace URI, or null if the prefix
 is undeclared in this context.
 - seealso: #getPrefix
 - seealso: #getPrefixes
 */
- (NSString *)getURIWithNSString:(NSString *)prefix;

/*!
 @brief Revert to the previous Namespace context.
 <p>Normally, you should pop the context at the end of each
 XML element.  After popping the context, all Namespace prefix
 mappings that were previously in force are restored.</p>
 <p>You must not attempt to declare additional Namespace
 prefixes after popping a context, unless you push another
 context first.</p>
 - seealso: #pushContext
 */
- (void)popContext;

/*!
 @brief Process a raw XML 1.0 name.
 <p>This method processes a raw XML 1.0 name in the current
 context by removing the prefix and looking it up among the
 prefixes currently declared.  The return value will be the
 array supplied by the caller, filled in as follows:</p>
 <dl>
 <dt>parts[0]</dt>
 <dd>The Namespace URI, or an empty string if none is
 in use.</dd>
 <dt>parts[1]</dt>
 <dd>The local name (without prefix).</dd>
 <dt>parts[2]</dt>
 <dd>The original raw name.</dd>
 </dl>
 <p>All of the strings in the array will be internalized.  If
 the raw name has a prefix that has not been declared, then
 the return value will be null.</p>
 <p>Note that attribute names are processed differently than
 element names: an unprefixed element name will received the
 default Namespace (if any), while an unprefixed element name
 will not.</p>
 @param qName The raw XML 1.0 name to be processed.
 @param parts A string array supplied by the caller, capable of
 holding at least three members.
 @param isAttribute A flag indicating whether this is an
 attribute name (true) or an element name (false).
 @return The supplied array holding three internalized strings 
 representing the Namespace URI (or empty string), the
 local name, and the raw XML 1.0 name; or null if there
 is an undeclared prefix.
 - seealso: #declarePrefix
 - seealso: java.lang.String#intern
 */
- (IOSObjectArray *)processNameWithNSString:(NSString *)qName
                          withNSStringArray:(IOSObjectArray *)parts
                                withBoolean:(jboolean)isAttribute;

/*!
 @brief Start a new Namespace context.
 <p>Normally, you should push a new context at the beginning
 of each XML element: the new context will automatically inherit
 the declarations of its parent context, but it will also keep
 track of which declarations were made within this context.</p>
 <p>The Namespace support object always starts with a base context
 already in force: in this context, only the "xml" prefix is
 declared.</p>
 - seealso: #popContext
 */
- (void)pushContext;

/*!
 @brief Reset this Namespace support object for reuse.
 <p>It is necessary to invoke this method before reusing the
 Namespace support object for a new session.</p>
 */
- (void)reset;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsNamespaceSupport2)

/*!
 @brief The XML Namespace as a constant.
 <p>This is the Namespace URI that is automatically mapped
 to the "xml" prefix.</p>
 */
inline NSString *OrgApacheXmlUtilsNamespaceSupport2_get_XMLNS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsNamespaceSupport2_XMLNS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXmlUtilsNamespaceSupport2, XMLNS, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsNamespaceSupport2_init(OrgApacheXmlUtilsNamespaceSupport2 *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsNamespaceSupport2 *new_OrgApacheXmlUtilsNamespaceSupport2_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsNamespaceSupport2 *create_OrgApacheXmlUtilsNamespaceSupport2_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsNamespaceSupport2)

#endif

#if !defined (OrgApacheXmlUtilsPrefixForUriEnumerator_) && (INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2 || defined(INCLUDE_OrgApacheXmlUtilsPrefixForUriEnumerator))
#define OrgApacheXmlUtilsPrefixForUriEnumerator_

#define RESTRICT_JavaUtilEnumeration 1
#define INCLUDE_JavaUtilEnumeration 1
#include "../../../../java/util/Enumeration.h"

@class OrgApacheXmlUtilsNamespaceSupport2;

/*!
 @brief Implementation of Enumeration filter, wrapped
 aroung the get-all-prefixes version of the operation.
 This is NOT
 necessarily the most efficient approach; finding the URI and then asking
 what prefixes apply to it might make much more sense.
 */
@interface OrgApacheXmlUtilsPrefixForUriEnumerator : NSObject < JavaUtilEnumeration >

#pragma mark Public

- (jboolean)hasMoreElements;

- (id)nextElement;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXmlUtilsNamespaceSupport2:(OrgApacheXmlUtilsNamespaceSupport2 *)nsup
                                              withNSString:(NSString *)uri
                                   withJavaUtilEnumeration:(id<JavaUtilEnumeration>)allPrefixes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsPrefixForUriEnumerator)

FOUNDATION_EXPORT void OrgApacheXmlUtilsPrefixForUriEnumerator_initWithOrgApacheXmlUtilsNamespaceSupport2_withNSString_withJavaUtilEnumeration_(OrgApacheXmlUtilsPrefixForUriEnumerator *self, OrgApacheXmlUtilsNamespaceSupport2 *nsup, NSString *uri, id<JavaUtilEnumeration> allPrefixes);

FOUNDATION_EXPORT OrgApacheXmlUtilsPrefixForUriEnumerator *new_OrgApacheXmlUtilsPrefixForUriEnumerator_initWithOrgApacheXmlUtilsNamespaceSupport2_withNSString_withJavaUtilEnumeration_(OrgApacheXmlUtilsNamespaceSupport2 *nsup, NSString *uri, id<JavaUtilEnumeration> allPrefixes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsPrefixForUriEnumerator *create_OrgApacheXmlUtilsPrefixForUriEnumerator_initWithOrgApacheXmlUtilsNamespaceSupport2_withNSString_withJavaUtilEnumeration_(OrgApacheXmlUtilsNamespaceSupport2 *nsup, NSString *uri, id<JavaUtilEnumeration> allPrefixes);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsPrefixForUriEnumerator)

#endif

#if !defined (OrgApacheXmlUtilsContext2_) && (INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2 || defined(INCLUDE_OrgApacheXmlUtilsContext2))
#define OrgApacheXmlUtilsContext2_

@class IOSObjectArray;
@class JavaUtilHashtable;
@protocol JavaUtilEnumeration;

/*!
 @brief Internal class for a single Namespace context.
 <p>This module caches and reuses Namespace contexts, so the number allocated
 will be equal to the element depth of the document, not to the total
 number of elements (i.e. 5-10 rather than tens of thousands).</p>
 */
@interface OrgApacheXmlUtilsContext2 : NSObject {
 @public
  JavaUtilHashtable *prefixTable_;
  JavaUtilHashtable *uriTable_;
  JavaUtilHashtable *elementNameTable_;
  JavaUtilHashtable *attributeNameTable_;
  NSString *defaultNS_;
}

#pragma mark Package-Private

/*!
 @brief Create a new Namespace context.
 */
- (instancetype)initWithOrgApacheXmlUtilsContext2:(OrgApacheXmlUtilsContext2 *)parent;

/*!
 @brief Declare a Namespace prefix for this context.
 @param prefix The prefix to declare.
 @param uri The associated Namespace URI.
 - seealso: org.xml.sax.helpers.NamespaceSupport2#declarePrefix
 */
- (void)declarePrefixWithNSString:(NSString *)prefix
                     withNSString:(NSString *)uri;

/*!
  The child Namespace context object, or null if this
 is the last currently on the chain.
 */
- (OrgApacheXmlUtilsContext2 *)getChild;

/*!
 @brief Return an enumeration of prefixes declared in this context.
 @return An enumeration of prefixes (possibly empty).
 - seealso: org.xml.sax.helpers.NamespaceSupport2#getDeclaredPrefixes
 */
- (id<JavaUtilEnumeration>)getDeclaredPrefixes;

/*!
  The parent Namespace context object, or null if this
 is the root.
 */
- (OrgApacheXmlUtilsContext2 *)getParent;

/*!
 @brief Look up one of the prefixes associated with a URI in this context.
 <p>Since many prefixes may be mapped to the same URI,
 the return value may be unreliable.</p>
 @param uri The URI to look up.
 @return The associated prefix, or null if none is declared.
 - seealso: org.xml.sax.helpers.NamespaceSupport2#getPrefix
 */
- (NSString *)getPrefixWithNSString:(NSString *)uri;

/*!
 @brief Return an enumeration of all prefixes currently in force.
 <p>The default prefix, if in force, is <em>not</em>
 returned, and will have to be checked for separately.</p>
 @return An enumeration of prefixes (never empty).
 - seealso: org.xml.sax.helpers.NamespaceSupport2#getPrefixes
 */
- (id<JavaUtilEnumeration>)getPrefixes;

/*!
 @brief Look up the URI associated with a prefix in this context.
 @param prefix The prefix to look up.
 @return The associated Namespace URI, or null if none is
 declared.
 - seealso: org.xml.sax.helpers.NamespaceSupport2#getURI
 */
- (NSString *)getURIWithNSString:(NSString *)prefix;

/*!
 @brief Process a raw XML 1.0 name in this context.
 @param qName The raw XML 1.0 name.
 @param isAttribute true if this is an attribute name.
 @return An array of three strings containing the
 URI part (or empty string), the local part,
 and the raw name, all internalized, or null
 if there is an undeclared prefix.
 - seealso: org.xml.sax.helpers.NamespaceSupport2#processName
 */
- (IOSObjectArray *)processNameWithNSString:(NSString *)qName
                                withBoolean:(jboolean)isAttribute;

/*!
 @brief (Re)set the parent of this Namespace context.
 This is separate from the c'tor because it's re-applied
 when a Context2 is reused by push-after-pop.
 @param context The parent Namespace context object.
 */
- (void)setParentWithOrgApacheXmlUtilsContext2:(OrgApacheXmlUtilsContext2 *)parent;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsContext2)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsContext2, prefixTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsContext2, uriTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsContext2, elementNameTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsContext2, attributeNameTable_, JavaUtilHashtable *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsContext2, defaultNS_, NSString *)

FOUNDATION_EXPORT void OrgApacheXmlUtilsContext2_initWithOrgApacheXmlUtilsContext2_(OrgApacheXmlUtilsContext2 *self, OrgApacheXmlUtilsContext2 *parent);

FOUNDATION_EXPORT OrgApacheXmlUtilsContext2 *new_OrgApacheXmlUtilsContext2_initWithOrgApacheXmlUtilsContext2_(OrgApacheXmlUtilsContext2 *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsContext2 *create_OrgApacheXmlUtilsContext2_initWithOrgApacheXmlUtilsContext2_(OrgApacheXmlUtilsContext2 *parent);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsContext2)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsNamespaceSupport2")
