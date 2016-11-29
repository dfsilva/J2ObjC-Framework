//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FunctionDef1Arg.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionDef1Arg")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionDef1Arg 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionDef1Arg 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunctionDef1Arg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFunctionDef1Arg_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionDef1Arg || defined(INCLUDE_OrgApacheXpathFunctionsFunctionDef1Arg))
#define OrgApacheXpathFunctionsFunctionDef1Arg_

#define RESTRICT_OrgApacheXpathFunctionsFunctionOneArg 1
#define INCLUDE_OrgApacheXpathFunctionsFunctionOneArg 1
#include "../../../../org/apache/xpath/functions/FunctionOneArg.h"

@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Base class for functions that accept one argument that can be defaulted if
 not specified.
  advanced
 */
@interface OrgApacheXpathFunctionsFunctionDef1Arg : OrgApacheXpathFunctionsFunctionOneArg

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Tell if the expression is a nodeset expression.
 @return true if the expression can be represented as a nodeset.
 */
- (jboolean)Arg0IsNodesetExpr;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside
 the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throws WrongNumberArgsException if the number of arguments is not 0 or 1.
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

#pragma mark Protected

/*!
 @brief Execute the first argument expression that is expected to return a
 nodeset.
 If the argument is null, then return the current context node.
 @param xctxt Runtime XPath context.
 @return The first node of the executed nodeset, or the current context
 node if the first argument is null.
 @throws javax.xml.transform.TransformerException if an error occurs while
 executing the argument expression.
 */
- (jint)getArg0AsNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute the first argument expression that is expected to return a
 number.
 If the argument is null, then get the number value from the
 current context node.
 @param xctxt Runtime XPath context.
 @return The number value of the first argument, or the number value of the
 current context node if the first argument is null.
 @throws javax.xml.transform.TransformerException if an error occurs while
 executing the argument expression.
 */
- (jdouble)getArg0AsNumberWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute the first argument expression that is expected to return a
 string.
 If the argument is null, then get the string value from the
 current context node.
 @param xctxt Runtime XPath context.
 @return The string value of the first argument, or the string value of the
 current context node if the first argument is null.
 @throws javax.xml.transform.TransformerException if an error occurs while
 executing the argument expression.
 */
- (id<OrgApacheXmlUtilsXMLString>)getArg0AsStringWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
 message for this function object.
 @throws WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionDef1Arg)

inline jlong OrgApacheXpathFunctionsFunctionDef1Arg_get_serialVersionUID();
#define OrgApacheXpathFunctionsFunctionDef1Arg_serialVersionUID 2325189412814149264LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunctionDef1Arg, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionDef1Arg_init(OrgApacheXpathFunctionsFunctionDef1Arg *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionDef1Arg *new_OrgApacheXpathFunctionsFunctionDef1Arg_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionDef1Arg *create_OrgApacheXpathFunctionsFunctionDef1Arg_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionDef1Arg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionDef1Arg")
