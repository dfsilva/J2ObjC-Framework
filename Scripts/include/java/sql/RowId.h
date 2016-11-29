//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/RowId.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlRowId")
#ifdef RESTRICT_JavaSqlRowId
#define INCLUDE_ALL_JavaSqlRowId 0
#else
#define INCLUDE_ALL_JavaSqlRowId 1
#endif
#undef RESTRICT_JavaSqlRowId

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlRowId_) && (INCLUDE_ALL_JavaSqlRowId || defined(INCLUDE_JavaSqlRowId))
#define JavaSqlRowId_

@class IOSByteArray;

/*!
 @brief Maps SQL's ROWID type into Java.
 @since 1.6
 */
@protocol JavaSqlRowId < JavaObject >

- (jboolean)isEqual:(id)obj;

/*!
 @brief Returns an array of bytes representing the value of the corresponding SQL ROWID.
 */
- (IOSByteArray *)getBytes;

- (NSString *)description;

- (NSUInteger)hash;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlRowId)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRowId)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlRowId")
