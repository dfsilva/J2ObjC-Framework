//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/DatagramSocketImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetDatagramSocketImpl")
#ifdef RESTRICT_JavaNetDatagramSocketImpl
#define INCLUDE_ALL_JavaNetDatagramSocketImpl 0
#else
#define INCLUDE_ALL_JavaNetDatagramSocketImpl 1
#endif
#undef RESTRICT_JavaNetDatagramSocketImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetDatagramSocketImpl_) && (INCLUDE_ALL_JavaNetDatagramSocketImpl || defined(INCLUDE_JavaNetDatagramSocketImpl))
#define JavaNetDatagramSocketImpl_

#define RESTRICT_JavaNetSocketOptions 1
#define INCLUDE_JavaNetSocketOptions 1
#include "java/net/SocketOptions.h"

@class JavaIoFileDescriptor;
@class JavaNetDatagramPacket;
@class JavaNetInetAddress;
@class JavaNetNetworkInterface;
@class JavaNetSocketAddress;

/*!
 @brief Abstract datagram and multicast socket implementation base class.
 @author Pavani Diwanji
 @since JDK1.1
 */
@interface JavaNetDatagramSocketImpl : NSObject < JavaNetSocketOptions > {
 @public
  /*!
   @brief The local port number.
   */
  jint localPort_;
  /*!
   @brief The file descriptor object.
   */
  JavaIoFileDescriptor *fd_;
}

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Binds a datagram socket to a local port and address.
 @param lport the local port
 @param laddr the local address
 @throw SocketExceptionif there is an error in the
  underlying protocol, such as a TCP error.
 */
- (void)bindWithInt:(jint)lport
withJavaNetInetAddress:(JavaNetInetAddress *)laddr;

/*!
 @brief Close the socket.
 */
- (void)close;

/*!
 @brief Connects a datagram socket to a remote destination.This associates the remote
  address with the local socket so that datagrams may only be sent to this destination
  and received from this destination.
 This may be overridden to call a native
  system connect. 
 <p>If the remote destination to which the socket is connected does not
  exist, or is otherwise unreachable, and if an ICMP destination unreachable
  packet has been received for that address, then a subsequent call to
  send or receive may throw a PortUnreachableException.
  Note, there is no guarantee that the exception will be thrown.
 @param address the remote InetAddress to connect to
 @param port the remote port number
 @throw SocketExceptionmay be thrown if the socket cannot be
  connected to the remote destination
 @since 1.4
 */
- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)address
                              withInt:(jint)port;

/*!
 @brief Creates a datagram socket.
 @throw SocketExceptionif there is an error in the
  underlying protocol, such as a TCP error.
 */
- (void)create;

/*!
 @brief Disconnects a datagram socket from its remote destination.
 @since 1.4
 */
- (void)disconnect;

/*!
 @brief Gets the datagram socket file descriptor.
 @return a <tt>FileDescriptor</tt> object representing the datagram socket
  file descriptor
 */
- (JavaIoFileDescriptor *)getFileDescriptor;

/*!
 @brief Gets the local port.
 @return an <tt>int</tt> representing the local port value
 */
- (jint)getLocalPort;

/*!
 @brief Retrieve the TTL (time-to-live) option.
 @throw IOExceptionif an I/O exception occurs
  while retrieving the time-to-live option
 @return an <tt>int</tt> representing the time-to-live value
 - seealso: #setTimeToLive(int)
 */
- (jint)getTimeToLive;

/*!
 @brief Retrieve the TTL (time-to-live) option.
 @throw IOExceptionif an I/O exception occurs
  while retrieving the time-to-live option
 @return a byte representing the TTL value
 - seealso: #setTTL(byte)
 */
- (jbyte)getTTL __attribute__((deprecated));

/*!
 @brief Join the multicast group.
 @param inetaddr multicast address to join.
 @throw IOExceptionif an I/O exception occurs
  while joining the multicast group.
 */
- (void)joinWithJavaNetInetAddress:(JavaNetInetAddress *)inetaddr;

/*!
 @brief Join the multicast group.
 @param mcastaddr address to join.
 @param netIf specifies the local interface to receive multicast         datagram packets
 @throw IOExceptionif an I/O exception occurs while joining
  the multicast group
 @since 1.4
 */
- (void)joinGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)mcastaddr
              withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netIf;

/*!
 @brief Leave the multicast group.
 @param inetaddr multicast address to leave.
 @throw IOExceptionif an I/O exception occurs
  while leaving the multicast group.
 */
- (void)leaveWithJavaNetInetAddress:(JavaNetInetAddress *)inetaddr;

/*!
 @brief Leave the multicast group.
 @param mcastaddr address to leave.
 @param netIf specified the local interface to leave the group at
 @throw IOExceptionif an I/O exception occurs while leaving
  the multicast group
 @since 1.4
 */
- (void)leaveGroupWithJavaNetSocketAddress:(JavaNetSocketAddress *)mcastaddr
               withJavaNetNetworkInterface:(JavaNetNetworkInterface *)netIf;

/*!
 @brief Peek at the packet to see who it is from.Updates the specified <code>InetAddress</code>
  to the address which the packet came from.
 @param i an InetAddress object
 @return the port number which the packet came from.
 @throw IOExceptionif an I/O exception occurs
 @throw PortUnreachableExceptionmay be thrown if the socket is connected
        to a currently unreachable destination. Note, there is no guarantee that the
        exception will be thrown.
 */
- (jint)peekWithJavaNetInetAddress:(JavaNetInetAddress *)i;

/*!
 @brief Peek at the packet to see who it is from.The data is copied into the specified 
 <code>DatagramPacket</code>.
 The data is returned,
  but not consumed, so that a subsequent peekData/receive operation
  will see the same data.
 @param p the Packet Received.
 @return the port number which the packet came from.
 @throw IOExceptionif an I/O exception occurs
 @throw PortUnreachableExceptionmay be thrown if the socket is connected
        to a currently unreachable destination. Note, there is no guarantee that the
        exception will be thrown.
 @since 1.4
 */
- (jint)peekDataWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)p;

/*!
 @brief Receive the datagram packet.
 @param p the Packet Received.
 @throw IOExceptionif an I/O exception occurs
  while receiving the datagram packet.
 @throw PortUnreachableExceptionmay be thrown if the socket is connected
        to a currently unreachable destination. Note, there is no guarantee that the
        exception will be thrown.
 */
- (void)receiveWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)p;

/*!
 @brief Sends a datagram packet.The packet contains the data and the
  destination address to send the packet to.
 @param p the packet to be sent.
 @throw IOExceptionif an I/O exception occurs while sending the
  datagram packet.
 @throw PortUnreachableExceptionmay be thrown if the socket is connected
  to a currently unreachable destination. Note, there is no guarantee that
  the exception will be thrown.
 */
- (void)sendWithJavaNetDatagramPacket:(JavaNetDatagramPacket *)p;

/*!
 @brief Set the TTL (time-to-live) option.
 @param ttl an  <tt> int </tt>  specifying the time-to-live value
 @throw IOExceptionif an I/O exception occurs
  while setting the time-to-live option.
 - seealso: #getTimeToLive()
 */
- (void)setTimeToLiveWithInt:(jint)ttl;

/*!
 @brief Set the TTL (time-to-live) option.
 @param ttl a byte specifying the TTL value
 @throw IOExceptionif an I/O exception occurs while setting
  the time-to-live option.
 - seealso: #getTTL()
 */
- (void)setTTLWithByte:(jbyte)ttl __attribute__((deprecated));

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetDatagramSocketImpl)

J2OBJC_FIELD_SETTER(JavaNetDatagramSocketImpl, fd_, JavaIoFileDescriptor *)

FOUNDATION_EXPORT void JavaNetDatagramSocketImpl_init(JavaNetDatagramSocketImpl *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetDatagramSocketImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetDatagramSocketImpl")
