//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/luni/src/main/java/javax/xml/transform/ErrorListener.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformErrorListener")
#ifdef RESTRICT_JavaxXmlTransformErrorListener
#define INCLUDE_ALL_JavaxXmlTransformErrorListener 0
#else
#define INCLUDE_ALL_JavaxXmlTransformErrorListener 1
#endif
#undef RESTRICT_JavaxXmlTransformErrorListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformErrorListener_) && (INCLUDE_ALL_JavaxXmlTransformErrorListener || defined(INCLUDE_JavaxXmlTransformErrorListener))
#define JavaxXmlTransformErrorListener_

@class JavaxXmlTransformTransformerException;

/*!
 @brief <p>To provide customized error handling, implement this interface and
  use the <code>setErrorListener</code> method to register an instance of the
  implementation with the <code>javax.xml.transform.Transformer</code>.
 The 
 <code>Transformer</code> then reports all errors and warnings through this
  interface.</p>
  
 <p>If an application does <em>not</em> register its own custom 
 <code>ErrorListener</code>, the default <code>ErrorListener</code>
  is used which reports all warnings and errors to <code>System.err</code>
  and does not throw any <code>Exception</code>s.
  Applications are <em>strongly</em> encouraged to register and use 
 <code>ErrorListener</code>s that insure proper behavior for warnings and
  errors.</p>
  
 <p>For transformation errors, a <code>Transformer</code> must use this
  interface instead of throwing an <code>Exception</code>: it is up to the
  application to decide whether to throw an <code>Exception</code> for
  different types of errors and warnings.  Note however that the 
 <code>Transformer</code> is not required to continue with the transformation
  after a call to <code>exception)</code>.</p>
  
 <p><code>Transformer</code>s may use this mechanism to report XML parsing
  errors as well as transformation errors.</p>
 */
@protocol JavaxXmlTransformErrorListener < JavaObject >

/*!
 @brief Receive notification of a warning.
 <p><code>javax.xml.transform.Transformer</code> can use this method to report
  conditions that are not errors or fatal errors.  The default behavior
  is to take no action.</p>
  
 <p>After invoking this method, the Transformer must continue with
  the transformation. It should still be possible for the
  application to process the document through to the end.</p>
 @param exception The warning information encapsulated in a                   transformer exception.
 @throw javax.xml.transform.TransformerExceptionif the application
  chooses to discontinue the transformation.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)warningWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

/*!
 @brief Receive notification of a recoverable error.
 <p>The transformer must continue to try and provide normal transformation
  after invoking this method.  It should still be possible for the
  application to process the document through to the end if no other errors
  are encountered.</p>
 @param exception The error information encapsulated in a                   transformer exception.
 @throw javax.xml.transform.TransformerExceptionif the application
  chooses to discontinue the transformation.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)errorWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

/*!
 @brief <p>Receive notification of a non-recoverable error.
 </p>
  
 <p>The <code>Transformer</code> must continue to try and provide normal
  transformation after invoking this method.  It should still be possible for the
  application to process the document through to the end if no other errors
  are encountered, but there is no guarantee that the output will be
  useable.</p>
 @param exception The error information encapsulated in a     
  <code> TransformerException </code> .
 @throw javax.xml.transform.TransformerExceptionif the application
  chooses to discontinue the transformation.
 - seealso: javax.xml.transform.TransformerException
 */
- (void)fatalErrorWithJavaxXmlTransformTransformerException:(JavaxXmlTransformTransformerException *)exception;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformErrorListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformErrorListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformErrorListener")
