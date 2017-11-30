//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/TooManyListenersException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilTooManyListenersException")
#ifdef RESTRICT_JavaUtilTooManyListenersException
#define INCLUDE_ALL_JavaUtilTooManyListenersException 0
#else
#define INCLUDE_ALL_JavaUtilTooManyListenersException 1
#endif
#undef RESTRICT_JavaUtilTooManyListenersException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilTooManyListenersException_) && (INCLUDE_ALL_JavaUtilTooManyListenersException || defined(INCLUDE_JavaUtilTooManyListenersException))
#define JavaUtilTooManyListenersException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "java/lang/Exception.h"

@class JavaLangThrowable;

/*!
 @brief <p>
  The <code> TooManyListenersException </code> Exception is used as part of
  the Java Event model to annotate and implement a unicast special case of
  a multicast Event Source.
 </p>
  <p>
  The presence of a "throws TooManyListenersException" clause on any given
  concrete implementation of the normally multicast "void addXyzEventListener"
  event listener registration pattern is used to annotate that interface as
  implementing a unicast Listener special case, that is, that one and only
  one Listener may be registered on the particular event listener source
  concurrently. 
 </p>
 - seealso: java.util.EventObject
 - seealso: java.util.EventListener
 @author Laurence P. G. Cable
 @since JDK1.1
 */
@interface JavaUtilTooManyListenersException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a TooManyListenersException with no detail message.
 A detail message is a String that describes this particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a TooManyListenersException with the specified detail message.
 A detail message is a String that describes this particular exception.
 @param s the detail message
 */
- (instancetype)initWithNSString:(NSString *)s;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)arg0 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1 NS_UNAVAILABLE;

- (instancetype)initWithNSString:(NSString *)arg0
           withJavaLangThrowable:(JavaLangThrowable *)arg1
                     withBoolean:(jboolean)arg2
                     withBoolean:(jboolean)arg3 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilTooManyListenersException)

FOUNDATION_EXPORT void JavaUtilTooManyListenersException_init(JavaUtilTooManyListenersException *self);

FOUNDATION_EXPORT JavaUtilTooManyListenersException *new_JavaUtilTooManyListenersException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTooManyListenersException *create_JavaUtilTooManyListenersException_init(void);

FOUNDATION_EXPORT void JavaUtilTooManyListenersException_initWithNSString_(JavaUtilTooManyListenersException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilTooManyListenersException *new_JavaUtilTooManyListenersException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilTooManyListenersException *create_JavaUtilTooManyListenersException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilTooManyListenersException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilTooManyListenersException")
