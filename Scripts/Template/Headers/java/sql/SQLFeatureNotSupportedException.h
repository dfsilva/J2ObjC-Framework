//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLFeatureNotSupportedException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLFeatureNotSupportedException")
#ifdef RESTRICT_JavaSqlSQLFeatureNotSupportedException
#define INCLUDE_ALL_JavaSqlSQLFeatureNotSupportedException 0
#else
#define INCLUDE_ALL_JavaSqlSQLFeatureNotSupportedException 1
#endif
#undef RESTRICT_JavaSqlSQLFeatureNotSupportedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLFeatureNotSupportedException_) && (INCLUDE_ALL_JavaSqlSQLFeatureNotSupportedException || defined(INCLUDE_JavaSqlSQLFeatureNotSupportedException))
#define JavaSqlSQLFeatureNotSupportedException_

#define RESTRICT_JavaSqlSQLNonTransientException 1
#define INCLUDE_JavaSqlSQLNonTransientException 1
#include "../../java/sql/SQLNonTransientException.h"

@class JavaLangThrowable;

/*!
 @brief The subclass of <code>SQLException</code> thrown when the SQLState class value is '<i>0A</i>'
  ( the value is 'zero' A).
 This indicates that the JDBC driver does not support an optional JDBC feature.
  Optional JDBC features can fall into the fallowing categories:
 <p>
 <UL>
 <LI>no support for an optional feature
 <LI>no support for an optional overloaded method
 <LI>no support for an optional mode for a method.  The mode for a method is
 determined based on constants passed as parameter values to a method
 </UL>
 @since 1.6
 */
@interface JavaSqlSQLFeatureNotSupportedException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @since 1.6
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
  with a given <code>reason</code>.The <code>SQLState</code>
  is initialized to <code>null</code> and the vender code is initialized
  to 0.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
  with a given <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
  is initialized to 0. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
   with a given <code>reason</code>, <code>SQLState</code>  and 
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
  initialized by a call to the 
 <code>Throwable.initCause(java.lang.Throwable)</code> method. 
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor specific exception code
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param cause the (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
  with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLFeatureNotSupportedException</code> object
    with a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval bythe  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLFeatureNotSupportedException)

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_init(JavaSqlSQLFeatureNotSupportedException *self);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_init(void);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithJavaLangThrowable_(JavaSqlSQLFeatureNotSupportedException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLFeatureNotSupportedException *self, NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *new_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLFeatureNotSupportedException *create_JavaSqlSQLFeatureNotSupportedException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLFeatureNotSupportedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLFeatureNotSupportedException")
