/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAssistantColorCharacteristic : NSObject {
    NSString *_format;
    BOOL _mandatory;
    NSString *_readCharacteristicType;
    NSString *_writeCharacteristicType;
}

@property (nonatomic, readonly) NSString *format;
@property (nonatomic, readonly) BOOL mandatory;
@property (nonatomic, readonly) NSString *readCharacteristicType;
@property (nonatomic, readonly) NSString *writeCharacteristicType;

- (void).cxx_destruct;
- (id)format;
- (id)initWithReadCharacteristicType:(id)arg1 writeCharacteristicType:(id)arg2 format:(id)arg3 mandatory:(BOOL)arg4;
- (BOOL)mandatory;
- (id)readCharacteristicType;
- (id)writeCharacteristicType;

@end
