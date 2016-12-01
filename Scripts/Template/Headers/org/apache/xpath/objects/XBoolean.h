//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XBoolean.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXBoolean")
#ifdef RESTRICT_OrgApacheXpathObjectsXBoolean
#define INCLUDE_ALL_OrgApacheXpathObjectsXBoolean 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXBoolean 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXBoolean

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsXBoolean_) && (INCLUDE_ALL_OrgApacheXpathObjectsXBoolean || defined(INCLUDE_OrgApacheXpathObjectsXBoolean))
#define OrgApacheXpathObjectsXBoolean_

#define RESTRICT_OrgApacheXpathObjectsXObject 1
#define INCLUDE_OrgApacheXpathObjectsXObject 1
#include "../../../../org/apache/xpath/objects/XObject.h"

@class JavaLangBoolean;

/*!
 @brief This class represents an XPath boolean object, and is capable of
 converting the boolean to other types, such as a string.
  advanced
 */
@interface OrgApacheXpathObjectsXBoolean : OrgApacheXpathObjectsXObject

+ (jlong)serialVersionUID;

+ (OrgApacheXpathObjectsXBoolean *)S_TRUE;

+ (OrgApacheXpathObjectsXBoolean *)S_FALSE;

#pragma mark Public

/*!
 @brief Construct a XBoolean object.
 @param b Value of the boolean object
 */
- (instancetype)initWithBoolean:(jboolean)b;

/*!
 @brief Construct a XBoolean object.
 @param b Value of the boolean object
 */
- (instancetype)initWithJavaLangBoolean:(JavaLangBoolean *)b;

/*!
 @brief Cast result object to a boolean.
 @return The object value as a boolean
 */
- (jboolean)bool__;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare to this
 @return True if the two objects are equal
 @throws javax.xml.transform.TransformerException
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell that this is a CLASS_BOOLEAN.
 @return type of CLASS_BOOLEAN
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#BOOLEAN"
 */
- (NSString *)getTypeString;

/*!
 @brief Cast result object to a number.
 @return numeric value of the object value
 */
- (jdouble)num;

/*!
 @brief Return a java object that's closest to the representation
 that should be handed to an extension.
 @return The object's value as a java object
 */
- (id)object;

/*!
 @brief Cast result object to a string.
 @return The object's value as a string
 */
- (NSString *)str;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXBoolean)

inline jlong OrgApacheXpathObjectsXBoolean_get_serialVersionUID();
#define OrgApacheXpathObjectsXBoolean_serialVersionUID -2964933058866100881LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXBoolean, serialVersionUID, jlong)

/*!
 @brief A true boolean object so we don't have to keep creating them.
  internal
 */
inline OrgApacheXpathObjectsXBoolean *OrgApacheXpathObjectsXBoolean_get_S_TRUE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *OrgApacheXpathObjectsXBoolean_S_TRUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXBoolean, S_TRUE, OrgApacheXpathObjectsXBoolean *)

/*!
 @brief A true boolean object so we don't have to keep creating them.
  internal
 */
inline OrgApacheXpathObjectsXBoolean *OrgApacheXpathObjectsXBoolean_get_S_FALSE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *OrgApacheXpathObjectsXBoolean_S_FALSE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgApacheXpathObjectsXBoolean, S_FALSE, OrgApacheXpathObjectsXBoolean *)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXBoolean_initWithBoolean_(OrgApacheXpathObjectsXBoolean *self, jboolean b);

FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *new_OrgApacheXpathObjectsXBoolean_initWithBoolean_(jboolean b) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *create_OrgApacheXpathObjectsXBoolean_initWithBoolean_(jboolean b);

FOUNDATION_EXPORT void OrgApacheXpathObjectsXBoolean_initWithJavaLangBoolean_(OrgApacheXpathObjectsXBoolean *self, JavaLangBoolean *b);

FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *new_OrgApacheXpathObjectsXBoolean_initWithJavaLangBoolean_(JavaLangBoolean *b) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXBoolean *create_OrgApacheXpathObjectsXBoolean_initWithJavaLangBoolean_(JavaLangBoolean *b);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXBoolean)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXBoolean")
