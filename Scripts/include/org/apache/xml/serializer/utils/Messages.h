//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/utils/Messages.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsMessages")
#ifdef RESTRICT_OrgApacheXmlSerializerUtilsMessages
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsMessages 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerUtilsMessages 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerUtilsMessages

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerUtilsMessages_) && (INCLUDE_ALL_OrgApacheXmlSerializerUtilsMessages || defined(INCLUDE_OrgApacheXmlSerializerUtilsMessages))
#define OrgApacheXmlSerializerUtilsMessages_

@class IOSObjectArray;

/*!
 @brief A utility class for issuing error messages.
 A user of this class normally would create a singleton 
 instance of this class, passing the name
 of the message class on the constructor. For example:
 <CODE>
 static Messages x = new Messages("org.package.MyMessages");
 </CODE>
 Later the message is typically generated this way if there are no 
 substitution arguments:
 <CODE>
 String msg = x.createMessage(org.package.MyMessages.KEY_ONE, null); 
 </CODE>
 If there are arguments substitutions then something like this:
 <CODE>
 String filename = ...;
 String directory = ...;
 String msg = x.createMessage(org.package.MyMessages.KEY_TWO, 
 new Object[] {filename, directory) ); 
 </CODE>
 The constructor of an instance of this class must be given
 the class name of a class that extends java.util.ListResourceBundle 
 ("org.package.MyMessages" in the example above).  
 The name should not have any language suffix 
 which will be added automatically by this utility class.
 The message class ("org.package.MyMessages")
 must define the abstract method getContents() that is
 declared in its base class, for example:
 <CODE>
 public Object[][] getContents() {return contents;}
 </CODE>
 It is suggested that the message class expose its
 message keys like this:
 <CODE>
 public static final String KEY_ONE = "KEY1";
 public static final String KEY_TWO = "KEY2";
 . . . 
 </CODE>
 and used through their names (KEY_ONE ...) rather than
 their values ("KEY1" ...).
 The field contents (returned by getContents()
 should be initialized something like this:
 <CODE>
 public static final Object[][] contents = {
 { KEY_ONE, "Something has gone wrong!" },
 { KEY_TWO, "The file ''{0}'' does not exist in directory ''{1}''." },
 . . .
 { KEY_N, "Message N" }  }
 </CODE>
 Where that section of code with the KEY to Message mappings
 (where the message classes 'contents' field is initialized)
 can have the Message strings translated in an alternate language
 in a errorResourceClass with a language suffix.
 More sophisticated use of this class would be to pass null
 when contructing it, but then call loadResourceBundle()
 before creating any messages.
 This class is not a public API, it is only public because it is 
 used in org.apache.xml.serializer.
  internal
 */
@interface OrgApacheXmlSerializerUtilsMessages : NSObject

#pragma mark Public

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param msgKey  The key for the message text.
 @param args    The arguments to be used as replacement text
 in the message created.
 @return The formatted message string.
  internal
 */
- (NSString *)createMessageWithNSString:(NSString *)msgKey
                      withNSObjectArray:(IOSObjectArray *)args;

#pragma mark Package-Private

/*!
 @brief Constructor.
 @param resourceBundle the class name of the ListResourceBundle
 that the instance of this class is associated with and will use when
 creating messages.
 The class name is without a language suffix. If the value passed
 is null then loadResourceBundle(errorResourceClass) needs to be called
 explicitly before any messages are created.
  internal
 */
- (instancetype)initWithNSString:(NSString *)resourceBundle;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerUtilsMessages)

FOUNDATION_EXPORT void OrgApacheXmlSerializerUtilsMessages_initWithNSString_(OrgApacheXmlSerializerUtilsMessages *self, NSString *resourceBundle);

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsMessages *new_OrgApacheXmlSerializerUtilsMessages_initWithNSString_(NSString *resourceBundle) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerUtilsMessages *create_OrgApacheXmlSerializerUtilsMessages_initWithNSString_(NSString *resourceBundle);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerUtilsMessages)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerUtilsMessages")
