//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/IncrementalSAXSource.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource")
#ifdef RESTRICT_OrgApacheXmlDtmRefIncrementalSAXSource
#define INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefIncrementalSAXSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefIncrementalSAXSource_) && (INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource || defined(INCLUDE_OrgApacheXmlDtmRefIncrementalSAXSource))
#define OrgApacheXmlDtmRefIncrementalSAXSource_

@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxExtLexicalHandler;

/*!
 @brief <p>IncrementalSAXSource is an API that delivers a small number of
 SAX events each time a request is made from a "controller"
 coroutine.
 See IncrementalSAXFilter and IncrementalSAXFilter_Xerces
 for examples.
 Note that interaction is via the deliverMoreNodes
 method, and therefore coroutine support is not exposed
 here.</p>
 */
@protocol OrgApacheXmlDtmRefIncrementalSAXSource < JavaObject >

/*!
 @brief Register a SAX-style content handler for us to output to
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Register a SAX-style lexical handler for us to output to
 */
- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)handler;

/*!
 @brief Register a SAX-style DTD handler for us to output to
 */
- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

/*!
 @brief deliverMoreNodes() is a simple API which tells the thread in which the
 IncrementalSAXSource is running to deliver more events (true),
 or stop delivering events and close out its input (false).
 This is intended to be called from one of our partner coroutines,
 and serves to encapsulate the coroutine communication protocol.
 @param parsemore If true, tells the incremental SAX stream to deliver
 another chunk of events. If false, finishes out the stream.
 @return Boolean.TRUE if the IncrementalSAXSource believes more data
 may be available for further parsing. Boolean.FALSE if parsing
 ran to completion, or was ended by deliverMoreNodes(false).
 */
- (id)deliverMoreNodesWithBoolean:(jboolean)parsemore;

/*!
 @brief Launch an XMLReader's parsing operation, feeding events to this
 IncrementalSAXSource.
 In some implementations, this may launch a
 thread which runs the previously supplied XMLReader's parse() operation.
 In others, it may do other forms of initialization.
 @throws SAXException is parse thread is already in progress
 or parsing can not be started.
 */
- (void)startParseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefIncrementalSAXSource)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefIncrementalSAXSource)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource")
