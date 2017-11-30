//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/text/ParsePosition.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextParsePosition")
#ifdef RESTRICT_JavaTextParsePosition
#define INCLUDE_ALL_JavaTextParsePosition 0
#else
#define INCLUDE_ALL_JavaTextParsePosition 1
#endif
#undef RESTRICT_JavaTextParsePosition

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextParsePosition_) && (INCLUDE_ALL_JavaTextParsePosition || defined(INCLUDE_JavaTextParsePosition))
#define JavaTextParsePosition_

/*!
 @brief <code>ParsePosition</code> is a simple class used by <code>Format</code>
  and its subclasses to keep track of the current position during parsing.
 The <code>parseObject</code> method in the various <code>Format</code>
  classes requires a <code>ParsePosition</code> object as an argument. 
 <p>
  By design, as you parse through a string with different formats,
  you can use the same <code>ParsePosition</code>, since the index parameter
  records the current position.
 @author Mark Davis
 - seealso: java.text.Format
 */
@interface JavaTextParsePosition : NSObject {
 @public
  /*!
   @brief Input: the place you start parsing.
   <br>Output: position where the parse stopped.
  This is designed to be used serially,
  with each call setting index up for the next one.
   */
  jint index_;
  jint errorIndex_;
}

#pragma mark Public

/*!
 @brief Create a new ParsePosition with the given initial index.
 */
- (instancetype)initWithInt:(jint)index;

/*!
 @brief Overrides equals
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief Retrieve the index at which an error occurred, or -1 if the
  error index has not been set.
 @since 1.2
 */
- (jint)getErrorIndex;

/*!
 @brief Retrieve the current parse position.On input to a parse method, this
  is the index of the character at which parsing will begin; on output, it
  is the index of the character following the last character parsed.
 */
- (jint)getIndex;

/*!
 @brief Returns a hash code for this ParsePosition.
 @return a hash code value for this object
 */
- (NSUInteger)hash;

/*!
 @brief Set the index at which a parse error occurred.Formatters
  should set this before returning an error code from their
  parseObject method.
 The default value is -1 if this is not set.
 @since 1.2
 */
- (void)setErrorIndexWithInt:(jint)ei;

/*!
 @brief Set the current parse position.
 */
- (void)setIndexWithInt:(jint)index;

/*!
 @brief Return a string representation of this ParsePosition.
 @return a string representation of this object
 */
- (NSString *)description;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextParsePosition)

FOUNDATION_EXPORT void JavaTextParsePosition_initWithInt_(JavaTextParsePosition *self, jint index);

FOUNDATION_EXPORT JavaTextParsePosition *new_JavaTextParsePosition_initWithInt_(jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextParsePosition *create_JavaTextParsePosition_initWithInt_(jint index);

J2OBJC_TYPE_LITERAL_HEADER(JavaTextParsePosition)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextParsePosition")
