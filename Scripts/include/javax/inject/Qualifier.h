//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/inject/javax_inject/build_result/java/javax/inject/Qualifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxInjectQualifier")
#ifdef RESTRICT_JavaxInjectQualifier
#define INCLUDE_ALL_JavaxInjectQualifier 0
#else
#define INCLUDE_ALL_JavaxInjectQualifier 1
#endif
#undef RESTRICT_JavaxInjectQualifier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxInjectQualifier_) && (INCLUDE_ALL_JavaxInjectQualifier || defined(INCLUDE_JavaxInjectQualifier))
#define JavaxInjectQualifier_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Identifies qualifier annotations.
 Anyone can define a new qualifier. A
 qualifier annotation:
 <ul>
 <li>is annotated with <code>@@Qualifier</code>, <code>@@Retention(RUNTIME)</code>,
 and typically <code>@@Documented</code>.</li>
 <li>can have attributes.</li>
 <li>may be part of the public API, much like the dependency type, but
 unlike implementation types which needn't be part of the public
 API.</li>
 <li>may have restricted usage if annotated with <code>@@Target</code>. While
 this specification covers applying qualifiers to fields and
 parameters only, some injector configurations might use qualifier
 annotations in other places (on methods or classes for example).</li>
 </ul>
 <p>For example:
 @code

   &#064;java.lang.annotation.Documented
   &#064;java.lang.annotation.Retention(RUNTIME)
   &#064;javax.inject.Qualifier
   public @@interface Leather {
     Color color() default Color.TAN;
     public enum Color { RED, BLACK, TAN }
   
@endcode
 - seealso: javax.inject.Named @@Named
 */
@protocol JavaxInjectQualifier < JavaLangAnnotationAnnotation >

@end

@interface JavaxInjectQualifier : NSObject < JavaxInjectQualifier >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxInjectQualifier)

FOUNDATION_EXPORT id<JavaxInjectQualifier> create_JavaxInjectQualifier();

J2OBJC_TYPE_LITERAL_HEADER(JavaxInjectQualifier)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxInjectQualifier")
