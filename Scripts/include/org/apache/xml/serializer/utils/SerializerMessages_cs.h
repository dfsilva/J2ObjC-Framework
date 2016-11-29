//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/SerializerMessages_cs.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_cs")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages_cs
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_cs 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_cs 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsSerializerMessages_cs

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerUtilsSerializerMessages_cs_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_cs || defined(INCLUDE_OrgApacheXmlSerializerUtilsSerializerMessages_cs))
#define OrgApacheXmlSerializerUtilsSerializerMessages_cs_

#define RESTRICT_JavaUtilListResourceBundle 1
#define INCLUDE_JavaUtilListResourceBundle 1
#include "java/util/ListResourceBundle.h"

@class IOSObjectArray;

/*!
 @brief An instance of this class is a ListResourceBundle that
 has the required getContents() method that returns
 an array of message-key/message associations.
 <p>
 The message keys are defined in <code>MsgKey</code>. The
 messages that those keys map to are defined here.
 <p>
 The messages in the English version are intended to be
 translated.
 This class is not a public API, it is only public because it is
 used in org.apache.xml.serializer.
  internal
 */
@interface OrgApacheXmlSerializerUtilsSerializerMessages_cs : JavaUtilListResourceBundle

#pragma mark Public

- (instancetype)init;

/*!
 @brief The lookup table for error messages.
 */
- (IOSObjectArray *)getContents;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsSerializerMessages_cs)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsSerializerMessages_cs_init(OrgApacheXmlSerializerUtilsSerializerMessages_cs *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages_cs *new_OrgApacheXmlSerializerUtilsSerializerMessages_cs_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsSerializerMessages_cs *create_OrgApacheXmlSerializerUtilsSerializerMessages_cs_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsSerializerMessages_cs)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsSerializerMessages_cs")
