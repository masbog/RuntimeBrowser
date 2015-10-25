/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PASampleThreadData : NSObject <PASerializable> {
    unsigned long long continuation;
    int currentScheduledPriority;
    unsigned long long dispatchQueueId;
    BOOL ioPassive;
    unsigned char ioTier;
    BOOL isSuspended;
    PASampleFrame *leafFrame;
    int schedulerFlags;
    BOOL ss_flags;
    int state;
    int staticPriority;
    unsigned long long systemTimeInNs;
    unsigned long long threadId;
    BOOL threadQos;
    BOOL threadRequestedQos;
    BOOL threadRequestedQosOverride;
    unsigned long long userTimeInNs;
    unsigned long long waitEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasDispatchQueue;
@property (readonly) BOOL hasDispatchSerial;
@property (readonly) BOOL hasValidPowerstatsFlags;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isAbortingInterruptibleWaits;
@property (readonly) BOOL isAbortingInterruptibleWaitsAtSafePoints;
@property (readonly) BOOL isDarwinBG;
@property (readonly) BOOL isHaltedAtTermination;
@property (readonly) BOOL isProcessorIdleThread;
@property (readonly) BOOL isRunning;
@property (readonly) BOOL isStopped;
@property (readonly) BOOL isWaiting;
@property (readonly) BOOL isWaitingUninterruptibly;
@property (readonly) unsigned int powerstatsFlags;
@property (readonly) BOOL stackTracesHaveNoFramePointers;
@property (readonly) Class superclass;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1;

- (BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(id)arg2;
- (void)addSelfToSerializationDictionary:(id)arg1;
- (void)dealloc;
- (BOOL)hasDispatchQueue;
- (BOOL)hasDispatchSerial;
- (BOOL)hasValidPowerstatsFlags;
- (unsigned int)hash;
- (id)initWithStackshotThread:(id)arg1 andLeafFrame:(id)arg2;
- (BOOL)isAbortingInterruptibleWaits;
- (BOOL)isAbortingInterruptibleWaitsAtSafePoints;
- (BOOL)isDarwinBG;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHaltedAtTermination;
- (BOOL)isProcessorIdleThread;
- (BOOL)isRunning;
- (BOOL)isStackEqualTo:(id)arg1;
- (BOOL)isStopped;
- (BOOL)isWaiting;
- (BOOL)isWaitingUninterruptibly;
- (void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3;
- (unsigned int)powerstatsFlags;
- (unsigned long)sizeInBytesForSerializedVersion;
- (id)stack;
- (BOOL)stackTracesHaveNoFramePointers;

@end
