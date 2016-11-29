//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ElemContext.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerElemContext")
#ifdef RESTRICT_OrgApacheXmlSerializerElemContext
#define INCLUDE_ALL_OrgApacheXmlSerializerElemContext 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerElemContext 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerElemContext

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerElemContext_) && (INCLUDE_ALL_OrgApacheXmlSerializerElemContext || defined(INCLUDE_OrgApacheXmlSerializerElemContext))
#define OrgApacheXmlSerializerElemContext_

@class OrgApacheXmlSerializerElemDesc;

/*!
 @brief This class is a stack frame that consists of 
 information about the element currently being processed 
 by a serializer.
 Consider this example:
 @code

   <A>
     <B1>
     </B1>
     <B2>
     </B2>
   <A>
  
@endcode 
 A stack frame will be pushed for "A" at depth 1, 
 then another one for "B1" at depth 2.
 Then "B1" stackframe is popped.  When the stack frame for "B2" is 
 pushed, this implementation re-uses the old stack fram object used
 by "B1" to be efficient at not creating too many of these object.
 This is by no means a public class, and neither are its fields or methods,
 they are all helper fields for a serializer.
 The purpose of this class is to be more consistent with pushing information
 when a new element is being serialized and more quickly restoring the old
 information about the parent element with a simple pop() when the
 child element is done.  Previously there was some redundant and error-prone
 calculations going on to retore information.
  internal
 */
@interface OrgApacheXmlSerializerElemContext : NSObject {
 @public
  /*!
   @brief The nesting depth of the element inside other elements.
   */
  jint m_currentElemDepth_;
  /*!
   @brief HTML field, the element description of the HTML element
   */
  OrgApacheXmlSerializerElemDesc *m_elementDesc_;
  /*!
   @brief The local name of the element.
   */
  NSString *m_elementLocalName_;
  /*!
   @brief The fully qualified name of the element (with prefix, if any).
   */
  NSString *m_elementName_;
  /*!
   @brief The URI of the element.
   If this value is null it means that the URI is not yet determined
 for the element. Valid values are the empty string "", meaning
 that it is in no namespace, or a string of non-zero length.
   */
  NSString *m_elementURI_;
  /*!
   @brief If the element is in the cdata-section-names list
 then the value is true.
   If it is true the text children of the element
 should be output in CDATA section blocks. 
   */
  jboolean m_isCdataSection_;
  /*!
   @brief True if the current element has output escaping disabled.
   This is true for SCRIPT and STYLE elements. 
   */
  jboolean m_isRaw_;
  /*!
   @brief The previous element "stack frame".
   */
  OrgApacheXmlSerializerElemContext *m_prev_;
  /*!
   @brief Set to true when a start tag is started, or open, but not all the
 attributes or namespace information is yet collected.
   */
  jboolean m_startTagOpen_;
}

#pragma mark Package-Private

/*!
 @brief Constructor to create the root of the element contexts.
 */
- (instancetype)init;

/*!
 @brief Pop the current "stack frame".
 @return Returns the parent "stack frame" of the one popped.
 */
- (OrgApacheXmlSerializerElemContext *)pop;

/*!
 @brief This method pushes an element "stack frame" 
 but with no initialization of values in that frame.
 This method is used for optimization purposes, like when pushing
 a stack frame for an HTML "IMG" tag which has no children and
 the stack frame will almost immediately be popped.
 */
- (OrgApacheXmlSerializerElemContext *)push;

/*!
 @brief Push an element context on the stack.
 This context keeps track of
 information gathered about the element.
 @param uri The URI for the namespace for the element name, 
 can be null if it is not yet known.
 @param localName The local name of the element (no prefix),  
 can be null.
 @param qName The qualified name (with prefix, if any) 
 of the element, this parameter is required.
 */
- (OrgApacheXmlSerializerElemContext *)pushWithNSString:(NSString *)uri
                                           withNSString:(NSString *)localName
                                           withNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerElemContext)

J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerElemContext, m_elementDesc_, OrgApacheXmlSerializerElemDesc *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerElemContext, m_elementLocalName_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerElemContext, m_elementName_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerElemContext, m_elementURI_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXmlSerializerElemContext, m_prev_, OrgApacheXmlSerializerElemContext *)

FOUNDATION_EXPORT void OrgApacheXmlSerializerElemContext_init(OrgApacheXmlSerializerElemContext *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerElemContext *new_OrgApacheXmlSerializerElemContext_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerElemContext *create_OrgApacheXmlSerializerElemContext_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerElemContext)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerElemContext")
