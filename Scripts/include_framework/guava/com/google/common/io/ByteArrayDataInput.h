//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/ByteArrayDataInput.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoByteArrayDataInput")
#ifdef RESTRICT_ComGoogleCommonIoByteArrayDataInput
#define INCLUDE_ALL_ComGoogleCommonIoByteArrayDataInput 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoByteArrayDataInput 1
#endif
#undef RESTRICT_ComGoogleCommonIoByteArrayDataInput

#if !defined (ComGoogleCommonIoByteArrayDataInput_) && (INCLUDE_ALL_ComGoogleCommonIoByteArrayDataInput || defined(INCLUDE_ComGoogleCommonIoByteArrayDataInput))
#define ComGoogleCommonIoByteArrayDataInput_

#define RESTRICT_JavaIoDataInput 1
#define INCLUDE_JavaIoDataInput 1
#include "../../../../../java/io/DataInput.h"

@class IOSByteArray;

@protocol ComGoogleCommonIoByteArrayDataInput < JavaIoDataInput, JavaObject >

- (void)readFullyWithByteArray:(IOSByteArray *)b;

- (void)readFullyWithByteArray:(IOSByteArray *)b
                       withInt:(jint)off
                       withInt:(jint)len;

- (jint)skipBytesWithInt:(jint)n;

- (jboolean)readBoolean;

- (jbyte)readByte;

- (jint)readUnsignedByte;

- (jshort)readShort;

- (jint)readUnsignedShort;

- (jchar)readChar;

- (jint)readInt;

- (jlong)readLong;

- (jfloat)readFloat;

- (jdouble)readDouble;

- (NSString *)readLine;

- (NSString *)readUTF;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoByteArrayDataInput)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoByteArrayDataInput)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoByteArrayDataInput")
