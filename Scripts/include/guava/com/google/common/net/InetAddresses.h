//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/net/InetAddresses.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonNetInetAddresses")
#ifdef RESTRICT_ComGoogleCommonNetInetAddresses
#define INCLUDE_ALL_ComGoogleCommonNetInetAddresses 0
#else
#define INCLUDE_ALL_ComGoogleCommonNetInetAddresses 1
#endif
#undef RESTRICT_ComGoogleCommonNetInetAddresses

#if !defined (ComGoogleCommonNetInetAddresses_) && (INCLUDE_ALL_ComGoogleCommonNetInetAddresses || defined(INCLUDE_ComGoogleCommonNetInetAddresses))
#define ComGoogleCommonNetInetAddresses_

@class ComGoogleCommonNetInetAddresses_TeredoInfo;
@class IOSByteArray;
@class JavaNetInet4Address;
@class JavaNetInet6Address;
@class JavaNetInetAddress;

@interface ComGoogleCommonNetInetAddresses : NSObject

#pragma mark Public

+ (jint)coerceToIntegerWithJavaNetInetAddress:(JavaNetInetAddress *)ip;

+ (JavaNetInetAddress *)decrementWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (JavaNetInetAddress *)forStringWithNSString:(NSString *)ipString;

+ (JavaNetInetAddress *)forUriStringWithNSString:(NSString *)hostAddr;

+ (JavaNetInet4Address *)fromIntegerWithInt:(jint)address;

+ (JavaNetInetAddress *)fromLittleEndianByteArrayWithByteArray:(IOSByteArray *)addr;

+ (JavaNetInet4Address *)get6to4IPv4AddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (JavaNetInet4Address *)getCoercedIPv4AddressWithJavaNetInetAddress:(JavaNetInetAddress *)ip;

+ (JavaNetInet4Address *)getCompatIPv4AddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (JavaNetInet4Address *)getEmbeddedIPv4ClientAddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (JavaNetInet4Address *)getIsatapIPv4AddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (ComGoogleCommonNetInetAddresses_TeredoInfo *)getTeredoInfoWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (jboolean)hasEmbeddedIPv4ClientAddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (JavaNetInetAddress *)incrementWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (jboolean)is6to4AddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (jboolean)isCompatIPv4AddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (jboolean)isInetAddressWithNSString:(NSString *)ipString;

+ (jboolean)isIsatapAddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (jboolean)isMappedIPv4AddressWithNSString:(NSString *)ipString;

+ (jboolean)isMaximumWithJavaNetInetAddress:(JavaNetInetAddress *)address;

+ (jboolean)isTeredoAddressWithJavaNetInet6Address:(JavaNetInet6Address *)ip;

+ (jboolean)isUriInetAddressWithNSString:(NSString *)ipString;

+ (NSString *)toAddrStringWithJavaNetInetAddress:(JavaNetInetAddress *)ip;

+ (NSString *)toUriStringWithJavaNetInetAddress:(JavaNetInetAddress *)ip;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonNetInetAddresses)

FOUNDATION_EXPORT JavaNetInetAddress *ComGoogleCommonNetInetAddresses_forStringWithNSString_(NSString *ipString);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isInetAddressWithNSString_(NSString *ipString);

FOUNDATION_EXPORT NSString *ComGoogleCommonNetInetAddresses_toAddrStringWithJavaNetInetAddress_(JavaNetInetAddress *ip);

FOUNDATION_EXPORT NSString *ComGoogleCommonNetInetAddresses_toUriStringWithJavaNetInetAddress_(JavaNetInetAddress *ip);

FOUNDATION_EXPORT JavaNetInetAddress *ComGoogleCommonNetInetAddresses_forUriStringWithNSString_(NSString *hostAddr);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isUriInetAddressWithNSString_(NSString *ipString);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isCompatIPv4AddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_getCompatIPv4AddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_is6to4AddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_get6to4IPv4AddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isTeredoAddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT ComGoogleCommonNetInetAddresses_TeredoInfo *ComGoogleCommonNetInetAddresses_getTeredoInfoWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isIsatapAddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_getIsatapIPv4AddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_hasEmbeddedIPv4ClientAddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_getEmbeddedIPv4ClientAddressWithJavaNetInet6Address_(JavaNetInet6Address *ip);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isMappedIPv4AddressWithNSString_(NSString *ipString);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_getCoercedIPv4AddressWithJavaNetInetAddress_(JavaNetInetAddress *ip);

FOUNDATION_EXPORT jint ComGoogleCommonNetInetAddresses_coerceToIntegerWithJavaNetInetAddress_(JavaNetInetAddress *ip);

FOUNDATION_EXPORT JavaNetInet4Address *ComGoogleCommonNetInetAddresses_fromIntegerWithInt_(jint address);

FOUNDATION_EXPORT JavaNetInetAddress *ComGoogleCommonNetInetAddresses_fromLittleEndianByteArrayWithByteArray_(IOSByteArray *addr);

FOUNDATION_EXPORT JavaNetInetAddress *ComGoogleCommonNetInetAddresses_decrementWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT JavaNetInetAddress *ComGoogleCommonNetInetAddresses_incrementWithJavaNetInetAddress_(JavaNetInetAddress *address);

FOUNDATION_EXPORT jboolean ComGoogleCommonNetInetAddresses_isMaximumWithJavaNetInetAddress_(JavaNetInetAddress *address);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetInetAddresses)

#endif

#if !defined (ComGoogleCommonNetInetAddresses_TeredoInfo_) && (INCLUDE_ALL_ComGoogleCommonNetInetAddresses || defined(INCLUDE_ComGoogleCommonNetInetAddresses_TeredoInfo))
#define ComGoogleCommonNetInetAddresses_TeredoInfo_

@class JavaNetInet4Address;

@interface ComGoogleCommonNetInetAddresses_TeredoInfo : NSObject

#pragma mark Public

- (instancetype)initWithJavaNetInet4Address:(JavaNetInet4Address *)server
                    withJavaNetInet4Address:(JavaNetInet4Address *)client
                                    withInt:(jint)port
                                    withInt:(jint)flags;

- (JavaNetInet4Address *)getClient;

- (jint)getFlags;

- (jint)getPort;

- (JavaNetInet4Address *)getServer;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonNetInetAddresses_TeredoInfo)

FOUNDATION_EXPORT void ComGoogleCommonNetInetAddresses_TeredoInfo_initWithJavaNetInet4Address_withJavaNetInet4Address_withInt_withInt_(ComGoogleCommonNetInetAddresses_TeredoInfo *self, JavaNetInet4Address *server, JavaNetInet4Address *client, jint port, jint flags);

FOUNDATION_EXPORT ComGoogleCommonNetInetAddresses_TeredoInfo *new_ComGoogleCommonNetInetAddresses_TeredoInfo_initWithJavaNetInet4Address_withJavaNetInet4Address_withInt_withInt_(JavaNetInet4Address *server, JavaNetInet4Address *client, jint port, jint flags) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonNetInetAddresses_TeredoInfo *create_ComGoogleCommonNetInetAddresses_TeredoInfo_initWithJavaNetInet4Address_withJavaNetInet4Address_withInt_withInt_(JavaNetInet4Address *server, JavaNetInet4Address *client, jint port, jint flags);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonNetInetAddresses_TeredoInfo)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonNetInetAddresses")