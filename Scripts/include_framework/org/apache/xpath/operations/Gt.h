//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/operations/Gt.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathOperationsGt")
#ifdef RESTRICT_OrgApacheXpathOperationsGt
#define INCLUDE_ALL_OrgApacheXpathOperationsGt 0
#else
#define INCLUDE_ALL_OrgApacheXpathOperationsGt 1
#endif
#undef RESTRICT_OrgApacheXpathOperationsGt

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathOperationsGt_) && (INCLUDE_ALL_OrgApacheXpathOperationsGt || defined(INCLUDE_OrgApacheXpathOperationsGt))
#define OrgApacheXpathOperationsGt_

#define RESTRICT_OrgApacheXpathOperationsOperation 1
#define INCLUDE_OrgApacheXpathOperationsOperation 1
#include "../../../../org/apache/xpath/operations/Operation.h"

@class OrgApacheXpathObjectsXObject;

/*!
 @brief The '>' operation expression executer.
 */
@interface OrgApacheXpathOperationsGt : OrgApacheXpathOperationsOperation

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Apply the operation to two operands, and return the result.
 @param left non-null reference to the evaluated left operand.
 @param right non-null reference to the evaluated right operand.
 @return non-null reference to the XObject that represents the result of the operation.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)operateWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)left
                                         withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)right;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathOperationsGt)

inline jlong OrgApacheXpathOperationsGt_get_serialVersionUID();
#define OrgApacheXpathOperationsGt_serialVersionUID 8927078751014375950LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathOperationsGt, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathOperationsGt_init(OrgApacheXpathOperationsGt *self);

FOUNDATION_EXPORT OrgApacheXpathOperationsGt *new_OrgApacheXpathOperationsGt_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathOperationsGt *create_OrgApacheXpathOperationsGt_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathOperationsGt)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathOperationsGt")
