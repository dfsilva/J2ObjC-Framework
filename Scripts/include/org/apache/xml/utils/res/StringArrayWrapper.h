//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/res/StringArrayWrapper.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsResStringArrayWrapper")
#ifdef RESTRICT_OrgApacheXmlUtilsResStringArrayWrapper
#define INCLUDE_ALL_OrgApacheXmlUtilsResStringArrayWrapper 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsResStringArrayWrapper 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsResStringArrayWrapper

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsResStringArrayWrapper_) && (INCLUDE_ALL_OrgApacheXmlUtilsResStringArrayWrapper || defined(INCLUDE_OrgApacheXmlUtilsResStringArrayWrapper))
#define OrgApacheXmlUtilsResStringArrayWrapper_

@class IOSObjectArray;

/*!
 @brief It is a mutable object to wrap the String[] used in
 the contents of the XResourceBundle class
 */
@interface OrgApacheXmlUtilsResStringArrayWrapper : NSObject

#pragma mark Public

- (instancetype)initWithNSStringArray:(IOSObjectArray *)arg;

- (jint)getLength;

- (NSString *)getStringWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsResStringArrayWrapper)

FOUNDATION_EXPORT void OrgApacheXmlUtilsResStringArrayWrapper_initWithNSStringArray_(OrgApacheXmlUtilsResStringArrayWrapper *self, IOSObjectArray *arg);

FOUNDATION_EXPORT OrgApacheXmlUtilsResStringArrayWrapper *new_OrgApacheXmlUtilsResStringArrayWrapper_initWithNSStringArray_(IOSObjectArray *arg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsResStringArrayWrapper *create_OrgApacheXmlUtilsResStringArrayWrapper_initWithNSStringArray_(IOSObjectArray *arg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsResStringArrayWrapper)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsResStringArrayWrapper")
