//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/BoolStack.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsBoolStack")
#ifdef RESTRICT_OrgApacheXmlUtilsBoolStack
#define INCLUDE_ALL_OrgApacheXmlUtilsBoolStack 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsBoolStack 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsBoolStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsBoolStack_) && (INCLUDE_ALL_OrgApacheXmlUtilsBoolStack || defined(INCLUDE_OrgApacheXmlUtilsBoolStack))
#define OrgApacheXmlUtilsBoolStack_

/*!
 @brief Simple stack for boolean values.
  internal
 */
@interface OrgApacheXmlUtilsBoolStack : NSObject < NSCopying >

#pragma mark Public

/*!
 @brief Default constructor.
 Note that the default
 block size is very small, for small lists.
 */
- (instancetype)init;

/*!
 @brief Construct a IntVector, using the given block size.
 @param size array size to allocate
 */
- (instancetype)initWithInt:(jint)size;

/*!
 @brief Clears the stack.
 */
- (void)clear;

- (id)clone;

/*!
 @brief Tests if this stack is empty.
 @return <code>true</code> if this stack is empty;
 <code>false</code> otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 @return the object at the top of this stack.
 @throws EmptyStackException  if this stack is empty.
 */
- (jboolean)peek;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 If the stack is empty, it returns false.
 @return the object at the top of this stack.
 */
- (jboolean)peekOrFalse;

/*!
 @brief Looks at the object at the top of this stack without removing it
 from the stack.
 If the stack is empty, it returns true.
 @return the object at the top of this stack.
 */
- (jboolean)peekOrTrue;

/*!
 @brief Removes the object at the top of this stack and returns that
 object as the value of this function.
 @return The object at the top of this stack.
 @throws EmptyStackException  if this stack is empty.
 */
- (jboolean)pop;

/*!
 @brief Removes the object at the top of this stack and returns the
 next object at the top as the value of this function.
 @return Next object to the top or false if none there
 */
- (jboolean)popAndTop;

/*!
 @brief Pushes an item onto the top of this stack.
 @param val the boolean to be pushed onto this stack.
 @return the <code>item</code> argument.
 */
- (jboolean)pushWithBoolean:(jboolean)val;

/*!
 @brief Set the item at the top of this stack
 @param b Object to set at the top of this stack
 */
- (void)setTopWithBoolean:(jboolean)b;

/*!
 @brief Get the length of the list.
 @return Current length of the list
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsBoolStack)

FOUNDATION_EXPORT void OrgApacheXmlUtilsBoolStack_init(OrgApacheXmlUtilsBoolStack *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsBoolStack *new_OrgApacheXmlUtilsBoolStack_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsBoolStack *create_OrgApacheXmlUtilsBoolStack_init();

FOUNDATION_EXPORT void OrgApacheXmlUtilsBoolStack_initWithInt_(OrgApacheXmlUtilsBoolStack *self, jint size);

FOUNDATION_EXPORT OrgApacheXmlUtilsBoolStack *new_OrgApacheXmlUtilsBoolStack_initWithInt_(jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsBoolStack *create_OrgApacheXmlUtilsBoolStack_initWithInt_(jint size);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsBoolStack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsBoolStack")
