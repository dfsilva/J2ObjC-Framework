//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/Reporter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsReporter")
#ifdef RESTRICT_OrgMockitoExceptionsReporter
#define INCLUDE_ALL_OrgMockitoExceptionsReporter 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsReporter 1
#endif
#undef RESTRICT_OrgMockitoExceptionsReporter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoExceptionsReporter_) && (INCLUDE_ALL_OrgMockitoExceptionsReporter || defined(INCLUDE_OrgMockitoExceptionsReporter))
#define OrgMockitoExceptionsReporter_

@class IOSClass;
@class JavaLangException;
@class JavaLangReflectField;
@class OrgMockitoInternalReportingDiscrepancy;
@protocol JavaUtilCollection;
@protocol JavaUtilList;
@protocol OrgMockitoInvocationDescribedInvocation;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationInvocationOnMock;
@protocol OrgMockitoInvocationLocation;
@protocol OrgMockitoListenersInvocationListener;

/*!
 @brief Reports verification and misusing errors.
 <p>
 One of the key points of mocking library is proper verification/exception
 messages. All messages in one place makes it easier to tune and amend them.
 <p>
 Reporter can be injected and therefore is easily testable.
 <p>
 Generally, exception messages are full of line breaks to make them easy to
 read (xunit plugins take only fraction of screen on modern IDEs).
 */
@interface OrgMockitoExceptionsReporter : NSObject

#pragma mark Public

- (instancetype)init;

- (void)argumentsAreDifferentWithNSString:(NSString *)wanted
                             withNSString:(NSString *)actual
         withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)actualLocation;

- (void)atMostShouldNotBeUsedWithTimeout;

- (void)cannotCallRealMethodOnInterface;

- (void)cannotInitializeForInjectMocksAnnotationWithNSString:(NSString *)fieldName
                                       withJavaLangException:(JavaLangException *)details;

- (void)cannotInitializeForSpyAnnotationWithNSString:(NSString *)fieldName
                               withJavaLangException:(JavaLangException *)details;

- (void)cannotInjectDependencyWithJavaLangReflectField:(JavaLangReflectField *)field
                                                withId:(id)matchingMock
                                 withJavaLangException:(JavaLangException *)details;

- (void)cannotMockFinalClassWithIOSClass:(IOSClass *)clazz;

- (void)cannotStubVoidMethodWithAReturnValueWithNSString:(NSString *)methodName;

- (void)cannotStubWithNullThrowable;

- (void)cannotVerifyToString;

- (void)checkedExceptionInvalidWithNSException:(NSException *)t;

- (void)extraInterfacesAcceptsOnlyInterfacesWithIOSClass:(IOSClass *)wrongType;

- (void)extraInterfacesCannotContainMockedTypeWithIOSClass:(IOSClass *)wrongType;

- (void)extraInterfacesDoesNotAcceptNullParameters;

- (void)extraInterfacesRequiresAtLeastOneInterface;

- (void)fieldInitialisationThrewExceptionWithJavaLangReflectField:(JavaLangReflectField *)field
                                                  withNSException:(NSException *)details;

- (void)incorrectUseOfAdditionalMatchersWithNSString:(NSString *)additionalMatcherName
                                             withInt:(jint)expectedSubMatchersCount
                              withJavaUtilCollection:(id<JavaUtilCollection>)matcherStack;

- (void)incorrectUseOfApi;

- (void)inOrderRequiresFamiliarMock;

- (jint)invalidArgumentPositionRangeAtInvocationTimeWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation
                                                                                 withBoolean:(jboolean)willReturnLastParameter
                                                                                     withInt:(jint)argumentIndex;

- (void)invalidArgumentRangeAtIdentityAnswerCreationTime;

- (void)invalidUseOfMatchersWithInt:(jint)expectedMatchersCount
                   withJavaUtilList:(id<JavaUtilList>)recordedMatchers;

- (void)invocationListenerDoesNotAcceptNullParameters;

- (void)invocationListenersRequiresAtLeastOneListener;

- (void)invocationListenerThrewExceptionWithOrgMockitoListenersInvocationListener:(id<OrgMockitoListenersInvocationListener>)listener
                                                                  withNSException:(NSException *)listenerThrowable;

- (void)misplacedArgumentMatcherWithJavaUtilList:(id<JavaUtilList>)lastMatchers;

- (void)missingMethodInvocation;

- (void)mockedTypeIsInconsistentWithDelegatedInstanceTypeWithIOSClass:(IOSClass *)mockedType
                                                               withId:(id)delegatedInstance;

- (void)mockedTypeIsInconsistentWithSpiedInstanceTypeWithIOSClass:(IOSClass *)mockedType
                                                           withId:(id)spiedInstance;

- (void)mocksHaveToBePassedToVerifyNoMoreInteractions;

- (void)mocksHaveToBePassedWhenCreatingInOrder;

- (void)moreThanOneAnnotationNotAllowedWithNSString:(NSString *)fieldName;

- (void)neverWantedButInvokedWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
                                        withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)firstUndesired;

- (void)noArgumentValueWasCaptured;

- (void)noMoreInteractionsWantedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)undesired
                                                  withJavaUtilList:(id<JavaUtilList>)invocations;

- (void)noMoreInteractionsWantedInOrderWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)undesired;

- (void)notAMockPassedToVerifyWithIOSClass:(IOSClass *)type;

- (void)notAMockPassedToVerifyNoMoreInteractions;

- (void)notAMockPassedToWhenMethod;

- (void)notAMockPassedWhenCreatingInOrder;

- (void)nullPassedToVerify;

- (void)nullPassedToVerifyNoMoreInteractions;

- (void)nullPassedToWhenMethod;

- (void)nullPassedWhenCreatingInOrder;

- (void)onlyVoidMethodsCanBeSetToDoNothing;

- (void)reportNoSubMatchersFoundWithNSString:(NSString *)additionalMatcherName;

- (void)smartNullPointerExceptionWithNSString:(NSString *)invocation
             withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)location;

- (void)spyAndDelegateAreMutuallyExclusive;

- (void)tooLittleActualInvocationsWithOrgMockitoInternalReportingDiscrepancy:(OrgMockitoInternalReportingDiscrepancy *)discrepancy
                                 withOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
                                            withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)lastActualLocation;

- (void)tooLittleActualInvocationsInOrderWithOrgMockitoInternalReportingDiscrepancy:(OrgMockitoInternalReportingDiscrepancy *)discrepancy
                                        withOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
                                                   withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)lastActualLocation;

- (void)tooManyActualInvocationsWithInt:(jint)wantedCount
                                withInt:(jint)actualCount
withOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
       withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)firstUndesired;

- (void)tooManyActualInvocationsInOrderWithInt:(jint)wantedCount
                                       withInt:(jint)actualCount
   withOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
              withOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)firstUndesired;

- (void)unfinishedStubbingWithOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)location;

- (void)unfinishedVerificationExceptionWithOrgMockitoInvocationLocation:(id<OrgMockitoInvocationLocation>)location;

- (void)unsupportedCombinationOfAnnotationsWithNSString:(NSString *)undesiredAnnotationOne
                                           withNSString:(NSString *)undesiredAnnotationTwo;

- (void)wantedAtMostXWithInt:(jint)maxNumberOfInvocations
                     withInt:(jint)foundSize;

- (void)wantedButNotInvokedWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted;

- (void)wantedButNotInvokedWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
                                                      withJavaUtilList:(id<JavaUtilList>)invocations;

- (void)wantedButNotInvokedInOrderWithOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)wanted
                                  withOrgMockitoInvocationDescribedInvocation:(id<OrgMockitoInvocationDescribedInvocation>)previous;

- (void)wrongTypeOfArgumentToReturnWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation
                                                               withNSString:(NSString *)expectedType
                                                               withIOSClass:(IOSClass *)actualType
                                                                    withInt:(jint)argumentIndex;

- (void)wrongTypeOfReturnValueWithNSString:(NSString *)expectedType
                              withNSString:(NSString *)actualType
                              withNSString:(NSString *)methodName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsReporter)

FOUNDATION_EXPORT void OrgMockitoExceptionsReporter_init(OrgMockitoExceptionsReporter *self);

FOUNDATION_EXPORT OrgMockitoExceptionsReporter *new_OrgMockitoExceptionsReporter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsReporter *create_OrgMockitoExceptionsReporter_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsReporter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsReporter")
