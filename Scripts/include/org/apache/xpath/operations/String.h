//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/String.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsString")
#ifdef RESTRICT_OrgApacheXpathOperationsString
#define INCLUDE_ALL_OrgApacheXpathOperationsString 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsString 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsString

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsString_) && (INCLUDE_ALL_OrgApacheXpathOperationsString || defined(INCLUDE_OrgApacheXpathOperationsString))
#define OrgApacheXpathOperationsString_

#define RESTRICT_OrgApacheXpathOperationsUnaryOperation 1
#define INCLUDE_OrgApacheXpathOperationsUnaryOperation 1
#include "org/apache/xpath/operations/UnaryOperation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The 'string()' operation expression executer.
 */
@interface OrgApacheXpathOperationsString : OrgApacheXpathOperationsUnaryOperation

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsString)

inline jlong OrgApacheXpathOperationsString_get_serialVersionUID();
#define OrgApacheXpathOperationsString_serialVersionUID 2973374377453022888LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsString, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsString_init(OrgApacheXpathOperationsString *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsString *new_OrgApacheXpathOperationsString_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsString *create_OrgApacheXpathOperationsString_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsString)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsString")
