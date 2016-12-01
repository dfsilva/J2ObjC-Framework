//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMException")
#ifdef RESTRICT_OrgApacheXmlDtmDTMException
#define INCLUDE_ALL_OrgApacheXmlDtmDTMException 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMException 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmDTMException_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMException || defined(INCLUDE_OrgApacheXmlDtmDTMException))
#define OrgApacheXmlDtmDTMException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../../java/lang/RuntimeException.h"

@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@protocol JavaxXmlTransformSourceLocator;

/*!
 @brief This class specifies an exceptional condition that occured
 in the DTM module.
 */
@interface OrgApacheXmlDtmDTMException : JavaLangRuntimeException {
 @public
  /*!
   @brief Field locator specifies where the error occured.
    
   */
  id<JavaxXmlTransformSourceLocator> locator_;
  /*!
   @brief Field containedException specifies a wrapped exception.
   May be null.
    
   */
  NSException *containedException_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create a new DTMException.
 @param message The error or warning message.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Create a new DTMException from a message and a Locator.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a DocumentHandler
 callback.</p>
 @param message The error or warning message.
 @param locator The locator object for the error or warning.
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator;

/*!
 @brief Wrap an existing exception in a DTMException.
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param locator The locator object for the error or warning.
 @param e Any exception
 */
- (instancetype)initWithNSString:(NSString *)message
withJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)locator
                 withNSException:(NSException *)e;

/*!
 @brief Wrap an existing exception in a DTMException.
 <p>This is used for throwing processor exceptions before
 the processing has started.</p>
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param e Any exception
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)e;

/*!
 @brief Create a new DTMException wrapping an existing exception.
 @param e The exception to be wrapped.
 */
- (instancetype)initWithNSException:(NSException *)e;

/*!
 @brief Returns the cause of this throwable or <code>null</code> if the
 cause is nonexistent or unknown.
 (The cause is the throwable that
 caused this throwable to get thrown.)
 */
- (NSException *)getCause;

/*!
 @brief This method retrieves an exception that this exception wraps.
 @return An Throwable object, or null.
 - seealso: #getCause
 */
- (NSException *)getException;

/*!
 @brief Get the location information as a string.
 @return A string with location info, or null
 if there is no location information.
 */
- (NSString *)getLocationAsString;

/*!
 @brief Method getLocator retrieves an instance of a SourceLocator
 object that specifies where an error occured.
 @return A SourceLocator object, or null if none was specified.
 */
- (id<JavaxXmlTransformSourceLocator>)getLocator;

/*!
 @brief Get the error message with location information
 appended.
 */
- (NSString *)getMessageAndLocation;

/*!
 @brief Initializes the <i>cause</i> of this throwable to the specified value.
 (The cause is the throwable that caused this throwable to get thrown.)
 <p>This method can be called at most once.  It is generally called from
 within the constructor, or immediately after creating the
 throwable.  If this throwable was created
 with <code>DTMException(Throwable)</code> or
 <code>DTMException(String,Throwable)</code>, this method cannot be called
 even once.
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <tt>null</tt> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @return a reference to this <code>Throwable</code> instance.
 @throws IllegalArgumentException if <code>cause</code> is this
 throwable.  (A throwable cannot
 be its own cause.)
 @throws IllegalStateException if this throwable was
 created with <code>DTMException(Throwable)</code> or
 <code>DTMException(String,Throwable)</code>, or this method has already
 been called on this throwable.
 */
- (NSException *)initCauseWithNSException:(NSException *)cause OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 */
- (void)printStackTrace;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 @param s The stream where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintStream:(JavaIoPrintStream *)s;

/*!
 @brief Print the the trace of methods from where the error
 originated.
 This will trace all nested exception
 objects, as well as this object.
 @param s The writer where the dump will be sent to.
 */
- (void)printStackTraceWithJavaIoPrintWriter:(JavaIoPrintWriter *)s;

/*!
 @brief Method setLocator sets an instance of a SourceLocator
 object that specifies where an error occured.
 @param location A SourceLocator object, or null to clear the location.
 */
- (void)setLocatorWithJavaxXmlTransformSourceLocator:(id<JavaxXmlTransformSourceLocator>)location;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmDTMException)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmDTMException, locator_, id<JavaxXmlTransformSourceLocator>)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmDTMException, containedException_, NSException *)

inline jlong OrgApacheXmlDtmDTMException_get_serialVersionUID();
#define OrgApacheXmlDtmDTMException_serialVersionUID -775576419181334734LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMException_initWithNSString_(OrgApacheXmlDtmDTMException *self, NSString *message);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *new_OrgApacheXmlDtmDTMException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *create_OrgApacheXmlDtmDTMException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMException_initWithNSException_(OrgApacheXmlDtmDTMException *self, NSException *e);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *new_OrgApacheXmlDtmDTMException_initWithNSException_(NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *create_OrgApacheXmlDtmDTMException_initWithNSException_(NSException *e);

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMException_initWithNSString_withNSException_(OrgApacheXmlDtmDTMException *self, NSString *message, NSException *e);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *new_OrgApacheXmlDtmDTMException_initWithNSString_withNSException_(NSString *message, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *create_OrgApacheXmlDtmDTMException_initWithNSString_withNSException_(NSString *message, NSException *e);

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_(OrgApacheXmlDtmDTMException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *new_OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *create_OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_(NSString *message, id<JavaxXmlTransformSourceLocator> locator);

FOUNDATION_EXPORT void OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(OrgApacheXmlDtmDTMException *self, NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *new_OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmDTMException *create_OrgApacheXmlDtmDTMException_initWithNSString_withJavaxXmlTransformSourceLocator_withNSException_(NSString *message, id<JavaxXmlTransformSourceLocator> locator, NSException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMException")
