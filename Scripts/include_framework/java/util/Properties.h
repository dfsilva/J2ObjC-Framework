//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/Properties.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilProperties")
#ifdef RESTRICT_JavaUtilProperties
#define INCLUDE_ALL_JavaUtilProperties 0
#else
#define INCLUDE_ALL_JavaUtilProperties 1
#endif
#undef RESTRICT_JavaUtilProperties

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilProperties_) && (INCLUDE_ALL_JavaUtilProperties || defined(INCLUDE_JavaUtilProperties))
#define JavaUtilProperties_

#define RESTRICT_JavaUtilHashtable 1
#define INCLUDE_JavaUtilHashtable 1
#include "../../java/util/Hashtable.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@class JavaIoReader;
@class JavaIoWriter;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

/*!
 @brief A <code>Properties</code> object is a <code>Hashtable</code> where the keys and values
 must be <code>String</code>s.
 Each property can have a default
 <code>Properties</code> list which specifies the default
 values to be used when a given key is not found in this <code>Properties</code>
 instance.
 <a name="character_encoding"><h3>Character Encoding</h3></a>
 <p>Note that in some cases <code>Properties</code> uses ISO-8859-1 instead of UTF-8.
 ISO-8859-1 is only capable of representing a tiny subset of Unicode.
 Use either the <code>loadFromXML</code>/<code>storeToXML</code> methods (which use UTF-8 by
 default) or the <code>load</code>/<code>store</code> overloads that take
 an <code>OutputStreamWriter</code> (so you can supply a UTF-8 instance) instead.
 - seealso: Hashtable
 - seealso: java.lang.System#getProperties
 */
@interface JavaUtilProperties : JavaUtilHashtable {
 @public
  /*!
   @brief The default values for keys not found in this <code>Properties</code>
 instance.
   */
  JavaUtilProperties *defaults_;
}

#pragma mark Public

/*!
 @brief Constructs a new <code>Properties</code> object.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>Properties</code> object using the specified default
 <code>Properties</code>.
 @param properties
 the default <code>Properties</code>.
 */
- (instancetype)initWithJavaUtilProperties:(JavaUtilProperties *)properties;

/*!
 @brief Searches for the property with the specified name.
 If the property is not
 found, the default <code>Properties</code> are checked. If the property is not
 found in the default <code>Properties</code>, <code>null</code> is returned.
 @param name
 the name of the property to find.
 @return the named property value, or <code>null</code> if it can't be found.
 */
- (NSString *)getPropertyWithNSString:(NSString *)name;

/*!
 @brief Searches for the property with the specified name.
 If the property is not
 found, it looks in the default <code>Properties</code>. If the property is not
 found in the default <code>Properties</code>, it returns the specified
 default.
 @param name
 the name of the property to find.
 @param defaultValue
 the default value.
 @return the named property value.
 */
- (NSString *)getPropertyWithNSString:(NSString *)name
                         withNSString:(NSString *)defaultValue;

/*!
 @brief Lists the mappings in this <code>Properties</code> to <code>out</code> in a human-readable form.
 Note that values are truncated to 37 characters, so this method is rarely useful.
 */
- (void)listWithJavaIoPrintStream:(JavaIoPrintStream *)outArg;

/*!
 @brief Lists the mappings in this <code>Properties</code> to <code>out</code> in a human-readable form.
 Note that values are truncated to 37 characters, so this method is rarely useful.
 */
- (void)listWithJavaIoPrintWriter:(JavaIoPrintWriter *)outArg;

/*!
 @brief Loads properties from the specified <code>InputStream</code>, assumed to be ISO-8859-1.
 See "<a href="#character_encoding">Character Encoding</a>".
 @param inArg the <code>InputStream</code>
 @throws IOException
 */
- (void)load__WithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Loads properties from the specified <code>Reader</code>.
 The properties file is interpreted according to the following rules:
 <ul>
 <li>Empty lines are ignored.</li>
 <li>Lines starting with either a "#" or a "!" are comment lines and are
 ignored.</li>
 <li>A backslash at the end of the line escapes the following newline
 character ("\r", "\n", "\r\n"). If there's whitespace after the
 backslash it will just escape that whitespace instead of concatenating
 the lines. This does not apply to comment lines.</li>
 <li>A property line consists of the key, the space between the key and
 the value, and the value. The key goes up to the first whitespace, "=" or
 ":" that is not escaped. The space between the key and the value contains
 either one whitespace, one "=" or one ":" and any amount of additional
 whitespace before and after that character. The value starts with the
 first character after the space between the key and the value.</li>
 <li>Following escape sequences are recognized: "\ ", "\\", "\r", "\n",
 "\!", "\#", "\t", "\b", "\f", and "&#92;uXXXX" (unicode character).</li>
 </ul>
 @param inArg the <code>Reader</code>
 @throws IOException
 @since 1.6
 */
- (void)load__WithJavaIoReader:(JavaIoReader *)inArg;

/*!
 @brief Loads the properties from an <code>InputStream</code> containing the
 properties in XML form.
 The XML document must begin with (and conform to)
 following DOCTYPE:
 @code

  &lt;!DOCTYPE properties SYSTEM &quot;http://java.sun.com/dtd/properties.dtd&quot;&gt;
  
@endcode
 Also the content of the XML data must satisfy the DTD but the xml is not
 validated against it. The DTD is not loaded from the SYSTEM ID. After
 this method returns the InputStream is not closed.
 @param inArg the InputStream containing the XML document.
 @throws IOException in case an error occurs during a read operation.
 @throws InvalidPropertiesFormatException if the XML data is not a valid
 properties file.
 */
- (void)loadFromXMLWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Returns all of the property names (keys) in this <code>Properties</code> object.
 */
- (id<JavaUtilEnumeration>)propertyNames;

/*!
 @brief Saves the mappings in this <code>Properties</code> to the specified <code>OutputStream</code>
 , putting the specified comment at the beginning.
 The output
 from this method is suitable for being read by the
 <code>load(InputStream)</code> method.
 @param outArg the <code>OutputStream</code> to write to.
 @param comment the comment to add at the beginning.
 @throws ClassCastException if the key or value of a mapping is not a
 String.
 */
- (void)saveWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                      withNSString:(NSString *)comment __attribute__((deprecated));

/*!
 @brief Maps the specified key to the specified value.
 If the key already exists,
 the old value is replaced. The key and value cannot be <code>null</code>.
 @param name
 the key.
 @param value
 the value.
 @return the old value mapped to the key, or <code>null</code>.
 */
- (id)setPropertyWithNSString:(NSString *)name
                 withNSString:(NSString *)value;

/*!
 @brief Stores properties to the specified <code>OutputStream</code>, using ISO-8859-1.
 See "<a href="#character_encoding">Character Encoding</a>".
 @param outArg the <code>OutputStream</code>
 @param comment an optional comment to be written, or null
 @throws IOException
 @throws ClassCastException if a key or value is not a string
 */
- (void)storeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                       withNSString:(NSString *)comment;

/*!
 @brief Stores the mappings in this <code>Properties</code> object to <code>out</code>,
 putting the specified comment at the beginning.
 @param writer the <code>Writer</code>
 @param comment an optional comment to be written, or null
 @throws IOException
 @throws ClassCastException if a key or value is not a string
 @since 1.6
 */
- (void)storeWithJavaIoWriter:(JavaIoWriter *)writer
                 withNSString:(NSString *)comment;

/*!
 @brief Writes all properties stored in this instance into the <code>OutputStream</code>
  in XML representation.
 The DOCTYPE is
 @code

  &lt;!DOCTYPE properties SYSTEM &quot;http://java.sun.com/dtd/properties.dtd&quot;&gt;
  
@endcode
 If the comment is null, no comment is added to the output. UTF-8 is used
 as the encoding. The <code>OutputStream</code> is not closed at the end. A
 call to this method is the same as a call to <code>storeToXML(os,
 comment, "UTF-8")</code>
 .
 @param os the <code>OutputStream</code> to write to.
 @param comment the comment to add. If null, no comment is added.
 @throws IOException if an error occurs during writing to the output.
 */
- (void)storeToXMLWithJavaIoOutputStream:(JavaIoOutputStream *)os
                            withNSString:(NSString *)comment;

/*!
 @brief Writes all properties stored in this instance into the <code>OutputStream</code>
  in XML representation.
 The DOCTYPE is
 @code

  &lt;!DOCTYPE properties SYSTEM &quot;http://java.sun.com/dtd/properties.dtd&quot;&gt;
  
@endcode
 If the comment is null, no comment is added to the output. The parameter
 <code>encoding</code> defines which encoding should be used. The <code>OutputStream</code>
  is not closed at the end.
 @param os the <code>OutputStream</code> to write to.
 @param comment the comment to add. If null, no comment is added.
 @param encoding the code identifying the encoding that should be used to
 write into the <code>OutputStream</code>.
 @throws IOException if an error occurs during writing to the output.
 */
- (void)storeToXMLWithJavaIoOutputStream:(JavaIoOutputStream *)os
                            withNSString:(NSString *)comment
                            withNSString:(NSString *)encoding;

/*!
 @brief Returns those property names (keys) in this <code>Properties</code> object for which
 both key and value are strings.
 @return a set of keys in the property list
 @since 1.6
 */
- (id<JavaUtilSet>)stringPropertyNames;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilProperties)

J2OBJC_FIELD_SETTER(JavaUtilProperties, defaults_, JavaUtilProperties *)

FOUNDATION_EXPORT void JavaUtilProperties_init(JavaUtilProperties *self);

FOUNDATION_EXPORT JavaUtilProperties *new_JavaUtilProperties_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties *create_JavaUtilProperties_init();

FOUNDATION_EXPORT void JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *self, JavaUtilProperties *properties);

FOUNDATION_EXPORT JavaUtilProperties *new_JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *properties) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties *create_JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *properties);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilProperties)

#endif

#if !defined (JavaUtilProperties_XmlLoader_) && (INCLUDE_ALL_JavaUtilProperties || defined(INCLUDE_JavaUtilProperties_XmlLoader))
#define JavaUtilProperties_XmlLoader_

@class JavaIoInputStream;
@class JavaUtilProperties;

/*!
 @brief Creates a dynamic dependency on XML support so that XML support can be excluded from the
 application binary without incurring link errors.
 */
@protocol JavaUtilProperties_XmlLoader < JavaObject >

- (void)load__WithJavaUtilProperties:(JavaUtilProperties *)p
               withJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

@interface JavaUtilProperties_XmlLoader : NSObject

+ (id<JavaUtilProperties_XmlLoader>)INSTANCE;

@end

J2OBJC_STATIC_INIT(JavaUtilProperties_XmlLoader)

inline id<JavaUtilProperties_XmlLoader> JavaUtilProperties_XmlLoader_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilProperties_XmlLoader> JavaUtilProperties_XmlLoader_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilProperties_XmlLoader, INSTANCE, id<JavaUtilProperties_XmlLoader>)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilProperties_XmlLoader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilProperties")
