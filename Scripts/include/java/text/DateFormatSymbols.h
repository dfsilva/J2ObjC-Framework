//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/text/DateFormatSymbols.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaTextDateFormatSymbols")
#ifdef RESTRICT_JavaTextDateFormatSymbols
#define INCLUDE_ALL_JavaTextDateFormatSymbols 0
#else
#define INCLUDE_ALL_JavaTextDateFormatSymbols 1
#endif
#undef RESTRICT_JavaTextDateFormatSymbols

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaTextDateFormatSymbols_) && (INCLUDE_ALL_JavaTextDateFormatSymbols || defined(INCLUDE_JavaTextDateFormatSymbols))
#define JavaTextDateFormatSymbols_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class IOSObjectArray;
@class JavaUtilLocale;
@class JavaUtilTimeZone;
@class LibcoreIcuLocaleData;

/*!
 @brief Encapsulates localized date-time formatting data, such as the names of the
 months, the names of the days of the week, and the time zone data.
 <code>DateFormat</code> and <code>SimpleDateFormat</code> both use
 <code>DateFormatSymbols</code> to encapsulate this information.
 <p>Typically you shouldn't use <code>DateFormatSymbols</code> directly. Rather, you
 are encouraged to create a date/time formatter with the <code>DateFormat</code>
 class's factory methods: <code>getTimeInstance</code>, <code>getDateInstance</code>,
 or <code>getDateTimeInstance</code>. These methods automatically create a
 <code>DateFormatSymbols</code> for the formatter so that you don't have to. After
 the formatter is created, you may modify its format pattern using the
 <code>setPattern</code> method. For more information about creating formatters
 using <code>DateFormat</code>'s factory methods, see <code>DateFormat</code>.
 <p>Direct use of <code>DateFormatSymbols</code> is likely to be less efficient
 because the implementation cannot make assumptions about user-supplied/user-modifiable data
 to the same extent that it can with its own built-in data.
 - seealso: DateFormat
 - seealso: SimpleDateFormat
 */
@interface JavaTextDateFormatSymbols : NSObject < JavaIoSerializable, NSCopying > {
 @public
  IOSObjectArray *ampms_, *eras_, *months_, *shortMonths_, *shortWeekdays_, *weekdays_;
  LibcoreIcuLocaleData *localeData_;
  IOSObjectArray *zoneStrings_;
  jboolean customZoneStrings_;
  /*!
   @brief Locale, necessary to lazily load time zone strings.
   We force the time
 zone names to load upon serialization, so this will never be needed
 post deserialization.
   */
  JavaUtilLocale *locale_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>DateFormatSymbols</code> instance containing the
 symbols for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>DateFormatSymbols</code> instance containing the
 symbols for the specified locale.
 @param locale
 the locale.
 */
- (instancetype)initWithJavaUtilLocale:(JavaUtilLocale *)locale;

- (id)clone;

/*!
 @brief Compares this object with the specified object and indicates if they are
 equal.
 @param object
 the object to compare with this object.
 @return <code>true</code> if <code>object</code> is an instance of
 <code>DateFormatSymbols</code> and has the same symbols as this
 object, <code>false</code> otherwise.
 - seealso: #hashCode
 */
- (jboolean)isEqual:(id)object;

/*!
 @brief Returns the array of strings which represent AM and PM.
 Use the
 <code>java.util.Calendar</code> constants <code>Calendar.AM</code> and
 <code>Calendar.PM</code> as indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getAmPmStrings;

/*!
 @brief Returns an array of locales for which custom <code>DateFormatSymbols</code> instances
 are available.
 <p>Note that Android does not support user-supplied locale service providers.
 @since 1.6
 */
+ (IOSObjectArray *)getAvailableLocales;

/*!
 @brief Returns the array of strings which represent BC and AD.
 Use the
 <code>java.util.Calendar</code> constants <code>GregorianCalendar.BC</code> and
 <code>GregorianCalendar.AD</code> as indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getEras;

/*!
 @brief Returns a new <code>DateFormatSymbols</code> instance for the user's default locale.
 See "<a href="../util/Locale.html#default_locale">Be wary of the default locale</a>".
 @return an instance of <code>DateFormatSymbols</code>
 @since 1.6
 */
+ (JavaTextDateFormatSymbols *)getInstance;

/*!
 @brief Returns a new <code>DateFormatSymbols</code> for the given locale.
 @param locale the locale
 @return an instance of <code>DateFormatSymbols</code>
 @throws NullPointerException if <code>locale == null</code>
 @since 1.6
 */
+ (JavaTextDateFormatSymbols *)getInstanceWithJavaUtilLocale:(JavaUtilLocale *)locale;

/*!
 @brief Returns the pattern characters used by <code>SimpleDateFormat</code> to
 specify date and time fields.
 @return a string containing the pattern characters.
 */
- (NSString *)getLocalPatternChars;

/*!
 @brief Returns the array of strings containing the full names of the months.
 Use
 the <code>java.util.Calendar</code> constants <code>Calendar.JANUARY</code> etc. as
 indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getMonths;

/*!
 @brief Returns the array of strings containing the abbreviated names of the
 months.
 Use the <code>java.util.Calendar</code> constants
 <code>Calendar.JANUARY</code> etc. as indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getShortMonths;

/*!
 @brief Returns the array of strings containing the abbreviated names of the days
 of the week.
 Use the <code>java.util.Calendar</code> constants
 <code>Calendar.SUNDAY</code> etc. as indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getShortWeekdays;

/*!
 @brief Returns the array of strings containing the full names of the days of the
 week.
 Use the <code>java.util.Calendar</code> constants
 <code>Calendar.SUNDAY</code> etc. as indices for the array.
 @return an array of strings.
 */
- (IOSObjectArray *)getWeekdays;

/*!
 @brief Returns the two-dimensional array of strings containing localized names for time zones.
 Each row is an array of five strings:
 <ul>
 <li>The time zone ID, for example "America/Los_Angeles".
 This is not localized, and is used as a key into the table.
 <li>The long display name, for example "Pacific Standard Time".
 <li>The short display name, for example "PST".
 <li>The long display name for DST, for example "Pacific Daylight Time".
 This is the non-DST long name for zones that have never had DST, for
 example "Central Standard Time" for "Canada/Saskatchewan".
 <li>The short display name for DST, for example "PDT". This is the
 non-DST short name for zones that have never had DST, for example
 "CST" for "Canada/Saskatchewan".
 </ul>
 */
- (IOSObjectArray *)getZoneStrings;

- (NSUInteger)hash;

/*!
 @brief Sets the array of strings which represent AM and PM.
 Use the
 <code>java.util.Calendar</code> constants <code>Calendar.AM</code> and
 <code>Calendar.PM</code> as indices for the array.
 @param data
 the array of strings for AM and PM.
 */
- (void)setAmPmStringsWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the array of Strings which represent BC and AD.
 Use the
 <code>java.util.Calendar</code> constants <code>GregorianCalendar.BC</code> and
 <code>GregorianCalendar.AD</code> as indices for the array.
 @param data
 the array of strings for BC and AD.
 */
- (void)setErasWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the pattern characters used by <code>SimpleDateFormat</code> to specify
 date and time fields.
 @param data
 the string containing the pattern characters.
 @throws NullPointerException
 if <code>data</code> is null
 */
- (void)setLocalPatternCharsWithNSString:(NSString *)data;

/*!
 @brief Sets the array of strings containing the full names of the months.
 Use
 the <code>java.util.Calendar</code> constants <code>Calendar.JANUARY</code> etc. as
 indices for the array.
 @param data
 the array of strings.
 */
- (void)setMonthsWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the array of strings containing the abbreviated names of the months.
 Use the <code>java.util.Calendar</code> constants <code>Calendar.JANUARY</code>
 etc. as indices for the array.
 @param data
 the array of strings.
 */
- (void)setShortMonthsWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the array of strings containing the abbreviated names of the days of
 the week.
 Use the <code>java.util.Calendar</code> constants
 <code>Calendar.SUNDAY</code> etc. as indices for the array.
 @param data
 the array of strings.
 */
- (void)setShortWeekdaysWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the array of strings containing the full names of the days of the
 week.
 Use the <code>java.util.Calendar</code> constants
 <code>Calendar.SUNDAY</code> etc. as indices for the array.
 @param data
 the array of strings.
 */
- (void)setWeekdaysWithNSStringArray:(IOSObjectArray *)data;

/*!
 @brief Sets the two-dimensional array of strings containing localized names for time zones.
 See <code>getZoneStrings</code> for details.
 @throws IllegalArgumentException if any row has fewer than 5 elements.
 @throws NullPointerException if <code>zoneStrings == null</code>.
 */
- (void)setZoneStringsWithNSStringArray2:(IOSObjectArray *)zoneStrings;

- (NSString *)description;

#pragma mark Package-Private

/*!
 @brief Returns the display name of the timezone specified.
 Returns null if no name was found in the
 zone strings.
 @param daylight_ whether to return the daylight savings or the standard name
 @param style one of the <code>TimeZone</code> styles such as <code>TimeZone.SHORT</code>
  used internally
 */
- (NSString *)getTimeZoneDisplayNameWithJavaUtilTimeZone:(JavaUtilTimeZone *)tz
                                             withBoolean:(jboolean)daylight_
                                                 withInt:(jint)style;

/*!
 @brief Gets zone strings, initializing them if necessary.
 Does not create
 a defensive copy, so make sure you do so before exposing the returned
 arrays to clients.
 */
- (IOSObjectArray *)internalZoneStrings;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaTextDateFormatSymbols)

J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, ampms_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, eras_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, months_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, shortMonths_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, shortWeekdays_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, weekdays_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, localeData_, LibcoreIcuLocaleData *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, zoneStrings_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(JavaTextDateFormatSymbols, locale_, JavaUtilLocale *)

FOUNDATION_EXPORT void JavaTextDateFormatSymbols_init(JavaTextDateFormatSymbols *self);

FOUNDATION_EXPORT JavaTextDateFormatSymbols *new_JavaTextDateFormatSymbols_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDateFormatSymbols *create_JavaTextDateFormatSymbols_init();

FOUNDATION_EXPORT void JavaTextDateFormatSymbols_initWithJavaUtilLocale_(JavaTextDateFormatSymbols *self, JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDateFormatSymbols *new_JavaTextDateFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaTextDateFormatSymbols *create_JavaTextDateFormatSymbols_initWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT JavaTextDateFormatSymbols *JavaTextDateFormatSymbols_getInstance();

FOUNDATION_EXPORT JavaTextDateFormatSymbols *JavaTextDateFormatSymbols_getInstanceWithJavaUtilLocale_(JavaUtilLocale *locale);

FOUNDATION_EXPORT IOSObjectArray *JavaTextDateFormatSymbols_getAvailableLocales();

J2OBJC_TYPE_LITERAL_HEADER(JavaTextDateFormatSymbols)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaTextDateFormatSymbols")
