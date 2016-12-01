//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/ChunkedIntArray.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray")
#ifdef RESTRICT_OrgApacheXmlDtmRefChunkedIntArray
#define INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefChunkedIntArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefChunkedIntArray_) && (INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray || defined(INCLUDE_OrgApacheXmlDtmRefChunkedIntArray))
#define OrgApacheXmlDtmRefChunkedIntArray_

@class IOSIntArray;
@class OrgApacheXmlDtmRefChunkedIntArray_ChunksVector;

/*!
 @brief <code>ChunkedIntArray</code> is an extensible array of blocks of integers.
 (I'd consider Vector, but it's unable to handle integers except by
 turning them into Objects.)
 <p>Making this a separate class means some call-and-return overhead. But
 doing it all inline tends to be fragile and expensive in coder time,
 not to mention driving up code size. If you want to inline it, feel free.
 The Java text suggest that private and Final methods may be inlined, 
 and one can argue that this beast need not be made subclassable...</p>
 <p>%REVIEW% This has strong conceptual overlap with the IntVector class.
 It would probably be a good thing to merge the two, when time permits.<p>
 */
@interface OrgApacheXmlDtmRefChunkedIntArray : NSObject {
 @public
  OrgApacheXmlDtmRefChunkedIntArray_ChunksVector *chunks_;
  IOSIntArray *fastArray_;
  jint lastUsed_;
}

+ (jint)slotsize;

+ (jint)lowbits;

+ (jint)chunkalloc;

+ (jint)lowmask;

#pragma mark Package-Private

/*!
 @brief Create a new CIA with specified record size.
 Currently record size MUST
 be a power of two... and in fact is hardcoded to 4.
 */
- (instancetype)initWithInt:(jint)slotsizeArg;

/*!
 @brief Append a 4-integer record to the CIA, starting with record 1.
 (Since
 arrays are initialized to all-0, 0 has been reserved as the "unknown"
 value in DTM.)
 @return the index at which this record was inserted.
 */
- (jint)appendSlotWithInt:(jint)w0
                  withInt:(jint)w1
                  withInt:(jint)w2
                  withInt:(jint)w3;

/*!
 @brief Disard the highest-numbered record.
 This is used in the string-buffer
 CIA; when only a single characters() chunk has been recieved, its index
 is moved into the Text node rather than being referenced by indirection
 into the text accumulator.
 */
- (void)discardLast;

/*!
 @brief Retrieve an integer from the CIA by record number and column within
 the record, both 0-based (though position 0 is reserved for special
 purposes).
 @param position int Record number
 @param slotpos int Column number
 */
- (jint)readEntryWithInt:(jint)position
                 withInt:(jint)offset;

/*!
 @brief Retrieve the contents of a record into a user-supplied buffer array.
 Used to reduce addressing overhead when code will access several
 columns of the record.
 @param position int Record number
 @param buffer int[] Integer array provided by user, must be large enough
 to hold a complete record.
 */
- (void)readSlotWithInt:(jint)position
           withIntArray:(IOSIntArray *)buffer;

/*!
 @return int index of highest-numbered record currently in use
 */
- (jint)slotsUsed;

- (jint)specialFindWithInt:(jint)startPos
                   withInt:(jint)position;

/*!
 @brief Overwrite the integer found at a specific record and column.
 Used to back-patch existing records, most often changing their
 "next sibling" reference from 0 (unknown) to something meaningful
 @param position int Record number
 @param offset int Column number
 @param value int New contents
 */
- (void)writeEntryWithInt:(jint)position
                  withInt:(jint)offset
                  withInt:(jint)value;

/*!
 @brief Overwrite an entire (4-integer) record at the specified index.
 Mostly used to create record 0, the Document node.
 @param position integer Record number
 @param w0 int
 @param w1 int
 @param w2 int
 @param w3 int
 */
- (void)writeSlotWithInt:(jint)position
                 withInt:(jint)w0
                 withInt:(jint)w1
                 withInt:(jint)w2
                 withInt:(jint)w3;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefChunkedIntArray)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefChunkedIntArray, chunks_, OrgApacheXmlDtmRefChunkedIntArray_ChunksVector *)
J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefChunkedIntArray, fastArray_, IOSIntArray *)

inline jint OrgApacheXmlDtmRefChunkedIntArray_get_slotsize();
#define OrgApacheXmlDtmRefChunkedIntArray_slotsize 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefChunkedIntArray, slotsize, jint)

inline jint OrgApacheXmlDtmRefChunkedIntArray_get_lowbits();
#define OrgApacheXmlDtmRefChunkedIntArray_lowbits 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefChunkedIntArray, lowbits, jint)

inline jint OrgApacheXmlDtmRefChunkedIntArray_get_chunkalloc();
#define OrgApacheXmlDtmRefChunkedIntArray_chunkalloc 1024
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefChunkedIntArray, chunkalloc, jint)

inline jint OrgApacheXmlDtmRefChunkedIntArray_get_lowmask();
#define OrgApacheXmlDtmRefChunkedIntArray_lowmask 1023
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefChunkedIntArray, lowmask, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefChunkedIntArray_initWithInt_(OrgApacheXmlDtmRefChunkedIntArray *self, jint slotsizeArg);

FOUNDATION_EXPORT OrgApacheXmlDtmRefChunkedIntArray *new_OrgApacheXmlDtmRefChunkedIntArray_initWithInt_(jint slotsizeArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefChunkedIntArray *create_OrgApacheXmlDtmRefChunkedIntArray_initWithInt_(jint slotsizeArg);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefChunkedIntArray)

#endif

#if !defined (OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_) && (INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray || defined(INCLUDE_OrgApacheXmlDtmRefChunkedIntArray_ChunksVector))
#define OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_

@class IOSIntArray;
@class IOSObjectArray;
@class OrgApacheXmlDtmRefChunkedIntArray;

@interface OrgApacheXmlDtmRefChunkedIntArray_ChunksVector : NSObject {
 @public
  IOSObjectArray *m_map_;
  jint m_mapSize_;
  jint pos_;
}

+ (jint)BLOCKSIZE;

#pragma mark Package-Private

- (instancetype)initWithOrgApacheXmlDtmRefChunkedIntArray:(OrgApacheXmlDtmRefChunkedIntArray *)outer$;

- (void)addElementWithIntArray:(IOSIntArray *)value;

- (IOSIntArray *)elementAtWithInt:(jint)pos;

- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefChunkedIntArray_ChunksVector)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefChunkedIntArray_ChunksVector, m_map_, IOSObjectArray *)

inline jint OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_get_BLOCKSIZE();
#define OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_BLOCKSIZE 64
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefChunkedIntArray_ChunksVector, BLOCKSIZE, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_initWithOrgApacheXmlDtmRefChunkedIntArray_(OrgApacheXmlDtmRefChunkedIntArray_ChunksVector *self, OrgApacheXmlDtmRefChunkedIntArray *outer$);

FOUNDATION_EXPORT OrgApacheXmlDtmRefChunkedIntArray_ChunksVector *new_OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_initWithOrgApacheXmlDtmRefChunkedIntArray_(OrgApacheXmlDtmRefChunkedIntArray *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefChunkedIntArray_ChunksVector *create_OrgApacheXmlDtmRefChunkedIntArray_ChunksVector_initWithOrgApacheXmlDtmRefChunkedIntArray_(OrgApacheXmlDtmRefChunkedIntArray *outer$);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefChunkedIntArray_ChunksVector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefChunkedIntArray")
