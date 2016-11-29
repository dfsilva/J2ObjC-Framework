//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/AttributeIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator")
#ifdef RESTRICT_OrgApacheXpathAxesAttributeIterator
#define INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesAttributeIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesAttributeIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator || defined(INCLUDE_OrgApacheXpathAxesAttributeIterator))
#define OrgApacheXpathAxesAttributeIterator_

#define RESTRICT_OrgApacheXpathAxesChildTestIterator 1
#define INCLUDE_OrgApacheXpathAxesChildTestIterator 1
#include "org/apache/xpath/axes/ChildTestIterator.h"

@class OrgApacheXpathCompilerCompiler;

/*!
 @brief This class implements an optimized iterator for
 attribute axes patterns.
 - seealso: org.apache.xpath.axes#ChildTestIterator
  advanced
 */
@interface OrgApacheXpathAxesAttributeIterator : OrgApacheXpathAxesChildTestIterator

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

#pragma mark Protected

/*!
 @brief Get the next node via getFirstAttribute && getNextAttribute.
 */
- (jint)getNextNode;

#pragma mark Package-Private

/*!
 @brief Create a AttributeIterator object.
 @param compiler A reference to the Compiler that contains the op map.
 @param opPos The position within the op map, which contains the
 location path expression for this itterator.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesAttributeIterator)

inline jlong OrgApacheXpathAxesAttributeIterator_get_serialVersionUID();
#define OrgApacheXpathAxesAttributeIterator_serialVersionUID -8417986700712229686LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesAttributeIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesAttributeIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT OrgApacheXpathAxesAttributeIterator *new_OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathAxesAttributeIterator *create_OrgApacheXpathAxesAttributeIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesAttributeIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesAttributeIterator")
