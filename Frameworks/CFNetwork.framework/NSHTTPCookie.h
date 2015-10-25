/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookie : NSObject {
    NSHTTPCookieInternal *_cookiePrivate;
}

@property (getter=isHTTPOnly, readonly) BOOL HTTPOnly;
@property (readonly, copy) NSString *comment;
@property (readonly, copy) NSURL *commentURL;
@property (readonly, copy) NSString *domain;
@property (readonly, copy) NSDate *expiresDate;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *path;
@property (readonly, copy) NSArray *portList;
@property (readonly, copy) NSDictionary *properties;
@property (getter=isSecure, readonly) BOOL secure;
@property (getter=isSessionOnly, readonly) BOOL sessionOnly;
@property (readonly, copy) NSString *value;
@property (readonly) unsigned int version;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)_cf2nsCookies:(struct __CFArray { }*)arg1;
+ (id)_cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2 singleCookie:(BOOL)arg3;
+ (struct __CFArray { }*)_ns2cfCookies:(id)arg1;
+ (id)_parsedCookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)cookieWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
+ (id)cookieWithProperties:(id)arg1;
+ (id)cookiesWithResponseHeaderFields:(id)arg1 forURL:(id)arg2;
+ (id)requestHeaderFieldsWithCookies:(id)arg1;

- (id)Comment;
- (id)CommentURL;
- (id)Discard;
- (id)Domain;
- (id)Expires;
- (id)MaxAge;
- (id)Name;
- (id)OriginURL;
- (id)Path;
- (id)Port;
- (id)Secure;
- (id)Value;
- (id)Version;
- (struct OpaqueCFHTTPCookie { }*)_CFHTTPCookie;
- (struct OpaqueCFHTTPCookie { }*)_GetInternalCFHTTPCookie;
- (int)_compareForHeaderOrder:(id)arg1;
- (BOOL)_isExpired;
- (id)_key;
- (id)comment;
- (id)commentURL;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)expiresDate;
- (unsigned int)hash;
- (id)init;
- (id)initWithCFHTTPCookie:(struct OpaqueCFHTTPCookie { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHTTPOnly;
- (BOOL)isSecure;
- (BOOL)isSessionOnly;
- (id)name;
- (id)path;
- (id)portList;
- (id)properties;
- (id)value;
- (unsigned int)version;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (id)replacementObjectForPortCoder:(id)arg1;

@end
