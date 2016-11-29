//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/Enum.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangEnum")
#ifdef RESTRICT_JavaLangEnum
#define INCLUDE_ALL_JavaLangEnum 0
#else
#define INCLUDE_ALL_JavaLangEnum 1
#endif
#undef RESTRICT_JavaLangEnum

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangEnum_) && (INCLUDE_ALL_JavaLangEnum || defined(INCLUDE_JavaLangEnum))
#define JavaLangEnum_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief The superclass of all enumerated types.
 Actual enumeration types inherit from
 this class, but extending this class does not make a class an enumeration
 type, since the compiler needs to generate special information for it.
 */
@interface JavaLangEnum : NSObject < JavaIoSerializable, JavaLangComparable >

#pragma mark Public

/*!
 @brief Compares this object to the specified enum object to determine their
 relative order.
 This method compares the object's ordinal values, that
 is, their position in the enum declaration.
 @param o
 the enum object to compare this object to.
 @return a negative value if the ordinal value of this enum constant is
 less than the ordinal value of <code>o</code>; 0 if the ordinal
 values of this enum constant and <code>o</code> are equal; a positive
 value if the ordinal value of this enum constant is greater than
 the ordinal value of <code>o</code>.
 - seealso: java.lang.Comparable
 */
- (jint)compareToWithId:(JavaLangEnum *)o;

/*!
 @brief Compares this object with the specified object and indicates if they are
 equal.
 In order to be equal, <code>object</code> must be identical to this
 enum constant.
 @param other
 the object to compare this enum constant with.
 @return <code>true</code> if the specified object is equal to this
 <code>Enum</code>; <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the enum constant's declaring class.
 @return the class object representing the constant's enum type.
 */
- (IOSClass *)getDeclaringClass;

/*!
 @brief Returns a shared, mutable array containing the constants of this enum.
 It
 is an error to modify the returned array.
 */
+ (IOSObjectArray *)getSharedConstantsWithIOSClass:(IOSClass *)enumType;

- (NSUInteger)hash;

/*!
 @brief Returns the name of this enum constant.
 The name is the field as it
 appears in the <code>enum</code> declaration.
 @return the name of this enum constant.
 - seealso: #toString()
 */
- (NSString *)name;

/*!
 @brief Returns the position of the enum constant in the declaration.
 The first
 constant has an ordinal value of zero.
 @return the ordinal value of this enum constant.
 */
- (jint)ordinal;

/*!
 @brief Returns a string containing a concise, human-readable description of this
 object.
 In this case, the enum constant's name is returned.
 @return a printable representation of this object.
 */
- (NSString *)description;

/*!
 @brief Returns the constant with the specified name of the specified enum type.
 @param enumType
 the class of the enumerated type to search for the constant
 value.
 @param name
 the name of the constant value to find.
 @return the enum constant.
 @throws NullPointerException
 if either <code>enumType</code> or <code>name</code> are <code>null</code>.
 @throws IllegalArgumentException
 if <code>enumType</code> is not an enumerated type or does not
 have a constant value called <code>name</code>.
 */
+ (JavaLangEnum *)valueOfWithIOSClass:(IOSClass *)enumType
                         withNSString:(NSString *)name;

#pragma mark Protected

/*!
 @brief Constructor for constants of enum subtypes.
 @param name
 the enum constant's declared name.
 @param ordinal
 the enum constant's ordinal, which corresponds to its position
 in the enum declaration, starting at zero.
 */
- (instancetype)initWithNSString:(NSString *)name
                         withInt:(jint)ordinal;

/*!
 @brief <code>Enum</code> objects are singletons, they may not be cloned.
 This method
 always throws a <code>CloneNotSupportedException</code>.
 @return does not return.
 @throws CloneNotSupportedException
 is always thrown.
 */
- (id)clone;

/*!
 @brief Enum types may not have finalizers.
 @since 1.6
 */
- (void)javaFinalize;

#pragma mark Package-Private

@end

J2OBJC_STATIC_INIT(JavaLangEnum)

FOUNDATION_EXPORT void JavaLangEnum_initWithNSString_withInt_(JavaLangEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT JavaLangEnum *JavaLangEnum_valueOfWithIOSClass_withNSString_(IOSClass *enumType, NSString *name);

FOUNDATION_EXPORT IOSObjectArray *JavaLangEnum_getSharedConstantsWithIOSClass_(IOSClass *enumType);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangEnum)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangEnum")
