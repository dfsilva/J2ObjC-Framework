//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/checkers/NonGreedyNumberOfInvocationsInOrderChecker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker")
#ifdef RESTRICT_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_) && (INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker || defined(INCLUDE_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker))
#define OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_

@class OrgMockitoExceptionsReporter;
@class OrgMockitoInternalInvocationInvocationMarker;
@class OrgMockitoInternalInvocationInvocationMatcher;
@class OrgMockitoInternalInvocationInvocationsFinder;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker : NSObject

#pragma mark Public

- (instancetype)init;

- (void)checkWithJavaUtilList:(id<JavaUtilList>)invocations
withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                      withInt:(jint)wantedCount
withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

#pragma mark Package-Private

- (instancetype)initWithOrgMockitoInternalInvocationInvocationsFinder:(OrgMockitoInternalInvocationInvocationsFinder *)finder
                                     withOrgMockitoExceptionsReporter:(OrgMockitoExceptionsReporter *)reporter
                     withOrgMockitoInternalInvocationInvocationMarker:(OrgMockitoInternalInvocationInvocationMarker *)marker;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *self);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *create_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_init();

FOUNDATION_EXPORT void OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationMarker_(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *self, OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationMarker *marker);

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *new_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationMarker_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationMarker *marker) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker *create_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker_initWithOrgMockitoInternalInvocationInvocationsFinder_withOrgMockitoExceptionsReporter_withOrgMockitoInternalInvocationInvocationMarker_(OrgMockitoInternalInvocationInvocationsFinder *finder, OrgMockitoExceptionsReporter *reporter, OrgMockitoInternalInvocationInvocationMarker *marker);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationCheckersNonGreedyNumberOfInvocationsInOrderChecker")
