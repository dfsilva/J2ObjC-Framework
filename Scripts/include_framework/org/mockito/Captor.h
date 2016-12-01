//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/Captor.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoCaptor")
#ifdef RESTRICT_OrgMockitoCaptor
#define INCLUDE_ALL_OrgMockitoCaptor 0
#else
#define INCLUDE_ALL_OrgMockitoCaptor 1
#endif
#undef RESTRICT_OrgMockitoCaptor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoCaptor_) && (INCLUDE_ALL_OrgMockitoCaptor || defined(INCLUDE_OrgMockitoCaptor))
#define OrgMockitoCaptor_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Allows shorthand <code>org.mockito.ArgumentCaptor</code> creation on fields.
 <p>Example:
 <pre class="code"><code class="java">
 public class Test{
 &#64;Captor ArgumentCaptor&lt;AsyncCallback&lt;Foo&gt;&gt; captor;
 &#64;Before
 public void init(){
 MockitoAnnotations.initMocks(this);
 }
 &#64;Test public void shouldDoSomethingUseful() {
 //...
 verify(mock.doStuff(captor.capture()));
 assertEquals("foo", captor.getValue());
 }
 }
 
@endcode
 <p>
 One of the advantages of using &#64;Captor annotation is that you can avoid warnings related capturing complex generic types.
 - seealso: ArgumentCaptor
 @since 1.8.3
 */
@protocol OrgMockitoCaptor < JavaLangAnnotationAnnotation >

@end

@interface OrgMockitoCaptor : NSObject < OrgMockitoCaptor >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoCaptor)

FOUNDATION_EXPORT id<OrgMockitoCaptor> create_OrgMockitoCaptor();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoCaptor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoCaptor")
