//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/TransformerFactoryImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorTransformerFactoryImpl")
#ifdef RESTRICT_OrgApacheXalanProcessorTransformerFactoryImpl
#define INCLUDE_ALL_OrgApacheXalanProcessorTransformerFactoryImpl 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorTransformerFactoryImpl 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorTransformerFactoryImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorTransformerFactoryImpl_) && (INCLUDE_ALL_OrgApacheXalanProcessorTransformerFactoryImpl || defined(INCLUDE_OrgApacheXalanProcessorTransformerFactoryImpl))
#define OrgApacheXalanProcessorTransformerFactoryImpl_

#define RESTRICT_JavaxXmlTransformSaxSAXTransformerFactory 1
#define INCLUDE_JavaxXmlTransformSaxSAXTransformerFactory 1
#include "javax/xml/transform/sax/SAXTransformerFactory.h"

@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformSaxTemplatesHandler;
@protocol JavaxXmlTransformSaxTransformerHandler;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformTemplates;
@protocol JavaxXmlTransformURIResolver;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxXMLFilter;

/*!
 @brief The TransformerFactoryImpl, which implements the TRaX TransformerFactory
 interface, processes XSLT stylesheets into a Templates object
 (a StylesheetRoot).
 */
@interface OrgApacheXalanProcessorTransformerFactoryImpl : JavaxXmlTransformSaxSAXTransformerFactory {
 @public
  /*!
   @brief The object that implements the URIResolver interface,
 or null.
   */
  id<JavaxXmlTransformURIResolver> m_uriResolver_;
}

+ (NSString *)XSLT_PROPERTIES;

+ (NSString *)FEATURE_INCREMENTAL;

+ (NSString *)FEATURE_OPTIMIZE;

+ (NSString *)FEATURE_SOURCE_LOCATION;

#pragma mark Public

/*!
 @brief Constructor TransformerFactoryImpl
 */
- (instancetype)init;

/*!
 @brief Get InputSource specification(s) that are associated with the
 given document specified in the source param,
 via the xml-stylesheet processing instruction
 (see http://www.w3.org/TR/xml-stylesheet/), and that matches
 the given criteria.
 Note that it is possible to return several stylesheets
 that match the criteria, in which case they are applied as if they were
 a list of imports or cascades.
 <p>Note that DOM2 has it's own mechanism for discovering stylesheets.
 Therefore, there isn't a DOM version of this method.</p>
 @param source The XML source that is to be searched.
 @param media The media attribute to be matched.  May be null, in which
 case the prefered templates will be used (i.e. alternate = no).
 @param title The value of the title attribute to match.  May be null.
 @param charset The value of the charset attribute to match.  May be null.
 @return A Source object capable of being used to create a Templates object.
 @throws TransformerConfigurationException
 */
- (id<JavaxXmlTransformSource>)getAssociatedStylesheetWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source
                                                                     withNSString:(NSString *)media
                                                                     withNSString:(NSString *)title
                                                                     withNSString:(NSString *)charset;

/*!
 @brief Allows the user to retrieve specific attributes on the underlying
 implementation.
 @param name The name of the attribute.
 @return value The value of the attribute.
 @throws IllegalArgumentException thrown if the underlying
 implementation doesn't recognize the attribute.
 */
- (id)getAttributeWithNSString:(NSString *)name;

/*!
 @brief Get the error listener in effect for the TransformerFactory.
 @return A non-null reference to an error listener.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief Look up the value of a feature.
 <p>The feature name is any fully-qualified URI.  It is
 possible for an TransformerFactory to recognize a feature name but
 to be unable to return its value; this is especially true
 in the case of an adapter for a SAX1 Parser, which has
 no way of knowing whether the underlying parser is
 validating, for example.</p>
 @param name The feature name, which is a fully-qualified URI.
 @return The current state of the feature (true or false).
 */
- (jboolean)getFeatureWithNSString:(NSString *)name;

/*!
 @brief Get the object that will be used to resolve URIs used in
 xsl:import, etc.
 This will be used as the default for the
 transformation.
 @return The URIResolver that was set with setURIResolver.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief Return the state of the secure processing feature.
 @return state of the secure processing feature.
 */
- (jboolean)isSecureProcessing;

/*!
 @brief Process the source into a Templates object, which is likely
 a compiled representation of the source.
 This Templates object
 may then be used concurrently across multiple threads.  Creating
 a Templates object allows the TransformerFactory to do detailed
 performance optimization of transformation instructions, without
 penalizing runtime transformation.
 @param source An object that holds a URL, input stream, etc.
 @return A Templates object capable of being used for transformation purposes.
 @throws TransformerConfigurationException May throw this during the parse when it
 is constructing the Templates object and fails.
 */
- (id<JavaxXmlTransformTemplates>)newTemplatesWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create a new Transformer object that performs a copy
 of the source to the result.
 @return A Transformer object that may be used to perform a transformation
 in a single thread, never null.
 @throws TransformerConfigurationException May throw this during
 the parse when it is constructing the
 Templates object and fails.
 */
- (id<JavaxXmlTransformSaxTemplatesHandler>)newTemplatesHandler OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create a new Transformer object that performs a copy
 of the source to the result.
 @return A Transformer object capable of
 being used for transformation purposes in a single thread.
 @throws TransformerConfigurationException May throw this during
 the parse when it is constructing the
 Templates object and it fails.
 */
- (JavaxXmlTransformTransformer *)newTransformer OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Process the source into a Transformer object.
 Care must
 be given to know that this object can not be used concurrently
 in multiple threads.
 @param source An object that holds a URL, input stream, etc.
 @return A Transformer object capable of
 being used for transformation purposes in a single thread.
 @throws TransformerConfigurationException May throw this during the parse when it
 is constructing the Templates object and fails.
 */
- (JavaxXmlTransformTransformer *)newTransformerWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)source OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result.
 @return TransformerHandler ready to transform SAX events.
 @throws TransformerConfigurationException
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandler OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result, based on the transformation
 instructions specified by the argument.
 @param src The source of the transformation instructions.
 @return TransformerHandler ready to transform SAX events.
 @throws TransformerConfigurationException
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandlerWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)src OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Get a TransformerHandler object that can process SAX
 ContentHandler events into a Result, based on the Templates argument.
 @param templates The source of the transformation instructions.
 @return TransformerHandler ready to transform SAX events.
 @throws TransformerConfigurationException
 */
- (id<JavaxXmlTransformSaxTransformerHandler>)newTransformerHandlerWithJavaxXmlTransformTemplates:(id<JavaxXmlTransformTemplates>)templates OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create an XMLFilter that uses the given source as the
 transformation instructions.
 @param src The source of the transformation instructions.
 @return An XMLFilter object, or null if this feature is not supported.
 @throws TransformerConfigurationException
 */
- (id<OrgXmlSaxXMLFilter>)newXMLFilterWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)src OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create an XMLFilter that uses the given source as the
 transformation instructions.
 @param templates non-null reference to Templates object.
 @return An XMLFilter object, or null if this feature is not supported.
 @throws TransformerConfigurationException
 */
- (id<OrgXmlSaxXMLFilter>)newXMLFilterWithJavaxXmlTransformTemplates:(id<JavaxXmlTransformTemplates>)templates OBJC_METHOD_FAMILY_NONE;

- (id<JavaxXmlTransformTemplates>)processFromNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Allows the user to set specific attributes on the underlying
 implementation.
 @param name The name of the attribute.
 @param value The value of the attribute; Boolean or String="true"|"false"
 @throws IllegalArgumentException thrown if the underlying
 implementation doesn't recognize the attribute.
 */
- (void)setAttributeWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Set an error listener for the TransformerFactory.
 @param listener Must be a non-null reference to an ErrorListener.
 @throws IllegalArgumentException if the listener argument is null.
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief <p>Set a feature for this <code>TransformerFactory</code> and <code>Transformer</code>s
 or <code>Template</code>s created by this factory.
 </p>
 <p>
 Feature names are fully qualified <code>java.net.URI</code>s.
 Implementations may define their own features.
 An <code>TransformerConfigurationException</code> is thrown if this <code>TransformerFactory</code> or the
 <code>Transformer</code>s or <code>Template</code>s it creates cannot support the feature.
 It is possible for an <code>TransformerFactory</code> to expose a feature value but be unable to change its state.
 </p>
 <p>See <code>javax.xml.transform.TransformerFactory</code> for full documentation of specific features.</p>
 @param name Feature name.
 @param value Is feature state <code>true</code> or <code>false</code>.
 @throws TransformerConfigurationException if this <code>TransformerFactory</code>
 or the <code>Transformer</code>s or <code>Template</code>s it creates cannot support this feature.
 @throws NullPointerException If the <code>name</code> parameter is null.
 */
- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

/*!
 @brief Set an object that will be used to resolve URIs used in
 xsl:import, etc.
 This will be used as the default for the
 transformation.
 @param resolver An object that implements the URIResolver interface,
 or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

#pragma mark Package-Private

/*!
 @brief The systemID that was specified in
 processFromNode(Node node, String systemID).
 @return The systemID, or null.
 */
- (NSString *)getDOMsystemID;

/*!
 @brief Process the stylesheet from a DOM tree, if the
 processor supports the "http://xml.org/trax/features/dom/input"
 feature.
 @param node A DOM tree which must contain
 valid transform instructions that this processor understands.
 @param systemID The systemID from where xsl:includes and xsl:imports
 should be resolved from.
 @return A Templates object capable of being used for transformation purposes.
 @throws TransformerConfigurationException
 */
- (id<JavaxXmlTransformTemplates>)processFromNodeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node
                                                      withNSString:(NSString *)systemID;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorTransformerFactoryImpl)

J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorTransformerFactoryImpl, m_uriResolver_, id<JavaxXmlTransformURIResolver>)

/*!
 @brief The path/filename of the property file: XSLTInfo.properties  
 Maintenance note: see also
 <code>org.apache.xpath.functions.FuncSystemProperty.XSLT_PROPERTIES</code>
 */
inline NSString *OrgApacheXalanProcessorTransformerFactoryImpl_get_XSLT_PROPERTIES();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanProcessorTransformerFactoryImpl_XSLT_PROPERTIES;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanProcessorTransformerFactoryImpl, XSLT_PROPERTIES, NSString *)

/*!
 @brief Static string to be used for incremental feature
 */
inline NSString *OrgApacheXalanProcessorTransformerFactoryImpl_get_FEATURE_INCREMENTAL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanProcessorTransformerFactoryImpl_FEATURE_INCREMENTAL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanProcessorTransformerFactoryImpl, FEATURE_INCREMENTAL, NSString *)

/*!
 @brief Static string to be used for optimize feature
 */
inline NSString *OrgApacheXalanProcessorTransformerFactoryImpl_get_FEATURE_OPTIMIZE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanProcessorTransformerFactoryImpl_FEATURE_OPTIMIZE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanProcessorTransformerFactoryImpl, FEATURE_OPTIMIZE, NSString *)

/*!
 @brief Static string to be used for source_location feature
 */
inline NSString *OrgApacheXalanProcessorTransformerFactoryImpl_get_FEATURE_SOURCE_LOCATION();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgApacheXalanProcessorTransformerFactoryImpl_FEATURE_SOURCE_LOCATION;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXalanProcessorTransformerFactoryImpl, FEATURE_SOURCE_LOCATION, NSString *)

FOUNDATION_EXPORT void OrgApacheXalanProcessorTransformerFactoryImpl_init(OrgApacheXalanProcessorTransformerFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorTransformerFactoryImpl *new_OrgApacheXalanProcessorTransformerFactoryImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorTransformerFactoryImpl *create_OrgApacheXalanProcessorTransformerFactoryImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorTransformerFactoryImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorTransformerFactoryImpl")
