//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/IncrementalSAXSource_Filter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter")
#ifdef RESTRICT_OrgApacheXmlDtmRefIncrementalSAXSource_Filter
#define INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefIncrementalSAXSource_Filter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefIncrementalSAXSource_Filter_) && (INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter || defined(INCLUDE_OrgApacheXmlDtmRefIncrementalSAXSource_Filter))
#define OrgApacheXmlDtmRefIncrementalSAXSource_Filter_

#define RESTRICT_OrgApacheXmlDtmRefIncrementalSAXSource 1
#define INCLUDE_OrgApacheXmlDtmRefIncrementalSAXSource 1
#include "org/apache/xml/dtm/ref/IncrementalSAXSource.h"

#define RESTRICT_OrgXmlSaxContentHandler 1
#define INCLUDE_OrgXmlSaxContentHandler 1
#include "org/xml/sax/ContentHandler.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "org/xml/sax/DTDHandler.h"

#define RESTRICT_OrgXmlSaxExtLexicalHandler 1
#define INCLUDE_OrgXmlSaxExtLexicalHandler 1
#include "org/xml/sax/ext/LexicalHandler.h"

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "org/xml/sax/ErrorHandler.h"

#define RESTRICT_JavaLangRunnable 1
#define INCLUDE_JavaLangRunnable 1
#include "java/lang/Runnable.h"

@class IOSCharArray;
@class OrgApacheXmlDtmRefCoroutineManager;
@class OrgXmlSaxInputSource;
@class OrgXmlSaxSAXParseException;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxLocator;
@protocol OrgXmlSaxXMLReader;

/*!
 @brief <p>IncrementalSAXSource_Filter implements IncrementalSAXSource, using a
 standard SAX2 event source as its input and parcelling out those
 events gradually in reponse to deliverMoreNodes() requests.
 Output from the
 filter will be passed along to a SAX handler registered as our
 listener, but those callbacks will pass through a counting stage
 which periodically yields control back to the controller coroutine.
 </p>
 <p>%REVIEW%: This filter is not currenly intended to be reusable
 for parsing additional streams/documents. We may want to consider
 making it resettable at some point in the future. But it's a 
 small object, so that'd be mostly a convenience issue; the cost
 of allocating each time is trivial compared to the cost of processing
 any nontrival stream.</p>
 <p>For a brief usage example, see the unit-test main() method.</p>
 <p>This is a simplification of the old CoroutineSAXParser, focusing
 specifically on filtering. The resulting controller protocol is _far_
 simpler and less error-prone; the only controller operation is deliverMoreNodes(),
 and the only requirement is that deliverMoreNodes(false) be called if you want to
 discard the rest of the stream and the previous deliverMoreNodes() didn't return
 false.
 */
@interface OrgApacheXmlDtmRefIncrementalSAXSource_Filter : NSObject < OrgApacheXmlDtmRefIncrementalSAXSource, OrgXmlSaxContentHandler, OrgXmlSaxDTDHandler, OrgXmlSaxExtLexicalHandler, OrgXmlSaxErrorHandler, JavaLangRunnable > {
 @public
  jboolean DEBUG__;
}

#pragma mark Public

- (instancetype)init;

/*!
 @brief Create a IncrementalSAXSource_Filter which is not yet bound to a specific
 SAX event source.
 */
- (instancetype)initWithOrgApacheXmlDtmRefCoroutineManager:(OrgApacheXmlDtmRefCoroutineManager *)co
                                                   withInt:(jint)controllerCoroutineID;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)start
                        withInt:(jint)length;

- (void)commentWithCharArray:(IOSCharArray *)ch
                     withInt:(jint)start
                     withInt:(jint)length;

+ (id<OrgApacheXmlDtmRefIncrementalSAXSource>)createIncrementalSAXSourceWithOrgApacheXmlDtmRefCoroutineManager:(OrgApacheXmlDtmRefCoroutineManager *)co
                                                                                                       withInt:(jint)controllerCoroutineID;

/*!
 @brief deliverMoreNodes() is a simple API which tells the coroutine
 parser that we need more nodes.
 This is intended to be called
 from one of our partner routines, and serves to encapsulate the
 details of how incremental parsing has been achieved.
 @param parsemore If true, tells the incremental filter to generate
 another chunk of output. If false, tells the filter that we're
 satisfied and it can terminate parsing of this document.
 @return Boolean.TRUE if there may be more events available by invoking
 deliverMoreNodes() again. Boolean.FALSE if parsing has run to completion (or been
 terminated by deliverMoreNodes(false). Or an exception object if something
 malfunctioned. %REVIEW% We _could_ actually throw the exception, but
 that would require runinng deliverMoreNodes() in a try/catch... and for many
 applications, exception will be simply be treated as "not TRUE" in
 any case.
 */
- (id)deliverMoreNodesWithBoolean:(jboolean)parsemore;

- (void)endCDATA;

- (void)endDocument;

- (void)endDTD;

- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

- (void)endEntityWithNSString:(NSString *)name;

- (void)endPrefixMappingWithNSString:(NSString *)prefix;

- (void)errorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

- (void)fatalErrorWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

- (jint)getControllerCoroutineID;

/*!
 @return the CoroutineManager this CoroutineFilter object is bound to.
 If you're using the do...() methods, applications should only
 need to talk to the CoroutineManager once, to obtain the
 application's Coroutine ID.
 */
- (OrgApacheXmlDtmRefCoroutineManager *)getCoroutineManager;

- (jint)getSourceCoroutineID;

- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)ch
                                 withInt:(jint)start
                                 withInt:(jint)length;

- (void)init__WithOrgApacheXmlDtmRefCoroutineManager:(OrgApacheXmlDtmRefCoroutineManager *)co
                                             withInt:(jint)controllerCoroutineID
                                             withInt:(jint)sourceCoroutineID OBJC_METHOD_FAMILY_NONE;

- (void)notationDeclWithNSString:(NSString *)a
                    withNSString:(NSString *)b
                    withNSString:(NSString *)c;

- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

- (void)run;

- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

- (void)setErrHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

- (void)setLexicalHandlerWithOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)handler;

- (void)setReturnFrequencyWithInt:(jint)events;

/*!
 @brief Bind our input streams to an XMLReader.
 Just a convenience routine; obviously you can explicitly register
 this as a listener with the same effect.
 */
- (void)setXMLReaderWithOrgXmlSaxXMLReader:(id<OrgXmlSaxXMLReader>)eventsource;

- (void)skippedEntityWithNSString:(NSString *)name;

- (void)startCDATA;

- (void)startDocument;

- (void)startDTDWithNSString:(NSString *)name
                withNSString:(NSString *)publicId
                withNSString:(NSString *)systemId;

- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

- (void)startEntityWithNSString:(NSString *)name;

/*!
 @brief Launch a thread that will run an XMLReader's parse() operation within
 a thread, feeding events to this IncrementalSAXSource_Filter.
 Mostly a convenience
 routine, but has the advantage that -- since we invoked parse() --
 we can halt parsing quickly via a StopException rather than waiting
 for the SAX stream to end by itself.
 @throws SAXException is parse thread is already in progress
 or parsing can not be started.
 */
- (void)startParseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

- (void)unparsedEntityDeclWithNSString:(NSString *)a
                          withNSString:(NSString *)b
                          withNSString:(NSString *)c
                          withNSString:(NSString *)d;

- (void)warningWithOrgXmlSaxSAXParseException:(OrgXmlSaxSAXParseException *)exception;

#pragma mark Protected

/*!
 @brief <p>In the SAX delegation code, I've inlined the count-down in
 the hope of encouraging compilers to deliver better
 performance.
 However, if we subclass (eg to directly connect the
 output to a DTM builder), that would require calling super in
 order to run that logic... which seems inelegant.  Hence this
 routine for the convenience of subclasses: every [frequency]
 invocations, issue a co_yield.</p>
 @param moreExepected Should always be true unless this is being called
 at the end of endDocument() handling.
 */
- (void)count_and_yieldWithBoolean:(jboolean)moreExpected;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefIncrementalSAXSource_Filter)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefIncrementalSAXSource_Filter_init(OrgApacheXmlDtmRefIncrementalSAXSource_Filter *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter *new_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter *create_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_init();

FOUNDATION_EXPORT void OrgApacheXmlDtmRefIncrementalSAXSource_Filter_initWithOrgApacheXmlDtmRefCoroutineManager_withInt_(OrgApacheXmlDtmRefIncrementalSAXSource_Filter *self, OrgApacheXmlDtmRefCoroutineManager *co, jint controllerCoroutineID);

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter *new_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_initWithOrgApacheXmlDtmRefCoroutineManager_withInt_(OrgApacheXmlDtmRefCoroutineManager *co, jint controllerCoroutineID) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter *create_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_initWithOrgApacheXmlDtmRefCoroutineManager_withInt_(OrgApacheXmlDtmRefCoroutineManager *co, jint controllerCoroutineID);

FOUNDATION_EXPORT id<OrgApacheXmlDtmRefIncrementalSAXSource> OrgApacheXmlDtmRefIncrementalSAXSource_Filter_createIncrementalSAXSourceWithOrgApacheXmlDtmRefCoroutineManager_withInt_(OrgApacheXmlDtmRefCoroutineManager *co, jint controllerCoroutineID);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefIncrementalSAXSource_Filter)

#endif

#if !defined (OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_) && (INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter || defined(INCLUDE_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException))
#define OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

@class OrgApacheXmlDtmRefIncrementalSAXSource_Filter;

/*!
 @brief Used to quickly terminate parse when running under a
 startParse() thread.
 Only its type is important. 
 */
@interface OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException : JavaLangRuntimeException

+ (jlong)serialVersionUID;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXmlDtmRefIncrementalSAXSource_Filter:(OrgApacheXmlDtmRefIncrementalSAXSource_Filter *)outer$;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException)

inline jlong OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_get_serialVersionUID();
#define OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_serialVersionUID -1129245796185754956LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_initWithOrgApacheXmlDtmRefIncrementalSAXSource_Filter_(OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException *self, OrgApacheXmlDtmRefIncrementalSAXSource_Filter *outer$);

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException *new_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_initWithOrgApacheXmlDtmRefIncrementalSAXSource_Filter_(OrgApacheXmlDtmRefIncrementalSAXSource_Filter *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException *create_OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException_initWithOrgApacheXmlDtmRefIncrementalSAXSource_Filter_(OrgApacheXmlDtmRefIncrementalSAXSource_Filter *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefIncrementalSAXSource_Filter_StopException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefIncrementalSAXSource_Filter")