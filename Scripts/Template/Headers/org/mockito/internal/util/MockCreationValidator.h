//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/internal/util/MockCreationValidator.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockCreationValidator")
#ifdef RESTRICT_OrgMockitoInternalUtilMockCreationValidator
#define INCLUDE_ALL_OrgMockitoInternalUtilMockCreationValidator 0
#else
#define INCLUDE_ALL_OrgMockitoInternalUtilMockCreationValidator 1
#endif
#undef RESTRICT_OrgMockitoInternalUtilMockCreationValidator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalUtilMockCreationValidator_) && (INCLUDE_ALL_OrgMockitoInternalUtilMockCreationValidator || defined(INCLUDE_OrgMockitoInternalUtilMockCreationValidator))
#define OrgMockitoInternalUtilMockCreationValidator_

@class IOSClass;
@protocol JavaUtilCollection;

@interface OrgMockitoInternalUtilMockCreationValidator : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)isTypeMockableWithIOSClass:(IOSClass *)clz;

- (void)validateDelegatedInstanceWithIOSClass:(IOSClass *)classToMock
                                       withId:(id)delegatedInstance;

- (void)validateExtraInterfacesWithIOSClass:(IOSClass *)classToMock
                     withJavaUtilCollection:(id<JavaUtilCollection>)extraInterfaces;

- (void)validateMockedTypeWithIOSClass:(IOSClass *)classToMock
                                withId:(id)spiedInstance;

- (void)validateTypeWithIOSClass:(IOSClass *)classToMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalUtilMockCreationValidator)

FOUNDATION_EXPORT void OrgMockitoInternalUtilMockCreationValidator_init(OrgMockitoInternalUtilMockCreationValidator *self);

FOUNDATION_EXPORT OrgMockitoInternalUtilMockCreationValidator *new_OrgMockitoInternalUtilMockCreationValidator_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalUtilMockCreationValidator *create_OrgMockitoInternalUtilMockCreationValidator_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalUtilMockCreationValidator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalUtilMockCreationValidator")
