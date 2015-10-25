/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSSceneSettingsDiff : FBSSettingsDiff

+ (id)diffFromSettings:(id)arg1 toSettings:(id)arg2;

- (BOOL)inspectBackgrounded:(BOOL*)arg1;
- (BOOL)inspectFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (BOOL)inspectInterfaceOrientation:(int*)arg1;
- (BOOL)inspectLevel:(float*)arg1;
- (id)keyDescriptionForSetting:(unsigned int)arg1;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)arg1;
- (id)valueDescriptionForFlag:(int)arg1 object:(id)arg2 ofSetting:(unsigned int)arg3;

@end
