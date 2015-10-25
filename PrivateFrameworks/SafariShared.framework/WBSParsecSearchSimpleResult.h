/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSParsecSearchSimpleResult : WBSParsecSearchResult {
    NSString *_descriptionLeadInText;
    NSNumber *_descriptionMaximumNumberOfLines;
    BOOL _descriptionTextCanWrap;
    NSString *_footnote;
    BOOL _hasSingleLineDescriptionAndTitle;
    NSArray *_moreIconRepresentations;
    WBSParsecImageRepresentation *_titleGlyph;
    NSNumber *_titleMaximumNumberOfLines;
}

@property (nonatomic, readonly) NSString *descriptionLeadInText;
@property (nonatomic, readonly) NSNumber *descriptionMaximumNumberOfLines;
@property (nonatomic, readonly) BOOL descriptionTextCanWrap;
@property (nonatomic, readonly) NSString *footnote;
@property (nonatomic, readonly) BOOL hasMoreIcons;
@property (nonatomic, readonly) BOOL hasSingleLineDescriptionAndTitle;
@property (nonatomic, readonly) NSNumber *titleMaximumNumberOfLines;

- (void).cxx_destruct;
- (id)descriptionLeadInText;
- (id)descriptionMaximumNumberOfLines;
- (BOOL)descriptionTextCanWrap;
- (id)footnote;
- (BOOL)hasMoreIcons;
- (BOOL)hasSingleLineDescriptionAndTitle;
- (id)initWithDictionary:(id)arg1;
- (id)moreIconsWithSession:(id)arg1;
- (id)titleGlyphWithSession:(id)arg1;
- (id)titleMaximumNumberOfLines;

@end
