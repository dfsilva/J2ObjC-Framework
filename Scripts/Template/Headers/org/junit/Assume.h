//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/junit/build_result/java/org/junit/Assume.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitAssume")
#ifdef RESTRICT_OrgJunitAssume
#define INCLUDE_ALL_OrgJunitAssume 0
#else
#define INCLUDE_ALL_OrgJunitAssume 1
#endif
#undef RESTRICT_OrgJunitAssume

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitAssume_) && (INCLUDE_ALL_OrgJunitAssume || defined(INCLUDE_OrgJunitAssume))
#define OrgJunitAssume_

@class IOSObjectArray;
@protocol OrgHamcrestMatcher;

/*!
 @brief A set of methods useful for stating assumptions about the conditions in which a test is meaningful.
 A failed assumption does not mean the code is broken, but that the test provides no useful information.
 The default JUnit runner treats tests with failing assumptions as ignored.  Custom runners may behave differently.
 For example:
 @code

  // only provides information if database is reachable.
  \@@Test public void calculateTotalSalary() {
    DBConnection dbc = Database.connect();
    assumeNotNull(dbc);
    // ...
  }
  
@endcode
 These methods can be used directly: <code>Assume.assumeTrue(...)</code>, however, they
 read better if they are referenced through static import:<br/>
 @code

  import static org.junit.Assume.*;
    ...
    assumeTrue(...);
  
@endcode
 @since 4.4
 */
@interface OrgJunitAssume : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief The inverse of <code>assumeTrue(boolean)</code>.
 */
+ (void)assumeFalseWithBoolean:(jboolean)b;

/*!
 @brief The inverse of <code>assumeTrue(String,boolean)</code>.
 */
+ (void)assumeFalseWithNSString:(NSString *)message
                    withBoolean:(jboolean)b;

/*!
 @brief Attempts to halt the test and ignore it if Throwable <code>t</code> is
 not <code>null</code>.
 Similar to <code>assumeNoException(Throwable)</code>,
 but provides an additional message that can explain the details
 concerning the assumption.
 @param t if non-null, the offending exception
 @param message Additional message to pass to <code>AssumptionViolatedException</code>.
 - seealso: #assumeNoException(Throwable)
 */
+ (void)assumeNoExceptionWithNSString:(NSString *)message
                      withNSException:(NSException *)t;

/*!
 @brief Use to assume that an operation completes normally.
 If <code>t</code> is non-null, the test will halt and be ignored.
 For example:
 @code

  \@@Test public void parseDataFile() {
   DataFile file;
   try {
     file = DataFile.open("sampledata.txt");
   } catch (IOException e) {
     // stop test and ignore if data can't be opened
     assumeNoException(e);
   }
   // ...
  }
  
@endcode
 @param t if non-null, the offending exception
 */
+ (void)assumeNoExceptionWithNSException:(NSException *)t;

/*!
 @brief If called with one or more null elements in <code>objects</code>, the test will halt and be ignored.
 */
+ (void)assumeNotNullWithNSObjectArray:(IOSObjectArray *)objects;

/*!
 @brief Call to assume that <code>actual</code> satisfies the condition specified by <code>matcher</code>.
 If not, the test halts and is ignored.
 Example:
 @code
:
   assumeThat(1, is(1)); // passes
   foo(); // will execute
   assumeThat(0, is(1)); // assumption failure! test halts
   int x = 1 / 0; // will never execute
  
@endcode
 @param actual the computed value being compared
 @param matcher an expression, built of <code>Matcher</code>s, specifying allowed values
 - seealso: org.hamcrest.CoreMatchers
 - seealso: org.junit.matchers.JUnitMatchers
 */
+ (void)assumeThatWithNSString:(NSString *)message
                        withId:(id)actual
        withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief Call to assume that <code>actual</code> satisfies the condition specified by <code>matcher</code>.
 If not, the test halts and is ignored.
 Example:
 @code
:
   assumeThat(1, is(1)); // passes
   foo(); // will execute
   assumeThat(0, is(1)); // assumption failure! test halts
   int x = 1 / 0; // will never execute
  
@endcode
 @param actual the computed value being compared
 @param matcher an expression, built of <code>Matcher</code>s, specifying allowed values
 - seealso: org.hamcrest.CoreMatchers
 - seealso: org.junit.matchers.JUnitMatchers
 */
+ (void)assumeThatWithId:(id)actual
  withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief If called with an expression evaluating to <code>false</code>, the test will halt and be ignored.
 */
+ (void)assumeTrueWithBoolean:(jboolean)b;

/*!
 @brief If called with an expression evaluating to <code>false</code>, the test will halt and be ignored.
 @param b If <code>false</code>, the method will attempt to stop the test and ignore it by
 throwing <code>AssumptionViolatedException</code>.
 @param message A message to pass to <code>AssumptionViolatedException</code>.
 */
+ (void)assumeTrueWithNSString:(NSString *)message
                   withBoolean:(jboolean)b;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitAssume)

FOUNDATION_EXPORT void OrgJunitAssume_assumeTrueWithBoolean_(jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeFalseWithBoolean_(jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeTrueWithNSString_withBoolean_(NSString *message, jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeFalseWithNSString_withBoolean_(NSString *message, jboolean b);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNotNullWithNSObjectArray_(IOSObjectArray *objects);

FOUNDATION_EXPORT void OrgJunitAssume_assumeThatWithId_withOrgHamcrestMatcher_(id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssume_assumeThatWithNSString_withId_withOrgHamcrestMatcher_(NSString *message, id actual, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNoExceptionWithNSException_(NSException *t);

FOUNDATION_EXPORT void OrgJunitAssume_assumeNoExceptionWithNSString_withNSException_(NSString *message, NSException *t);

FOUNDATION_EXPORT void OrgJunitAssume_init(OrgJunitAssume *self);

FOUNDATION_EXPORT OrgJunitAssume *new_OrgJunitAssume_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitAssume *create_OrgJunitAssume_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitAssume)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitAssume")
