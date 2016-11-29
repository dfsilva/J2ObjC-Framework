//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLServerSocket.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLServerSocket")
#ifdef RESTRICT_JavaxNetSslSSLServerSocket
#define INCLUDE_ALL_JavaxNetSslSSLServerSocket 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLServerSocket 1
#endif
#undef RESTRICT_JavaxNetSslSSLServerSocket

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLServerSocket_) && (INCLUDE_ALL_JavaxNetSslSSLServerSocket || defined(INCLUDE_JavaxNetSslSSLServerSocket))
#define JavaxNetSslSSLServerSocket_

#define RESTRICT_JavaNetServerSocket 1
#define INCLUDE_JavaNetServerSocket 1
#include "../../../java/net/ServerSocket.h"

@class IOSObjectArray;
@class JavaNetInetAddress;

/*!
 @brief The extension of <code>ServerSocket</code> which provides secure server sockets
 based on protocols like SSL, TLS, or others.
 */
@interface JavaxNetSslSSLServerSocket : JavaNetServerSocket

#pragma mark Public

/*!
 @brief Returns the names of the enabled cipher suites to be used for new
 connections.
 @return the names of the enabled cipher suites to be used for new
 connections.
 */
- (IOSObjectArray *)getEnabledCipherSuites;

/*!
 @brief Returns the names of the enabled protocols to be used for new
 connections.
 @return the names of the enabled protocols to be used for new
 connections.
 */
- (IOSObjectArray *)getEnabledProtocols;

/*!
 @brief Returns whether new SSL sessions may be established for new connections.
 @return <code>true</code> if new SSL sessions may be established,
 <code>false</code> if existing SSL sessions must be reused.
 */
- (jboolean)getEnableSessionCreation;

/*!
 @brief Returns whether server-mode connections will be configured to require
 client authentication.
 @return <code>true</code> if client authentication is required, <code>false</code>
 if no client authentication is needed.
 */
- (jboolean)getNeedClientAuth;

/*!
 @brief Returns the names of the supported cipher suites.
 @return the names of the supported cipher suites.
 */
- (IOSObjectArray *)getSupportedCipherSuites;

/*!
 @brief Returns the names of the supported protocols.
 @return the names of the supported protocols.
 */
- (IOSObjectArray *)getSupportedProtocols;

/*!
 @brief Returns whether new connection will act in client mode when handshaking.
 @return <code>true</code> if new connections will act in client mode when
 handshaking, <code>false</code> if not.
 */
- (jboolean)getUseClientMode;

/*!
 @brief Returns whether server-mode connections will be configured to request
 client authentication.
 @return <code>true</code> is client authentication will be requested,
 <code>false</code> if no client authentication is needed.
 */
- (jboolean)getWantClientAuth;

/*!
 @brief Sets the names of the cipher suites to be enabled for new connections.
 Only cipher suites returned by <code>getSupportedCipherSuites()</code> are
 allowed.
 @param suites
 the names of the to be enabled cipher suites.
 @throws IllegalArgumentException
 if one of the cipher suite names is not supported.
 */
- (void)setEnabledCipherSuitesWithNSStringArray:(IOSObjectArray *)suites;

/*!
 @brief Sets the names of the protocols to be enabled for new connections.
 Only
 protocols returned by <code>getSupportedProtocols()</code> are allowed.
 @param protocols
 the names of the to be enabled protocols.
 @throws IllegalArgumentException
 if one of the protocols is not supported.
 */
- (void)setEnabledProtocolsWithNSStringArray:(IOSObjectArray *)protocols;

/*!
 @brief Sets whether new SSL sessions may be established for new connections.
 @param flag
 <code>true</code> if new SSL sessions may be established,
 <code>false</code> if existing SSL sessions must be reused.
 */
- (void)setEnableSessionCreationWithBoolean:(jboolean)flag;

/*!
 @brief Sets whether server-mode connections will be configured to require client
 authentication.
 The client authentication is one of the following:
 <ul>
 <li>authentication required</li>
 <li>authentication requested</li>
 <li>no authentication needed</li>
 </ul>
 This method overrides the setting of <code>setWantClientAuth(boolean)</code>.
 @param need
 <code>true</code> if client authentication is required,
 <code>false</code> if no authentication is needed.
 */
- (void)setNeedClientAuthWithBoolean:(jboolean)need;

/*!
 @brief Sets whether new connections should act in client mode when handshaking.
 @param mode
 <code>true</code> if new connections should act in client mode,
 <code>false</code> if not.
 */
- (void)setUseClientModeWithBoolean:(jboolean)mode;

/*!
 @brief Sets whether server-mode connections will be configured to request client
 authentication.
 The client authentication is one of the following:
 <ul>
 <li>authentication required</li>
 <li>authentication requested</li>
 <li>no authentication needed</li>
 </ul>
 This method overrides the setting of <code>setNeedClientAuth(boolean)</code>.
 @param want
 <code>true</code> if client authentication should be requested,
 <code>false</code> if no authentication is needed.
 */
- (void)setWantClientAuthWithBoolean:(jboolean)want;

#pragma mark Protected

/*!
 @brief Only to be used by subclasses.
 <p>
 Creates a TCP server socket with the default authentication context.
 @throws IOException
 if creating the socket fails.
 */
- (instancetype)init;

/*!
 @brief Only to be used by subclasses.
 <p>
 Creates a TCP server socket on the specified port with the default
 authentication context. The connection's default backlog size is 50
 connections.
 @param port
 the port to listen on.
 @throws IOException
 if creating the socket fails.
 */
- (instancetype)initWithInt:(jint)port;

/*!
 @brief Only to be used by subclasses.
 <p>
 Creates a TCP server socket on the specified port using the specified
 backlog and the default authentication context.
 @param port
 the port to listen on.
 @param backlog
 the number of pending connections to queue.
 @throws IOException
 if creating the socket fails.
 */
- (instancetype)initWithInt:(jint)port
                    withInt:(jint)backlog;

/*!
 @brief Only to be used by subclasses.
 <p>
 Creates a TCP server socket on the specified port, using the specified
 backlog, listening on the specified interface, and using the default
 authentication context.
 @param port
 the port the listen on.
 @param backlog
 the number of pending connections to queue.
 @param address
 the address of the interface to accept connections on.
 @throws IOException
 if creating the socket fails.
 */
- (instancetype)initWithInt:(jint)port
                    withInt:(jint)backlog
     withJavaNetInetAddress:(JavaNetInetAddress *)address;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLServerSocket)

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocket_init(JavaxNetSslSSLServerSocket *self);

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocket_initWithInt_(JavaxNetSslSSLServerSocket *self, jint port);

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocket_initWithInt_withInt_(JavaxNetSslSSLServerSocket *self, jint port, jint backlog);

FOUNDATION_EXPORT void JavaxNetSslSSLServerSocket_initWithInt_withInt_withJavaNetInetAddress_(JavaxNetSslSSLServerSocket *self, jint port, jint backlog, JavaNetInetAddress *address);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLServerSocket)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLServerSocket")
