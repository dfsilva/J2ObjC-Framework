//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/BeanDescriptor.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansBeanDescriptor")
#ifdef RESTRICT_JavaBeansBeanDescriptor
#define INCLUDE_ALL_JavaBeansBeanDescriptor 0
#else
#define INCLUDE_ALL_JavaBeansBeanDescriptor 1
#endif
#undef RESTRICT_JavaBeansBeanDescriptor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansBeanDescriptor_) && (INCLUDE_ALL_JavaBeansBeanDescriptor || defined(INCLUDE_JavaBeansBeanDescriptor))
#define JavaBeansBeanDescriptor_

#define RESTRICT_JavaBeansFeatureDescriptor 1
#define INCLUDE_JavaBeansFeatureDescriptor 1
#include "java/beans/FeatureDescriptor.h"

@class IOSClass;

/*!
 @brief Describes a bean's global information.
 */
@interface JavaBeansBeanDescriptor : JavaBeansFeatureDescriptor

#pragma mark Public

/*!
 @brief <p>
 Constructs an instance with the bean's <code>Class</code>.
 The descriptor's
 <code>getName()</code> is set as the unqualified name of the
 <code>beanClass</code>.
 </p>
 @param beanClass
 The bean's Class.
 */
- (instancetype)initWithIOSClass:(IOSClass *)beanClass;

/*!
 @brief <p>
 Constructs an instance with the bean's <code>Class</code> and a customizer
 <code>Class</code>.
 The descriptor's <code>getName()</code> is set as the
 unqualified name of the <code>beanClass</code>.
 </p>
 @param beanClass
 The bean's Class.
 @param customizerClass
 The bean's customizer Class.
 */
- (instancetype)initWithIOSClass:(IOSClass *)beanClass
                    withIOSClass:(IOSClass *)customizerClass;

/*!
 @brief <p>
 Gets the bean's <code>Class</code>.
 </p>
 @return A <code>Class</code> instance.
 */
- (IOSClass *)getBeanClass;

/*!
 @brief <p>
 Gets the bean's customizer <code>Class</code>/
 </p>
 @return A <code>Class</code> instance or <code>null</code>.
 */
- (IOSClass *)getCustomizerClass;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaBeansBeanDescriptor)

FOUNDATION_EXPORT void JavaBeansBeanDescriptor_initWithIOSClass_withIOSClass_(JavaBeansBeanDescriptor *self, IOSClass *beanClass, IOSClass *customizerClass);

FOUNDATION_EXPORT JavaBeansBeanDescriptor *new_JavaBeansBeanDescriptor_initWithIOSClass_withIOSClass_(IOSClass *beanClass, IOSClass *customizerClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansBeanDescriptor *create_JavaBeansBeanDescriptor_initWithIOSClass_withIOSClass_(IOSClass *beanClass, IOSClass *customizerClass);

FOUNDATION_EXPORT void JavaBeansBeanDescriptor_initWithIOSClass_(JavaBeansBeanDescriptor *self, IOSClass *beanClass);

FOUNDATION_EXPORT JavaBeansBeanDescriptor *new_JavaBeansBeanDescriptor_initWithIOSClass_(IOSClass *beanClass) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaBeansBeanDescriptor *create_JavaBeansBeanDescriptor_initWithIOSClass_(IOSClass *beanClass);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansBeanDescriptor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansBeanDescriptor")
