//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemExtensionCall.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemExtensionCall
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemExtensionCall

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemExtensionCall_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall || defined(INCLUDE_OrgApacheXalanTemplatesElemExtensionCall))
#define OrgApacheXalanTemplatesElemExtensionCall_

#define RESTRICT_OrgApacheXalanTemplatesElemLiteralResult 1
#define INCLUDE_OrgApacheXalanTemplatesElemLiteralResult 1
#include "../../../../org/apache/xalan/templates/ElemLiteralResult.h"

@class OrgApacheXalanTemplatesElemExtensionDecl;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@protocol OrgW3cDomNode;

/*!
 @brief Implement an extension element.
 - seealso: <a href="http://www.w3.org/TR/xslt#extension-element">extension-element in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemExtensionCall : OrgApacheXalanTemplatesElemLiteralResult {
 @public
  /*!
   @brief The Namespace URI for this extension call element.
             
   */
  NSString *m_extns_;
  /*!
   @brief Language used by extension.
             
   */
  NSString *m_lang_;
  /*!
   @brief URL pointing to extension.
             
   */
  NSString *m_srcURL_;
  /*!
   @brief Source for script.
             
   */
  NSString *m_scriptSrc_;
  /*!
   @brief Declaration for Extension element.
             
   */
  OrgApacheXalanTemplatesElemExtensionDecl *m_decl_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Execute an extension.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Return the value of the attribute interpreted as an Attribute
 Value Template (in other words, you can use curly expressions
 such as href="http://{website}".
 @param rawName Raw name of the attribute to get
 @param sourceNode non-null reference to the <a href="http://www.w3.org/TR/xslt#dt-current-node">current source node</a>.
 @param transformer non-null reference to the the current transform-time state.
 @return the value of the attribute
 @throws TransformerException
 */
- (NSString *)getAttributeWithNSString:(NSString *)rawName
                     withOrgW3cDomNode:(id<OrgW3cDomNode>)sourceNode
withOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

#pragma mark Protected

/*!
 @brief Accept a visitor and call the appropriate method 
 for this class.
 @param visitor The visitor whose appropriate method will be called.
 @return true if the children of the object should be visited.
 */
- (jboolean)acceptWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemExtensionCall)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_extns_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_lang_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_srcURL_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_scriptSrc_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemExtensionCall, m_decl_, OrgApacheXalanTemplatesElemExtensionDecl *)

inline jlong OrgApacheXalanTemplatesElemExtensionCall_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemExtensionCall_serialVersionUID 3171339708500216920LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemExtensionCall, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemExtensionCall_init(OrgApacheXalanTemplatesElemExtensionCall *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExtensionCall *new_OrgApacheXalanTemplatesElemExtensionCall_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExtensionCall *create_OrgApacheXalanTemplatesElemExtensionCall_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemExtensionCall)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExtensionCall")
