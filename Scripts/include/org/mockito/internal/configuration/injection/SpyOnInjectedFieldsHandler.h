//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/SpyOnInjectedFieldsHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler))
#define OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_

#define RESTRICT_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#define INCLUDE_OrgMockitoInternalConfigurationInjectionMockInjectionStrategy 1
#include "org/mockito/internal/configuration/injection/MockInjectionStrategy.h"

@class JavaLangReflectField;
@protocol JavaUtilSet;

/*!
 @brief Handler for field annotated with &#64;InjectMocks and &#64;Spy.
 <p>
 The handler assumes that field initialization AND injection already happened.
 So if the field is still null, then nothing will happen there.
 </p>
 */
@interface OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler : OrgMockitoInternalConfigurationInjectionMockInjectionStrategy

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

- (jboolean)processInjectionWithJavaLangReflectField:(JavaLangReflectField *)field
                                              withId:(id)fieldOwner
                                     withJavaUtilSet:(id<JavaUtilSet>)mockCandidates;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler)

FOUNDATION_EXPORT void OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_init(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler *self);

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler *new_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler *create_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionSpyOnInjectedFieldsHandler")
