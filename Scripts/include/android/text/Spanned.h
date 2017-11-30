//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/Spanned.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextSpanned")
#ifdef RESTRICT_AndroidTextSpanned
#define INCLUDE_ALL_AndroidTextSpanned 0
#else
#define INCLUDE_ALL_AndroidTextSpanned 1
#endif
#undef RESTRICT_AndroidTextSpanned

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextSpanned_) && (INCLUDE_ALL_AndroidTextSpanned || defined(INCLUDE_AndroidTextSpanned))
#define AndroidTextSpanned_

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include "java/lang/CharSequence.h"

@class IOSClass;
@class IOSObjectArray;

/*!
 @brief This is the interface for text that has markup objects attached to
  ranges of it.Not all text classes have mutable markup or text;
  see <code>Spannable</code> for mutable markup and <code>Editable</code> for
  mutable text.
 */
@protocol AndroidTextSpanned < JavaLangCharSequence, JavaObject >

/*!
 @brief Return an array of the markup objects attached to the specified
  slice of this CharSequence and whose type is the specified type
  or a subclass of it.Specify Object.class for the type if you
  want all the objects regardless of type.
 */
- (IOSObjectArray *)getSpansWithInt:(jint)start
                            withInt:(jint)end
                       withIOSClass:(IOSClass *)type;

/*!
 @brief Return the beginning of the range of text to which the specified
  markup object is attached, or -1 if the object is not attached.
 */
- (jint)getSpanStartWithId:(id)tag;

/*!
 @brief Return the end of the range of text to which the specified
  markup object is attached, or -1 if the object is not attached.
 */
- (jint)getSpanEndWithId:(id)tag;

/*!
 @brief Return the flags that were specified when <code>Spannable.setSpan</code> was
  used to attach the specified markup object, or 0 if the specified
  object has not been attached.
 */
- (jint)getSpanFlagsWithId:(id)tag;

/*!
 @brief Return the first offset greater than or equal to <code>start</code>
  where a markup object of class <code>type</code> begins or ends, or 
 <code>limit</code> if there are no starts or ends greater than or
  equal to <code>start</code> but less than <code>limit</code>.Specify
  <code>null</code> or Object.class for the type if you want every
  transition regardless of type.
 */
- (jint)nextSpanTransitionWithInt:(jint)start
                          withInt:(jint)limit
                     withIOSClass:(IOSClass *)type;

@end

@interface AndroidTextSpanned : NSObject

+ (jint)SPAN_POINT_MARK_MASK;

+ (jint)SPAN_MARK_MARK;

+ (jint)SPAN_MARK_POINT;

+ (jint)SPAN_POINT_MARK;

+ (jint)SPAN_POINT_POINT;

+ (jint)SPAN_PARAGRAPH;

+ (jint)SPAN_INCLUSIVE_EXCLUSIVE;

+ (jint)SPAN_INCLUSIVE_INCLUSIVE;

+ (jint)SPAN_EXCLUSIVE_EXCLUSIVE;

+ (jint)SPAN_EXCLUSIVE_INCLUSIVE;

+ (jint)SPAN_COMPOSING;

+ (jint)SPAN_INTERMEDIATE;

+ (jint)SPAN_USER_SHIFT;

+ (jint)SPAN_USER;

+ (jint)SPAN_PRIORITY_SHIFT;

+ (jint)SPAN_PRIORITY;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextSpanned)

/*!
 @brief Bitmask of bits that are relevent for controlling point/mark behavior
  of spans.
 MARK and POINT are conceptually located <i>between</i> two adjacent characters.
  A MARK is "attached" to the character before, while a POINT will stick to the character
  after. The insertion cursor is conceptually located between the MARK and the POINT.
  As a result, inserting a new character between a MARK and a POINT will leave the MARK
  unchanged, while the POINT will be shifted, now located after the inserted character and
  still glued to the same character after it.
  Depending on whether the insertion happens at the beginning or the end of a span, the span
  will hence be expanded to <i>include</i> the new character (when the span is using a MARK at
  its beginning or a POINT at its end) or it will be <i>excluded</i>.
  Note that <i>before</i> and <i>after</i> here refer to offsets in the String, which are
  independent from the visual representation of the text (left-to-right or right-to-left).
 */
inline jint AndroidTextSpanned_get_SPAN_POINT_MARK_MASK(void);
#define AndroidTextSpanned_SPAN_POINT_MARK_MASK 51
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_POINT_MARK_MASK, jint)

/*!
 @brief 0-length spans with type SPAN_MARK_MARK behave like text marks:
  they remain at their original offset when text is inserted
  at that offset.Conceptually, the text is added after the mark.
 */
inline jint AndroidTextSpanned_get_SPAN_MARK_MARK(void);
#define AndroidTextSpanned_SPAN_MARK_MARK 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_MARK_MARK, jint)

/*!
 @brief SPAN_MARK_POINT is a synonym for <code>SPAN_INCLUSIVE_INCLUSIVE</code>.
 */
inline jint AndroidTextSpanned_get_SPAN_MARK_POINT(void);
#define AndroidTextSpanned_SPAN_MARK_POINT 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_MARK_POINT, jint)

/*!
 @brief SPAN_POINT_MARK is a synonym for <code>SPAN_EXCLUSIVE_EXCLUSIVE</code>.
 */
inline jint AndroidTextSpanned_get_SPAN_POINT_MARK(void);
#define AndroidTextSpanned_SPAN_POINT_MARK 33
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_POINT_MARK, jint)

/*!
 @brief 0-length spans with type SPAN_POINT_POINT behave like cursors:
  they are pushed forward by the length of the insertion when text
  is inserted at their offset.
 The text is conceptually inserted before the point.
 */
inline jint AndroidTextSpanned_get_SPAN_POINT_POINT(void);
#define AndroidTextSpanned_SPAN_POINT_POINT 34
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_POINT_POINT, jint)

/*!
 @brief SPAN_PARAGRAPH behaves like SPAN_INCLUSIVE_EXCLUSIVE
  (SPAN_MARK_MARK), except that if either end of the span is
  at the end of the buffer, that end behaves like _POINT
  instead (so SPAN_INCLUSIVE_INCLUSIVE if it starts in the
  middle and ends at the end, or SPAN_EXCLUSIVE_INCLUSIVE
  if it both starts and ends at the end).
 <p>
  Its endpoints must be the start or end of the buffer or
  immediately after a \n character, and if the \n
  that anchors it is deleted, the endpoint is pulled to the
  next \n that follows in the buffer (or to the end of
  the buffer).
 */
inline jint AndroidTextSpanned_get_SPAN_PARAGRAPH(void);
#define AndroidTextSpanned_SPAN_PARAGRAPH 51
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_PARAGRAPH, jint)

/*!
 @brief Non-0-length spans of type SPAN_INCLUSIVE_EXCLUSIVE expand
  to include text inserted at their starting point but not at their
  ending point.When 0-length, they behave like marks.
 */
inline jint AndroidTextSpanned_get_SPAN_INCLUSIVE_EXCLUSIVE(void);
#define AndroidTextSpanned_SPAN_INCLUSIVE_EXCLUSIVE 17
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_INCLUSIVE_EXCLUSIVE, jint)

/*!
 @brief Spans of type SPAN_INCLUSIVE_INCLUSIVE expand
  to include text inserted at either their starting or ending point.
 */
inline jint AndroidTextSpanned_get_SPAN_INCLUSIVE_INCLUSIVE(void);
#define AndroidTextSpanned_SPAN_INCLUSIVE_INCLUSIVE 18
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_INCLUSIVE_INCLUSIVE, jint)

/*!
 @brief Spans of type SPAN_EXCLUSIVE_EXCLUSIVE do not expand
  to include text inserted at either their starting or ending point.
 They can never have a length of 0 and are automatically removed
  from the buffer if all the text they cover is removed.
 */
inline jint AndroidTextSpanned_get_SPAN_EXCLUSIVE_EXCLUSIVE(void);
#define AndroidTextSpanned_SPAN_EXCLUSIVE_EXCLUSIVE 33
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_EXCLUSIVE_EXCLUSIVE, jint)

/*!
 @brief Non-0-length spans of type SPAN_EXCLUSIVE_INCLUSIVE expand
  to include text inserted at their ending point but not at their
  starting point.When 0-length, they behave like points.
 */
inline jint AndroidTextSpanned_get_SPAN_EXCLUSIVE_INCLUSIVE(void);
#define AndroidTextSpanned_SPAN_EXCLUSIVE_INCLUSIVE 34
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_EXCLUSIVE_INCLUSIVE, jint)

/*!
 @brief This flag is set on spans that are being used to apply temporary
  styling information on the composing text of an input method, so that
  they can be found and removed when the composing text is being
  replaced.
 */
inline jint AndroidTextSpanned_get_SPAN_COMPOSING(void);
#define AndroidTextSpanned_SPAN_COMPOSING 256
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_COMPOSING, jint)

/*!
 @brief This flag will be set for intermediate span changes, meaning there
  is guaranteed to be another change following it.Typically it is
  used for <code>Selection</code> which automatically uses this with the first
  offset it sets when updating the selection.
 */
inline jint AndroidTextSpanned_get_SPAN_INTERMEDIATE(void);
#define AndroidTextSpanned_SPAN_INTERMEDIATE 512
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_INTERMEDIATE, jint)

/*!
 @brief The bits numbered SPAN_USER_SHIFT and above are available
  for callers to use to store scalar data associated with their
  span object.
 */
inline jint AndroidTextSpanned_get_SPAN_USER_SHIFT(void);
#define AndroidTextSpanned_SPAN_USER_SHIFT 24
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_USER_SHIFT, jint)

/*!
 @brief The bits specified by the SPAN_USER bitfield are available
  for callers to use to store scalar data associated with their
  span object.
 */
inline jint AndroidTextSpanned_get_SPAN_USER(void);
#define AndroidTextSpanned_SPAN_USER -16777216
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_USER, jint)

/*!
 @brief The bits numbered just above SPAN_PRIORITY_SHIFT determine the order
  of change notifications -- higher numbers go first.You probably
  don't need to set this; it is used so that when text changes, the
  text layout gets the chance to update itself before any other
  callbacks can inquire about the layout of the text.
 */
inline jint AndroidTextSpanned_get_SPAN_PRIORITY_SHIFT(void);
#define AndroidTextSpanned_SPAN_PRIORITY_SHIFT 16
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_PRIORITY_SHIFT, jint)

/*!
 @brief The bits specified by the SPAN_PRIORITY bitmap determine the order
  of change notifications -- higher numbers go first.You probably
  don't need to set this; it is used so that when text changes, the
  text layout gets the chance to update itself before any other
  callbacks can inquire about the layout of the text.
 */
inline jint AndroidTextSpanned_get_SPAN_PRIORITY(void);
#define AndroidTextSpanned_SPAN_PRIORITY 16711680
J2OBJC_STATIC_FIELD_CONSTANT(AndroidTextSpanned, SPAN_PRIORITY, jint)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpanned)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSpanned")
