/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIProductPageFeaturesView : UIView {
    UIView *_bottomBorderView;
    SKUIClientContext *_clientContext;
    SKUIColorScheme *_colorScheme;
    NSMutableArray *_featureViews;
    int _features;
    unsigned int _gameCenterFeatures;
    UILabel *_titleLabel;
    UIView *_topBorderView;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, retain) SKUIColorScheme *colorScheme;
@property (nonatomic) int features;
@property (nonatomic) unsigned int gameCenterFeatures;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_gameCenterStringWithFeatures:(unsigned int)arg1;
- (id)clientContext;
- (id)colorScheme;
- (int)features;
- (unsigned int)gameCenterFeatures;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setFeatures:(int)arg1;
- (void)setFeatures:(int)arg1 gameCenterFeatures:(unsigned int)arg2;
- (void)setGameCenterFeatures:(unsigned int)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)title;

@end
