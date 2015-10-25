/* Generated by RuntimeBrowser.
 */

@protocol WKActionSheetAssistantDelegate <NSObject>

@required

- (struct RetainPtr<NSArray> { void *x1; })actionSheetAssistant:(WKActionSheetAssistant *)arg1 decideActionsForElement:(_WKActivatedElementInfo *)arg2 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg3;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 openElementAtLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 performAction:(int)arg2;
- (BOOL)actionSheetAssistant:(WKActionSheetAssistant *)arg1 shouldIncludeAppLinkActionsForElement:(_WKActivatedElementInfo *)arg2;
- (const struct InteractionInformationAtPosition { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; bool x2; bool x3; bool x4; bool x5; bool x6; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_7_1_1; } x7; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_8_1_1; } x8; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_9_1_1; } x9; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_2_1; } x_10_1_1; } x10; struct IntRect { struct IntPoint { int x_1_2_1; int x_1_2_2; } x_11_1_1; struct IntSize { int x_2_2_1; int x_2_2_2; } x_11_1_2; } x11; struct RefPtr<WebKit::ShareableBitmap> { struct ShareableBitmap {} *x_12_1_1; } x12; struct TextIndicatorData { struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_1_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_1_2_2; } x_13_1_1; struct FloatRect { struct FloatPoint { float x_1_3_1; float x_1_3_2; } x_2_2_1; struct FloatSize { float x_2_3_1; float x_2_3_2; } x_2_2_2; } x_13_1_2; struct Vector<WebCore::FloatRect, 0, WTF::CrashOnOverflow, 16> { struct FloatRect {} *x_3_2_1; unsigned int x_3_2_2; unsigned int x_3_2_3; } x_13_1_3; float x_13_1_4; struct RefPtr<WebCore::Image> { struct Image {} *x_5_2_1; } x_13_1_5; struct RefPtr<WebCore::Image> { struct Image {} *x_6_2_1; } x_13_1_6; int x_13_1_7; bool x_13_1_8; } x13; }*)positionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@optional

- (void)actionSheetAssistant:(WKActionSheetAssistant *)arg1 willStartInteractionWithElement:(_WKActivatedElementInfo *)arg2;
- (void)actionSheetAssistantDidStopInteraction:(WKActionSheetAssistant *)arg1;
- (void)updatePositionInformationForActionSheetAssistant:(WKActionSheetAssistant *)arg1;

@end
