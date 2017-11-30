//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/Transformer.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformTransformer")
#ifdef RESTRICT_JavaxXmlTransformTransformer
#define INCLUDE_ALL_JavaxXmlTransformTransformer 0
#else
#define INCLUDE_ALL_JavaxXmlTransformTransformer 1
#endif
#undef RESTRICT_JavaxXmlTransformTransformer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformTransformer_) && (INCLUDE_ALL_JavaxXmlTransformTransformer || defined(INCLUDE_JavaxXmlTransformTransformer))
#define JavaxXmlTransformTransformer_

@class JavaUtilProperties;
@protocol JavaxXmlTransformErrorListener;
@protocol JavaxXmlTransformResult;
@protocol JavaxXmlTransformSource;
@protocol JavaxXmlTransformURIResolver;

/*!
 @brief An instance of this abstract class can transform a
  source tree into a result tree.
 <p>An instance of this class can be obtained with the 
 <code>TransformerFactory.newTransformer</code>
  method. This instance may then be used to process XML from a
  variety of sources and write the transformation output to a
  variety of sinks.</p>
  
 <p>An object of this class may not be used in multiple threads
  running concurrently.  Different Transformers may be used
  concurrently by different threads.</p>
  
 <p>A <code>Transformer</code> may be used multiple times.  Parameters and
  output properties are preserved across transformations.</p>
 @author <a href="Jeff.Suttor@@Sun.com">Jeff Suttor</a>
 @version $Revision: 570103 $, $Date: 2007-08-27 06:24:55 -0700 (Mon, 27 Aug 2007) $
 */
@interface JavaxXmlTransformTransformer : NSObject

#pragma mark Public

/*!
 @brief Clear all parameters set with setParameter.
 */
- (void)clearParameters;

/*!
 @brief Get the error event handler in effect for the transformation.
 Implementations must provide a default error listener.
 @return The current error handler, which should never be null.
 */
- (id<JavaxXmlTransformErrorListener>)getErrorListener;

/*!
 @brief <p>Get a copy of the output properties for the transformation.
 </p>
  
 <p>The properties returned should contain properties set by the user,
  and properties set by the stylesheet, and these properties
  are "defaulted" by default properties specified by 
 <a href="http://www.w3.org/TR/xslt#output">section 16 of the
  XSL Transformations (XSLT) W3C Recommendation</a>.  The properties that
  were specifically set by the user or the stylesheet should be in the base
  Properties list, while the XSLT default properties that were not
  specifically set should be the default Properties list.  Thus,
  getOutputProperties().getProperty(String key) will obtain any
  property in that was set by <code>setOutputProperty</code>,
  <code>setOutputProperties</code>, in the stylesheet, <em>or</em> the default
  properties, while
  getOutputProperties().get(String key) will only retrieve properties
  that were explicitly set by <code>setOutputProperty</code>,
  <code>setOutputProperties</code>, or in the stylesheet.</p>
  
 <p>Note that mutation of the Properties object returned will not
  effect the properties that the transformer contains.</p>
  
 <p>If any of the argument keys are not recognized and are not
  namespace qualified, the property will be ignored and not returned.
  In other words the behavior is not orthogonal with 
 <code>setOutputProperties</code>.</p>
 @return A copy of the set of output properties in effect for
    the next transformation.
 - seealso: javax.xml.transform.OutputKeys
 - seealso: java.util.Properties
 - seealso: <a href="http://www.w3.org/TR/xslt#output">
    XSL Transformations (XSLT) Version 1.0</a>
 */
- (JavaUtilProperties *)getOutputProperties;

/*!
 @brief Get an output property that is in effect for the
  transformer.The property specified may be a property
  that was set with setOutputProperty, or it may be a
  property specified in the stylesheet.
 @param name A non-null String that specifies an output  property name, which may be namespace qualified.
 @return The string value of the output property, or null
  if no property was found.
 @throw IllegalArgumentExceptionIf the property is not supported.
 - seealso: javax.xml.transform.OutputKeys
 */
- (NSString *)getOutputPropertyWithNSString:(NSString *)name;

/*!
 @brief Get a parameter that was explicitly set with setParameter.
 <p>This method does not return a default parameter value, which
  cannot be determined until the node context is evaluated during
  the transformation process.
 @param name of  <code> Object </code>  to get
 @return A parameter that has been set with setParameter.
 */
- (id)getParameterWithNSString:(NSString *)name;

/*!
 @brief Get an object that will be used to resolve URIs used in
  document().
 @return An object that implements the URIResolver interface,
  or null.
 */
- (id<JavaxXmlTransformURIResolver>)getURIResolver;

/*!
 @brief <p>Reset this <code>Transformer</code> to its original configuration.
 </p>
  
 <p><code>Transformer</code> is reset to the same state as when it was created with 
 <code>TransformerFactory.newTransformer()</code>,
  <code>source)</code> or 
 <code>Templates.newTransformer()</code>.
  <code>reset()</code> is designed to allow the reuse of existing <code>Transformer</code>s
  thus saving resources associated with the creation of new <code>Transformer</code>s.</p>
  
 <p>The reset <code>Transformer</code> is not guaranteed to have the same <code>URIResolver</code>
  or <code>ErrorListener</code> <code>Object</code>s, e.g. <code>obj)</code>.
  It is guaranteed to have a functionally equal <code>URIResolver</code>
  and <code>ErrorListener</code>.</p>
 @since 1.5
 */
- (void)reset;

/*!
 @brief Set the error event listener in effect for the transformation.
 @param listener The new error listener.
 @throw IllegalArgumentExceptionif listener is null.
 */
- (void)setErrorListenerWithJavaxXmlTransformErrorListener:(id<JavaxXmlTransformErrorListener>)listener;

/*!
 @brief Set the output properties for the transformation.These
  properties will override properties set in the Templates
  with xsl:output.
 <p>If argument to this function is null, any properties
  previously set are removed, and the value will revert to the value
  defined in the templates object.</p>
  
 <p>Pass a qualified property key name as a two-part string, the namespace
  URI enclosed in curly braces ({}), followed by the local name. If the
  name has a null URL, the String only contain the local name. An
  application can safely check for a non-null URI by testing to see if the
  first character of the name is a '{' character.</p>
  <p>For example, if a URI and local name were obtained from an element
  defined with &lt;xyz:foo
  xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
  then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo".
  Note that no prefix is used.</p>
  An <code>IllegalArgumentException</code> is thrown  if any of the
  argument keys are not recognized and are not namespace qualified.
 @param oformat A set of output properties that will be  used to override any of the same properties in affect
   for the transformation.
 - seealso: javax.xml.transform.OutputKeys
 - seealso: java.util.Properties
 */
- (void)setOutputPropertiesWithJavaUtilProperties:(JavaUtilProperties *)oformat;

/*!
 @brief Set an output property that will be in effect for the
  transformation.
 <p>Pass a qualified property name as a two-part string, the namespace URI
  enclosed in curly braces ({}), followed by the local name. If the
  name has a null URL, the String only contain the local name. An
  application can safely check for a non-null URI by testing to see if the
  first character of the name is a '{' character.</p>
  <p>For example, if a URI and local name were obtained from an element
  defined with &lt;xyz:foo
  xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
  then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo".
  Note that no prefix is used.</p>
  
 <p>The Properties object that was passed to <code>setOutputProperties</code>
  won't be effected by calling this method.</p>
 @param name A non-null String that specifies an output  property name, which may be namespace qualified.
 @param value The non-null string value of the output property.
 @throw IllegalArgumentExceptionIf the property is not supported, and is
  not qualified with a namespace.
 - seealso: javax.xml.transform.OutputKeys
 */
- (void)setOutputPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)value;

/*!
 @brief Add a parameter for the transformation.
 <p>Pass a qualified name as a two-part string, the namespace URI
  enclosed in curly braces ({}), followed by the local name. If the
  name has a null URL, the String only contain the local name. An
  application can safely check for a non-null URI by testing to see if the
  first character of the name is a '{' character.</p>
  <p>For example, if a URI and local name were obtained from an element
  defined with &lt;xyz:foo
  xmlns:xyz="http://xyz.foo.com/yada/baz.html"/&gt;,
  then the qualified name would be "{http://xyz.foo.com/yada/baz.html}foo".
  Note that no prefix is used.</p>
 @param name The name of the parameter, which may begin with a  namespace URI in curly braces ({}).
 @param value The value object.  This can be any valid Java object. It is  up to the processor to provide the proper object coercion or to simply
   pass the object on for use in an extension.
 @throw NullPointerExceptionIf value is null.
 */
- (void)setParameterWithNSString:(NSString *)name
                          withId:(id)value;

/*!
 @brief Set an object that will be used to resolve URIs used in
  document().
 <p>If the resolver argument is null, the URIResolver value will
  be cleared and the transformer will no longer have a resolver.</p>
 @param resolver An object that implements the URIResolver interface,  or null.
 */
- (void)setURIResolverWithJavaxXmlTransformURIResolver:(id<JavaxXmlTransformURIResolver>)resolver;

/*!
 @brief <p>Transform the XML <code>Source</code> to a <code>Result</code>.
 Specific transformation behavior is determined by the settings of the 
 <code>TransformerFactory</code> in effect when the 
 <code>Transformer</code> was instantiated and any modifications made to
  the <code>Transformer</code> instance.</p>
  
 <p>An empty <code>Source</code> is represented as an empty document
  as constructed by <code>javax.xml.parsers.DocumentBuilder</code>.
  The result of transforming an empty <code>Source</code> depends on
  the transformation behavior; it is not always an empty 
 <code>Result</code>.</p>
 @param xmlSource The XML input to transform.
 @param outputTarget The  <code> Result </code>  of transforming the
      <code> xmlSource </code> .
 @throw TransformerExceptionIf an unrecoverable error occurs
    during the course of the transformation.
 */
- (void)transformWithJavaxXmlTransformSource:(id<JavaxXmlTransformSource>)xmlSource
                 withJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)outputTarget;

#pragma mark Protected

/*!
 @brief Default constructor is protected on purpose.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformTransformer)

FOUNDATION_EXPORT void JavaxXmlTransformTransformer_init(JavaxXmlTransformTransformer *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformTransformer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformTransformer")
