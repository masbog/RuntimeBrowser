/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiCallingCallEndReport : PBCodable <NSCopying> {
    NSString *_callID;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _frameErasureRateHistograms;
    unsigned int _frameErasureRateMean;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int frameErasureRateMean : 1; 
        unsigned int jitterBufferResidencyTime95Percentile : 1; 
        unsigned int jitterBufferResidencyTimeMean : 1; 
        unsigned int jitterBufferResidencyTimeMedian : 1; 
        unsigned int jitterBufferUnderflowRateMean : 1; 
        unsigned int rtpPacketLossRateMean : 1; 
    } _has;
    unsigned int _jitterBufferResidencyTime95Percentile;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _jitterBufferResidencyTimeHistograms;
    unsigned int _jitterBufferResidencyTimeMean;
    unsigned int _jitterBufferResidencyTimeMedian;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _jitterBufferUnderflowRateHistograms;
    unsigned int _jitterBufferUnderflowRateMean;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    } _rtpPacketLossRateHistograms;
    unsigned int _rtpPacketLossRateMean;
    unsigned long long _timestamp;
}

@property (nonatomic, retain) NSString *callID;
@property (nonatomic, readonly) unsigned int*frameErasureRateHistograms;
@property (nonatomic, readonly) unsigned int frameErasureRateHistogramsCount;
@property (nonatomic) unsigned int frameErasureRateMean;
@property (nonatomic, readonly) BOOL hasCallID;
@property (nonatomic) BOOL hasFrameErasureRateMean;
@property (nonatomic) BOOL hasJitterBufferResidencyTime95Percentile;
@property (nonatomic) BOOL hasJitterBufferResidencyTimeMean;
@property (nonatomic) BOOL hasJitterBufferResidencyTimeMedian;
@property (nonatomic) BOOL hasJitterBufferUnderflowRateMean;
@property (nonatomic) BOOL hasRtpPacketLossRateMean;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned int jitterBufferResidencyTime95Percentile;
@property (nonatomic, readonly) unsigned int*jitterBufferResidencyTimeHistograms;
@property (nonatomic, readonly) unsigned int jitterBufferResidencyTimeHistogramsCount;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMean;
@property (nonatomic) unsigned int jitterBufferResidencyTimeMedian;
@property (nonatomic, readonly) unsigned int*jitterBufferUnderflowRateHistograms;
@property (nonatomic, readonly) unsigned int jitterBufferUnderflowRateHistogramsCount;
@property (nonatomic) unsigned int jitterBufferUnderflowRateMean;
@property (nonatomic, readonly) unsigned int*rtpPacketLossRateHistograms;
@property (nonatomic, readonly) unsigned int rtpPacketLossRateHistogramsCount;
@property (nonatomic) unsigned int rtpPacketLossRateMean;
@property (nonatomic) unsigned long long timestamp;

- (void)addFrameErasureRateHistogram:(unsigned int)arg1;
- (void)addJitterBufferResidencyTimeHistogram:(unsigned int)arg1;
- (void)addJitterBufferUnderflowRateHistogram:(unsigned int)arg1;
- (void)addRtpPacketLossRateHistogram:(unsigned int)arg1;
- (id)callID;
- (void)clearFrameErasureRateHistograms;
- (void)clearJitterBufferResidencyTimeHistograms;
- (void)clearJitterBufferUnderflowRateHistograms;
- (void)clearRtpPacketLossRateHistograms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)frameErasureRateHistogramAtIndex:(unsigned int)arg1;
- (unsigned int*)frameErasureRateHistograms;
- (unsigned int)frameErasureRateHistogramsCount;
- (unsigned int)frameErasureRateMean;
- (BOOL)hasCallID;
- (BOOL)hasFrameErasureRateMean;
- (BOOL)hasJitterBufferResidencyTime95Percentile;
- (BOOL)hasJitterBufferResidencyTimeMean;
- (BOOL)hasJitterBufferResidencyTimeMedian;
- (BOOL)hasJitterBufferUnderflowRateMean;
- (BOOL)hasRtpPacketLossRateMean;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)jitterBufferResidencyTime95Percentile;
- (unsigned int)jitterBufferResidencyTimeHistogramAtIndex:(unsigned int)arg1;
- (unsigned int*)jitterBufferResidencyTimeHistograms;
- (unsigned int)jitterBufferResidencyTimeHistogramsCount;
- (unsigned int)jitterBufferResidencyTimeMean;
- (unsigned int)jitterBufferResidencyTimeMedian;
- (unsigned int)jitterBufferUnderflowRateHistogramAtIndex:(unsigned int)arg1;
- (unsigned int*)jitterBufferUnderflowRateHistograms;
- (unsigned int)jitterBufferUnderflowRateHistogramsCount;
- (unsigned int)jitterBufferUnderflowRateMean;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)rtpPacketLossRateHistogramAtIndex:(unsigned int)arg1;
- (unsigned int*)rtpPacketLossRateHistograms;
- (unsigned int)rtpPacketLossRateHistogramsCount;
- (unsigned int)rtpPacketLossRateMean;
- (void)setCallID:(id)arg1;
- (void)setFrameErasureRateHistograms:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setFrameErasureRateMean:(unsigned int)arg1;
- (void)setHasFrameErasureRateMean:(BOOL)arg1;
- (void)setHasJitterBufferResidencyTime95Percentile:(BOOL)arg1;
- (void)setHasJitterBufferResidencyTimeMean:(BOOL)arg1;
- (void)setHasJitterBufferResidencyTimeMedian:(BOOL)arg1;
- (void)setHasJitterBufferUnderflowRateMean:(BOOL)arg1;
- (void)setHasRtpPacketLossRateMean:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setJitterBufferResidencyTime95Percentile:(unsigned int)arg1;
- (void)setJitterBufferResidencyTimeHistograms:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setJitterBufferResidencyTimeMean:(unsigned int)arg1;
- (void)setJitterBufferResidencyTimeMedian:(unsigned int)arg1;
- (void)setJitterBufferUnderflowRateHistograms:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setJitterBufferUnderflowRateMean:(unsigned int)arg1;
- (void)setRtpPacketLossRateHistograms:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setRtpPacketLossRateMean:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
