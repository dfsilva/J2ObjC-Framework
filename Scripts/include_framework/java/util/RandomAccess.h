//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/RandomAccess.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilRandomAccess")
#ifdef RESTRICT_JavaUtilRandomAccess
#define INCLUDE_ALL_JavaUtilRandomAccess 0
#else
#define INCLUDE_ALL_JavaUtilRandomAccess 1
#endif
#undef RESTRICT_JavaUtilRandomAccess

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilRandomAccess_) && (INCLUDE_ALL_JavaUtilRandomAccess || defined(INCLUDE_JavaUtilRandomAccess))
#define JavaUtilRandomAccess_

/*!
 @brief Marker interface used by <tt>List</tt> implementations to indicate that
  they support fast (generally constant time) random access.The primary
  purpose of this interface is to allow generic algorithms to alter their
  behavior to provide good performance when applied to either random or
  sequential access lists.
 <p>The best algorithms for manipulating random access lists (such as 
 <tt>ArrayList</tt>) can produce quadratic behavior when applied to
  sequential access lists (such as <tt>LinkedList</tt>).  Generic list
  algorithms are encouraged to check whether the given list is an 
 <tt>instanceof</tt> this interface before applying an algorithm that would
  provide poor performance if it were applied to a sequential access list,
  and to alter their behavior if necessary to guarantee acceptable
  performance. 
 <p>It is recognized that the distinction between random and sequential
  access is often fuzzy.  For example, some <tt>List</tt> implementations
  provide asymptotically linear access times if they get huge, but constant
  access times in practice.  Such a <tt>List</tt> implementation
  should generally implement this interface.  As a rule of thumb, a 
 <tt>List</tt> implementation should implement this interface if,
  for typical instances of the class, this loop: 
 @code

      for (int i=0, n=list.size(); i &lt; n; i++)
          list.get(i); 
  
@endcode
  runs faster than this loop: 
 @code

      for (Iterator i=list.iterator(); i.hasNext(); )
          i.next(); 
  
@endcode
  
 <p>This interface is a member of the 
 <a href="{@@docRoot}openjdk-redirect.html?v=8&path=/technotes/guides/collections/index.html">
  Java Collections Framework</a>.
 @since 1.4
 */
@protocol JavaUtilRandomAccess < JavaObject >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilRandomAccess)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilRandomAccess)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilRandomAccess")
