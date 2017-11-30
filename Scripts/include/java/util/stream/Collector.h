//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/stream/Collector.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStreamCollector")
#ifdef RESTRICT_JavaUtilStreamCollector
#define INCLUDE_ALL_JavaUtilStreamCollector 0
#else
#define INCLUDE_ALL_JavaUtilStreamCollector 1
#endif
#undef RESTRICT_JavaUtilStreamCollector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (JavaUtilStreamCollector_) && (INCLUDE_ALL_JavaUtilStreamCollector || defined(INCLUDE_JavaUtilStreamCollector))
#define JavaUtilStreamCollector_

@class IOSObjectArray;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionBinaryOperator;
@protocol JavaUtilFunctionFunction;
@protocol JavaUtilFunctionSupplier;
@protocol JavaUtilSet;

/*!
 @brief A <a href="package-summary.html#Reduction">mutable reduction operation</a> that
  accumulates input elements into a mutable result container, optionally transforming
  the accumulated result into a final representation after all input elements
  have been processed.Reduction operations can be performed either sequentially
  or in parallel.
 <p>Examples of mutable reduction operations include:
  accumulating elements into a <code>Collection</code>; concatenating
  strings using a <code>StringBuilder</code>; computing summary information about
  elements such as sum, min, max, or average; computing "pivot table" summaries
  such as "maximum valued transaction by seller", etc.  The class <code>Collectors</code>
  provides implementations of many common mutable reductions. 
 <p>A <code>Collector</code> is specified by four functions that work together to
  accumulate entries into a mutable result container, and optionally perform
  a final transform on the result.  They are: <ul>
      <li>creation of a new result container (<code>supplier()</code>)</li>
      <li>incorporating a new data element into a result container (<code>accumulator()</code>)</li>
      <li>combining two result containers into one (<code>combiner()</code>)</li>
      <li>performing an optional final transform on the container (<code>finisher()</code>)</li>
  </ul>
  
 <p>Collectors also have a set of characteristics, such as 
 <code>Characteristics.CONCURRENT</code>, that provide hints that can be used by a
  reduction implementation to provide better performance. 
 <p>A sequential implementation of a reduction using a collector would
  create a single result container using the supplier function, and invoke the
  accumulator function once for each input element.  A parallel implementation
  would partition the input, create a result container for each partition,
  accumulate the contents of each partition into a subresult for that partition,
  and then use the combiner function to merge the subresults into a combined
  result. 
 <p>To ensure that sequential and parallel executions produce equivalent
  results, the collector functions must satisfy an <em>identity</em> and an 
 <a href="package-summary.html#Associativity">associativity</a> constraints. 
 <p>The identity constraint says that for any partially accumulated result,
  combining it with an empty result container must produce an equivalent
  result.  That is, for a partially accumulated result <code>a</code> that is the
  result of any series of accumulator and combiner invocations, <code>a</code> must
  be equivalent to <code>combiner.apply(a, supplier.get())</code>.
  
 <p>The associativity constraint says that splitting the computation must
  produce an equivalent result.  That is, for any input elements <code>t1</code>
  and <code>t2</code>, the results <code>r1</code> and <code>r2</code> in the computation
  below must be equivalent: 
 @code
    A a1 = supplier.get();
      accumulator.accept(a1, t1);
      accumulator.accept(a1, t2);
      R r1 = finisher.apply(a1);  // result without splitting
      A a2 = supplier.get();
      accumulator.accept(a2, t1);
      A a3 = supplier.get();
      accumulator.accept(a3, t2);
      R r2 = finisher.apply(combiner.apply(a2, a3));  // result with splitting 
  
@endcode
  
 <p>For collectors that do not have the <code>UNORDERED</code> characteristic,
  two accumulated results <code>a1</code> and <code>a2</code> are equivalent if 
 <code>finisher.apply(a1).equals(finisher.apply(a2))</code>.  For unordered
  collectors, equivalence is relaxed to allow for non-equality related to
  differences in order.  (For example, an unordered collector that accumulated
  elements to a <code>List</code> would consider two lists equivalent if they
  contained the same elements, ignoring order.) 
 <p>Libraries that implement reduction based on <code>Collector</code>, such as 
 <code>Stream.collect(Collector)</code>, must adhere to the following constraints: 
 <ul>
      <li>The first argument passed to the accumulator function, both
      arguments passed to the combiner function, and the argument passed to the
      finisher function must be the result of a previous invocation of the
      result supplier, accumulator, or combiner functions.</li>
      <li>The implementation should not do anything with the result of any of
      the result supplier, accumulator, or combiner functions other than to
      pass them again to the accumulator, combiner, or finisher functions,
      or return them to the caller of the reduction operation.</li>
      <li>If a result is passed to the combiner or finisher
      function, and the same object is not returned from that function, it is
      never used again.</li>
      <li>Once a result is passed to the combiner or finisher function, it
      is never passed to the accumulator function again.</li>
      <li>For non-concurrent collectors, any result returned from the result
      supplier, accumulator, or combiner functions must be serially
      thread-confined.  This enables collection to occur in parallel without
      the <code>Collector</code> needing to implement any additional synchronization.
      The reduction implementation must manage that the input is properly
      partitioned, that partitions are processed in isolation, and combining
      happens only after accumulation is complete.</li>
      <li>For concurrent collectors, an implementation is free to (but not
      required to) implement reduction concurrently.  A concurrent reduction
      is one where the accumulator function is called concurrently from
      multiple threads, using the same concurrently-modifiable result container,
      rather than keeping the result isolated during accumulation.
      A concurrent reduction should only be applied if the collector has the     
 <code>Characteristics.UNORDERED</code> characteristics or if the
      originating data is unordered.</li>
  </ul>
  
 <p>In addition to the predefined implementations in <code>Collectors</code>, the
  static factory methods <code>BiConsumer, BinaryOperator, Characteristics...)</code>
  can be used to construct collectors.  For example, you could create a collector
  that accumulates widgets into a <code>TreeSet</code> with: 
 @code
    Collector<Widget, ?, TreeSet<Widget>> intoSet =
          Collector.of(TreeSet::new, TreeSet::add,
                       (left, right) -> { left.addAll(right); return left; }); 
 
@endcode
  (This behavior is also implemented by the predefined collector 
 <code>Collectors.toCollection(Supplier)</code>).
 - seealso: Stream#collect(Collector)
 - seealso: Collectors
 @since 1.8
 */
@protocol JavaUtilStreamCollector < JavaObject >

/*!
 @brief A function that creates and returns a new mutable result container.
 @return a function which returns a new, mutable result container
 */
- (id<JavaUtilFunctionSupplier>)supplier;

/*!
 @brief A function that folds a value into a mutable result container.
 @return a function which folds a value into a mutable result container
 */
- (id<JavaUtilFunctionBiConsumer>)accumulator;

/*!
 @brief A function that accepts two partial results and merges them.The
  combiner function may fold state from one argument into the other and
  return that, or may return a new result container.
 @return a function which combines two partial results into a combined result
 */
- (id<JavaUtilFunctionBinaryOperator>)combiner;

/*!
 @brief Perform the final transformation from the intermediate accumulation type 
 <code>A</code> to the final result type <code>R</code>.
 <p>If the characteristic <code>IDENTITY_TRANSFORM</code> is
  set, this function may be presumed to be an identity transform with an
  unchecked cast from <code>A</code> to <code>R</code>.
 @return a function which transforms the intermediate result to the final result
 */
- (id<JavaUtilFunctionFunction>)finisher;

/*!
 @brief Returns a <code>Set</code> of <code>Collector.Characteristics</code> indicating
  the characteristics of this Collector.This set should be immutable.
 @return an immutable set of collector characteristics
 */
- (id<JavaUtilSet>)characteristics;

@end

@interface JavaUtilStreamCollector : NSObject

/*!
 @brief Returns a new <code>Collector</code> described by the given <code>supplier</code>,
  <code>accumulator</code>, and <code>combiner</code> functions.The resulting 
 <code>Collector</code> has the <code>Collector.Characteristics.IDENTITY_FINISH</code>
  characteristic.
 @param supplier The supplier function for the new collector
 @param accumulator The accumulator function for the new collector
 @param combiner The combiner function for the new collector
 @param characteristics The collector characteristics for the new                         collector
 @throw NullPointerExceptionif any argument is null
 @return the new <code>Collector</code>
 */
+ (id<JavaUtilStreamCollector>)ofWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                               withJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)accumulator
                           withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator>)combiner
             withJavaUtilStreamCollector_CharacteristicsArray:(IOSObjectArray *)characteristics;

/*!
 @brief Returns a new <code>Collector</code> described by the given <code>supplier</code>,
  <code>accumulator</code>, <code>combiner</code>, and <code>finisher</code> functions.
 @param supplier The supplier function for the new collector
 @param accumulator The accumulator function for the new collector
 @param combiner The combiner function for the new collector
 @param finisher The finisher function for the new collector
 @param characteristics The collector characteristics for the new                         collector
 @throw NullPointerExceptionif any argument is null
 @return the new <code>Collector</code>
 */
+ (id<JavaUtilStreamCollector>)ofWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
                               withJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)accumulator
                           withJavaUtilFunctionBinaryOperator:(id<JavaUtilFunctionBinaryOperator>)combiner
                                 withJavaUtilFunctionFunction:(id<JavaUtilFunctionFunction>)finisher
             withJavaUtilStreamCollector_CharacteristicsArray:(IOSObjectArray *)characteristics;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamCollector)

FOUNDATION_EXPORT id<JavaUtilStreamCollector> JavaUtilStreamCollector_ofWithJavaUtilFunctionSupplier_withJavaUtilFunctionBiConsumer_withJavaUtilFunctionBinaryOperator_withJavaUtilStreamCollector_CharacteristicsArray_(id<JavaUtilFunctionSupplier> supplier, id<JavaUtilFunctionBiConsumer> accumulator, id<JavaUtilFunctionBinaryOperator> combiner, IOSObjectArray *characteristics);

FOUNDATION_EXPORT id<JavaUtilStreamCollector> JavaUtilStreamCollector_ofWithJavaUtilFunctionSupplier_withJavaUtilFunctionBiConsumer_withJavaUtilFunctionBinaryOperator_withJavaUtilFunctionFunction_withJavaUtilStreamCollector_CharacteristicsArray_(id<JavaUtilFunctionSupplier> supplier, id<JavaUtilFunctionBiConsumer> accumulator, id<JavaUtilFunctionBinaryOperator> combiner, id<JavaUtilFunctionFunction> finisher, IOSObjectArray *characteristics);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamCollector)

#endif

#if !defined (JavaUtilStreamCollector_Characteristics_) && (INCLUDE_ALL_JavaUtilStreamCollector || defined(INCLUDE_JavaUtilStreamCollector_Characteristics))
#define JavaUtilStreamCollector_Characteristics_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaUtilStreamCollector_Characteristics_Enum) {
  JavaUtilStreamCollector_Characteristics_Enum_CONCURRENT = 0,
  JavaUtilStreamCollector_Characteristics_Enum_UNORDERED = 1,
  JavaUtilStreamCollector_Characteristics_Enum_IDENTITY_FINISH = 2,
};

/*!
 @brief Characteristics indicating properties of a <code>Collector</code>, which can
  be used to optimize reduction implementations.
 */
@interface JavaUtilStreamCollector_Characteristics : JavaLangEnum

+ (JavaUtilStreamCollector_Characteristics * __nonnull)CONCURRENT;

+ (JavaUtilStreamCollector_Characteristics * __nonnull)UNORDERED;

+ (JavaUtilStreamCollector_Characteristics * __nonnull)IDENTITY_FINISH;

#pragma mark Public

+ (JavaUtilStreamCollector_Characteristics *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (JavaUtilStreamCollector_Characteristics_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaUtilStreamCollector_Characteristics)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_values_[];

/*!
 @brief Indicates that this collector is <em>concurrent</em>, meaning that
  the result container can support the accumulator function being
  called concurrently with the same result container from multiple
  threads.
 <p>If a <code>CONCURRENT</code> collector is not also <code>UNORDERED</code>,
  then it should only be evaluated concurrently if applied to an
  unordered data source.
 */
inline JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_get_CONCURRENT(void);
J2OBJC_ENUM_CONSTANT(JavaUtilStreamCollector_Characteristics, CONCURRENT)

/*!
 @brief Indicates that the collection operation does not commit to preserving
  the encounter order of input elements.
 (This might be true if the
  result container has no intrinsic order, such as a <code>Set</code>.)
 */
inline JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_get_UNORDERED(void);
J2OBJC_ENUM_CONSTANT(JavaUtilStreamCollector_Characteristics, UNORDERED)

/*!
 @brief Indicates that the finisher function is the identity function and
  can be elided.If set, it must be the case that an unchecked cast
  from A to R will succeed.
 */
inline JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_get_IDENTITY_FINISH(void);
J2OBJC_ENUM_CONSTANT(JavaUtilStreamCollector_Characteristics, IDENTITY_FINISH)

FOUNDATION_EXPORT IOSObjectArray *JavaUtilStreamCollector_Characteristics_values(void);

FOUNDATION_EXPORT JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaUtilStreamCollector_Characteristics *JavaUtilStreamCollector_Characteristics_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamCollector_Characteristics)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif

#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilStreamCollector")
