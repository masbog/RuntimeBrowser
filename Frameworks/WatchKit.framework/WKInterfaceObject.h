/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceObject : NSObject {
    NSString *_interfaceProperty;
    NSString *_propertyIndex;
    int _rowIndex;
    int _tableIndex;
    NSString *_viewControllerID;
}

@property (nonatomic, copy) NSString *interfaceProperty;
@property (nonatomic, retain) NSString *propertyIndex;
@property (nonatomic) int rowIndex;
@property (nonatomic) int tableIndex;
@property (nonatomic, copy) NSString *viewControllerID;

- (void).cxx_destruct;
- (id)_initWithInterfaceProperty:(id)arg1 viewControllerID:(id)arg2 propertyIndex:(int)arg3 tableIndex:(int)arg4 rowIndex:(int)arg5;
- (void)_sendValueChanged:(id)arg1;
- (void)_sendValueChanged:(id)arg1 forProperty:(id)arg2;
- (void)_setImage:(id)arg1 forProperty:(id)arg2;
- (void)_setImageData:(id)arg1 forProperty:(id)arg2;
- (void)_setImageNamed:(id)arg1 forProperty:(id)arg2;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (id)init;
- (id)interfaceProperty;
- (id)propertyIndex;
- (int)rowIndex;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityImageRegions:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAlpha:(float)arg1;
- (void)setHeight:(float)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setInterfaceProperty:(id)arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setPropertyIndex:(id)arg1;
- (void)setRelativeHeight:(float)arg1 withAdjustment:(float)arg2;
- (void)setRelativeWidth:(float)arg1 withAdjustment:(float)arg2;
- (void)setRotation:(float)arg1;
- (void)setRowIndex:(int)arg1;
- (void)setTableIndex:(int)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (void)setViewControllerID:(id)arg1;
- (void)setWidth:(float)arg1;
- (void)sizeToFitHeight;
- (void)sizeToFitWidth;
- (int)tableIndex;
- (id)viewControllerID;

@end
