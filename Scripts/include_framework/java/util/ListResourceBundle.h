//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/ListResourceBundle.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilListResourceBundle")
#ifdef RESTRICT_JavaUtilListResourceBundle
#define INCLUDE_ALL_JavaUtilListResourceBundle 0
#else
#define INCLUDE_ALL_JavaUtilListResourceBundle 1
#endif
#undef RESTRICT_JavaUtilListResourceBundle

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilListResourceBundle_) && (INCLUDE_ALL_JavaUtilListResourceBundle || defined(INCLUDE_JavaUtilListResourceBundle))
#define JavaUtilListResourceBundle_

#define RESTRICT_JavaUtilResourceBundle 1
#define INCLUDE_JavaUtilResourceBundle 1
#include "java/util/ResourceBundle.h"

@class IOSObjectArray;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

/*!
 @brief <code>ListResourceBundle</code> is an abstract subclass of 
 <code>ResourceBundle</code> that manages resources for a locale
  in a convenient and easy to use list.See <code>ResourceBundle</code> for
  more information about resource bundles in general.
 <P>
  Subclasses must override <code>getContents</code> and provide an array,
  where each item in the array is a pair of objects.
  The first element of each pair is the key, which must be a 
 <code>String</code>, and the second element is the value associated with
  that key. 
 <p>
  The following <a name="sample">example</a> shows two members of a resource
  bundle family with the base name "MyResources".
  "MyResources" is the default member of the bundle family, and
  "MyResources_fr" is the French member.
  These members are based on <code>ListResourceBundle</code>
  (a related <a href="PropertyResourceBundle.html#sample">example</a> shows
  how you can add a bundle to this family that's based on a properties file).
  The keys in this example are of the form "s1" etc. The actual
  keys are entirely up to your choice, so long as they are the same as
  the keys you use in your program to retrieve the objects from the bundle.
  Keys are case-sensitive. 
 <blockquote>
  @code

  public class MyResources extends ListResourceBundle {
      protected Object[][] getContents() {
          return new Object[][] {
          // LOCALIZE THIS
              {"s1", "The disk \"{1}\" contains {0}."},  // MessageFormat pattern
              {"s2", "1"},                               // location of {0} in pattern
              {"s3", "My Disk"},                         // sample disk name
              {"s4", "no files"},                        // first ChoiceFormat choice
              {"s5", "one file"},                        // second ChoiceFormat choice
              {"s6", "{0,number} files"},                // third ChoiceFormat choice
              {"s7", "3 Mar 96"},                        // sample date
              {"s8", new Dimension(1,5)}                 // real object, not just string
          // END OF MATERIAL TO LOCALIZE
          };        }        }
  public class MyResources_fr extends ListResourceBundle {
      protected Object[][] getContents() {
          return new Object[][] = {
          // LOCALIZE THIS
              {"s1", "Le disque \"{1}\" {0}."},          // MessageFormat pattern
              {"s2", "1"},                               // location of {0} in pattern
              {"s3", "Mon disque"},                      // sample disk name
              {"s4", "ne contient pas de fichiers"},     // first ChoiceFormat choice
              {"s5", "contient un fichier"},             // second ChoiceFormat choice
              {"s6", "contient {0,number} fichiers"},    // third ChoiceFormat choice
              {"s7", "3 mars 1996"},                     // sample date
              {"s8", new Dimension(1,3)}                 // real object, not just string
          // END OF MATERIAL TO LOCALIZE
          };        }        }        
  
@endcode
  </blockquote>
 - seealso: ResourceBundle
 - seealso: PropertyResourceBundle
 @since JDK1.1
 */
@interface JavaUtilListResourceBundle : JavaUtilResourceBundle

#pragma mark Public

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors, typically
  implicit.)
 */
- (instancetype)init;

/*!
 @brief Returns an <code>Enumeration</code> of the keys contained in
  this <code>ResourceBundle</code> and its parent bundles.
 @return an <code>Enumeration</code> of the keys contained in
          this <code>ResourceBundle</code> and its parent bundles.
 - seealso: #keySet()
 */
- (id<JavaUtilEnumeration>)getKeys;

- (id)handleGetObjectWithNSString:(NSString *)key;

#pragma mark Protected

/*!
 @brief Returns an array in which each item is a pair of objects in an 
 <code>Object</code> array.The first element of each pair is
  the key, which must be a <code>String</code>, and the second
  element is the value associated with that key.
 See the class
  description for details.
 @return an array of an <code>Object</code> array representing a
  key-value pair.
 */
- (IOSObjectArray *)getContents;

/*!
 @brief Returns a <code>Set</code> of the keys contained 
 <em>only</em> in this <code>ResourceBundle</code>.
 @return a <code>Set</code> of the keys contained only in this
          <code>ResourceBundle</code>
 @since 1.6
 - seealso: #keySet()
 */
- (id<JavaUtilSet>)handleKeySet;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilListResourceBundle)

FOUNDATION_EXPORT void JavaUtilListResourceBundle_init(JavaUtilListResourceBundle *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilListResourceBundle)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilListResourceBundle")
