//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/Externalizable.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoExternalizable")
#ifdef RESTRICT_JavaIoExternalizable
#define INCLUDE_ALL_JavaIoExternalizable 0
#else
#define INCLUDE_ALL_JavaIoExternalizable 1
#endif
#undef RESTRICT_JavaIoExternalizable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoExternalizable_) && (INCLUDE_ALL_JavaIoExternalizable || defined(INCLUDE_JavaIoExternalizable))
#define JavaIoExternalizable_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@protocol JavaIoObjectInput;
@protocol JavaIoObjectOutput;

/*!
 @brief Defines an interface for classes that want to be serializable, but have their
 own binary representation.
 */
@protocol JavaIoExternalizable < JavaIoSerializable, JavaObject >

/*!
 @brief Reads the next object from the ObjectInput <code>input</code>.
 @param input
 the ObjectInput from which the next object is read.
 @throws IOException
 if an error occurs attempting to read from <code>input</code>.
 @throws ClassNotFoundException
 if the class of the instance being loaded cannot be found.
 */
- (void)readExternalWithJavaIoObjectInput:(id<JavaIoObjectInput>)input;

/*!
 @brief Writes the receiver to the ObjectOutput <code>output</code>.
 @param output
 the ObjectOutput to write the object to.
 @throws IOException
 if an error occurs attempting to write to <code>output</code>.
 */
- (void)writeExternalWithJavaIoObjectOutput:(id<JavaIoObjectOutput>)output;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoExternalizable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoExternalizable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoExternalizable")
