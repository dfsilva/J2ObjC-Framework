//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingCollection.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingCollection")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingCollection
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingCollection 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingCollection 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingCollection

#if !defined (ComGoogleCommonCollectForwardingCollection_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingCollection || defined(INCLUDE_ComGoogleCommonCollectForwardingCollection))
#define ComGoogleCommonCollectForwardingCollection_

#define RESTRICT_ComGoogleCommonCollectForwardingObject 1
#define INCLUDE_ComGoogleCommonCollectForwardingObject 1
#include "../../../../../com/google/common/collect/ForwardingObject.h"

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "../../../../../java/util/Collection.h"

@class IOSObjectArray;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectForwardingCollection : ComGoogleCommonCollectForwardingObject < JavaUtilCollection >

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)array;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilCollection>)delegate;

- (jboolean)standardAddAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (void)standardClear;

- (jboolean)standardContainsWithId:(id)object;

- (jboolean)standardContainsAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)standardIsEmpty;

- (jboolean)standardRemoveWithId:(id)object;

- (jboolean)standardRemoveAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (jboolean)standardRetainAllWithJavaUtilCollection:(id<JavaUtilCollection>)collection;

- (IOSObjectArray *)standardToArray;

- (IOSObjectArray *)standardToArrayWithNSObjectArray:(IOSObjectArray *)array;

- (NSString *)standardToString;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingCollection)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingCollection_init(ComGoogleCommonCollectForwardingCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingCollection)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingCollection")
