//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/NotSerializableException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoNotSerializableException")
#ifdef RESTRICT_JavaIoNotSerializableException
#define INCLUDE_ALL_JavaIoNotSerializableException 0
#else
#define INCLUDE_ALL_JavaIoNotSerializableException 1
#endif
#undef RESTRICT_JavaIoNotSerializableException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoNotSerializableException_) && (INCLUDE_ALL_JavaIoNotSerializableException || defined(INCLUDE_JavaIoNotSerializableException))
#define JavaIoNotSerializableException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "../../java/io/ObjectStreamException.h"

/*!
 @brief Signals that an object that is not serializable has been passed into the
 <code>ObjectOutput.writeObject()</code> method.
 This can happen if the object
 does not implement <code>Serializable</code> or <code>Externalizable</code>, or if it
 is serializable but it overrides <code>writeObject(ObjectOutputStream)</code> and
 explicitly prevents serialization by throwing this type of exception.
 - seealso: ObjectOutput#writeObject(Object)
 - seealso: ObjectOutputStream#writeObject(Object)
 */
@interface JavaIoNotSerializableException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Constructs a new <code>NotSerializableException</code> with its stack trace
 filled in.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>NotSerializableException</code> with its stack trace
 and detail message filled in.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoNotSerializableException)

FOUNDATION_EXPORT void JavaIoNotSerializableException_init(JavaIoNotSerializableException *self);

FOUNDATION_EXPORT JavaIoNotSerializableException *new_JavaIoNotSerializableException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotSerializableException *create_JavaIoNotSerializableException_init();

FOUNDATION_EXPORT void JavaIoNotSerializableException_initWithNSString_(JavaIoNotSerializableException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaIoNotSerializableException *new_JavaIoNotSerializableException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotSerializableException *create_JavaIoNotSerializableException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoNotSerializableException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoNotSerializableException")
