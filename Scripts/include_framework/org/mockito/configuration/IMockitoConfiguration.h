//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/testing/mockito/build_result/java/org/mockito/configuration/IMockitoConfiguration.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoConfigurationIMockitoConfiguration")
#ifdef RESTRICT_OrgMockitoConfigurationIMockitoConfiguration
#define INCLUDE_ALL_OrgMockitoConfigurationIMockitoConfiguration 0
#else
#define INCLUDE_ALL_OrgMockitoConfigurationIMockitoConfiguration 1
#endif
#undef RESTRICT_OrgMockitoConfigurationIMockitoConfiguration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoConfigurationIMockitoConfiguration_) && (INCLUDE_ALL_OrgMockitoConfigurationIMockitoConfiguration || defined(INCLUDE_OrgMockitoConfigurationIMockitoConfiguration))
#define OrgMockitoConfigurationIMockitoConfiguration_

@protocol OrgMockitoConfigurationAnnotationEngine;
@protocol OrgMockitoReturnValues;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Use it to configure Mockito.
 For now there are not many configuration options but it may change in future.
 <p>
 In most cases you don't really need to configure Mockito. For example in case of working with legacy code, 
 when you might want to have different 'mocking style' this interface might be helpful. 
 A reason of configuring Mockito might be if you disagree with the <code>ReturnsEmptyValues</code> unstubbed mocks return.
 <p>
 To configure Mockito create exactly <b>org.mockito.configuration.MockitoConfiguration</b> class that implements this interface.
 <p>
 Configuring Mockito is completely <b>optional</b> - nothing happens if there isn't any <b>org.mockito.configuration.MockitoConfiguration</b> on the classpath. 
 <p>
 <b>org.mockito.configuration.MockitoConfiguration</b> must implement IMockitoConfiguration or extend <code>DefaultMockitoConfiguration</code>
 <p>
 Mockito will store single instance of org.mockito.configuration.MockitoConfiguration per thread (using ThreadLocal). 
 For sanity of your tests, don't make the implementation stateful.
 <p>
 If you have comments on Mockito configuration feature don't hesitate to write to mockito@@googlegroups.com
 */
@protocol OrgMockitoConfigurationIMockitoConfiguration < JavaObject >

/*!
 */
- (id<OrgMockitoReturnValues>)getReturnValues __attribute__((deprecated));

/*!
 @brief Allows configuring the default answers of unstubbed invocations
 <p>
 See javadoc for <code>IMockitoConfiguration</code>
 */
- (id<OrgMockitoStubbingAnswer>)getDefaultAnswer;

/*!
 @brief Configures annotations for mocks
 <p>
 See javadoc for <code>IMockitoConfiguration</code>
 */
- (id<OrgMockitoConfigurationAnnotationEngine>)getAnnotationEngine;

/*!
 @brief This should be turned on unless you're a Mockito developer and you wish
 to have verbose (read: messy) stack traces that only few understand (eg:
 Mockito developers)
 <p>
 See javadoc for <code>IMockitoConfiguration</code>
 @return if Mockito should clean stack traces
 */
- (jboolean)cleansStackTrace;

/*!
 @brief Allow objenesis to cache classes.
 If you're in an environment where classes 
 are dynamically reloaded, you can disable this to avoid classcast exceptions.
 */
- (jboolean)enableClassCache;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoConfigurationIMockitoConfiguration)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoConfigurationIMockitoConfiguration)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoConfigurationIMockitoConfiguration")
