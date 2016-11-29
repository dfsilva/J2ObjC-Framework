//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/VariableStack.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathVariableStack")
#ifdef RESTRICT_OrgApacheXpathVariableStack
#define INCLUDE_ALL_OrgApacheXpathVariableStack 0
#else
#define INCLUDE_ALL_OrgApacheXpathVariableStack 1
#endif
#undef RESTRICT_OrgApacheXpathVariableStack

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathVariableStack_) && (INCLUDE_ALL_OrgApacheXpathVariableStack || defined(INCLUDE_OrgApacheXpathVariableStack))
#define OrgApacheXpathVariableStack_

@class IOSIntArray;
@class IOSObjectArray;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Defines a class to keep track of a stack for
 template arguments and variables.
 <p>This has been changed from the previous incarnations of this
 class to be fairly low level.</p>
  internal
 */
@interface OrgApacheXpathVariableStack : NSObject < NSCopying > {
 @public
  /*!
   @brief The stack frame where all variables and params will be kept.
   */
  IOSObjectArray *_stackFrames_;
  /*!
   @brief The top of the stack frame (<code>_stackFrames</code>).
   */
  jint _frameTop_;
  /*!
   @brief The stack of frame positions.
   I call 'em links because of distant
 <a href="http://math.millikin.edu/mprogers/Courses/currentCourses/CS481-ComputerArchitecture/cs481.Motorola68000.html">
 Motorola 68000 assembler</a> memories.  :-)
   */
  IOSIntArray *_links_;
  /*!
   @brief The top of the links stack.
   */
  jint _linksTop_;
}

+ (jint)CLEARLIMITATION;

#pragma mark Public

/*!
 @brief Constructor for a variable stack.
 */
- (instancetype)init;

/*!
 @brief Constructor for a variable stack.
 @param initStackSize The initial stack size.  Must be at least one.  The
 stack can grow if needed.
 */
- (instancetype)initWithInt:(jint)initStackSize;

/*!
 @brief Use this to clear the variables in a section of the stack.
 This is
 used to clear the parameter section of the stack, so that default param
 values can tell if they've already been set.  It is important to note that
 this function has a 1K limitation.
 @param start The start position, relative to the current local stack frame.
 @param len The number of slots to be cleared.
 */
- (void)clearLocalSlotsWithInt:(jint)start
                       withInt:(jint)len;

/*!
 @brief Returns a clone of this variable stack.
 @return a clone of this variable stack.
 @throws CloneNotSupportedException
 */
- (id)clone;

/*!
 @brief Get the element at the given index, regardless of stackframe.
 @param i index from zero.
 @return The item at the given index.
 */
- (OrgApacheXpathObjectsXObject *)elementAtWithInt:(jint)i;

/*!
 @brief Get a global variable or parameter from the global stack frame.
 @param xctxt The XPath context, which must be passed in order to
 lazy evaluate variables.
 @param index Global variable index relative to the global stack
 frame bottom.
 @return The value of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getGlobalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                          withInt:(jint)index;

/*!
 @brief Get a global variable or parameter from the global stack frame.
 @param xctxt The XPath context, which must be passed in order to
 lazy evaluate variables.
 @param index Global variable index relative to the global stack
 frame bottom.
 @return The value of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getGlobalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                          withInt:(jint)index
                                                                      withBoolean:(jboolean)destructiveOK;

/*!
 @brief Get a local variable or parameter in the current stack frame.
 @param index Local variable index relative to the given
 frame bottom.
 NEEDSDOC @@param frame
 @return The value of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getLocalVariableWithInt:(jint)index
                                                  withInt:(jint)frame;

/*!
 @brief Get a local variable or parameter in the current stack frame.
 @param xctxt The XPath context, which must be passed in order to
 lazy evaluate variables.
 @param index Local variable index relative to the current stack
 frame bottom.
 @return The value of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getLocalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                         withInt:(jint)index;

/*!
 @brief Get a local variable or parameter in the current stack frame.
 @param xctxt The XPath context, which must be passed in order to
 lazy evaluate variables.
 @param index Local variable index relative to the current stack
 frame bottom.
 @return The value of the variable.
 @throws TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getLocalVariableWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                         withInt:(jint)index
                                                                     withBoolean:(jboolean)destructiveOK;

/*!
 @brief Get the position from where the search should start,
 which is either the searchStart property, or the top
 of the stack if that value is -1.
 @return The current stack frame position.
 */
- (jint)getStackFrame;

/*!
 @brief Get a variable based on it's qualified name.
 This is for external use only.
 @param xctxt The XPath context, which must be passed in order to
 lazy evaluate variables.
 @param qname The qualified name of the variable.
 @return The evaluated value of the variable.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)getVariableOrParamWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                        withOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)qname;

/*!
 @brief Tell if a local variable has been set or not.
 @param index Local variable index relative to the current stack
 frame bottom.
 @return true if the value at the index is not null.
 @throws TransformerException
 */
- (jboolean)isLocalSetWithInt:(jint)index;

/*!
 @brief Allocates memory (called a stackframe) on the stack; used to store
 local variables and parameter arguments.
 <p>I use the link/unlink concept because of distant
 <a href="http://math.millikin.edu/mprogers/Courses/currentCourses/CS481-ComputerArchitecture/cs481.Motorola68000.html">
 Motorola 68000 assembler</a> memories.</p>
 @param size The size of the stack frame allocation.  This ammount should
 normally be the maximum number of variables that you can have allocated
 at one time in the new stack frame.
 @return The bottom of the stack frame, from where local variable addressing
 should start from.
 */
- (jint)linkWithInt:(jint)size;

/*!
 @brief Reset the stack to a start position.
 */
- (void)reset;

/*!
 @brief Set a global variable or parameter in the global stack frame.
 @param index Local variable index relative to the global stack frame
 bottom.
 @param val The value of the variable that is being set.
 */
- (void)setGlobalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

/*!
 @brief Set a local variable or parameter in the current stack frame.
 @param index Local variable index relative to the current stack
 frame bottom.
 @param val The value of the variable that is being set.
 */
- (void)setLocalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val;

/*!
 @brief Set a local variable or parameter in the specified stack frame.
 @param index Local variable index relative to the current stack
 frame bottom.
 NEEDSDOC @@param stackFrame
 @param val The value of the variable that is being set.
 */
- (void)setLocalVariableWithInt:(jint)index
withOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)val
                        withInt:(jint)stackFrame;

/*!
 @brief Set the current stack frame.
 @param sf The new stack frame position.
 */
- (void)setStackFrameWithInt:(jint)sf;

/*!
 @brief Get size of the stack.
 @return the total size of the execution stack.
 */
- (jint)size;

/*!
 @brief Free up the stack frame that was last allocated with
 <code>size)</code>.
 */
- (void)unlink;

/*!
 @brief Free up the stack frame that was last allocated with
 <code>size)</code>.
 @param currentFrame The current frame to set to 
 after the unlink.
 */
- (void)unlinkWithInt:(jint)currentFrame;

#pragma mark Protected

/*!
 @brief Reset the stack to a start position.
 @param linksSize Initial stack size to use
 @param varArraySize Initial variable array size to use
 */
- (void)resetWithInt:(jint)linksSize
             withInt:(jint)varArraySize;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathVariableStack)

J2OBJC_FIELD_SETTER(OrgApacheXpathVariableStack, _stackFrames_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXpathVariableStack, _links_, IOSIntArray *)

/*!
 @brief limitation for 1K
 */
inline jint OrgApacheXpathVariableStack_get_CLEARLIMITATION();
#define OrgApacheXpathVariableStack_CLEARLIMITATION 1024
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathVariableStack, CLEARLIMITATION, jint)

FOUNDATION_EXPORT void OrgApacheXpathVariableStack_init(OrgApacheXpathVariableStack *self);

FOUNDATION_EXPORT OrgApacheXpathVariableStack *new_OrgApacheXpathVariableStack_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathVariableStack *create_OrgApacheXpathVariableStack_init();

FOUNDATION_EXPORT void OrgApacheXpathVariableStack_initWithInt_(OrgApacheXpathVariableStack *self, jint initStackSize);

FOUNDATION_EXPORT OrgApacheXpathVariableStack *new_OrgApacheXpathVariableStack_initWithInt_(jint initStackSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathVariableStack *create_OrgApacheXpathVariableStack_initWithInt_(jint initStackSize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathVariableStack)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathVariableStack")
