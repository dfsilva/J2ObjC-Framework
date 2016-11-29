//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/patterns/ContextMatchStepPattern.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathPatternsContextMatchStepPattern")
#ifdef RESTRICT_OrgApacheXpathPatternsContextMatchStepPattern
#define INCLUDE_ALL_OrgApacheXpathPatternsContextMatchStepPattern 0
#else
#define INCLUDE_ALL_OrgApacheXpathPatternsContextMatchStepPattern 1
#endif
#undef RESTRICT_OrgApacheXpathPatternsContextMatchStepPattern

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathPatternsContextMatchStepPattern_) && (INCLUDE_ALL_OrgApacheXpathPatternsContextMatchStepPattern || defined(INCLUDE_OrgApacheXpathPatternsContextMatchStepPattern))
#define OrgApacheXpathPatternsContextMatchStepPattern_

#define RESTRICT_OrgApacheXpathPatternsStepPattern 1
#define INCLUDE_OrgApacheXpathPatternsStepPattern 1
#include "../../../../org/apache/xpath/patterns/StepPattern.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Special context node pattern matcher.
 */
@interface OrgApacheXpathPatternsContextMatchStepPattern : OrgApacheXpathPatternsStepPattern

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Construct a ContextMatchStepPattern.
 */
- (instancetype)initWithInt:(jint)axis
                    withInt:(jint)paxis;

/*!
 @brief Execute this pattern step, including predicates.
 @param xctxt XPath runtime context.
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
 <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute the match pattern step relative to another step.
 @param xctxt The XPath runtime context.
 NEEDSDOC @@param prevStep
 @return <code>org.apache.xpath.patterns.NodeTest.SCORE_NODETEST</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_NONE</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_NSWILD</code>,
 <code>org.apache.xpath.patterns.NodeTest.SCORE_QNAME</code>, or
 <code>org.apache.xpath.patterns.NodeTest.SCORE_OTHER</code>.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeRelativePathPatternWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                     withOrgApacheXpathPatternsStepPattern:(OrgApacheXpathPatternsStepPattern *)prevStep;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathPatternsContextMatchStepPattern)

inline jlong OrgApacheXpathPatternsContextMatchStepPattern_get_serialVersionUID();
#define OrgApacheXpathPatternsContextMatchStepPattern_serialVersionUID -1888092779313211942LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathPatternsContextMatchStepPattern, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathPatternsContextMatchStepPattern_initWithInt_withInt_(OrgApacheXpathPatternsContextMatchStepPattern *self, jint axis, jint paxis);

FOUNDATION_EXPORT OrgApacheXpathPatternsContextMatchStepPattern *new_OrgApacheXpathPatternsContextMatchStepPattern_initWithInt_withInt_(jint axis, jint paxis) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathPatternsContextMatchStepPattern *create_OrgApacheXpathPatternsContextMatchStepPattern_initWithInt_withInt_(jint axis, jint paxis);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathPatternsContextMatchStepPattern)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathPatternsContextMatchStepPattern")