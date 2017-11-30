//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SecurityPermission.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySecurityPermission")
#ifdef RESTRICT_JavaSecuritySecurityPermission
#define INCLUDE_ALL_JavaSecuritySecurityPermission 0
#else
#define INCLUDE_ALL_JavaSecuritySecurityPermission 1
#endif
#undef RESTRICT_JavaSecuritySecurityPermission

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySecurityPermission_) && (INCLUDE_ALL_JavaSecuritySecurityPermission || defined(INCLUDE_JavaSecuritySecurityPermission))
#define JavaSecuritySecurityPermission_

#define RESTRICT_JavaSecurityBasicPermission 1
#define INCLUDE_JavaSecurityBasicPermission 1
#include "../../java/security/BasicPermission.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecuritySecurityPermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySecurityPermission)

FOUNDATION_EXPORT void JavaSecuritySecurityPermission_initWithNSString_(JavaSecuritySecurityPermission *self, NSString *name);

FOUNDATION_EXPORT JavaSecuritySecurityPermission *new_JavaSecuritySecurityPermission_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecurityPermission *create_JavaSecuritySecurityPermission_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaSecuritySecurityPermission_initWithNSString_withNSString_(JavaSecuritySecurityPermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaSecuritySecurityPermission *new_JavaSecuritySecurityPermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySecurityPermission *create_JavaSecuritySecurityPermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySecurityPermission)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySecurityPermission")
