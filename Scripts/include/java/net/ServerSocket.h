//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/ServerSocket.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetServerSocket")
#ifdef RESTRICT_JavaNetServerSocket
#define INCLUDE_ALL_JavaNetServerSocket 0
#else
#define INCLUDE_ALL_JavaNetServerSocket 1
#endif
#undef RESTRICT_JavaNetServerSocket

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetServerSocket_) && (INCLUDE_ALL_JavaNetServerSocket || defined(INCLUDE_JavaNetServerSocket))
#define JavaNetServerSocket_

#define RESTRICT_JavaIoCloseable 1
#define INCLUDE_JavaIoCloseable 1
#include "java/io/Closeable.h"

@class JavaNetInetAddress;
@class JavaNetSocket;
@class JavaNetSocketAddress;
@class JavaNetSocketImpl;
@class JavaNioChannelsServerSocketChannel;
@protocol JavaNetSocketImplFactory;

/*!
 @brief This class represents a server-side socket that waits for incoming client
 connections.
 A <code>ServerSocket</code> handles the requests and sends back an
 appropriate reply. The actual tasks that a server socket must accomplish are
 implemented by an internal <code>SocketImpl</code> instance.
 */
@interface JavaNetServerSocket : NSObject < JavaIoCloseable >

+ (id<JavaNetSocketImplFactory>)factory;

+ (void)setFactory:(id<JavaNetSocketImplFactory>)value;

#pragma mark Public

/*!
 @brief Constructs a new unbound <code>ServerSocket</code>.
 @throws IOException if an error occurs while creating the socket.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ServerSocket</code> instance bound to the given <code>port</code>.
 The backlog is set to 50. If <code>port == 0</code>, a port will be assigned by the OS.
 @throws IOException if an error occurs while creating the socket.
 */
- (instancetype)initWithInt:(jint)port;

/*!
 @brief Constructs a new <code>ServerSocket</code> instance bound to the given <code>port</code>.
 The backlog is set to <code>backlog</code>.
 If <code>port == 0</code>, a port will be assigned by the OS.
 @throws IOException if an error occurs while creating the socket.
 */
- (instancetype)initWithInt:(jint)port
                    withInt:(jint)backlog;

/*!
 @brief Constructs a new <code>ServerSocket</code> instance bound to the given <code>localAddress</code>
 and <code>port</code>.
 The backlog is set to <code>backlog</code>.
 If <code>localAddress == null</code>, the ANY address is used.
 If <code>port == 0</code>, a port will be assigned by the OS.
 @throws IOException if an error occurs while creating the socket.
 */
- (instancetype)initWithInt:(jint)port
                    withInt:(jint)backlog
     withJavaNetInetAddress:(JavaNetInetAddress *)localAddress;

/*!
 @brief Waits for an incoming request and blocks until the connection is opened.
 This method returns a socket object representing the just opened
 connection.
 @return the connection representing socket.
 @throws IOException
 if an error occurs while accepting a new connection.
 */
- (JavaNetSocket *)accept;

/*!
 @brief Binds this server socket to the given local socket address with a maximum
 backlog of 50 unaccepted connections.
 If the <code>localAddr</code> is set to
 <code>null</code> the socket will be bound to an available local address on
 any free port of the system.
 @param localAddr
 the local address and port to bind on.
 @throws IllegalArgumentException
 if the <code>SocketAddress</code> is not supported.
 @throws IOException
 if the socket is already bound or a problem occurs during
 binding.
 */
- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr;

/*!
 @brief Binds this server socket to the given local socket address.
 If the
 <code>localAddr</code> is set to <code>null</code> the socket will be bound to an
 available local address on any free port of the system.
 @param localAddr the local machine address and port to bind on.
 @param backlog the maximum number of unaccepted connections. Passing 0 or
 a negative value yields the default backlog of 50.
 @throws IllegalArgumentException if the <code>SocketAddress</code> is not
 supported.
 @throws IOException if the socket is already bound or a problem occurs
 during binding.
 */
- (void)bindWithJavaNetSocketAddress:(JavaNetSocketAddress *)localAddr
                             withInt:(jint)backlog;

/*!
 @brief Closes this server socket and its implementation.
 Any attempt to connect
 to this socket thereafter will fail.
 @throws IOException
 if an error occurs while closing this socket.
 */
- (void)close;

/*!
 @brief Returns this socket's <code>ServerSocketChannel</code>, if one exists.
 A channel is
 available only if this socket wraps a channel. (That is, you can go from a
 channel to a socket and back again, but you can't go from an arbitrary socket to a channel.)
 In practice, this means that the socket must have been created by
 <code>java.nio.channels.ServerSocketChannel.open</code>.
 */
- (JavaNioChannelsServerSocketChannel *)getChannel;

/*!
  internal use only
 */
- (JavaNetSocketImpl *)getImpl$;

/*!
 @brief Gets the local IP address of this server socket if this socket has ever been bound,
 <code>null</code> otherwise.
 This is useful for multihomed hosts.
 @return the local address of this server socket.
 */
- (JavaNetInetAddress *)getInetAddress;

/*!
 @brief Gets the local port of this server socket or <code>-1</code> if the socket is not bound.
 If the socket has ever been bound this method will return the local port it was bound to,
 even after it has been closed.
 @return the local port this server is listening on.
 */
- (jint)getLocalPort;

/*!
 @brief Gets the local socket address of this server socket or <code>null</code> if the socket is unbound.
 This is useful on multihomed hosts. If the socket has ever been bound this method will return
 the local address it was bound to, even after it has been closed.
 @return the local socket address and port this socket is bound to.
 */
- (JavaNetSocketAddress *)getLocalSocketAddress;

/*!
 @brief Returns this socket's <code>receive buffer size</code>.
 */
- (jint)getReceiveBufferSize;

/*!
 @brief Gets the value of the socket option <code>SocketOptions.SO_REUSEADDR</code>.
 @return <code>true</code> if the option is enabled, <code>false</code> otherwise.
 @throws SocketException
 if an error occurs while reading the option value.
 */
- (jboolean)getReuseAddress;

/*!
 @brief Gets the socket <code>accept timeout</code>.
 @throws IOException
 if the option cannot be retrieved.
 */
- (jint)getSoTimeout;

/*!
 @brief Returns whether this server socket is bound to a local address and port
 or not.
 @return <code>true</code> if this socket is bound, <code>false</code> otherwise.
 */
- (jboolean)isBound;

/*!
 @brief Returns whether this server socket is closed or not.
 @return <code>true</code> if this socket is closed, <code>false</code> otherwise.
 */
- (jboolean)isClosed;

/*!
 @brief Sets performance preferences for connection time, latency and bandwidth.
 <p>
 This method does currently nothing.
 @param connectionTime
 the value representing the importance of a short connecting
 time.
 @param latency
 the value representing the importance of low latency.
 @param bandwidth
 the value representing the importance of high bandwidth.
 */
- (void)setPerformancePreferencesWithInt:(jint)connectionTime
                                 withInt:(jint)latency
                                 withInt:(jint)bandwidth;

/*!
 @brief Sets this socket's <code>receive buffer size</code>.
 */
- (void)setReceiveBufferSizeWithInt:(jint)size;

/*!
 @brief Sets the value for the socket option <code>SocketOptions.SO_REUSEADDR</code>.
 @param reuse
 the socket option setting.
 @throws SocketException
 if an error occurs while setting the option value.
 */
- (void)setReuseAddressWithBoolean:(jboolean)reuse;

/*!
 @brief Sets the server socket implementation factory of this instance.
 This
 method may only be invoked with sufficient security privilege and only
 once during the application lifetime.
 @param aFactory
 the streaming socket factory to be used for further socket
 instantiations.
 @throws IOException
 if the factory could not be set or is already set.
 */
+ (void)setSocketFactoryWithJavaNetSocketImplFactory:(id<JavaNetSocketImplFactory>)aFactory;

/*!
 @brief Sets the <code>accept timeout</code> in milliseconds for this socket.
 This accept timeout defines the period the socket will block waiting to
 accept a connection before throwing an <code>InterruptedIOException</code>. The value
 <code>0</code> (default) is used to set an infinite timeout. To have effect
 this option must be set before the blocking method was called.
 @param timeout the timeout in milliseconds or 0 for no timeout.
 @throws SocketException
 if an error occurs while setting the option.
 */
- (void)setSoTimeoutWithInt:(jint)timeout;

/*!
 @brief Returns a textual representation of this server socket including the
 address, port and the state.
 The port field is set to <code>0</code> if there
 is no connection to the server socket.
 @return the textual socket representation.
 */
- (NSString *)description;

#pragma mark Protected

/*!
 @brief Invokes the server socket implementation to accept a connection on the
 given socket <code>aSocket</code>.
 @param aSocket
 the concrete <code>SocketImpl</code> to accept the connection
 request on.
 @throws IOException
 if the connection cannot be accepted.
 */
- (void)implAcceptWithJavaNetSocket:(JavaNetSocket *)aSocket;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetServerSocket)

inline id<JavaNetSocketImplFactory> JavaNetServerSocket_get_factory();
inline id<JavaNetSocketImplFactory> JavaNetServerSocket_set_factory(id<JavaNetSocketImplFactory> value);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNetSocketImplFactory> JavaNetServerSocket_factory;
J2OBJC_STATIC_FIELD_OBJ(JavaNetServerSocket, factory, id<JavaNetSocketImplFactory>)

FOUNDATION_EXPORT void JavaNetServerSocket_init(JavaNetServerSocket *self);

FOUNDATION_EXPORT JavaNetServerSocket *new_JavaNetServerSocket_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetServerSocket *create_JavaNetServerSocket_init();

FOUNDATION_EXPORT void JavaNetServerSocket_initWithInt_(JavaNetServerSocket *self, jint port);

FOUNDATION_EXPORT JavaNetServerSocket *new_JavaNetServerSocket_initWithInt_(jint port) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetServerSocket *create_JavaNetServerSocket_initWithInt_(jint port);

FOUNDATION_EXPORT void JavaNetServerSocket_initWithInt_withInt_(JavaNetServerSocket *self, jint port, jint backlog);

FOUNDATION_EXPORT JavaNetServerSocket *new_JavaNetServerSocket_initWithInt_withInt_(jint port, jint backlog) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetServerSocket *create_JavaNetServerSocket_initWithInt_withInt_(jint port, jint backlog);

FOUNDATION_EXPORT void JavaNetServerSocket_initWithInt_withInt_withJavaNetInetAddress_(JavaNetServerSocket *self, jint port, jint backlog, JavaNetInetAddress *localAddress);

FOUNDATION_EXPORT JavaNetServerSocket *new_JavaNetServerSocket_initWithInt_withInt_withJavaNetInetAddress_(jint port, jint backlog, JavaNetInetAddress *localAddress) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetServerSocket *create_JavaNetServerSocket_initWithInt_withInt_withJavaNetInetAddress_(jint port, jint backlog, JavaNetInetAddress *localAddress);

FOUNDATION_EXPORT void JavaNetServerSocket_setSocketFactoryWithJavaNetSocketImplFactory_(id<JavaNetSocketImplFactory> aFactory);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetServerSocket)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetServerSocket")
