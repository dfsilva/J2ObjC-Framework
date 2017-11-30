//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/FileNameMap.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetFileNameMap")
#ifdef RESTRICT_JavaNetFileNameMap
#define INCLUDE_ALL_JavaNetFileNameMap 0
#else
#define INCLUDE_ALL_JavaNetFileNameMap 1
#endif
#undef RESTRICT_JavaNetFileNameMap

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetFileNameMap_) && (INCLUDE_ALL_JavaNetFileNameMap || defined(INCLUDE_JavaNetFileNameMap))
#define JavaNetFileNameMap_

/*!
 @brief A simple interface which provides a mechanism to map
  between a file name and a MIME type string.
 @author Steven B. Byrne
 @since JDK1.1
 */
@protocol JavaNetFileNameMap < JavaObject >

/*!
 @brief Gets the MIME type for the specified file name.
 @param fileName the specified file name
 @return a <code>String</code> indicating the MIME
  type for the specified file name.
 */
- (NSString *)getContentTypeForWithNSString:(NSString *)fileName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetFileNameMap)

J2OBJC_TYPE_LITERAL_HEADER(JavaNetFileNameMap)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetFileNameMap")
