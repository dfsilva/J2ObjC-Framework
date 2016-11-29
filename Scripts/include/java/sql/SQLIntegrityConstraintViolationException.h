//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/sql/SQLIntegrityConstraintViolationException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException")
#ifdef RESTRICT_JavaSqlSQLIntegrityConstraintViolationException
#define INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException 0
#else
#define INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException 1
#endif
#undef RESTRICT_JavaSqlSQLIntegrityConstraintViolationException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLIntegrityConstraintViolationException_) && (INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException || defined(INCLUDE_JavaSqlSQLIntegrityConstraintViolationException))
#define JavaSqlSQLIntegrityConstraintViolationException_

#define RESTRICT_JavaSqlSQLNonTransientException 1
#define INCLUDE_JavaSqlSQLNonTransientException 1
#include "java/sql/SQLNonTransientException.h"

/*!
 @brief An exception, which is subclass of SQLNonTransientException, is thrown when
 various the an integrity constraint (foreign key, primary key or unique key)
 has been violated.
 */
@interface JavaSqlSQLIntegrityConstraintViolationException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to null, the SQLState string is set to null and the Error
 Code is set to 0.
 */
- (instancetype)init;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given reason string, the SQLState string is set to
 null and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given reason string, the SQLState string is set to
 the given SQLState string and the Error Code is set to 0.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given reason string, the SQLState string is set to
 the given SQLState string and the Error Code is set to the given error
 code value.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given reason string, the SQLState string is set to
 the given SQLState string , the Error Code is set to the given error code
 value, and the cause Throwable object is set to the given cause Throwable
 object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param vendorCode
 the integer value for the error code
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                         withInt:(jint)vendorCode
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given reason string, the SQLState string is set to
 the given SQLState string and the cause Throwable object is set to the
 given cause Throwable object.
 @param reason
 the string to use as the Reason string
 @param sqlState
 the string to use as the SQLState string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)sqlState
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the given and the cause Throwable object is set to the
 given cause Throwable object.
 @param reason
 the string to use as the Reason string
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withNSException:(NSException *)cause;

/*!
 @brief Creates an SQLIntegrityConstraintViolationException object.
 The Reason
 string is set to the null if cause == null or cause.toString() if
 cause!=null,and the cause Throwable object is set to the given cause
 Throwable object.
 @param cause
 the Throwable object for the underlying reason this
 SQLException
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLIntegrityConstraintViolationException)

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_init(JavaSqlSQLIntegrityConstraintViolationException *self);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_init();

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(NSString *reason, NSString *sqlState);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *sqlState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSException_(JavaSqlSQLIntegrityConstraintViolationException *self, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSException_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSException_(NSString *reason, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSException_(NSString *reason, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withNSException_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *sqlState, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withNSException_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *sqlState, jint vendorCode, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLIntegrityConstraintViolationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException")