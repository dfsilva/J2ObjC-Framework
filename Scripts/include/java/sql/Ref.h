//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/Ref.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlRef")
#ifdef RESTRICT_JavaSqlRef
#define INCLUDE_ALL_JavaSqlRef 0
#else
#define INCLUDE_ALL_JavaSqlRef 1
#endif
#undef RESTRICT_JavaSqlRef

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlRef_) && (INCLUDE_ALL_JavaSqlRef || defined(INCLUDE_JavaSqlRef))
#define JavaSqlRef_

@protocol JavaUtilMap;

/*!
 @brief This interface represents an SQL Ref - a data object containing a cursor
 or pointer to a result table.
 <p>
 The data structure identified by an instance of Ref is held in the
 database, so the data is not necessarily read and converted
 into a Java object until <code>getObject</code> is called. However, if
 the database supports the <code>Ref</code> type, it is not typically
 necessary to get the underlying object before using it in a method call -
 the <code>Ref</code> object can be used in place of the data structure.
 <p>
 A <code>Ref</code> object is stored into the database using the
 <code>PreparedStatement.setRef(int,Ref)</code> method.
 */
@protocol JavaSqlRef < JavaObject >

/*!
 @brief Gets the fully-qualified SQL name of the SQL structured type that this
 <code>Ref</code> references.
 @return the fully qualified name of the SQL structured type.
 @throws SQLException
 if there is a database error.
 */
- (NSString *)getBaseTypeName;

/*!
 @brief Gets the SQL structured type instance referenced by this <code>Ref</code>.
 @return a Java object whose type is defined by the mapping for the SQL
 structured type.
 @throws SQLException
 if there is a database error.
 */
- (id)getObject;

/*!
 @brief Returns the associated object and uses the relevant mapping to convert it
 to a Java type.
 @param map
 the mapping for type conversion.
 @return a Java object whose type is defined by the mapping for the SQL
 structured type.
 @throws SQLException
 if there is a database error.
 */
- (id)getObjectWithJavaUtilMap:(id<JavaUtilMap>)map;

/*!
 @brief Sets the value of the structured type that this <code>Ref</code> references to
 a supplied object.
 @param value
 the <code>Object</code> representing the new SQL structured type
 that this <code>Ref</code> references.
 @throws SQLException
 if there is a database error.
 */
- (void)setObjectWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlRef)

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlRef)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlRef")