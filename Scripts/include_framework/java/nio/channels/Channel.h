//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/Channel.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsChannel")
#ifdef RESTRICT_JavaNioChannelsChannel
#define INCLUDE_ALL_JavaNioChannelsChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsChannel 1
#endif
#undef RESTRICT_JavaNioChannelsChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsChannel_) && (INCLUDE_ALL_JavaNioChannelsChannel || defined(INCLUDE_JavaNioChannelsChannel))
#define JavaNioChannelsChannel_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "../../../java/io/Closeable.h"

/*!
 @brief A nexus for I/O operations.
 <p> A channel represents an open connection to an entity such as a hardware
  device, a file, a network socket, or a program component that is capable of
  performing one or more distinct I/O operations, for example reading or
  writing. 
 <p> A channel is either open or closed.  A channel is open upon creation,
  and once closed it remains closed.  Once a channel is closed, any attempt to
  invoke an I/O operation upon it will cause a <code>ClosedChannelException</code>
  to be thrown.  Whether or not a channel is open may be tested by invoking
  its <code>isOpen</code> method. 
 <p> Channels are, in general, intended to be safe for multithreaded access
  as described in the specifications of the interfaces and classes that extend
  and implement this interface.
 @author Mark Reinhold
 @author JSR-51 Expert Group
 @since 1.4
 */
@protocol JavaNioChannelsChannel < JavaIoCloseable, JavaObject >

/*!
 @brief Tells whether or not this channel is open.
 </p>
 @return <tt>true</tt> if, and only if, this channel is open
 */
- (jboolean)isOpen;

/*!
 @brief Closes this channel.
 <p> After a channel is closed, any further attempt to invoke I/O
  operations upon it will cause a <code>ClosedChannelException</code> to be
  thrown. 
 <p> If this channel is already closed then invoking this method has no
  effect. 
 <p> This method may be invoked at any time.  If some other thread has
  already invoked it, however, then another invocation will block until
  the first invocation is complete, after which it will return without
  effect. </p>
 @throw IOExceptionIf an I/O error occurs
 */
- (void)close;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsChannel)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsChannel")
