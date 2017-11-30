//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLIntegrityConstraintViolationException.java
//

#include "../../J2ObjC_header.h"

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
#include "../../java/sql/SQLNonTransientException.h"

@class JavaLangThrowable;

/*!
 @brief The subclass of <code>SQLException</code> thrown when the SQLState class value
  is '<i>23</i>', or under vendor-specified conditions.
 This indicates that an integrity
  constraint (foreign key, primary key or unique key) has been violated. 
 <p>
  Please consult your driver vendor documentation for the vendor-specified
  conditions for which this <code>Exception</code> may be thrown.
 @since 1.6
 */
@interface JavaSqlSQLIntegrityConstraintViolationException : JavaSqlSQLNonTransientException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code> object.
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
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code>
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
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code>
  object with a given <code>reason</code> and <code>SQLState</code>.
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
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code> object
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
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code> object
  with a given 
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
  and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code> object
   with a given 
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>   method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs a <code>SQLIntegrityConstraintViolationException</code> object
  with a given 
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
  and the vendor code is initialized to 0. 
 <p>
 @param reason a description of the exception.
 @param cause the (which is saved for later retrieval by the  <code> getCause() </code>  method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
           withJavaLangThrowable:(JavaLangThrowable *)cause;

/*!
 @brief Constructs an <code>SQLIntegrityConstraintViolationException</code> object with
   a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
  to <code>null</code> and the vendor code is initialized to 0.
  The <code>reason</code>  is initialized to <code>null</code> if 
 <code>cause==null</code> or to <code>cause.toString()</code> if 
 <code>cause!=null</code>.
  <p>
 @param cause the underlying reason for this  <code> SQLException </code>  (which is saved for later retrieval by the  <code> getCause() </code>   method); may be null indicating
       the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLIntegrityConstraintViolationException)

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_init(JavaSqlSQLIntegrityConstraintViolationException *self);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_init(void);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithJavaLangThrowable_(JavaSqlSQLIntegrityConstraintViolationException *self, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithJavaLangThrowable_(JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithJavaLangThrowable_(JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withJavaLangThrowable_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withJavaLangThrowable_(NSString *reason, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withJavaLangThrowable_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withJavaLangThrowable_(NSString *reason, NSString *SQLState, JavaLangThrowable *cause);

FOUNDATION_EXPORT void JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(JavaSqlSQLIntegrityConstraintViolationException *self, NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *new_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLIntegrityConstraintViolationException *create_JavaSqlSQLIntegrityConstraintViolationException_initWithNSString_withNSString_withInt_withJavaLangThrowable_(NSString *reason, NSString *SQLState, jint vendorCode, JavaLangThrowable *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLIntegrityConstraintViolationException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLIntegrityConstraintViolationException")
