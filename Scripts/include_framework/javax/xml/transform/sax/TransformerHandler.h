//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/sax/TransformerHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformSaxTransformerHandler")
#ifdef RESTRICT_JavaxXmlTransformSaxTransformerHandler
#define INCLUDE_ALL_JavaxXmlTransformSaxTransformerHandler 0
#else
#define INCLUDE_ALL_JavaxXmlTransformSaxTransformerHandler 1
#endif
#undef RESTRICT_JavaxXmlTransformSaxTransformerHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformSaxTransformerHandler_) && (INCLUDE_ALL_JavaxXmlTransformSaxTransformerHandler || defined(INCLUDE_JavaxXmlTransformSaxTransformerHandler))
#define JavaxXmlTransformSaxTransformerHandler_

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "../../../../org/xml/sax/ContentHandler.h"

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "../../../../org/xml/sax/ext/LexicalHandler.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "../../../../org/xml/sax/DTDHandler.h"

@class JavaxXmlTransformTransformer;
@protocol JavaxXmlTransformResult;

/*!
 @brief A TransformerHandler
  listens for SAX ContentHandler parse events and transforms
  them to a Result.
 */
@protocol JavaxXmlTransformSaxTransformerHandler < OrgXmlSaxContentHandler, OrgXmlSaxExtLexicalHandler, OrgXmlSaxDTDHandler, JavaObject >

/*!
 @brief <p>Set  the <code>Result</code> associated with this 
 <code>TransformerHandler</code> to be used for the transformation.
 </p>
 @param result A  <code> Result </code>  instance, should not be
      <code> null </code> .
 @throw IllegalArgumentExceptionif result is invalid for some reason.
 */
- (void)setResultWithJavaxXmlTransformResult:(id<JavaxXmlTransformResult>)result;

/*!
 @brief Set the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @param systemID Base URI for the source tree.
 */
- (void)setSystemIdWithNSString:(NSString *)systemID;

/*!
 @brief Get the base ID (URI or system ID) from where relative
  URLs will be resolved.
 @return The systemID that was set with <code>setSystemId</code>.
 */
- (NSString *)getSystemId;

/*!
 @brief <p>Get the <code>Transformer</code> associated with this handler, which
  is needed in order to set parameters and output properties.
 </p>
 @return <code>Transformer</code> associated with this
    <code>TransformerHandler</code>.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSaxTransformerHandler)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSaxTransformerHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformSaxTransformerHandler")
