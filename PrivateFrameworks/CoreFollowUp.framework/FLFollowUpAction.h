/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpAction : NSObject <NSSecureCoding> {
    NSString *_label;
    NSData *_launchActionArguments;
    NSURL *_launchActionURL;
    unsigned int _sqlID;
    NSURL *_url;
}

@property (copy) NSString *label;
@property (copy) NSData *launchActionArguments;
@property (copy) NSURL *launchActionURL;
@property (nonatomic) unsigned int sqlID;
@property (copy) NSURL *url;

+ (id)actionWithLabel:(id)arg1 url:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLabel:(id)arg1 url:(id)arg2;
- (id)label;
- (id)launchActionArguments;
- (id)launchActionURL;
- (void)setLabel:(id)arg1;
- (void)setLaunchActionArguments:(id)arg1;
- (void)setLaunchActionURL:(id)arg1;
- (void)setSqlID:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (unsigned int)sqlID;
- (id)url;

@end
