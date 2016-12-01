//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/MinMaxPriorityQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue")
#ifdef RESTRICT_ComGoogleCommonCollectMinMaxPriorityQueue
#define INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMinMaxPriorityQueue

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue))
#define ComGoogleCommonCollectMinMaxPriorityQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "java/util/AbstractQueue.h"

@class ComGoogleCommonCollectMinMaxPriorityQueue_Builder;
@class ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc;
@class IOSObjectArray;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectMinMaxPriorityQueue : JavaUtilAbstractQueue {
 @public
  jint maximumSize_;
}

#pragma mark Public

- (jboolean)addWithId:(id)element;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)newElements;

- (void)clear;

- (id<JavaUtilComparator>)comparator;

+ (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

+ (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable>)initialContents;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

- (id<JavaUtilIterator>)iterator;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

- (jboolean)offerWithId:(id)element;

+ (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)orderedByWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (id)peek;

- (id)peekFirst;

- (id)peekLast;

- (id)poll;

- (id)pollFirst;

- (id)pollLast;

- (id)removeFirst;

- (id)removeLast;

- (jint)size;

- (IOSObjectArray *)toArray;

#pragma mark Package-Private

- (jint)capacity;

- (id)elementDataWithInt:(jint)index;

+ (jint)initialQueueSizeWithInt:(jint)configuredExpectedSize
                        withInt:(jint)maximumSize
           withJavaLangIterable:(id<JavaLangIterable>)initialContents OBJC_METHOD_FAMILY_NONE;

+ (jboolean)isEvenLevelWithInt:(jint)index;

- (jboolean)isIntact;

- (ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *)removeAtWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue)

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_create();

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue *ComGoogleCommonCollectMinMaxPriorityQueue_createWithJavaLangIterable_(id<JavaLangIterable> initialContents);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_orderedByWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_expectedSizeWithInt_(jint expectedSize);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_Builder *ComGoogleCommonCollectMinMaxPriorityQueue_maximumSizeWithInt_(jint maximumSize);

FOUNDATION_EXPORT jboolean ComGoogleCommonCollectMinMaxPriorityQueue_isEvenLevelWithInt_(jint index);

FOUNDATION_EXPORT jint ComGoogleCommonCollectMinMaxPriorityQueue_initialQueueSizeWithInt_withInt_withJavaLangIterable_(jint configuredExpectedSize, jint maximumSize, id<JavaLangIterable> initialContents);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue)

#endif

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_Builder_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue_Builder))
#define ComGoogleCommonCollectMinMaxPriorityQueue_Builder_

@class ComGoogleCommonCollectMinMaxPriorityQueue;
@protocol JavaLangIterable;

@interface ComGoogleCommonCollectMinMaxPriorityQueue_Builder : NSObject

#pragma mark Public

- (ComGoogleCommonCollectMinMaxPriorityQueue *)create;

- (ComGoogleCommonCollectMinMaxPriorityQueue *)createWithJavaLangIterable:(id<JavaLangIterable>)initialContents;

- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)expectedSizeWithInt:(jint)expectedSize;

- (ComGoogleCommonCollectMinMaxPriorityQueue_Builder *)maximumSizeWithInt:(jint)maximumSize;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_Builder)

#endif

#if !defined (ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_) && (INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue || defined(INCLUDE_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc))
#define ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_

@interface ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc : NSObject {
 @public
  id toTrickle_;
  id replaced_;
}

#pragma mark Package-Private

- (instancetype)initWithId:(id)toTrickle
                    withId:(id)replaced;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, toTrickle_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc, replaced_, id)

FOUNDATION_EXPORT void ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *self, id toTrickle, id replaced);

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *new_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(id toTrickle, id replaced) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc *create_ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc_initWithId_withId_(id toTrickle, id replaced);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMinMaxPriorityQueue_MoveDesc)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMinMaxPriorityQueue")
