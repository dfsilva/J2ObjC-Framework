//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/Multiset.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectMultiset

#if !defined (ComGoogleCommonCollectMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectMultiset || defined(INCLUDE_ComGoogleCommonCollectMultiset))
#define ComGoogleCommonCollectMultiset_

#define RESTRICT_JavaUtilCollection 1
#define INCLUDE_JavaUtilCollection 1
#include "../../../../../java/util/Collection.h"

@protocol JavaUtilIterator;
@protocol JavaUtilSet;

@protocol ComGoogleCommonCollectMultiset < JavaUtilCollection, JavaObject >

- (jint)countWithId:(id)element;

- (jint)addWithId:(id)element
          withInt:(jint)occurrences;

- (jint)removeWithId:(id)element
             withInt:(jint)occurrences;

- (jint)setCountWithId:(id)element
               withInt:(jint)count;

- (jboolean)setCountWithId:(id)element
                   withInt:(jint)oldCount
                   withInt:(jint)newCount;

- (id<JavaUtilSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (NSString *)description;

- (id<JavaUtilIterator>)iterator;

- (jboolean)containsWithId:(id)element;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)elements;

- (jboolean)addWithId:(id)element;

- (jboolean)removeWithId:(id)element;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultiset)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultiset)

#endif

#if !defined (ComGoogleCommonCollectMultiset_Entry_) && (INCLUDE_ALL_ComGoogleCommonCollectMultiset || defined(INCLUDE_ComGoogleCommonCollectMultiset_Entry))
#define ComGoogleCommonCollectMultiset_Entry_

@protocol ComGoogleCommonCollectMultiset_Entry < JavaObject >

- (id)getElement;

- (jint)getCount;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectMultiset_Entry)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectMultiset_Entry)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectMultiset")
