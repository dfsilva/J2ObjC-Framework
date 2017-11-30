//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/charset/CharsetDecoder.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetCharsetDecoder")
#ifdef RESTRICT_JavaNioCharsetCharsetDecoder
#define INCLUDE_ALL_JavaNioCharsetCharsetDecoder 0
#else
#define INCLUDE_ALL_JavaNioCharsetCharsetDecoder 1
#endif
#undef RESTRICT_JavaNioCharsetCharsetDecoder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetCharsetDecoder_) && (INCLUDE_ALL_JavaNioCharsetCharsetDecoder || defined(INCLUDE_JavaNioCharsetCharsetDecoder))
#define JavaNioCharsetCharsetDecoder_

@class JavaNioByteBuffer;
@class JavaNioCharBuffer;
@class JavaNioCharsetCharset;
@class JavaNioCharsetCoderResult;
@class JavaNioCharsetCodingErrorAction;

/*!
 @brief An engine that can transform a sequence of bytes in a specific charset into a sequence of
  sixteen-bit Unicode characters.
 <a name="steps">
  
 <p> The input byte sequence is provided in a byte buffer or a series
  of such buffers.  The output character sequence is written to a character buffer
  or a series of such buffers.  A decoder should always be used by making
  the following sequence of method invocations, hereinafter referred to as a 
 <i>decoding operation</i>:
  
 <ol>
    <li><p> Reset the decoder via the <code>reset</code> method, unless it
    has not been used before; </p></li>
    <li><p> Invoke the <code>decode</code> method zero or more times, as
    long as additional input may be available, passing <tt>false</tt> for the
    <tt>endOfInput</tt> argument and filling the input buffer and flushing the
    output buffer between invocations; </p></li>
    <li><p> Invoke the <code>decode</code> method one final time, passing
    <tt>true</tt> for the <tt>endOfInput</tt> argument; and then </p></li>
    <li><p> Invoke the <code>flush</code> method so that the decoder can
    flush any internal state to the output buffer. </p></li>
  
 </ol>
  Each invocation of the <code>decode</code> method will decode as many
  bytes as possible from the input buffer, writing the resulting characters
  to the output buffer.  The <code>decode</code> method returns when more
  input is required, when there is not enough room in the output buffer, or
  when a decoding error has occurred.  In each case a <code>CoderResult</code>
  object is returned to describe the reason for termination.  An invoker can
  examine this object and fill the input buffer, flush the output buffer, or
  attempt to recover from a decoding error, as appropriate, and try again. 
 <a name="ce">
  
 <p> There are two general types of decoding errors.  If the input byte
  sequence is not legal for this charset then the input is considered <i>malformed</i>.  If
  the input byte sequence is legal but cannot be mapped to a valid
  Unicode character then an <i>unmappable character</i> has been encountered. 
 <a name="cae">
  
 <p> How a decoding error is handled depends upon the action requested for
  that type of error, which is described by an instance of the <code>CodingErrorAction</code>
  class.  The possible error actions are to <code></code>ignore<code></code>
  the erroneous input, <code></code>report<code></code>
  the error to the invoker via
  the returned <code>CoderResult</code> object, or <code></code>replace<code></code>
  the erroneous input with the current value of the
  replacement string.  The replacement
  has the initial value <tt>"&#92;uFFFD"</tt>;
  its value may be changed via the <code>replaceWith</code>
  method. 
 <p> The default action for malformed-input and unmappable-character errors
  is to <code></code>report<code></code> them.  The
  malformed-input error action may be changed via the <code>onMalformedInput</code>
  method; the
  unmappable-character action may be changed via the <code>onUnmappableCharacter</code>
  method. 
 <p> This class is designed to handle many of the details of the decoding
  process, including the implementation of error actions.  A decoder for a
  specific charset, which is a concrete subclass of this class, need only
  implement the abstract <code>decodeLoop</code> method, which
  encapsulates the basic decoding loop.  A subclass that maintains internal
  state should, additionally, override the <code>implFlush</code> and 
 <code>implReset</code> methods. 
 <p> Instances of this class are not safe for use by multiple concurrent
  threads.  </p>
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 - seealso: ByteBuffer
 - seealso: CharBuffer
 - seealso: Charset
 - seealso: CharsetEncoder
 */
@interface JavaNioCharsetCharsetDecoder : NSObject

#pragma mark Public

/*!
 @brief Returns the average number of characters that will be produced for each
  byte of input.This heuristic value may be used to estimate the size
  of the output buffer required for a given input sequence.
 </p>
 @return The average number of characters produced
           per byte of input
 */
- (jfloat)averageCharsPerByte;

/*!
 @brief Returns the charset that created this decoder.
 </p>
 @return This decoder's charset
 */
- (JavaNioCharsetCharset *)charset;

/*!
 @brief Convenience method that decodes the remaining content of a single input
  byte buffer into a newly-allocated character buffer.
 <p> This method implements an entire <a href="#steps">decoding
  operation</a>; that is, it resets this decoder, then it decodes the
  bytes in the given byte buffer, and finally it flushes this
  decoder.  This method should therefore not be invoked if a decoding
  operation is already in progress.  </p>
 @param inArg The input byte buffer
 @return A newly-allocated character buffer containing the result of the
          decoding operation.  The buffer's position will be zero and its
          limit will follow the last character written.
 @throw IllegalStateException
 If a decoding operation is already in progress
 @throw MalformedInputException
 If the byte sequence starting at the input buffer's current
           position is not legal for this charset and the current malformed-input action
           is <code>CodingErrorAction.REPORT</code>
 @throw UnmappableCharacterException
 If the byte sequence starting at the input buffer's current
           position cannot be mapped to an equivalent character sequence and
           the current unmappable-character action is <code>CodingErrorAction.REPORT</code>
 */
- (JavaNioCharBuffer *)decodeWithJavaNioByteBuffer:(JavaNioByteBuffer *)inArg;

/*!
 @brief Decodes as many bytes as possible from the given input buffer,
  writing the results to the given output buffer.
 <p> The buffers are read from, and written to, starting at their current
  positions.  At most <code>in.remaining()</code> bytes
  will be read and at most <code>out.remaining()</code>
  characters will be written.  The buffers' positions will be advanced to
  reflect the bytes read and the characters written, but their marks and
  limits will not be modified. 
 <p> In addition to reading bytes from the input buffer and writing
  characters to the output buffer, this method returns a <code>CoderResult</code>
  object to describe its reason for termination: 
 <ul>
    
 <li><p> <code>CoderResult.UNDERFLOW</code> indicates that as much of the
    input buffer as possible has been decoded.  If there is no further
    input then the invoker can proceed to the next step of the   
 <a href="#steps">decoding operation</a>.  Otherwise this method
    should be invoked again with further input.  </p></li>
    
 <li><p> <code>CoderResult.OVERFLOW</code> indicates that there is
    insufficient space in the output buffer to decode any more bytes.
    This method should be invoked again with an output buffer that has
    more remaining characters. This is
    typically done by draining any decoded characters from the output
    buffer.  </p></li>
    
 <li><p> A <code></code>malformed-input<code></code>
  result indicates that a malformed-input
    error has been detected.  The malformed bytes begin at the input
    buffer's (possibly incremented) position; the number of malformed
    bytes may be determined by invoking the result object's <code>length</code>
  method.  This case applies only if the
    <code>action<code></code> of this decoder
    is <code>CodingErrorAction.REPORT</code>; otherwise the malformed input
    will be ignored or replaced, as requested.  </p></li>
    
 <li><p> An <code></code>unmappable-character<code></code>
  result indicates that an
    unmappable-character error has been detected.  The bytes that
    decode the unmappable character begin at the input buffer's (possibly
    incremented) position; the number of such bytes may be determined
    by invoking the result object's <code>length</code>
    method.  This case applies only if the <code>action<code></code>
  of this decoder is <code>CodingErrorAction.REPORT</code>
 ; otherwise the unmappable character will be
    ignored or replaced, as requested.  </p></li>
  
 </ul>
  In any case, if this method is to be reinvoked in the same decoding
  operation then care should be taken to preserve any bytes remaining
  in the input buffer so that they are available to the next invocation. 
 <p> The <tt>endOfInput</tt> parameter advises this method as to whether
  the invoker can provide further input beyond that contained in the given
  input buffer.  If there is a possibility of providing additional input
  then the invoker should pass <tt>false</tt> for this parameter; if there
  is no possibility of providing further input then the invoker should
  pass <tt>true</tt>.  It is not erroneous, and in fact it is quite
  common, to pass <tt>false</tt> in one invocation and later discover that
  no further input was actually available.  It is critical, however, that
  the final invocation of this method in a sequence of invocations always
  pass <tt>true</tt> so that any remaining undecoded input will be treated
  as being malformed. 
 <p> This method works by invoking the <code>decodeLoop</code>
  method, interpreting its results, handling error conditions, and
  reinvoking it as necessary.  </p>
 @param inArg The input byte buffer
 @param outArg The output character buffer
 @param endOfInput <tt>
  true </tt>  if, and only if, the invoker can provide no          additional input bytes beyond those in the given buffer
 @return A coder-result object describing the reason for termination
 @throw IllegalStateException
 If a decoding operation is already in progress and the previous
           step was an invocation neither of the <code>reset</code>
           method, nor of this method with a value of <tt>false</tt> for
           the <tt>endOfInput</tt> parameter, nor of this method with a
           value of <tt>true</tt> for the <tt>endOfInput</tt> parameter
           but a return value indicating an incomplete decoding operation
 @throw CoderMalfunctionError
 If an invocation of the decodeLoop method threw
           an unexpected exception
 */
- (JavaNioCharsetCoderResult *)decodeWithJavaNioByteBuffer:(JavaNioByteBuffer *)inArg
                                     withJavaNioCharBuffer:(JavaNioCharBuffer *)outArg
                                               withBoolean:(jboolean)endOfInput;

/*!
 @brief Retrieves the charset that was detected by this
  decoder&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> If this decoder implements an auto-detecting charset then this
  method returns the actual charset once it has been detected.  After that
  point, this method returns the same value for the duration of the
  current decoding operation.  If not enough input bytes have yet been
  read to determine the actual charset then this method throws an <code>IllegalStateException</code>
 .
  
 <p> The default implementation of this method always throws an <code>UnsupportedOperationException</code>
 ; it should be overridden by
  auto-detecting decoders to return the appropriate value.  </p>
 @return The charset detected by this auto-detecting decoder,
           or <tt>null</tt> if the charset has not yet been determined
 @throw IllegalStateException
 If insufficient bytes have been read to determine a charset
 @throw UnsupportedOperationException
 If this decoder does not implement an auto-detecting charset
 */
- (JavaNioCharsetCharset *)detectedCharset;

/*!
 @brief Flushes this decoder.
 <p> Some decoders maintain internal state and may need to write some
  final characters to the output buffer once the overall input sequence has
  been read. 
 <p> Any additional output is written to the output buffer beginning at
  its current position.  At most <code>out.remaining()</code>
  characters will be written.  The buffer's position will be advanced
  appropriately, but its mark and limit will not be modified. 
 <p> If this method completes successfully then it returns <code>CoderResult.UNDERFLOW</code>
 .  If there is insufficient room in the output
  buffer then it returns <code>CoderResult.OVERFLOW</code>.  If this happens
  then this method must be invoked again, with an output buffer that has
  more room, in order to complete the current <a href="#steps">decoding
  operation</a>.
  
 <p> If this decoder has already been flushed then invoking this method
  has no effect. 
 <p> This method invokes the <code>implFlush</code> method to
  perform the actual flushing operation.  </p>
 @param outArg The output character buffer
 @return A coder-result object, either <code>CoderResult.UNDERFLOW</code> or
           <code>CoderResult.OVERFLOW</code>
 @throw IllegalStateException
 If the previous step of the current decoding operation was an
           invocation neither of the <code>flush</code> method nor of
           the three-argument <code>decode</code>
  method
           with a value of <tt>true</tt> for the <tt>endOfInput</tt>
           parameter
 */
- (JavaNioCharsetCoderResult *)flushWithJavaNioCharBuffer:(JavaNioCharBuffer *)outArg;

/*!
 @brief Tells whether or not this decoder implements an auto-detecting charset.
 <p> The default implementation of this method always returns 
 <tt>false</tt>; it should be overridden by auto-detecting decoders to
  return <tt>true</tt>.  </p>
 @return <tt>true</tt> if, and only if, this decoder implements an
           auto-detecting charset
 */
- (jboolean)isAutoDetecting;

/*!
 @brief Tells whether or not this decoder has yet detected a
  charset&nbsp;&nbsp;<i>(optional operation)</i>.
 <p> If this decoder implements an auto-detecting charset then at a
  single point during a decoding operation this method may start returning 
 <tt>true</tt> to indicate that a specific charset has been detected in
  the input byte sequence.  Once this occurs, the <code>detectedCharset</code>
  method may be invoked to retrieve the detected charset. 
 <p> That this method returns <tt>false</tt> does not imply that no bytes
  have yet been decoded.  Some auto-detecting decoders are capable of
  decoding some, or even all, of an input byte sequence without fixing on
  a particular charset. 
 <p> The default implementation of this method always throws an <code>UnsupportedOperationException</code>
 ; it should be overridden by
  auto-detecting decoders to return <tt>true</tt> once the input charset
  has been determined.  </p>
 @return <tt>true</tt> if, and only if, this decoder has detected a
           specific charset
 @throw UnsupportedOperationException
 If this decoder does not implement an auto-detecting charset
 */
- (jboolean)isCharsetDetected;

/*!
 @brief Returns this decoder's current action for malformed-input errors.
 </p>
 @return The current malformed-input action, which is never <tt>null</tt>
 */
- (JavaNioCharsetCodingErrorAction *)malformedInputAction;

/*!
 @brief Returns the maximum number of characters that will be produced for each
  byte of input.This value may be used to compute the worst-case size
  of the output buffer required for a given input sequence.
 </p>
 @return The maximum number of characters that will be produced per
           byte of input
 */
- (jfloat)maxCharsPerByte;

/*!
 @brief Changes this decoder's action for malformed-input errors.
 </p>
  
 <p> This method invokes the <code>implOnMalformedInput</code>
  method, passing the new action.  </p>
 @param newAction The new action; must not be  <tt> null </tt>
 @return This decoder
 @throw IllegalArgumentException
 If the precondition on the parameter does not hold
 */
- (JavaNioCharsetCharsetDecoder *)onMalformedInputWithJavaNioCharsetCodingErrorAction:(JavaNioCharsetCodingErrorAction *)newAction;

/*!
 @brief Changes this decoder's action for unmappable-character errors.
 <p> This method invokes the <code>implOnUnmappableCharacter</code>
  method, passing the new action.  </p>
 @param newAction The new action; must not be  <tt> null </tt>
 @return This decoder
 @throw IllegalArgumentException
 If the precondition on the parameter does not hold
 */
- (JavaNioCharsetCharsetDecoder *)onUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(JavaNioCharsetCodingErrorAction *)newAction;

/*!
 @brief Returns this decoder's replacement value.
 </p>
 @return This decoder's current replacement,
           which is never <tt>null</tt> and is never empty
 */
- (NSString *)replacement;

/*!
 @brief Changes this decoder's replacement value.
 <p> This method invokes the <code>implReplaceWith</code>
  method, passing the new replacement, after checking that the new
  replacement is acceptable.  </p>
 @param newReplacement The new replacement; must not be 
  <tt> null </tt>          and must have non-zero length
 @return This decoder
 @throw IllegalArgumentException
 If the preconditions on the parameter do not hold
 */
- (JavaNioCharsetCharsetDecoder *)replaceWithWithNSString:(NSString *)newReplacement;

/*!
 @brief Resets this decoder, clearing any internal state.
 <p> This method resets charset-independent state and also invokes the 
 <code>implReset</code> method in order to perform any
  charset-specific reset actions.  </p>
 @return This decoder
 */
- (JavaNioCharsetCharsetDecoder *)reset;

/*!
 @brief Returns this decoder's current action for unmappable-character errors.
 </p>
 @return The current unmappable-character action, which is never
          <tt>null</tt>
 */
- (JavaNioCharsetCodingErrorAction *)unmappableCharacterAction;

#pragma mark Protected

/*!
 @brief Initializes a new decoder.The new decoder will have the given
  chars-per-byte values and its replacement will be the
  string <tt>"&#92;uFFFD"</tt>.
 </p>
 @param averageCharsPerByte A positive float value indicating the expected number of
           characters that will be produced for each input byte
 @param maxCharsPerByte A positive float value indicating the maximum number of
           characters that will be produced for each input byte
 @throw IllegalArgumentException
 If the preconditions on the parameters do not hold
 */
- (instancetype)initWithJavaNioCharsetCharset:(JavaNioCharsetCharset *)cs
                                    withFloat:(jfloat)averageCharsPerByte
                                    withFloat:(jfloat)maxCharsPerByte;

/*!
 @brief Decodes one or more bytes into one or more characters.
 <p> This method encapsulates the basic decoding loop, decoding as many
  bytes as possible until it either runs out of input, runs out of room
  in the output buffer, or encounters a decoding error.  This method is
  invoked by the <code>decode</code> method, which handles result
  interpretation and error recovery. 
 <p> The buffers are read from, and written to, starting at their current
  positions.  At most <code>in.remaining()</code> bytes
  will be read, and at most <code>out.remaining()</code>
  characters will be written.  The buffers' positions will be advanced to
  reflect the bytes read and the characters written, but their marks and
  limits will not be modified. 
 <p> This method returns a <code>CoderResult</code> object to describe its
  reason for termination, in the same manner as the <code>decode</code>
  method.  Most implementations of this method will handle decoding errors
  by returning an appropriate result object for interpretation by the 
 <code>decode</code> method.  An optimized implementation may instead
  examine the relevant error action and implement that action itself. 
 <p> An implementation of this method may perform arbitrary lookahead by
  returning <code>CoderResult.UNDERFLOW</code> until it receives sufficient
  input.  </p>
 @param inArg The input byte buffer
 @param outArg The output character buffer
 @return A coder-result object describing the reason for termination
 */
- (JavaNioCharsetCoderResult *)decodeLoopWithJavaNioByteBuffer:(JavaNioByteBuffer *)inArg
                                         withJavaNioCharBuffer:(JavaNioCharBuffer *)outArg;

/*!
 @brief Flushes this decoder.
 <p> The default implementation of this method does nothing, and always
  returns <code>CoderResult.UNDERFLOW</code>.  This method should be overridden
  by decoders that may need to write final characters to the output buffer
  once the entire input sequence has been read. </p>
 @param outArg The output character buffer
 @return A coder-result object, either <code>CoderResult.UNDERFLOW</code> or
           <code>CoderResult.OVERFLOW</code>
 */
- (JavaNioCharsetCoderResult *)implFlushWithJavaNioCharBuffer:(JavaNioCharBuffer *)outArg;

/*!
 @brief Reports a change to this decoder's malformed-input action.
 <p> The default implementation of this method does nothing.  This method
  should be overridden by decoders that require notification of changes to
  the malformed-input action.  </p>
 */
- (void)implOnMalformedInputWithJavaNioCharsetCodingErrorAction:(JavaNioCharsetCodingErrorAction *)newAction;

/*!
 @brief Reports a change to this decoder's unmappable-character action.
 <p> The default implementation of this method does nothing.  This method
  should be overridden by decoders that require notification of changes to
  the unmappable-character action.  </p>
 */
- (void)implOnUnmappableCharacterWithJavaNioCharsetCodingErrorAction:(JavaNioCharsetCodingErrorAction *)newAction;

/*!
 @brief Reports a change to this decoder's replacement value.
 <p> The default implementation of this method does nothing.  This method
  should be overridden by decoders that require notification of changes to
  the replacement.  </p>
 @param newReplacement
 */
- (void)implReplaceWithWithNSString:(NSString *)newReplacement;

/*!
 @brief Resets this decoder, clearing any charset-specific internal state.
 <p> The default implementation of this method does nothing.  This method
  should be overridden by decoders that maintain internal state.  </p>
 */
- (void)implReset;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetCharsetDecoder)

FOUNDATION_EXPORT void JavaNioCharsetCharsetDecoder_initWithJavaNioCharsetCharset_withFloat_withFloat_(JavaNioCharsetCharsetDecoder *self, JavaNioCharsetCharset *cs, jfloat averageCharsPerByte, jfloat maxCharsPerByte);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetCharsetDecoder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetCharsetDecoder")
