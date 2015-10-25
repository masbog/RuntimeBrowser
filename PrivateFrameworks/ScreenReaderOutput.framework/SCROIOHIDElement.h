/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROIOHIDElement : SCROIOElement <SCROIOHIDElementProtocol> {
    struct __IOHIDDevice { } *_hidDevice;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct __IOHIDDevice { }*)hidDevice;
- (id)initWithIOObject:(unsigned int)arg1;
- (int)transport;

@end
