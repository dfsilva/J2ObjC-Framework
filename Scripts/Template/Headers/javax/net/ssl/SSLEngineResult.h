//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLEngineResult.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLEngineResult")
#ifdef RESTRICT_JavaxNetSslSSLEngineResult
#define INCLUDE_ALL_JavaxNetSslSSLEngineResult 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLEngineResult 1
#endif
#undef RESTRICT_JavaxNetSslSSLEngineResult

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLEngineResult_) && (INCLUDE_ALL_JavaxNetSslSSLEngineResult || defined(INCLUDE_JavaxNetSslSSLEngineResult))
#define JavaxNetSslSSLEngineResult_

@class JavaxNetSslSSLEngineResult_HandshakeStatus;
@class JavaxNetSslSSLEngineResult_Status;

/*!
 @brief The result object describing the state of the <code>SSLEngine</code> produced
 by the <code>wrap()</code> and <code>unwrap()</code> operations.
 */
@interface JavaxNetSslSSLEngineResult : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>SSLEngineResult</code> instance with the specified state
 values.
 @param status
 the return value of the <code>SSLEngine</code> operation.
 @param handshakeStatus
 the status of the current handshake
 @param bytesConsumed
 the number of bytes retrieved from the source buffer(s).
 @param bytesProduced
 the number of bytes transferred to the destination buffer(s).
 @throws IllegalArgumentException
 if <code>status</code> or <code>handshakeStatus</code> is <code>null</code>,
 or if <code>bytesConsumed</code> or <code>bytesProduces</code> are
 negative.
 */
- (instancetype)initWithJavaxNetSslSSLEngineResult_Status:(JavaxNetSslSSLEngineResult_Status *)status
           withJavaxNetSslSSLEngineResult_HandshakeStatus:(JavaxNetSslSSLEngineResult_HandshakeStatus *)handshakeStatus
                                                  withInt:(jint)bytesConsumed
                                                  withInt:(jint)bytesProduced;

/*!
 @brief Returns the number of bytes retrieved from the source buffer(s).
 @return the number of bytes retrieved from the source buffer(s).
 */
- (jint)bytesConsumed;

/*!
 @brief Returns the number of bytes transferred to the destination buffer(s).
 @return the number of bytes transferred to the destination buffer(s).
 */
- (jint)bytesProduced;

/*!
 @brief Returns the status of the current handshake.
 @return the status of the current handshake.
 */
- (JavaxNetSslSSLEngineResult_HandshakeStatus *)getHandshakeStatus;

/*!
 @brief Returns the return value of the <code>SSLEngine</code> operation.
 @return the return value of the <code>SSLEngine</code> operation.
 */
- (JavaxNetSslSSLEngineResult_Status *)getStatus;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLEngineResult)

FOUNDATION_EXPORT void JavaxNetSslSSLEngineResult_initWithJavaxNetSslSSLEngineResult_Status_withJavaxNetSslSSLEngineResult_HandshakeStatus_withInt_withInt_(JavaxNetSslSSLEngineResult *self, JavaxNetSslSSLEngineResult_Status *status, JavaxNetSslSSLEngineResult_HandshakeStatus *handshakeStatus, jint bytesConsumed, jint bytesProduced);

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult *new_JavaxNetSslSSLEngineResult_initWithJavaxNetSslSSLEngineResult_Status_withJavaxNetSslSSLEngineResult_HandshakeStatus_withInt_withInt_(JavaxNetSslSSLEngineResult_Status *status, JavaxNetSslSSLEngineResult_HandshakeStatus *handshakeStatus, jint bytesConsumed, jint bytesProduced) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult *create_JavaxNetSslSSLEngineResult_initWithJavaxNetSslSSLEngineResult_Status_withJavaxNetSslSSLEngineResult_HandshakeStatus_withInt_withInt_(JavaxNetSslSSLEngineResult_Status *status, JavaxNetSslSSLEngineResult_HandshakeStatus *handshakeStatus, jint bytesConsumed, jint bytesProduced);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLEngineResult)

#endif

#if !defined (JavaxNetSslSSLEngineResult_HandshakeStatus_) && (INCLUDE_ALL_JavaxNetSslSSLEngineResult || defined(INCLUDE_JavaxNetSslSSLEngineResult_HandshakeStatus))
#define JavaxNetSslSSLEngineResult_HandshakeStatus_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxNetSslSSLEngineResult_HandshakeStatus_Enum) {
  JavaxNetSslSSLEngineResult_HandshakeStatus_Enum_NOT_HANDSHAKING = 0,
  JavaxNetSslSSLEngineResult_HandshakeStatus_Enum_FINISHED = 1,
  JavaxNetSslSSLEngineResult_HandshakeStatus_Enum_NEED_TASK = 2,
  JavaxNetSslSSLEngineResult_HandshakeStatus_Enum_NEED_WRAP = 3,
  JavaxNetSslSSLEngineResult_HandshakeStatus_Enum_NEED_UNWRAP = 4,
};

/*!
 @brief The <code>enum</code> describing the state of the current handshake.
 */
@interface JavaxNetSslSSLEngineResult_HandshakeStatus : JavaLangEnum < NSCopying >

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)NOT_HANDSHAKING;

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)FINISHED;

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)NEED_TASK;

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)NEED_WRAP;

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)NEED_UNWRAP;

#pragma mark Public

+ (JavaxNetSslSSLEngineResult_HandshakeStatus *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaxNetSslSSLEngineResult_HandshakeStatus_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaxNetSslSSLEngineResult_HandshakeStatus)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_values_[];

/*!
 @brief No handshake in progress.
 */
inline JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_get_NOT_HANDSHAKING();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_HandshakeStatus, NOT_HANDSHAKING)

/*!
 @brief The handshake is finished.
 */
inline JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_get_FINISHED();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_HandshakeStatus, FINISHED)

/*!
 @brief The results of one (or more) delegated tasks are needed to continue
 the handshake.
 */
inline JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_get_NEED_TASK();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_HandshakeStatus, NEED_TASK)

/*!
 @brief The engine must send data to the remote side to continue the
 handshake.
 */
inline JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_get_NEED_WRAP();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_HandshakeStatus, NEED_WRAP)

/*!
 @brief The engine needs to receive data from the remote side to continue the
 handshake.
 */
inline JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_get_NEED_UNWRAP();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_HandshakeStatus, NEED_UNWRAP)

FOUNDATION_EXPORT IOSObjectArray *JavaxNetSslSSLEngineResult_HandshakeStatus_values();

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_HandshakeStatus *JavaxNetSslSSLEngineResult_HandshakeStatus_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLEngineResult_HandshakeStatus)

#endif

#if !defined (JavaxNetSslSSLEngineResult_Status_) && (INCLUDE_ALL_JavaxNetSslSSLEngineResult || defined(INCLUDE_JavaxNetSslSSLEngineResult_Status))
#define JavaxNetSslSSLEngineResult_Status_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaxNetSslSSLEngineResult_Status_Enum) {
  JavaxNetSslSSLEngineResult_Status_Enum_BUFFER_OVERFLOW = 0,
  JavaxNetSslSSLEngineResult_Status_Enum_BUFFER_UNDERFLOW = 1,
  JavaxNetSslSSLEngineResult_Status_Enum_CLOSED = 2,
  JavaxNetSslSSLEngineResult_Status_Enum_OK = 3,
};

/*!
 @brief The <code>enum</code> describing the result of the <code>SSLEngine</code>
 operation.
 */
@interface JavaxNetSslSSLEngineResult_Status : JavaLangEnum < NSCopying >

+ (JavaxNetSslSSLEngineResult_Status *)BUFFER_OVERFLOW;

+ (JavaxNetSslSSLEngineResult_Status *)BUFFER_UNDERFLOW;

+ (JavaxNetSslSSLEngineResult_Status *)CLOSED;

+ (JavaxNetSslSSLEngineResult_Status *)OK;

#pragma mark Public

+ (JavaxNetSslSSLEngineResult_Status *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaxNetSslSSLEngineResult_Status_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaxNetSslSSLEngineResult_Status)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_values_[];

/*!
 @brief The size of the destination buffer is too small to hold the result of
 the current operation.
 */
inline JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_get_BUFFER_OVERFLOW();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_Status, BUFFER_OVERFLOW)

/*!
 @brief There were not enough bytes available in the source buffer to
 complete the current operation.
 */
inline JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_get_BUFFER_UNDERFLOW();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_Status, BUFFER_UNDERFLOW)

/*!
 @brief The operation closed this side of the communication or was already
 closed.
 */
inline JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_get_CLOSED();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_Status, CLOSED)

/*!
 @brief The operation completed successfully.
 */
inline JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_get_OK();
J2OBJC_ENUM_CONSTANT(JavaxNetSslSSLEngineResult_Status, OK)

FOUNDATION_EXPORT IOSObjectArray *JavaxNetSslSSLEngineResult_Status_values();

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaxNetSslSSLEngineResult_Status *JavaxNetSslSSLEngineResult_Status_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLEngineResult_Status)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLEngineResult")
