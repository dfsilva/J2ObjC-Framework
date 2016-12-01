//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/WrongNumberArgsException.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsWrongNumberArgsException")
#ifdef RESTRICT_OrgApacheXpathFunctionsWrongNumberArgsException
#define INCLUDE_ALL_OrgApacheXpathFunctionsWrongNumberArgsException 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsWrongNumberArgsException 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsWrongNumberArgsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsWrongNumberArgsException_) && (INCLUDE_ALL_OrgApacheXpathFunctionsWrongNumberArgsException || defined(INCLUDE_OrgApacheXpathFunctionsWrongNumberArgsException))
#define OrgApacheXpathFunctionsWrongNumberArgsException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../../java/lang/Exception.h"

/*!
 @brief An exception that is thrown if the wrong number of arguments to an exception 
 are specified by the stylesheet.
  advanced
 */
@interface OrgApacheXpathFunctionsWrongNumberArgsException : JavaLangException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructor WrongNumberArgsException
 @param argsExpected Error message that tells the number of arguments that 
 were expected.
 */
- (instancetype)initWithNSString:(NSString *)argsExpected;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsWrongNumberArgsException)

inline jlong OrgApacheXpathFunctionsWrongNumberArgsException_get_serialVersionUID();
#define OrgApacheXpathFunctionsWrongNumberArgsException_serialVersionUID -4551577097576242432LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsWrongNumberArgsException, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsWrongNumberArgsException_initWithNSString_(OrgApacheXpathFunctionsWrongNumberArgsException *self, NSString *argsExpected);

FOUNDATION_EXPORT OrgApacheXpathFunctionsWrongNumberArgsException *new_OrgApacheXpathFunctionsWrongNumberArgsException_initWithNSString_(NSString *argsExpected) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsWrongNumberArgsException *create_OrgApacheXpathFunctionsWrongNumberArgsException_initWithNSString_(NSString *argsExpected);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsWrongNumberArgsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsWrongNumberArgsException")
