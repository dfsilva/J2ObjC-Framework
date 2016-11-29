//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/res/XSLMessages.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanResXSLMessages")
#ifdef RESTRICT_OrgApacheXalanResXSLMessages
#define INCLUDE_ALL_OrgApacheXalanResXSLMessages 0
#else
#define INCLUDE_ALL_OrgApacheXalanResXSLMessages 1
#endif
#undef RESTRICT_OrgApacheXalanResXSLMessages

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanResXSLMessages_) && (INCLUDE_ALL_OrgApacheXalanResXSLMessages || defined(INCLUDE_OrgApacheXalanResXSLMessages))
#define OrgApacheXalanResXSLMessages_

#define RESTRICT_OrgApacheXpathResXPATHMessages 1
#define INCLUDE_OrgApacheXpathResXPATHMessages 1
#include "../../../../org/apache/xpath/res/XPATHMessages.h"

@class IOSObjectArray;

/*!
 @brief Sets things up for issuing error messages.
 This class is misnamed, and
 should be called XalanMessages, or some such.
  internal
 */
@interface OrgApacheXalanResXSLMessages : OrgApacheXpathResXPATHMessages

#pragma mark Public

- (instancetype)init;

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param msgKey    The key for the message text.
 @param args      The arguments to be used as replacement text
 in the message created.
 @return The formatted message string.
 */
+ (NSString *)createMessageWithNSString:(NSString *)msgKey
                      withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param msgKey    The key for the message text.
 @param args      The arguments to be used as replacement text
 in the message created.
 @return The formatted warning string.
 */
+ (NSString *)createWarningWithNSString:(NSString *)msgKey
                      withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_STATIC_INIT(OrgApacheXalanResXSLMessages)

FOUNDATION_EXPORT NSString *OrgApacheXalanResXSLMessages_createMessageWithNSString_withNSObjectArray_(NSString *msgKey, IOSObjectArray *args);

FOUNDATION_EXPORT NSString *OrgApacheXalanResXSLMessages_createWarningWithNSString_withNSObjectArray_(NSString *msgKey, IOSObjectArray *args);

FOUNDATION_EXPORT void OrgApacheXalanResXSLMessages_init(OrgApacheXalanResXSLMessages *self);

FOUNDATION_EXPORT OrgApacheXalanResXSLMessages *new_OrgApacheXalanResXSLMessages_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanResXSLMessages *create_OrgApacheXalanResXSLMessages_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanResXSLMessages)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanResXSLMessages")