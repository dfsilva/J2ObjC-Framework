//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/javax/net/ssl/HandshakeCompletedEvent.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslHandshakeCompletedEvent")
#ifdef RESTRICT_JavaxNetSslHandshakeCompletedEvent
#define INCLUDE_ALL_JavaxNetSslHandshakeCompletedEvent 0
#else
#define INCLUDE_ALL_JavaxNetSslHandshakeCompletedEvent 1
#endif
#undef RESTRICT_JavaxNetSslHandshakeCompletedEvent

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslHandshakeCompletedEvent_) && (INCLUDE_ALL_JavaxNetSslHandshakeCompletedEvent || defined(INCLUDE_JavaxNetSslHandshakeCompletedEvent))
#define JavaxNetSslHandshakeCompletedEvent_

#define RESTRICT_JavaUtilEventObject 1
#define INCLUDE_JavaUtilEventObject 1
#include "../../../java/util/EventObject.h"

@class IOSObjectArray;
@class JavaxNetSslSSLSocket;
@protocol JavaSecurityPrincipal;
@protocol JavaxNetSslSSLSession;

/*!
 @brief This event indicates that an SSL handshake completed on a given
  SSL connection.All of the core information about that handshake's
  result is captured through an "SSLSession" object.
 As a convenience,
  this event class provides direct access to some important session
  attributes. 
 <P> The source of this event is the SSLSocket on which handshaking
  just completed.
 - seealso: SSLSocket
 - seealso: HandshakeCompletedListener
 - seealso: SSLSession
 @since 1.4
 @author David Brownell
 */
@interface JavaxNetSslHandshakeCompletedEvent : JavaUtilEventObject

#pragma mark Public

/*!
 @brief Constructs a new HandshakeCompletedEvent.
 @param sock the SSLSocket acting as the source of the event
 @param s the SSLSession this event is associated with
 */
- (instancetype)initWithJavaxNetSslSSLSocket:(JavaxNetSslSSLSocket *)sock
                   withJavaxNetSslSSLSession:(id<JavaxNetSslSSLSession>)s;

/*!
 @brief Returns the cipher suite in use by the session which was produced
  by the handshake.
 (This is a convenience method for
  getting the ciphersuite from the SSLsession.)
 @return the name of the cipher suite negotiated during this session.
 */
- (NSString *)getCipherSuite;

/*!
 @brief Returns the certificate(s) that were sent to the peer during
  handshaking.
 Note: This method is useful only when using certificate-based
  cipher suites.
  When multiple certificates are available for use in a
  handshake, the implementation chooses what it considers the
  "best" certificate chain available, and transmits that to
  the other side.  This method allows the caller to know
  which certificate chain was actually used.
 @return an ordered array of certificates, with the local
           certificate first followed by any
           certificate authorities.  If no certificates were sent,
           then null is returned.
 - seealso: #getLocalPrincipal()
 */
- (IOSObjectArray *)getLocalCertificates;

/*!
 @brief Returns the principal that was sent to the peer during handshaking.
 @return the principal sent to the peer. Returns an X500Principal
  of the end-entity certificate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites. If no principal was
  sent, then null is returned.
 - seealso: #getLocalCertificates()
 - seealso: #getPeerPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Returns the identity of the peer which was identified as part
  of defining the session.
 Note: This method can be used only when using certificate-based
  cipher suites; using it with non-certificate-based cipher suites,
  such as Kerberos, will throw an SSLPeerUnverifiedException. 
 <p><em>Note: this method exists for compatibility with previous
  releases. New applications should use 
 <code>getPeerCertificates</code> instead.</em></p>
 @return an ordered array of peer X.509 certificates,
           with the peer's own certificate first followed by any
           certificate authorities.  (The certificates are in
           the original JSSE          
 <code>javax.security.cert.X509Certificate</code> format).
 @throw SSLPeerUnverifiedExceptionif the peer is not verified.
 - seealso: #getPeerPrincipal()
 */
- (IOSObjectArray *)getPeerCertificateChain;

/*!
 @brief Returns the identity of the peer which was established as part
  of defining the session.
 Note: This method can be used only when using certificate-based
  cipher suites; using it with non-certificate-based cipher suites,
  such as Kerberos, will throw an SSLPeerUnverifiedException.
 @return an ordered array of the peer certificates,
           with the peer's own certificate first followed by
           any certificate authorities.
 @throw SSLPeerUnverifiedExceptionif the peer is not verified.
 - seealso: #getPeerPrincipal()
 */
- (IOSObjectArray *)getPeerCertificates;

/*!
 @brief Returns the identity of the peer which was established as part of
  defining the session.
 @return the peer's principal. Returns an X500Principal of the
  end-entity certiticate for X509-based cipher suites, and
  KerberosPrincipal for Kerberos cipher suites.
 @throw SSLPeerUnverifiedExceptionif the peer's identity has not
           been verified
 - seealso: #getPeerCertificates()
 - seealso: #getLocalPrincipal()
 @since 1.5
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Returns the session that triggered this event.
 @return the <code>SSLSession</code> for this handshake
 */
- (id<JavaxNetSslSSLSession>)getSession;

/*!
 @brief Returns the socket which is the source of this event.
 (This is a convenience function, to let applications
  write code without type casts.)
 @return the socket on which the connection was made.
 */
- (JavaxNetSslSSLSocket *)getSocket;

// Disallowed inherited constructors, do not use.

- (instancetype)initWithId:(id)arg0 NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHandshakeCompletedEvent)

FOUNDATION_EXPORT void JavaxNetSslHandshakeCompletedEvent_initWithJavaxNetSslSSLSocket_withJavaxNetSslSSLSession_(JavaxNetSslHandshakeCompletedEvent *self, JavaxNetSslSSLSocket *sock, id<JavaxNetSslSSLSession> s);

FOUNDATION_EXPORT JavaxNetSslHandshakeCompletedEvent *new_JavaxNetSslHandshakeCompletedEvent_initWithJavaxNetSslSSLSocket_withJavaxNetSslSSLSession_(JavaxNetSslSSLSocket *sock, id<JavaxNetSslSSLSession> s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslHandshakeCompletedEvent *create_JavaxNetSslHandshakeCompletedEvent_initWithJavaxNetSslSSLSocket_withJavaxNetSslSSLSession_(JavaxNetSslSSLSocket *sock, id<JavaxNetSslSSLSession> s);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHandshakeCompletedEvent)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslHandshakeCompletedEvent")
