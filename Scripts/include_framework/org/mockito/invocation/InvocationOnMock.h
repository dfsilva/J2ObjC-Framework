//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/invocation/InvocationOnMock.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInvocationInvocationOnMock")
#ifdef RESTRICT_OrgMockitoInvocationInvocationOnMock
#define INCLUDE_ALL_OrgMockitoInvocationInvocationOnMock 0
#else
#define INCLUDE_ALL_OrgMockitoInvocationInvocationOnMock 1
#endif
#undef RESTRICT_OrgMockitoInvocationInvocationOnMock

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInvocationInvocationOnMock_) && (INCLUDE_ALL_OrgMockitoInvocationInvocationOnMock || defined(INCLUDE_OrgMockitoInvocationInvocationOnMock))
#define OrgMockitoInvocationInvocationOnMock_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@class IOSObjectArray;
@class JavaLangReflectMethod;

/*!
 @brief An invocation on a mock
 <p>
 A placeholder for mock, the method that was called and the arguments that were passed.
 */
@protocol OrgMockitoInvocationInvocationOnMock < JavaIoSerializable, JavaObject >

/*!
 @brief returns the mock object
 @return mock object
 */
- (id)getMock;

/*!
 @brief returns the method
 @return method
 */
- (JavaLangReflectMethod *)getMethod;

/*!
 @brief returns arguments passed to the method
 @return arguments
 */
- (IOSObjectArray *)getArguments;

/*!
 @brief calls real method
 <p>
 <b>Warning:</b> depending on the real implementation it might throw exceptions
 @return whatever the real method returns / throws
 @throws Throwable in case real method throws
 */
- (id)callRealMethod;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInvocationInvocationOnMock)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInvocationInvocationOnMock)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInvocationInvocationOnMock")
