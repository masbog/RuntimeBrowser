/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMessageFetchAttachmentRequest : NSObject {
    NSString *_attachmentName;
    NSString *_messageID;
}

@property (nonatomic, copy) NSString *attachmentName;
@property (nonatomic, copy) NSString *messageID;

- (void).cxx_destruct;
- (id)attachmentName;
- (id)description;
- (unsigned int)hash;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)messageID;
- (void)setAttachmentName:(id)arg1;
- (void)setMessageID:(id)arg1;

@end