//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/SocketImpl.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetSocketImpl")
#ifdef RESTRICT_JavaNetSocketImpl
#define INCLUDE_ALL_JavaNetSocketImpl 0
#else
#define INCLUDE_ALL_JavaNetSocketImpl 1
#endif
#undef RESTRICT_JavaNetSocketImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetSocketImpl_) && (INCLUDE_ALL_JavaNetSocketImpl || defined(INCLUDE_JavaNetSocketImpl))
#define JavaNetSocketImpl_

#define RESTRICT_JavaNetSocketOptions 1
#define INCLUDE_JavaNetSocketOptions 1
#include "../../java/net/SocketOptions.h"

@class JavaIoFileDescriptor;
@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaNetInetAddress;
@class JavaNetServerSocket;
@class JavaNetSocket;
@class JavaNetSocketAddress;

/*!
 @brief The abstract class <code>SocketImpl</code> is a common superclass
  of all classes that actually implement sockets.It is used to
  create both client and server sockets.
 <p>
  A "plain" socket implements these methods exactly as
  described, without attempting to go through a firewall or proxy.
 @author unascribed
 @since JDK1.0
 */
@interface JavaNetSocketImpl : NSObject < JavaNetSocketOptions > {
 @public
  /*!
   @brief The actual Socket object.
   */
  __unsafe_unretained JavaNetSocket *socket_;
  __unsafe_unretained JavaNetServerSocket *serverSocket_;
  /*!
   @brief The file descriptor object for this socket.
   */
  JavaIoFileDescriptor *fd_;
  /*!
   @brief The IP address of the remote end of this socket.
   */
  JavaNetInetAddress *address_;
  /*!
   @brief The port number on the remote host to which this socket is connected.
   */
  jint port_;
  /*!
   @brief The local port number to which this socket is connected.
   */
  jint localport_;
}

#pragma mark Public

- (instancetype)init;

/*!
 */
- (JavaIoFileDescriptor *)getFD$;

/*!
 @brief Returns the address and port of this socket as a <code>String</code>.
 @return a string representation of this socket.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Accepts a connection.
 @param s the accepted connection.
 @throw IOExceptionif an I/O error occurs when accepting the
                connection.
 */
- (void)acceptWithJavaNetSocketImpl:(JavaNetSocketImpl *)s;

/*!
 @brief Returns the number of bytes that can be read from this socket
  without blocking.
 @return the number of bytes that can be read from this socket
              without blocking.
 @throw IOExceptionif an I/O error occurs when determining the
                number of bytes available.
 */
- (jint)available;

/*!
 @brief Binds this socket to the specified local IP address and port number.
 @param host an IP address that belongs to a local interface.
 @param port the port number.
 @throw IOExceptionif an I/O error occurs when binding this socket.
 */
- (void)bindWithJavaNetInetAddress:(JavaNetInetAddress *)host
                           withInt:(jint)port;

/*!
 @brief Closes this socket.
 @throw IOExceptionif an I/O error occurs when closing this socket.
 */
- (void)close;

/*!
 @brief Connects this socket to the specified port number on the specified host.
 @param address the IP address of the remote host.
 @param port the port number.
 @throw IOExceptionif an I/O error occurs when attempting a
                connection.
 */
- (void)connectWithJavaNetInetAddress:(JavaNetInetAddress *)address
                              withInt:(jint)port;

/*!
 @brief Connects this socket to the specified port number on the specified host.
 A timeout of zero is interpreted as an infinite timeout. The connection
  will then block until established or an error occurs.
 @param address the Socket address of the remote host.
 @param timeout the timeout value, in milliseconds, or zero for no timeout.
 @throw IOExceptionif an I/O error occurs when attempting a
                connection.
 @since 1.4
 */
- (void)connectWithJavaNetSocketAddress:(JavaNetSocketAddress *)address
                                withInt:(jint)timeout;

/*!
 @brief Connects this socket to the specified port on the named host.
 @param host the name of the remote host.
 @param port the port number.
 @throw IOExceptionif an I/O error occurs when connecting to the
                remote host.
 */
- (void)connectWithNSString:(NSString *)host
                    withInt:(jint)port;

/*!
 @brief Creates either a stream or a datagram socket.
 @param stream if  <code> true </code> , create a stream socket;
                        otherwise, create a datagram socket.
 @throw IOExceptionif an I/O error occurs while creating the
                socket.
 */
- (void)createWithBoolean:(jboolean)stream;

/*!
 @brief Returns the value of this socket's <code>fd</code> field.
 @return the value of this socket's <code>fd</code> field.
 - seealso: java.net.SocketImpl
 */
- (JavaIoFileDescriptor *)getFileDescriptor;

/*!
 @brief Returns the value of this socket's <code>address</code> field.
 @return the value of this socket's <code>address</code> field.
 - seealso: java.net.SocketImpl
 */
- (JavaNetInetAddress *)getInetAddress;

/*!
 @brief Returns an input stream for this socket.
 @return a stream for reading from this socket.
 @throw IOExceptionif an I/O error occurs when creating the
                input stream.
 */
- (JavaIoInputStream *)getInputStream;

/*!
 @brief Returns the value of this socket's <code>localport</code> field.
 @return the value of this socket's <code>localport</code> field.
 - seealso: java.net.SocketImpl
 */
- (jint)getLocalPort;

/*!
 @brief Returns an output stream for this socket.
 @return an output stream for writing to this socket.
 @throw IOExceptionif an I/O error occurs when creating the
                output stream.
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 @brief Returns the value of this socket's <code>port</code> field.
 @return the value of this socket's <code>port</code> field.
 - seealso: java.net.SocketImpl
 */
- (jint)getPort;

/*!
 @brief Sets the maximum queue length for incoming connection indications
  (a request to connect) to the <code>count</code> argument.If a
  connection indication arrives when the queue is full, the
  connection is refused.
 @param backlog the maximum length of the queue.
 @throw IOExceptionif an I/O error occurs when creating the queue.
 */
- (void)listenWithInt:(jint)backlog;

/*!
 @brief Send one byte of urgent data on the socket.
 The byte to be sent is the low eight bits of the parameter
 @param data The byte of data to send
 @throw IOExceptionif there is an error
   sending the data.
 @since 1.4
 */
- (void)sendUrgentDataWithInt:(jint)data;

/*!
 @brief Sets performance preferences for this socket.
 <p> Sockets use the TCP/IP protocol by default.  Some implementations
  may offer alternative protocols which have different performance
  characteristics than TCP/IP.  This method allows the application to
  express its own preferences as to how these tradeoffs should be made
  when the implementation chooses from the available protocols. 
 <p> Performance preferences are described by three integers
  whose values indicate the relative importance of short connection time,
  low latency, and high bandwidth.  The absolute values of the integers
  are irrelevant; in order to choose a protocol the values are simply
  compared, with larger values indicating stronger preferences. Negative
  values represent a lower priority than positive values. If the
  application prefers short connection time over both low latency and high
  bandwidth, for example, then it could invoke this method with the values 
 <tt>(1, 0, 0)</tt>.  If the application prefers high bandwidth above low
  latency, and low latency above short connection time, then it could
  invoke this method with the values <tt>(0, 1, 2)</tt>.
  By default, this method does nothing, unless it is overridden in a
  a sub-class.
 @param connectionTime An 
  <tt> int </tt>  expressing the relative importance of a short          connection time
 @param latency An 
  <tt> int </tt>  expressing the relative importance of low          latency
 @param bandwidth An 
  <tt> int </tt>  expressing the relative importance of high          bandwidth
 @since 1.5
 */
- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

/*!
 @brief Places the input stream for this socket at "end of stream".
 Any data sent to this socket is acknowledged and then
  silently discarded.
  If you read from a socket input stream after invoking
  shutdownInput() on the socket, the stream will return EOF.
 @throw IOExceptionif an I/O error occurs when shutting down this
  socket.
 - seealso: java.net.Socket
 - seealso: java.net.Socket
 - seealso: java.net.Socket
 @since 1.3
 */
- (void)shutdownInput;

/*!
 @brief Disables the output stream for this socket.
 For a TCP socket, any previously written data will be sent
  followed by TCP's normal connection termination sequence.
  If you write to a socket output stream after invoking
  shutdownOutput() on the socket, the stream will throw
  an IOException.
 @throw IOExceptionif an I/O error occurs when shutting down this
  socket.
 - seealso: java.net.Socket
 - seealso: java.net.Socket
 - seealso: java.net.Socket
 @since 1.3
 */
- (void)shutdownOutput;

/*!
 @brief Returns whether or not this SocketImpl supports sending
  urgent data.By default, false is returned
  unless the method is overridden in a sub-class
 @return true if urgent data supported
 - seealso: java.net.SocketImpl
 @since 1.4
 */
- (jboolean)supportsUrgentData;

#pragma mark Package-Private

- (JavaNetServerSocket *)getServerSocket;

- (JavaNetSocket *)getSocket;

- (void)reset;

- (void)setServerSocketWithJavaNetServerSocket:(JavaNetServerSocket *)soc;

- (void)setSocketWithJavaNetSocket:(JavaNetSocket *)soc;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetSocketImpl)

J2OBJC_FIELD_SETTER(JavaNetSocketImpl, fd_, JavaIoFileDescriptor *)
J2OBJC_FIELD_SETTER(JavaNetSocketImpl, address_, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetSocketImpl_init(JavaNetSocketImpl *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetSocketImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetSocketImpl")
