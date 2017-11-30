//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/SelectableChannel.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSelectableChannel")
#ifdef RESTRICT_JavaNioChannelsSelectableChannel
#define INCLUDE_ALL_JavaNioChannelsSelectableChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSelectableChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSelectableChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSelectableChannel_) && (INCLUDE_ALL_JavaNioChannelsSelectableChannel || defined(INCLUDE_JavaNioChannelsSelectableChannel))
#define JavaNioChannelsSelectableChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractInterruptibleChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractInterruptibleChannel 1
#include "../../../java/nio/channels/spi/AbstractInterruptibleChannel.h"

#define RESTRICT_JavaNioChannelsChannel 1
#define INCLUDE_JavaNioChannelsChannel 1
#include "../../../java/nio/channels/Channel.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief A channel that can be multiplexed via a <code>Selector</code>.
 <p> In order to be used with a selector, an instance of this class must
  first be <i>registered</i> via the <code>register</code>
  method.  This method returns a new <code>SelectionKey</code> object
  that represents the channel's registration with the selector. 
 <p> Once registered with a selector, a channel remains registered until it
  is <i>deregistered</i>.  This involves deallocating whatever resources were
  allocated to the channel by the selector. 
 <p> A channel cannot be deregistered directly; instead, the key representing
  its registration must be <i>cancelled</i>.  Cancelling a key requests that
  the channel be deregistered during the selector's next selection operation.
  A key may be cancelled explicitly by invoking its <code>cancel</code>
  method.  All of a channel's keys are cancelled
  implicitly when the channel is closed, whether by invoking its <code>close</code>
  method or by interrupting a thread blocked in an I/O
  operation upon the channel. 
 <p> If the selector itself is closed then the channel will be deregistered,
  and the key representing its registration will be invalidated, without
  further delay. 
 <p> A channel may be registered at most once with any particular selector. 
 <p> Whether or not a channel is registered with one or more selectors may be
  determined by invoking the <code>isRegistered</code> method. 
 <p> Selectable channels are safe for use by multiple concurrent
  threads. </p>
  
 <a name="bm">
  <h4>Blocking mode</h4>
  A selectable channel is either in <i>blocking</i> mode or in 
 <i>non-blocking</i> mode.  In blocking mode, every I/O operation invoked
  upon the channel will block until it completes.  In non-blocking mode an I/O
  operation will never block and may transfer fewer bytes than were requested
  or possibly no bytes at all.  The blocking mode of a selectable channel may
  be determined by invoking its <code>isBlocking</code> method. 
 <p> Newly-created selectable channels are always in blocking mode.
  Non-blocking mode is most useful in conjunction with selector-based
  multiplexing.  A channel must be placed into non-blocking mode before being
  registered with a selector, and may not be returned to blocking mode until
  it has been deregistered.
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 - seealso: SelectionKey
 - seealso: Selector
 */
@interface JavaNioChannelsSelectableChannel : JavaNioChannelsSpiAbstractInterruptibleChannel < JavaNioChannelsChannel >

#pragma mark Public

/*!
 @brief Retrieves the object upon which the <code>configureBlocking</code>
  and <code>register</code> methods synchronize.
 This is often useful in the implementation of adaptors that require a
  specific blocking mode to be maintained for a short period of time. 
 </p>
 @return The blocking-mode lock object
 */
- (id)blockingLock;

/*!
 @brief Adjusts this channel's blocking mode.
 <p> If this channel is registered with one or more selectors then an
  attempt to place it into blocking mode will cause an <code>IllegalBlockingModeException</code>
  to be thrown. 
 <p> This method may be invoked at any time.  The new blocking mode will
  only affect I/O operations that are initiated after this method returns.
  For some implementations this may require blocking until all pending I/O
  operations are complete. 
 <p> If this method is invoked while another invocation of this method or
  of the <code>register</code> method is in progress
  then it will first block until the other operation is complete. </p>
 @param block If  <tt> true </tt>  then this channel will be placed in
                  blocking mode; if  <tt> false </tt>  then it will be placed
                  non-blocking mode
 @return This selectable channel
 @throw ClosedChannelException
 If this channel is closed
 @throw IllegalBlockingModeException
 If <tt>block</tt> is <tt>true</tt> and this channel is
           registered with one or more selectors
 @throw IOException
 If an I/O error occurs
 */
- (JavaNioChannelsSelectableChannel *)configureBlockingWithBoolean:(jboolean)block;

/*!
 @brief Tells whether or not every I/O operation on this channel will block
  until it completes.A newly-created channel is always in blocking mode.
 <p> If this channel is closed then the value returned by this method is
  not specified. </p>
 @return <tt>true</tt> if, and only if, this channel is in blocking mode
 */
- (jboolean)isBlocking;

/*!
 @brief Tells whether or not this channel is currently registered with any
  selectors.A newly-created channel is not registered.
 <p> Due to the inherent delay between key cancellation and channel
  deregistration, a channel may remain registered for some time after all
  of its keys have been cancelled.  A channel may also remain registered
  for some time after it is closed.  </p>
 @return <tt>true</tt> if, and only if, this channel is registered
 */
- (jboolean)isRegistered;

/*!
 @brief Retrieves the key representing the channel's registration with the given
  selector.
 </p>
 @return The key returned when this channel was last registered with the
           given selector, or <tt>null</tt> if this channel is not
           currently registered with that selector
 */
- (JavaNioChannelsSelectionKey *)keyForWithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel;

/*!
 @brief Returns the provider that created this channel.
 @return The provider that created this channel
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Registers this channel with the given selector, returning a selection
  key.
 <p> An invocation of this convenience method of the form 
 <blockquote><tt>sc.register(sel, ops)</tt></blockquote>
  behaves in exactly the same way as the invocation 
 <blockquote><tt>sc.<code>register</code>
 (sel, ops, null)</tt></blockquote>
 @param sel The selector with which this channel is to be registered
 @param ops The interest set for the resulting key
 @throw ClosedChannelException
 If this channel is closed
 @throw ClosedSelectorException
 If the selector is closed
 @throw IllegalBlockingModeException
 If this channel is in blocking mode
 @throw IllegalSelectorException
 If this channel was not created by the same provider
           as the given selector
 @throw CancelledKeyException
 If this channel is currently registered with the given selector
           but the corresponding key has already been cancelled
 @throw IllegalArgumentException
 If a bit in <tt>ops</tt> does not correspond to an operation
           that is supported by this channel, that is, if <tt>set &
           ~validOps() != 0</tt>
 @return A key representing the registration of this channel with
           the given selector
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel
                                                               withInt:(jint)ops;

/*!
 @brief Registers this channel with the given selector, returning a selection
  key.
 <p> If this channel is currently registered with the given selector then
  the selection key representing that registration is returned.  The key's
  interest set will have been changed to <tt>ops</tt>, as if by invoking
  the <code>interestOps(int)</code> method.  If
  the <tt>att</tt> argument is not <tt>null</tt> then the key's attachment
  will have been set to that value.  A <code>CancelledKeyException</code> will
  be thrown if the key has already been cancelled. 
 <p> Otherwise this channel has not yet been registered with the given
  selector, so it is registered and the resulting new key is returned.
  The key's initial interest set will be <tt>ops</tt> and its attachment
  will be <tt>att</tt>.
  
 <p> This method may be invoked at any time.  If this method is invoked
  while another invocation of this method or of the <code>configureBlocking</code>
  method is in progress
  then it will first block until the other operation is complete.  This
  method will then synchronize on the selector's key set and therefore may
  block if invoked concurrently with another registration or selection
  operation involving the same selector. </p>
  
 <p> If this channel is closed while this operation is in progress then
  the key returned by this method will have been cancelled and will
  therefore be invalid. </p>
 @param sel The selector with which this channel is to be registered
 @param ops The interest set for the resulting key
 @param att The attachment for the resulting key; may be 
  <tt> null </tt>
 @throw ClosedChannelException
 If this channel is closed
 @throw ClosedSelectorException
 If the selector is closed
 @throw IllegalBlockingModeException
 If this channel is in blocking mode
 @throw IllegalSelectorException
 If this channel was not created by the same provider
           as the given selector
 @throw CancelledKeyException
 If this channel is currently registered with the given selector
           but the corresponding key has already been cancelled
 @throw IllegalArgumentException
 If a bit in the <tt>ops</tt> set does not correspond to an
           operation that is supported by this channel, that is, if          
 <tt>set & ~validOps() != 0</tt>
 @return A key representing the registration of this channel with
           the given selector
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)sel
                                                               withInt:(jint)ops
                                                                withId:(id)att;

/*!
 @brief Returns an <a href="SelectionKey.html#opsets">operation set</a>
  identifying this channel's supported operations.The bits that are set
  in this integer value denote exactly the operations that are valid for
  this channel.
 This method always returns the same value for a given
  concrete channel class. </p>
 @return The valid-operation set
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Initializes a new instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSelectableChannel)

FOUNDATION_EXPORT void JavaNioChannelsSelectableChannel_init(JavaNioChannelsSelectableChannel *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSelectableChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSelectableChannel")
