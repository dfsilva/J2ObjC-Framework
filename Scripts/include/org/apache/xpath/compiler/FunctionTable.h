//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/compiler/FunctionTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathCompilerFunctionTable")
#ifdef RESTRICT_OrgApacheXpathCompilerFunctionTable
#define INCLUDE_ALL_OrgApacheXpathCompilerFunctionTable 0
#else
#define INCLUDE_ALL_OrgApacheXpathCompilerFunctionTable 1
#endif
#undef RESTRICT_OrgApacheXpathCompilerFunctionTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathCompilerFunctionTable_) && (INCLUDE_ALL_OrgApacheXpathCompilerFunctionTable || defined(INCLUDE_OrgApacheXpathCompilerFunctionTable))
#define OrgApacheXpathCompilerFunctionTable_

@class IOSClass;
@class OrgApacheXpathFunctionsFunction;

/*!
 @brief The function table for XPath.
 */
@interface OrgApacheXpathCompilerFunctionTable : NSObject

+ (jint)FUNC_CURRENT;

+ (jint)FUNC_LAST;

+ (jint)FUNC_POSITION;

+ (jint)FUNC_COUNT;

+ (jint)FUNC_ID;

+ (jint)FUNC_KEY;

+ (jint)FUNC_LOCAL_PART;

+ (jint)FUNC_NAMESPACE;

+ (jint)FUNC_QNAME;

+ (jint)FUNC_GENERATE_ID;

+ (jint)FUNC_NOT;

+ (jint)FUNC_TRUE;

+ (jint)FUNC_FALSE;

+ (jint)FUNC_BOOLEAN;

+ (jint)FUNC_NUMBER;

+ (jint)FUNC_FLOOR;

+ (jint)FUNC_CEILING;

+ (jint)FUNC_ROUND;

+ (jint)FUNC_SUM;

+ (jint)FUNC_STRING;

+ (jint)FUNC_STARTS_WITH;

+ (jint)FUNC_CONTAINS;

+ (jint)FUNC_SUBSTRING_BEFORE;

+ (jint)FUNC_SUBSTRING_AFTER;

+ (jint)FUNC_NORMALIZE_SPACE;

+ (jint)FUNC_TRANSLATE;

+ (jint)FUNC_CONCAT;

+ (jint)FUNC_SUBSTRING;

+ (jint)FUNC_STRING_LENGTH;

+ (jint)FUNC_SYSTEM_PROPERTY;

+ (jint)FUNC_LANG;

+ (jint)FUNC_EXT_FUNCTION_AVAILABLE;

+ (jint)FUNC_EXT_ELEM_AVAILABLE;

+ (jint)FUNC_UNPARSED_ENTITY_URI;

+ (jint)FUNC_DOCLOCATION;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Tell if a built-in, non-namespaced function is available.
 @param methName The local name of the function.
 @return True if the function can be executed.
 */
- (jboolean)functionAvailableWithNSString:(NSString *)methName;

/*!
 @brief Install a built-in function.
 @param name The unqualified name of the function, must not be null
 @param func A Implementation of an XPath Function object.
 @return the position of the function in the internal index.
 */
- (jint)installFunctionWithNSString:(NSString *)name
                       withIOSClass:(IOSClass *)func;

#pragma mark Package-Private

/*!
 @brief Obtain a new Function object from a function ID.
 @param which  The function ID, which may correspond to one of the FUNC_XXX 
 values found in <code>org.apache.xpath.compiler.FunctionTable</code>, but may 
 be a value installed by an external module.
 @return a a new Function instance.
 @throws javax.xml.transform.TransformerException if ClassNotFoundException, 
 IllegalAccessException, or InstantiationException is thrown.
 */
- (OrgApacheXpathFunctionsFunction *)getFunctionWithInt:(jint)which;

/*!
 @brief Obtain a function ID from a given function name
 @param key the function name in a java.lang.String format.
 @return a function ID, which may correspond to one of the FUNC_XXX values
 found in <code>org.apache.xpath.compiler.FunctionTable</code>, but may be a 
 value installed by an external module.
 */
- (id)getFunctionIDWithNSString:(NSString *)key;

/*!
 @brief Return the name of the a function in the static table.
 Needed to avoid
 making the table publicly available.
 */
- (NSString *)getFunctionNameWithInt:(jint)funcID;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathCompilerFunctionTable)

/*!
 @brief The 'current()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_CURRENT();
#define OrgApacheXpathCompilerFunctionTable_FUNC_CURRENT 0
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_CURRENT, jint)

/*!
 @brief The 'last()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_LAST();
#define OrgApacheXpathCompilerFunctionTable_FUNC_LAST 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_LAST, jint)

/*!
 @brief The 'position()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_POSITION();
#define OrgApacheXpathCompilerFunctionTable_FUNC_POSITION 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_POSITION, jint)

/*!
 @brief The 'count()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_COUNT();
#define OrgApacheXpathCompilerFunctionTable_FUNC_COUNT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_COUNT, jint)

/*!
 @brief The 'id()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_ID();
#define OrgApacheXpathCompilerFunctionTable_FUNC_ID 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_ID, jint)

/*!
 @brief The 'key()' id (XSLT).
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_KEY();
#define OrgApacheXpathCompilerFunctionTable_FUNC_KEY 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_KEY, jint)

/*!
 @brief The 'local-name()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_LOCAL_PART();
#define OrgApacheXpathCompilerFunctionTable_FUNC_LOCAL_PART 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_LOCAL_PART, jint)

/*!
 @brief The 'namespace-uri()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_NAMESPACE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_NAMESPACE 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_NAMESPACE, jint)

/*!
 @brief The 'name()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_QNAME();
#define OrgApacheXpathCompilerFunctionTable_FUNC_QNAME 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_QNAME, jint)

/*!
 @brief The 'generate-id()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_GENERATE_ID();
#define OrgApacheXpathCompilerFunctionTable_FUNC_GENERATE_ID 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_GENERATE_ID, jint)

/*!
 @brief The 'not()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_NOT();
#define OrgApacheXpathCompilerFunctionTable_FUNC_NOT 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_NOT, jint)

/*!
 @brief The 'true()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_TRUE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_TRUE 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_TRUE, jint)

/*!
 @brief The 'false()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_FALSE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_FALSE 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_FALSE, jint)

/*!
 @brief The 'boolean()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_BOOLEAN();
#define OrgApacheXpathCompilerFunctionTable_FUNC_BOOLEAN 14
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_BOOLEAN, jint)

/*!
 @brief The 'number()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_NUMBER();
#define OrgApacheXpathCompilerFunctionTable_FUNC_NUMBER 15
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_NUMBER, jint)

/*!
 @brief The 'floor()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_FLOOR();
#define OrgApacheXpathCompilerFunctionTable_FUNC_FLOOR 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_FLOOR, jint)

/*!
 @brief The 'ceiling()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_CEILING();
#define OrgApacheXpathCompilerFunctionTable_FUNC_CEILING 17
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_CEILING, jint)

/*!
 @brief The 'round()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_ROUND();
#define OrgApacheXpathCompilerFunctionTable_FUNC_ROUND 18
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_ROUND, jint)

/*!
 @brief The 'sum()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_SUM();
#define OrgApacheXpathCompilerFunctionTable_FUNC_SUM 19
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_SUM, jint)

/*!
 @brief The 'string()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_STRING();
#define OrgApacheXpathCompilerFunctionTable_FUNC_STRING 20
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_STRING, jint)

/*!
 @brief The 'starts-with()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_STARTS_WITH();
#define OrgApacheXpathCompilerFunctionTable_FUNC_STARTS_WITH 21
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_STARTS_WITH, jint)

/*!
 @brief The 'contains()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_CONTAINS();
#define OrgApacheXpathCompilerFunctionTable_FUNC_CONTAINS 22
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_CONTAINS, jint)

/*!
 @brief The 'substring-before()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_SUBSTRING_BEFORE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_SUBSTRING_BEFORE 23
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_SUBSTRING_BEFORE, jint)

/*!
 @brief The 'substring-after()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_SUBSTRING_AFTER();
#define OrgApacheXpathCompilerFunctionTable_FUNC_SUBSTRING_AFTER 24
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_SUBSTRING_AFTER, jint)

/*!
 @brief The 'normalize-space()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_NORMALIZE_SPACE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_NORMALIZE_SPACE 25
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_NORMALIZE_SPACE, jint)

/*!
 @brief The 'translate()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_TRANSLATE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_TRANSLATE 26
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_TRANSLATE, jint)

/*!
 @brief The 'concat()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_CONCAT();
#define OrgApacheXpathCompilerFunctionTable_FUNC_CONCAT 27
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_CONCAT, jint)

/*!
 @brief The 'substring()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_SUBSTRING();
#define OrgApacheXpathCompilerFunctionTable_FUNC_SUBSTRING 29
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_SUBSTRING, jint)

/*!
 @brief The 'string-length()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_STRING_LENGTH();
#define OrgApacheXpathCompilerFunctionTable_FUNC_STRING_LENGTH 30
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_STRING_LENGTH, jint)

/*!
 @brief The 'system-property()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_SYSTEM_PROPERTY();
#define OrgApacheXpathCompilerFunctionTable_FUNC_SYSTEM_PROPERTY 31
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_SYSTEM_PROPERTY, jint)

/*!
 @brief The 'lang()' id.
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_LANG();
#define OrgApacheXpathCompilerFunctionTable_FUNC_LANG 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_LANG, jint)

/*!
 @brief The 'function-available()' id (XSLT).
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_EXT_FUNCTION_AVAILABLE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_EXT_FUNCTION_AVAILABLE 33
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_EXT_FUNCTION_AVAILABLE, jint)

/*!
 @brief The 'element-available()' id (XSLT).
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_EXT_ELEM_AVAILABLE();
#define OrgApacheXpathCompilerFunctionTable_FUNC_EXT_ELEM_AVAILABLE 34
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_EXT_ELEM_AVAILABLE, jint)

/*!
 @brief The 'unparsed-entity-uri()' id (XSLT).
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_UNPARSED_ENTITY_URI();
#define OrgApacheXpathCompilerFunctionTable_FUNC_UNPARSED_ENTITY_URI 36
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_UNPARSED_ENTITY_URI, jint)

/*!
 @brief The 'document-location()' id (Proprietary).
 */
inline jint OrgApacheXpathCompilerFunctionTable_get_FUNC_DOCLOCATION();
#define OrgApacheXpathCompilerFunctionTable_FUNC_DOCLOCATION 35
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathCompilerFunctionTable, FUNC_DOCLOCATION, jint)

FOUNDATION_EXPORT void OrgApacheXpathCompilerFunctionTable_init(OrgApacheXpathCompilerFunctionTable *self);

FOUNDATION_EXPORT OrgApacheXpathCompilerFunctionTable *new_OrgApacheXpathCompilerFunctionTable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathCompilerFunctionTable *create_OrgApacheXpathCompilerFunctionTable_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathCompilerFunctionTable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathCompilerFunctionTable")
