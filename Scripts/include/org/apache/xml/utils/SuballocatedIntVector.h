//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/kstanger/j2objc-push/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/SuballocatedIntVector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsSuballocatedIntVector")
#ifdef RESTRICT_OrgApacheXmlUtilsSuballocatedIntVector
#define INCLUDE_ALL_OrgApacheXmlUtilsSuballocatedIntVector 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsSuballocatedIntVector 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsSuballocatedIntVector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsSuballocatedIntVector_) && (INCLUDE_ALL_OrgApacheXmlUtilsSuballocatedIntVector || defined(INCLUDE_OrgApacheXmlUtilsSuballocatedIntVector))
#define OrgApacheXmlUtilsSuballocatedIntVector_

@class IOSIntArray;
@class IOSObjectArray;

/*!
 @brief A very simple table that stores a list of int.
 Very similar API to our
 IntVector class (same API); different internal storage.
 This version uses an array-of-arrays solution. Read/write access is thus
 a bit slower than the simple IntVector, and basic storage is a trifle
 higher due to the top-level array -- but appending is O(1) fast rather
 than O(N**2) slow, which will swamp those costs in situations where
 long vectors are being built up.
 Known issues:
 Some methods are private because they haven't yet been tested properly.
 Retrieval performance is critical, since this is used at the core
 of the DTM model. (Append performance is almost as important.)
 That's pushing me toward just letting reads from unset indices
 throw exceptions or return stale data; safer behavior would have
 performance costs.
 */
@interface OrgApacheXmlUtilsSuballocatedIntVector : NSObject {
 @public
  /*!
   @brief Size of blocks to allocate
   */
  jint m_blocksize_;
  /*!
   @brief Bitwise addressing (much faster than div/remainder
   */
  jint m_SHIFT_, m_MASK_;
  /*!
   @brief The number of blocks to (over)allocate by
   */
  jint m_numblocks_;
  /*!
   @brief Array of arrays of ints
   */
  IOSObjectArray *m_map_;
  /*!
   @brief Number of ints in array
   */
  jint m_firstFree_;
  /*!
   @brief "Shortcut" handle to m_map[0].
   Surprisingly helpful for short vectors. 
   */
  IOSIntArray *m_map0_;
  /*!
   @brief "Shortcut" handle to most recently added row of m_map.
   Very helpful during construction.
    internal
   */
  IOSIntArray *m_buildCache_;
  jint m_buildCacheStartIndex_;
}

+ (jint)NUMBLOCKS_DEFAULT;

#pragma mark Public

/*!
 @brief Default constructor.
 Note that the default
 block size is currently 2K, which may be overkill for
 small lists and undershootng for large ones.
 */
- (instancetype)init;

/*!
 @brief Construct a IntVector, using the given block size and
 the default number of blocks (32).
 @param blocksize Size of block to allocate
 */
- (instancetype)initWithInt:(jint)blocksize;

/*!
 @brief Construct a IntVector, using the given block size and number
 of blocks.
 For efficiency, we will round the requested size 
 off to a power of two.
 @param blocksize Size of block to allocate
 @param numblocks Number of blocks to allocate
 */
- (instancetype)initWithInt:(jint)blocksize
                    withInt:(jint)numblocks;

/*!
 @brief Append a int onto the vector.
 @param value Int to add to the list
 */
- (void)addElementWithInt:(jint)value;

/*!
 @brief Get the nth element.
 This is often at the innermost loop of an
 application, so performance is critical.
 @param i index of value to get
 @return value at given index. If that value wasn't previously set,
 the result is undefined for performance reasons. It may throw an
 exception (see below), may return zero, or (if setSize has previously
 been used) may return stale data.
 @throws ArrayIndexOutOfBoundsException if the index was _clearly_
 unreasonable (negative, or past the highest block).
 @throws NullPointerException if the index points to a block that could
 have existed (based on the highest index used) but has never had anything
 set into it.
 %REVIEW% Could add a catch to create the block in that case, or return 0.
 Try/Catch is _supposed_ to be nearly free when not thrown to. Do we
 believe that? Should we have a separate safeElementAt?
 */
- (jint)elementAtWithInt:(jint)i;

/*!
 @brief Return the m_map double array
 @return the internal map of array of arrays
 */
- (IOSObjectArray *)getMap;

/*!
 @brief Return the internal m_map0 array
 @return the m_map0 array
 */
- (IOSIntArray *)getMap0;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem object to look for
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithInt:(jint)elem;

/*!
 @brief Searches for the first occurence of the given argument,
 beginning the search at index, and testing for equality
 using the equals method.
 @param elem object to look for
 @param index Index of where to begin search
 @return the index of the first occurrence of the object
 argument in this vector at position index or later in the
 vector; returns -1 if the object is not found.
 */
- (jint)indexOfWithInt:(jint)elem
               withInt:(jint)index;

/*!
 @brief Wipe it out.
 Currently defined as equivalent to setSize(0).
 */
- (void)removeAllElements;

/*!
 @brief Sets the component at the specified index of this vector to be the
 specified object.
 The previous component at that position is discarded.
 The index must be a value greater than or equal to 0 and less
 than the current size of the vector.
 @param value object to set
 @param at    Index of where to set the object
 */
- (void)setElementAtWithInt:(jint)value
                    withInt:(jint)at;

/*!
 @brief Set the length of the list.
 This will only work to truncate the list, and
 even then it has not been heavily tested and may not be trustworthy.
 @return length of the list
 */
- (void)setSizeWithInt:(jint)sz;

/*!
 @brief Get the length of the list.
 @return length of the list
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsSuballocatedIntVector)

J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsSuballocatedIntVector, m_map_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsSuballocatedIntVector, m_map0_, IOSIntArray *)
J2OBJC_FIELD_SETTER(OrgApacheXmlUtilsSuballocatedIntVector, m_buildCache_, IOSIntArray *)

/*!
 @brief The default number of blocks to (over)allocate by
 */
inline jint OrgApacheXmlUtilsSuballocatedIntVector_get_NUMBLOCKS_DEFAULT();
#define OrgApacheXmlUtilsSuballocatedIntVector_NUMBLOCKS_DEFAULT 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsSuballocatedIntVector, NUMBLOCKS_DEFAULT, jint)

FOUNDATION_EXPORT void OrgApacheXmlUtilsSuballocatedIntVector_init(OrgApacheXmlUtilsSuballocatedIntVector *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *new_OrgApacheXmlUtilsSuballocatedIntVector_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *create_OrgApacheXmlUtilsSuballocatedIntVector_init();

FOUNDATION_EXPORT void OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_withInt_(OrgApacheXmlUtilsSuballocatedIntVector *self, jint blocksize, jint numblocks);

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *new_OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_withInt_(jint blocksize, jint numblocks) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *create_OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_withInt_(jint blocksize, jint numblocks);

FOUNDATION_EXPORT void OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_(OrgApacheXmlUtilsSuballocatedIntVector *self, jint blocksize);

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *new_OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_(jint blocksize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsSuballocatedIntVector *create_OrgApacheXmlUtilsSuballocatedIntVector_initWithInt_(jint blocksize);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsSuballocatedIntVector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsSuballocatedIntVector")
