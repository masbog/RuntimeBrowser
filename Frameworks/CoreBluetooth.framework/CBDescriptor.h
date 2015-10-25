/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBDescriptor : CBAttribute {
    CBCharacteristic *_characteristic;
    NSNumber *_handle;
    CBPeripheral *_peripheral;
    id _value;
}

@property (nonatomic) CBCharacteristic *characteristic;
@property (nonatomic, readonly) NSNumber *handle;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (retain) id value;

- (id)characteristic;
- (void)dealloc;
- (id)description;
- (id)handle;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (id)peripheral;
- (void)setCharacteristic:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end