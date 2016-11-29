//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/And.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsAnd")
#ifdef RESTRICT_OrgApacheXpathOperationsAnd
#define INCLUDE_ALL_OrgApacheXpathOperationsAnd 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsAnd 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsAnd

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsAnd_) && (INCLUDE_ALL_OrgApacheXpathOperationsAnd || defined(INCLUDE_OrgApacheXpathOperationsAnd))
#define OrgApacheXpathOperationsAnd_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "../../../../org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief The 'and' operation expression executer.
 */
@interface OrgApacheXpathOperationsAnd : OrgApacheXpathOperationsOperation

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Evaluate this operation directly to a boolean.
 @param xctxt The runtime execution context.
 @return The result of the operation as a boolean.
 @throws javax.xml.transform.TransformerException
 */
- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief AND two expressions and return the boolean result.
 Override
 superclass method for optimization purposes.
 @param xctxt The runtime execution context.
 @return <code>org.apache.xpath.objects.XBoolean.S_TRUE</code> or 
 <code>org.apache.xpath.objects.XBoolean.S_FALSE</code>.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsAnd)

inline jlong OrgApacheXpathOperationsAnd_get_serialVersionUID();
#define OrgApacheXpathOperationsAnd_serialVersionUID 392330077126534022LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsAnd, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsAnd_init(OrgApacheXpathOperationsAnd *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsAnd *new_OrgApacheXpathOperationsAnd_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsAnd *create_OrgApacheXpathOperationsAnd_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsAnd)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsAnd")
