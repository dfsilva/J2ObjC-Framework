//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/Spy.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoSpy")
#ifdef RESTRICT_OrgMockitoSpy
#define INCLUDE_ALL_OrgMockitoSpy 0
#else
#define INCLUDE_ALL_OrgMockitoSpy 1
#endif
#undef RESTRICT_OrgMockitoSpy

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoSpy_) && (INCLUDE_ALL_OrgMockitoSpy || defined(INCLUDE_OrgMockitoSpy))
#define OrgMockitoSpy_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Allows shorthand wrapping of field instances in an spy object.
 <p>
 Example:
 <pre class="code"><code class="java">
 public class Test{
 //Instance for spying is created by calling constructor explicitly:
 &#64;Spy Foo spyOnFoo = new Foo("argument");
 //Instance for spying is created by mockito via reflection (only default constructors supported): 
 &#64;Spy Bar spyOnBar;
 &#64;Before
 public void init(){
 MockitoAnnotations.initMocks(this);
 }
 ...
 }
 
@endcode
 <p>
 Same as doing:
 <pre class="code"><code class="java">
 Foo spyOnFoo = Mockito.spy(new Foo("argument"));
 Bar spyOnFoo = Mockito.spy(new Bar());
 
@endcode
 <p>
 <strong>The field annotated with &#064;Spy can be initialized by Mockito if a zero argument constructor
 can be found in the type (even private). <u>But Mockito cannot instantiate inner classes, local classes,
 abstract classes and interfaces.</u></strong>
 <strong>The field annotated with &#064;Spy can be initialized explicitly at declaration point.
 Alternatively, if you don't provide the instance Mockito will try to find zero argument constructor (even private)
 and create an instance for you.
 <u>But Mockito cannot instantiate inner classes, local classes, abstract classes and interfaces.</u></strong>
 For example this class can be instantiated by Mockito :
 <pre class="code"><code class="java">public class Bar {
 private Bar() {}
 public Bar(String publicConstructorWithOneArg) {}
 
@endcode
 </p>
 <h4>Important gotcha on spying real objects!</h4>
 <ol>
 <li>Sometimes it's impossible or impractical to use <code>Mockito.when(Object)</code> for stubbing spies.
 Therefore for spies it is recommended to always use <code>doReturn</code>|<code>Answer</code>|<code>Throw()</code>|<code>CallRealMethod</code>
 family of methods for stubbing. Example:
 <pre class="code"><code class="java">
 List list = new LinkedList();
 List spy = spy(list);
 //Impossible: real method is called so spy.get(0) throws IndexOutOfBoundsException (the list is yet empty)
 when(spy.get(0)).thenReturn("foo");
 //You have to use doReturn() for stubbing
 doReturn("foo").when(spy).get(0);
 
@endcode
 </li>
 <li>Mockito <b>*does not*</b> delegate calls to the passed real instance, instead it actually creates a copy of it.
 So if you keep the real instance and interact with it, don't expect the spied to be aware of those interaction
 and their effect on real instance state.
 The corollary is that when an <b>*unstubbed*</b> method is called <b>*on the spy*</b> but <b>*not on the real instance*</b>,
 you won't see any effects on the real instance.</li>
 <li>Watch out for final methods.
 Mockito doesn't mock final methods so the bottom line is: when you spy on real objects + you try to stub a final method = trouble.
 Also you won't be able to verify those method as well.
 </li>
 </ol>
 <p>
 <strong>One last warning :</strong> if you call <code>MockitoAnnotations.initMocks(this)</code> in a
 super class <strong>constructor</strong> then this will not work. It is because fields
 in subclass are only instantiated after super class constructor has returned.
 It's better to use &#64;Before.
 <strong>Instead</strong> you can also put initMocks() in your JUnit runner (&#064;RunWith) or use the built-in
 <code>org.mockito.runners.MockitoJUnitRunner</code>.
 </p>
 - seealso: Mockito#spy(Object)
 - seealso: Mock
 - seealso: InjectMocks
 - seealso: MockitoAnnotations#initMocks(Object)
 - seealso: org.mockito.runners.MockitoJUnitRunner
 @since 1.8.3
 */
@protocol OrgMockitoSpy < JavaLangAnnotationAnnotation >

@end

@interface OrgMockitoSpy : NSObject < OrgMockitoSpy >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoSpy)

FOUNDATION_EXPORT id<OrgMockitoSpy> create_OrgMockitoSpy();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoSpy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoSpy")
