/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebTiledView : UIView {
    BOOL _allowsPaintingAndScriptsWhilePanning;
    BOOL _didFirstTileLayout;
    BOOL _editingTilingModeEnabled;
    int _inGestureType;
    BOOL _layoutTilesInMainThread;
    int _tilingArea;
    BOOL _tilingModeIsLocked;
    WAKWindow *_wakWindow;
}

- (void)_didScroll;
- (void)_screenChanged:(id)arg1;
- (void)_updateForScreen:(id)arg1;
- (unsigned int)adjustedMaxTileCount;
- (BOOL)allowsPaintingAndScriptsWhilePanning;
- (void)dealloc;
- (void)drawImageIntoTiles:(struct CGImage { }*)arg1;
- (BOOL)drawsGrid;
- (void)dumpTiles;
- (BOOL)editingTilingModeEnabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isTilingEnabled;
- (BOOL)keepsZoomedOutTiles;
- (void)layoutSubviews;
- (BOOL)layoutTilesInMainThread;
- (void)layoutTilesNow;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutTilesNowOnWebThread;
- (void)lockTilingMode;
- (BOOL)logsTilingChanges;
- (unsigned int)maxTileCount;
- (void)removeAllNonVisibleTiles;
- (void)removeAllTiles;
- (void)removeForegroundTiles;
- (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)arg1;
- (void)setDrawsGrid:(BOOL)arg1;
- (void)setEditingTilingModeEnabled:(BOOL)arg1;
- (void)setInGesture:(int)arg1;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (void)setLayoutTilesInMainThread:(BOOL)arg1;
- (void)setLogsTilingChanges:(BOOL)arg1;
- (void)setMaxTileCount:(unsigned int)arg1;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsLayout;
- (void)setTileDrawingEnabled:(BOOL)arg1;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)setTilingArea:(int)arg1;
- (void)setTilingEnabled:(BOOL)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (void)setWAKWindow:(id)arg1;
- (BOOL)tileDrawingEnabled;
- (struct CGSize { float x1; float x2; })tileSize;
- (BOOL)tilesOpaque;
- (int)tilingArea;
- (void)unlockTilingMode;
- (void)updateTilingMode;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (id)wakWindow;
- (void)willMoveToWindow:(id)arg1;

@end