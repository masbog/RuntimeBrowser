/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactView : UITableView {
    NSDictionary *_actionTextAttributes;
    BOOL _cellsLayoutCachingEnabled;
    CNContact *_contact;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _contentMargins;
    UIView *_customHeaderView;
    NSDictionary *_labelTextAttributes;
    BOOL _needsUpdateVisibleCells;
    struct CGSize { 
        float width; 
        float height; 
    } _oldSize;
    UIColor *_sectionBackgroundColor;
    UIColor *_selectedCellBackgroundColor;
    BOOL _shouldUseExpandedContentStyle;
    BOOL _shouldUseMapTiles;
    NSDictionary *_valueTextAttributes;
}

@property (nonatomic, copy) NSDictionary *actionTextAttributes;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (getter=isCellsLayoutCachingEnabled, nonatomic) BOOL cellsLayoutCachingEnabled;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentMargins;
@property (nonatomic, retain) UIView *customHeaderView;
@property (nonatomic) <ABContactViewDataSource> *dataSource;
@property (nonatomic, readonly) CNContactHeaderView *defaultHeaderView;
@property (nonatomic) <ABContactViewDelegate> *delegate;
@property (nonatomic, copy) NSDictionary *labelTextAttributes;
@property (nonatomic) BOOL needsUpdateVisibleCells;
@property (nonatomic) struct CGSize { float x1; float x2; } oldSize;
@property (nonatomic, retain) UIColor *sectionBackgroundColor;
@property (nonatomic, retain) UIColor *selectedCellBackgroundColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (nonatomic) BOOL shouldUseExpandedContentStyle;
@property (nonatomic) BOOL shouldUseMapTiles;
@property (nonatomic, copy) NSDictionary *valueTextAttributes;

+ (id)allCardProperties;
+ (id)cellIdentifierForActions;
+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;
+ (id)cellIdentifierForFaceTimeGroup;
+ (id)cellIdentifierForLinkedCardsEditingGroup;
+ (id)cellIdentifierForLinkedCardsGroup;
+ (id)cellIdentifierForLinkedCardsPlaceholderGroup;
+ (id)cellIdentifierForProperty:(id)arg1;
+ (id)cellIdentifierForPropertyPlaceholder;
+ (id)cellIdentifierForSplitActions;
+ (Class)classForCellIdentifier:(id)arg1;
+ (id)defaultCardProperties;
+ (BOOL)isFixedValueProperty:(id)arg1;
+ (BOOL)isMultiValueProperty:(id)arg1;
+ (id)nameProperties;
+ (id)namePropertiesForContact:(id)arg1;
+ (id)optionalCardProperties;
+ (id)requiredNameProperties;

- (void).cxx_destruct;
- (void)_cnui_applyContactStyle;
- (id)actionTextAttributes;
- (void)applyCellAppearance:(id)arg1;
- (id)contact;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentMargins;
- (id)customHeaderView;
- (id)defaultHeaderView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 contact:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2 contact:(id)arg3;
- (BOOL)isCellsLayoutCachingEnabled;
- (id)labelTextAttributes;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (BOOL)needsUpdateVisibleCells;
- (struct CGSize { float x1; float x2; })oldSize;
- (void)registerContactCellClass:(Class)arg1;
- (id)sectionBackgroundColor;
- (id)selectedCellBackgroundColor;
- (void)setActionTextAttributes:(id)arg1;
- (void)setAttributesFromContactView:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCellsLayoutCachingEnabled:(BOOL)arg1;
- (void)setContact:(id)arg1;
- (void)setContentMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setCustomHeaderView:(id)arg1;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setNeedsUpdateVisibleCells;
- (void)setNeedsUpdateVisibleCells:(BOOL)arg1;
- (void)setOldSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSectionBackgroundColor:(id)arg1;
- (void)setSelectedCellBackgroundColor:(id)arg1;
- (void)setShouldUseExpandedContentStyle:(BOOL)arg1;
- (void)setShouldUseMapTiles:(BOOL)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)setValueTextAttributes:(id)arg1;
- (BOOL)shouldUseExpandedContentStyle;
- (BOOL)shouldUseMapTiles;
- (void)tintColorDidChange;
- (void)updateFontColors;
- (void)updateFontSizes;
- (void)updateVisibleCellsIfNeeded;
- (id)valueTextAttributes;

@end
