/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLYahooLoginTokenResponse : NSObject {
    NSString *_body;
    NSError *_error;
    NSString *_loginToken;
    int _statusCode;
}

@property (readonly) NSString *body;
@property (readonly) NSError *error;
@property (readonly) NSString *loginToken;
@property (readonly) int statusCode;

- (void).cxx_destruct;
- (id)body;
- (id)error;
- (id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3;
- (id)loginToken;
- (int)statusCode;

@end
