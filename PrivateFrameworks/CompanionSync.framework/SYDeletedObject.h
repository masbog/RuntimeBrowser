/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYDeletedObject : NSObject <SYChange, SYObject> {
    NSString *_sequencer;
    NSString *_syncId;
}

@property (nonatomic, readonly) int changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *objectIdentifier;
@property (nonatomic, readonly) NSString *sequencer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *syncId;

- (void).cxx_destruct;
- (int)changeType;
- (id)initWithObjectID:(id)arg1 sequencer:(id)arg2;
- (id)initWithSyncId:(id)arg1;
- (id)objectIdentifier;
- (id)sequencer;
- (void)setSyncId:(id)arg1;
- (id)syncId;

@end
