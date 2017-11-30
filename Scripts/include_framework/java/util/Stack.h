//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Stack.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStack")
#ifdef RESTRICT_JavaUtilStack
#define INCLUDE_ALL_JavaUtilStack 0
#else
#define INCLUDE_ALL_JavaUtilStack 1
#endif
#undef RESTRICT_JavaUtilStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilStack_) && (INCLUDE_ALL_JavaUtilStack || defined(INCLUDE_JavaUtilStack))
#define JavaUtilStack_

#define RESTRICT_JavaUtilVector 1
#define INCLUDE_JavaUtilVector 1
#include "../../java/util/Vector.h"

@protocol JavaUtilCollection;

/*!
 @brief The <code>Stack</code> class represents a last-in-first-out
  (LIFO) stack of objects.It extends class <tt>Vector</tt> with five
  operations that allow a vector to be treated as a stack.
 The usual 
 <tt>push</tt> and <tt>pop</tt> operations are provided, as well as a
  method to <tt>peek</tt> at the top item on the stack, a method to test
  for whether the stack is <tt>empty</tt>, and a method to <tt>search</tt>
  the stack for an item and discover how far it is from the top. 
 <p>
  When a stack is first created, it contains no items. 
 <p>A more complete and consistent set of LIFO stack operations is
  provided by the <code>Deque</code> interface and its implementations, which
  should be used in preference to this class.  For example: 
 @code
     Deque<Integer> stack = new ArrayDeque<Integer>();
 
@endcode
 @author Jonathan Payne
 @since JDK1.0
 */
@interface JavaUtilStack : JavaUtilVector

#pragma mark Public

/*!
 @brief Creates an empty Stack.
 */
- (instancetype)init;

/*!
 @brief Tests if this stack is empty.
 @return <code>true</code> if and only if this stack contains
           no items; <code>false</code> otherwise.
 */
- (jboolean)empty;

/*!
 @brief Looks at the object at the top of this stack without removing it
  from the stack.
 @return the object at the top of this stack (the last item
           of the <tt>Vector</tt> object).
 @throw EmptyStackExceptionif this stack is empty.
 */
- (id)peek;

/*!
 @brief Removes the object at the top of this stack and returns that
  object as the value of this function.
 @return The object at the top of this stack (the last item
           of the <tt>Vector</tt> object).
 @throw EmptyStackExceptionif this stack is empty.
 */
- (id)pop;

/*!
 @brief Pushes an item onto the top of this stack.This has exactly
  the same effect as: 
 <blockquote>@code

  addElement(item)
@endcode</blockquote>
 @param item the item to be pushed onto this stack.
 @return the <code>item</code> argument.
 - seealso: java.util.Vector
 */
- (id)pushWithId:(id)item;

/*!
 @brief Returns the 1-based position where an object is on this stack.
 If the object <tt>o</tt> occurs as an item in this stack, this
  method returns the distance from the top of the stack of the
  occurrence nearest the top of the stack; the topmost item on the
  stack is considered to be at distance <tt>1</tt>. The <tt>equals</tt>
  method is used to compare <tt>o</tt> to the
  items in this stack.
 @param o the desired object.
 @return the 1-based position from the top of the stack where
           the object is located; the return value <code>-1</code>
           indicates that the object is not on the stack.
 */
- (jint)searchWithId:(id)o;

#pragma mark Package-Private

// Disallowed inherited constructors, do not use.

- (instancetype)initWithInt:(jint)arg0 NS_UNAVAILABLE;

- (instancetype)initWithInt:(jint)arg0
                    withInt:(jint)arg1 NS_UNAVAILABLE;

- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStack)

FOUNDATION_EXPORT void JavaUtilStack_init(JavaUtilStack *self);

FOUNDATION_EXPORT JavaUtilStack *new_JavaUtilStack_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilStack *create_JavaUtilStack_init(void);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilStack")
