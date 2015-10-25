/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKBaseGameCell : GKCollectionViewCell {
    UIImageView *_iconView;
    UILabel *_nameLabel;
}

@property (nonatomic, retain) GKGame *game;
@property (nonatomic, retain) GKGameRecord *gameRecord;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) UILabel *nameLabel;

+ (float)defaultRowHeight;
+ (id)itemHeightList;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })alignmentRectForText;
- (void)dealloc;
- (void)didUpdateModel;
- (id)game;
- (id)gameRecord;
- (id)iconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)nameLabel;
- (void)prepareForReuse;
- (void)setGame:(id)arg1;
- (void)setGameRecord:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setRepresentedItem:(id)arg1;

@end
