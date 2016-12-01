//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/jaxp/XPathImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathJaxpXPathImpl")
#ifdef RESTRICT_OrgApacheXpathJaxpXPathImpl
#define INCLUDE_ALL_OrgApacheXpathJaxpXPathImpl 0
#else
#define INCLUDE_ALL_OrgApacheXpathJaxpXPathImpl 1
#endif
#undef RESTRICT_OrgApacheXpathJaxpXPathImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathJaxpXPathImpl_) && (INCLUDE_ALL_OrgApacheXpathJaxpXPathImpl || defined(INCLUDE_OrgApacheXpathJaxpXPathImpl))
#define OrgApacheXpathJaxpXPathImpl_

#define RESTRICT_JavaxXmlXpathXPath 1
#define INCLUDE_JavaxXmlXpathXPath 1
#include "javax/xml/xpath/XPath.h"

@class JavaxXmlNamespaceQName;
@class OrgXmlSaxInputSource;
@protocol JavaxXmlNamespaceNamespaceContext;
@protocol JavaxXmlXpathXPathExpression;
@protocol JavaxXmlXpathXPathFunctionResolver;
@protocol JavaxXmlXpathXPathVariableResolver;

/*!
 @brief The XPathImpl class provides implementation for the methods defined  in
 javax.xml.xpath.XPath interface.
 This provide simple access to the results
 of an XPath expression.
 @version $Revision: 524814 $
 @author Ramesh Mandava
 */
@interface OrgApacheXpathJaxpXPathImpl : NSObject < JavaxXmlXpathXPath >

#pragma mark Public

/*!
 @brief <p>Compile an XPath expression for later evaluation.
 </p>
 <p>If <code>expression</code> contains any <code>XPathFunction</code>s,
 they must be available via the <code>XPathFunctionResolver</code>.
 An <code>XPathExpressionException</code> will be thrown if the <code>XPathFunction</code>
 cannot be resovled with the <code>XPathFunctionResolver</code>.</p>
 <p>If <code>expression</code> is <code>null</code>, a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @return Compiled XPath expression.
 @throws XPathExpressionException If <code>expression</code> cannot be compiled.
 @throws NullPointerException If <code>expression</code> is <code>null</code>.
 */
- (id<JavaxXmlXpathXPathExpression>)compileWithNSString:(NSString *)expression;

/*!
 @brief <p>Evaluate an XPath expression in the context of the specified <code>InputSource</code>
 and return the result as a <code>String</code>.
 </p>
 <p>This method calls <code>expression,InputSource source,QName returnType)</code> with a
 <code>returnType</code> of <code>XPathConstants.STRING</code>.</p>
 <p>See "Evaluation of XPath Expressions" section of JAXP 1.3 spec
 for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If <code>expression</code> or <code>source</code> is <code>null</code>,
 then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param source The <code>InputSource</code> of the document to evaluate over.
 @return The <code>String</code> that is the result of evaluating the expression and
 converting the result to a <code>String</code>.
 @throws XPathExpressionException If expression cannot be evaluated.
 @throws NullPointerException If <code>expression</code> or <code>source</code> is <code>null</code>.
 */
- (NSString *)evaluateWithNSString:(NSString *)expression
          withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

/*!
 @brief <p>Evaluate an XPath expression in the context of the specified <code>InputSource</code>
 and return the result as the specified type.
 </p>
 <p>This method builds a data model for the <code>InputSource</code> and calls
 <code>expression,Object item,QName returnType)</code> on the resulting document object.</p>
 <p>See "Evaluation of XPath Expressions" section of JAXP 1.3 spec 
 for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>,
 then an <code>IllegalArgumentException</code> is thrown.</p>
 <p>If <code>expression</code>, <code>source</code> or <code>returnType</code> is <code>null</code>,
 then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param source The input source of the document to evaluate over.
 @param returnType The desired return type.
 @return The <code>Object</code> that encapsulates the result of evaluating the expression.
 @throws XPathExpressionException If expression cannot be evaluated.
 @throws IllegalArgumentException If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throws NullPointerException If <code>expression</code>, <code>source</code> or <code>returnType</code>
 is <code>null</code>.
 */
- (id)evaluateWithNSString:(NSString *)expression
  withOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Evaluate an XPath expression in the specified context and return the result as a <code>String</code>.
 </p>
 <p>This method calls <code>expression,Object item,QName returnType)</code> with a <code>returnType</code> of
 <code>XPathConstants.STRING</code>.</p>
 <p>See "Evaluation of XPath Expressions" of JAXP 1.3 spec 
 for context item evaluation,
 variable, function and QName resolution and return type conversion.</p>
 <p>If a <code>null</code> value is provided for
 <code>item</code>, an empty document will be used for the
 context.
 If <code>expression</code> is <code>null</code>, then a <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param item The starting context (node or node list, for example).
 @return The <code>String</code> that is the result of evaluating the expression and
 converting the result to a <code>String</code>.
 @throws XPathExpressionException If <code>expression</code> cannot be evaluated.
 @throws NullPointerException If <code>expression</code> is <code>null</code>.
 */
- (NSString *)evaluateWithNSString:(NSString *)expression
                            withId:(id)item;

/*!
 @brief <p>Evaluate an <code>XPath</code> expression in the specified context and return the result as the specified type.
 </p>
 <p>See "Evaluation of XPath Expressions" section of JAXP 1.3 spec
 for context item evaluation,
 variable, function and <code>QName</code> resolution and return type conversion.</p>
 <p>If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code> (
 <code>NUMBER</code>,
 <code>STRING</code>,
 <code>BOOLEAN</code>,
 <code>NODE</code> or
 <code>NODESET</code>)
 then an <code>IllegalArgumentException</code> is thrown.</p>
 <p>If a <code>null</code> value is provided for
 <code>item</code>, an empty document will be used for the
 context.
 If <code>expression</code> or <code>returnType</code> is <code>null</code>, then a
 <code>NullPointerException</code> is thrown.</p>
 @param expression The XPath expression.
 @param item The starting context (node or node list, for example).
 @param returnType The desired return type.
 @return Result of evaluating an XPath expression as an <code>Object</code> of <code>returnType</code>.
 @throws XPathExpressionException If <code>expression</code> cannot be evaluated.
 @throws IllegalArgumentException If <code>returnType</code> is not one of the types defined in <code>XPathConstants</code>.
 @throws NullPointerException If <code>expression</code> or <code>returnType</code> is <code>null</code>.
 */
- (id)evaluateWithNSString:(NSString *)expression
                    withId:(id)item
withJavaxXmlNamespaceQName:(JavaxXmlNamespaceQName *)returnType;

/*!
 @brief <p>Returns the current namespace context.
 </p>
 @return Current Namespace context
 */
- (id<JavaxXmlNamespaceNamespaceContext>)getNamespaceContext;

/*!
 @brief <p>Returns the current function resolver.
 </p>
 @return Current function resolver
 */
- (id<JavaxXmlXpathXPathFunctionResolver>)getXPathFunctionResolver;

/*!
 @brief <p>Returns the current variable resolver.
 </p>
 @return Current variable resolver
 */
- (id<JavaxXmlXpathXPathVariableResolver>)getXPathVariableResolver;

/*!
 @brief <p>Reset this <code>XPath</code> to its original configuration.
 </p>
 <p><code>XPath</code> is reset to the same state as when it was created with
 <code>XPathFactory.newXPath()</code>.
 <code>reset()</code> is designed to allow the reuse of existing <code>XPath</code>s
 thus saving resources associated with the creation of new <code>XPath</code>s.</p>
 <p>The reset <code>XPath</code> is not guaranteed to have the same
 <code>XPathFunctionResolver</code>, <code>XPathVariableResolver</code>
 or <code>NamespaceContext</code> <code>Object</code>s, e.g. <code>obj)</code>.
 It is guaranteed to have a functionally equal <code>XPathFunctionResolver</code>,
 <code>XPathVariableResolver</code>
 and <code>NamespaceContext</code>.</p>
 */
- (void)reset;

/*!
 @brief <p>Establishes a namespace context.
 </p>
 @param nsContext Namespace context to use
 */
- (void)setNamespaceContextWithJavaxXmlNamespaceNamespaceContext:(id<JavaxXmlNamespaceNamespaceContext>)nsContext;

/*!
 @brief <p>Establishes a function resolver.
 </p>
 @param resolver XPath function resolver
 */
- (void)setXPathFunctionResolverWithJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)resolver;

/*!
 @brief <p>Establishes a variable resolver.
 </p>
 @param resolver Variable Resolver
 */
- (void)setXPathVariableResolverWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)resolver;

#pragma mark Package-Private

- (instancetype)initWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)vr
                    withJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)fr;

- (instancetype)initWithJavaxXmlXpathXPathVariableResolver:(id<JavaxXmlXpathXPathVariableResolver>)vr
                    withJavaxXmlXpathXPathFunctionResolver:(id<JavaxXmlXpathXPathFunctionResolver>)fr
                                               withBoolean:(jboolean)featureSecureProcessing;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathJaxpXPathImpl)

FOUNDATION_EXPORT void OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_(OrgApacheXpathJaxpXPathImpl *self, id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr);

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathImpl *new_OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_(id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathImpl *create_OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_(id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr);

FOUNDATION_EXPORT void OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_withBoolean_(OrgApacheXpathJaxpXPathImpl *self, id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr, jboolean featureSecureProcessing);

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathImpl *new_OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_withBoolean_(id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr, jboolean featureSecureProcessing) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathJaxpXPathImpl *create_OrgApacheXpathJaxpXPathImpl_initWithJavaxXmlXpathXPathVariableResolver_withJavaxXmlXpathXPathFunctionResolver_withBoolean_(id<JavaxXmlXpathXPathVariableResolver> vr, id<JavaxXmlXpathXPathFunctionResolver> fr, jboolean featureSecureProcessing);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathJaxpXPathImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathJaxpXPathImpl")
