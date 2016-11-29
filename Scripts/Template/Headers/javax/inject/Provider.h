//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/inject/javax_inject/build_result/java/javax/inject/Provider.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxInjectProvider")
#ifdef RESTRICT_JavaxInjectProvider
#define INCLUDE_ALL_JavaxInjectProvider 0
#else
#define INCLUDE_ALL_JavaxInjectProvider 1
#endif
#undef RESTRICT_JavaxInjectProvider

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxInjectProvider_) && (INCLUDE_ALL_JavaxInjectProvider || defined(INCLUDE_JavaxInjectProvider))
#define JavaxInjectProvider_

/*!
 @brief Provides instances of <code>T</code>.
 Typically implemented by an injector. For
 any type <code>T</code> that can be injected, you can also inject
 <code>Provider<T></code>. Compared to injecting <code>T</code> directly, injecting
 <code>Provider<T></code> enables:
 <ul>
 <li>retrieving multiple instances.</li>
 <li>lazy or optional retrieval of an instance.</li>
 <li>breaking circular dependencies.</li>
 <li>abstracting scope so you can look up an instance in a smaller scope
 from an instance in a containing scope.</li>
 </ul>
 <p>For example:
 @code

   class Car {
     &#064;Inject Car(Provider&lt;Seat> seatProvider) {
       Seat driver = seatProvider.get();
       Seat passenger = seatProvider.get();
       ...
     }
   
@endcode
 */
@protocol JavaxInjectProvider < JavaObject >

/*!
 @brief Provides a fully-constructed and injected instance of <code>T</code>.
 @throws RuntimeException if the injector encounters an error while
 providing an instance. For example, if an injectable member on
 <code>T</code> throws an exception, the injector may wrap the exception
 and throw it to the caller of <code>get()</code>. Callers should not try
 to handle such exceptions as the behavior may vary across injector
 implementations and even different configurations of the same injector.
 */
- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxInjectProvider)

J2OBJC_TYPE_LITERAL_HEADER(JavaxInjectProvider)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxInjectProvider")
