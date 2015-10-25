/* Generated by RuntimeBrowser.
 */

@protocol TSDCanvasDelegate <NSObject>

@required

- (TSKDocumentRoot *)documentRoot;

@optional

- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidUpdateVisibleBounds:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
- (void)canvasWillLayout:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (BOOL)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (BOOL)isCanvasInteractive;
- (BOOL)isPrintingCanvas;
- (BOOL)isRenderingForKPF;
- (BOOL)shouldShowInstructionalText;
- (BOOL)shouldShowTextOverflowGlyphs;
- (BOOL)shouldSuppressBackgrounds;
- (BOOL)spellCheckingSupported;
- (BOOL)spellCheckingSuppressed;
- (BOOL)supportsAdaptiveLayout;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;

@end
