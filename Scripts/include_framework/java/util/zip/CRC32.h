//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/zip/CRC32.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipCRC32")
#ifdef RESTRICT_JavaUtilZipCRC32
#define INCLUDE_ALL_JavaUtilZipCRC32 0
#else
#define INCLUDE_ALL_JavaUtilZipCRC32 1
#endif
#undef RESTRICT_JavaUtilZipCRC32

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipCRC32_) && (INCLUDE_ALL_JavaUtilZipCRC32 || defined(INCLUDE_JavaUtilZipCRC32))
#define JavaUtilZipCRC32_

#define RESTRICT_JavaUtilZipChecksum 1
#define INCLUDE_JavaUtilZipChecksum 1
#include "java/util/zip/Checksum.h"

@class IOSByteArray;

/*!
 @brief A class that can be used to compute the CRC-32 of a data stream.
 - seealso: Checksum
 @author David Connelly
 */
@interface JavaUtilZipCRC32 : NSObject < JavaUtilZipChecksum >

#pragma mark Public

/*!
 @brief Creates a new CRC32 object.
 */
- (instancetype)init;

/*!
 @brief Returns CRC-32 value.
 */
- (jlong)getValue;

/*!
 @brief Resets CRC-32 to initial value.
 */
- (void)reset;

/*!
 @brief Updates the CRC-32 checksum with the specified array of bytes.
 @param b the array of bytes to update the checksum with
 */
- (void)updateWithByteArray:(IOSByteArray *)b;

/*!
 @brief Updates the CRC-32 checksum with the specified array of bytes.
 */
- (void)updateWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

/*!
 @brief Updates the CRC-32 checksum with the specified byte (the low
  eight bits of the argument b).
 @param b the byte to update the checksum with
 */
- (void)updateWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipCRC32)

FOUNDATION_EXPORT void JavaUtilZipCRC32_init(JavaUtilZipCRC32 *self);

FOUNDATION_EXPORT JavaUtilZipCRC32 *new_JavaUtilZipCRC32_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipCRC32 *create_JavaUtilZipCRC32_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipCRC32)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipCRC32")
