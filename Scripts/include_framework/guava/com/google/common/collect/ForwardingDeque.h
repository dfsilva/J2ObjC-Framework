//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingDeque.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingDeque
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingDeque

#if !defined (ComGoogleCommonCollectForwardingDeque_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque || defined(INCLUDE_ComGoogleCommonCollectForwardingDeque))
#define ComGoogleCommonCollectForwardingDeque_

#define RESTRICT_ComGoogleCommonCollectForwardingQueue 1
#define INCLUDE_ComGoogleCommonCollectForwardingQueue 1
#include "../../../../../com/google/common/collect/ForwardingQueue.h"

#define RESTRICT_JavaUtilDeque 1
#define INCLUDE_JavaUtilDeque 1
#include "../../../../../java/util/Deque.h"

@protocol JavaUtilIterator;

@interface ComGoogleCommonCollectForwardingDeque : ComGoogleCommonCollectForwardingQueue < JavaUtilDeque >

#pragma mark Public

- (void)addFirstWithId:(id)e;

- (void)addLastWithId:(id)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id)getFirst;

- (id)getLast;

- (jboolean)offerFirstWithId:(id)e;

- (jboolean)offerLastWithId:(id)e;

- (id)peekFirst;

- (id)peekLast;

- (id)pollFirst;

- (id)pollLast;

- (id)pop;

- (void)pushWithId:(id)e;

- (id)removeFirst;

- (jboolean)removeFirstOccurrenceWithId:(id)o;

- (id)removeLast;

- (jboolean)removeLastOccurrenceWithId:(id)o;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilDeque>)delegate;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingDeque)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingDeque_init(ComGoogleCommonCollectForwardingDeque *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingDeque)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingDeque")
