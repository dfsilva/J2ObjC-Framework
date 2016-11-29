//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/HugeEnumSet.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilHugeEnumSet")
#ifdef RESTRICT_JavaUtilHugeEnumSet
#define INCLUDE_ALL_JavaUtilHugeEnumSet 0
#else
#define INCLUDE_ALL_JavaUtilHugeEnumSet 1
#endif
#undef RESTRICT_JavaUtilHugeEnumSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilHugeEnumSet_) && (INCLUDE_ALL_JavaUtilHugeEnumSet || defined(INCLUDE_JavaUtilHugeEnumSet))
#define JavaUtilHugeEnumSet_

#define RESTRICT_JavaUtilEnumSet 1
#define INCLUDE_JavaUtilEnumSet 1
#include "java/util/EnumSet.h"

@class IOSClass;
@class IOSObjectArray;
@class JavaLangEnum;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

/*!
 @brief A concrete EnumSet for enums with more than 64 elements.
 */
@interface JavaUtilHugeEnumSet : JavaUtilEnumSet

#pragma mark Public

- (jboolean)addWithId:(JavaLangEnum *)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (JavaUtilHugeEnumSet *)clone;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEqual:(id)object;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

#pragma mark Protected

- (void)complement;

#pragma mark Package-Private

/*!
 @brief Constructs an instance.
 @param elementType non-null; type of the elements
 @param enums non-null; pre-populated array of constants in ordinal
 order
 */
- (instancetype)initWithIOSClass:(IOSClass *)elementType
           withJavaLangEnumArray:(IOSObjectArray *)enums;

- (void)setRangeWithJavaLangEnum:(JavaLangEnum *)start
                withJavaLangEnum:(JavaLangEnum *)end;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilHugeEnumSet)

FOUNDATION_EXPORT void JavaUtilHugeEnumSet_initWithIOSClass_withJavaLangEnumArray_(JavaUtilHugeEnumSet *self, IOSClass *elementType, IOSObjectArray *enums);

FOUNDATION_EXPORT JavaUtilHugeEnumSet *new_JavaUtilHugeEnumSet_initWithIOSClass_withJavaLangEnumArray_(IOSClass *elementType, IOSObjectArray *enums) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilHugeEnumSet *create_JavaUtilHugeEnumSet_initWithIOSClass_withJavaLangEnumArray_(IOSClass *elementType, IOSObjectArray *enums);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilHugeEnumSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilHugeEnumSet")
