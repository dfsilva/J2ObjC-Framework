//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Blob.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlBlob")
#ifdef RESTRICT_JavaSqlBlob
#define INCLUDE_ALL_JavaSqlBlob 0
#else
#define INCLUDE_ALL_JavaSqlBlob 1
#endif
#undef RESTRICT_JavaSqlBlob

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlBlob_) && (INCLUDE_ALL_JavaSqlBlob || defined(INCLUDE_JavaSqlBlob))
#define JavaSqlBlob_

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaIoOutputStream;

/*!
 @brief A Java interface representing the SQL <code>BLOB</code> type.
 <p>
 An SQL <code>BLOB</code> type stores a large array of binary data (bytes) as the
 value in a column of a database.
 <p>
 The <code>java.sql.Blob</code> interface provides methods for setting and
 retrieving data in the <code>Blob</code>, for querying <code>Blob</code> data length,
 and for searching for data within the <code>Blob</code>.
 */
@protocol JavaSqlBlob < JavaObject >

/*!
 @brief Retrieves this <code>Blob</code> object as a binary stream.
 @return a binary <code>InputStream</code> giving access to the <code>Blob</code>
 data.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (JavaIoInputStream *)getBinaryStream;

/*!
 @brief Retrieves <code>length</code> bytes from this <code>Blob</code>, starting at 1-based
 offset <code>pos</code>, and returns them as a binary stream.
 @return a binary <code>InputStream</code> giving access to the <code>Blob</code>
 data.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (JavaIoInputStream *)getBinaryStreamWithLong:(jlong)pos
                                      withLong:(jlong)length;

/*!
 @brief Gets a portion of the value of this <code>Blob</code> as an array of bytes.
 @param pos
 the position of the first byte in the <code>Blob</code> to get,
 where the first byte in the <code>Blob</code> has position 1.
 @param length
 the number of bytes to get.
 @return a byte array containing the data from the <code>Blob</code>, starting
 at <code>pos</code> and is up to <code>length</code> bytes long.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (IOSByteArray *)getBytesWithLong:(jlong)pos
                           withInt:(jint)length;

/*!
 @brief Gets the number of bytes in this <code>Blob</code> object.
 @return a <code>long</code> value with the length of the <code>Blob</code> in
 bytes.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (jlong)length;

/*!
 @brief Search for the position in this <code>Blob</code> at which a specified pattern
 begins, starting at a specified position within the <code>Blob</code>.
 @param pattern
 a <code>Blob</code> containing the pattern of data to search for in
 this <code>Blob</code>.
 @param start
 the position within this <code>Blob</code> to start the search,
 where the first position in the <code>Blob</code> is <code>1</code>.
 @return a <code>long</code> value with the position at which the pattern
 begins. Returns <code>-1</code> if the pattern is not found in this
 <code>Blob</code>.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (jlong)positionWithJavaSqlBlob:(id<JavaSqlBlob>)pattern
                        withLong:(jlong)start;

/*!
 @brief Search for the position in this <code>Blob</code> at which the specified
 pattern begins, starting at a specified position within the <code>Blob</code>.
 @param pattern
 a byte array containing the pattern of data to search for in
 this <code>Blob</code>.
 @param start
 the position within this <code>Blob</code> to start the search,
 where the first position in the <code>Blob</code> is <code>1</code>.
 @return a <code>long</code> value with the position at which the pattern
 begins. Returns <code>-1</code> if the pattern is not found in this
 <code>Blob</code>.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (jlong)positionWithByteArray:(IOSByteArray *)pattern
                      withLong:(jlong)start;

/*!
 @brief Gets a stream that can be used to write binary data to this <code>Blob</code>.
 @param pos
 the position within this <code>Blob</code> at which to start
 writing, where the first position in the <code>Blob</code> is
 <code>1</code>.
 @return a binary <code>InputStream</code> which can be used to write data into
 the <code>Blob</code> starting at the specified position.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (JavaIoOutputStream *)setBinaryStreamWithLong:(jlong)pos;

/*!
 @brief Writes a specified array of bytes to this <code>Blob</code> object, starting
 at a specified position.
 Returns the number of bytes written.
 @param pos
 the position within this <code>Blob</code> at which to start
 writing, where the first position in the <code>Blob</code> is
 <code>1</code>.
 @param theBytes
 an array of bytes to write into the <code>Blob</code>.
 @return an integer containing the number of bytes written to the <code>Blob</code>
 .
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (jint)setBytesWithLong:(jlong)pos
           withByteArray:(IOSByteArray *)theBytes;

/*!
 @brief Writes a portion of a specified byte array to this <code>Blob</code>.
 Returns
 the number of bytes written.
 @param pos
 the position within this <code>Blob</code> at which to start
 writing, where the first position in the <code>Blob</code> is
 <code>1</code>.
 @param theBytes
 an array of bytes to write into the <code>Blob</code>.
 @param offset
 the offset into the byte array from which to start writing
 data - the first byte in the array has offset <code>0</code>.
 @param len
 the length of data to write in number of bytes.
 @return an integer containing the number of bytes written to the <code>Blob</code>
 .
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (jint)setBytesWithLong:(jlong)pos
           withByteArray:(IOSByteArray *)theBytes
                 withInt:(jint)offset
                 withInt:(jint)len;

/*!
 @brief Truncate the value of this <code>Blob</code> object to a specified length in
 bytes.
 @param len
 the length of data in bytes after which this <code>Blob</code>
 is to be truncated.
 @throws SQLException
 if an error occurs accessing the <code>Blob</code>.
 */
- (void)truncateWithLong:(jlong)len;

/*!
 @brief Frees any resources held by this blob.
 After <code>free</code> is called, calling
 method other than <code>free</code> will throw <code>SQLException</code> (calling <code>free</code>
 repeatedly will do nothing).
 @throws SQLException
 */
- (void)free;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlBlob)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlBlob)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlBlob")
