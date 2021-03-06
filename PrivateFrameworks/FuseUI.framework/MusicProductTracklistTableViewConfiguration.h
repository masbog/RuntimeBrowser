/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    NSString *_completeOfferLocalizedTitle;
    MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
    <MusicEntityProviding> *_copyrightSourceEntityProvider;
    <MusicEntityProviding> *_entityProvider;
    MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
    MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
    MusicEntityViewDescriptor *_tracklistEntityViewDescriptor;
    BOOL _wantsArtistName;
    BOOL _wantsArtwork;
    BOOL _wantsCompleteOffer;
    BOOL _wantsCopyrightText;
}

@property (nonatomic, readonly) MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
@property (nonatomic, readonly) MusicEntityViewDescriptor *_tracklistEntityViewDescriptor;
@property (nonatomic, copy) NSString *completeOfferLocalizedTitle;
@property (nonatomic, retain) <MusicEntityProviding> *copyrightSourceEntityProvider;
@property (nonatomic, readonly) <MusicEntityProviding> *entityProvider;
@property (nonatomic, readonly) MusicEntityViewDescriptor *tracklistEntityViewDescriptor;
@property (nonatomic) BOOL wantsArtistName;
@property (nonatomic) BOOL wantsArtwork;
@property (nonatomic) BOOL wantsCompleteOffer;
@property (nonatomic) BOOL wantsCopyrightText;

+ (Class)tracklistItemContentDescriptorClass;

- (void).cxx_destruct;
- (void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureTracklistEntityViewDescriptorWithTintInformation:(id)arg1;
- (id)_copyrightEntityViewDescriptor;
- (id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1;
- (id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadTracklistEntityViewDescriptor;
- (id)_showCompleteOfferEntityViewDescriptor;
- (id)_shuffleEntityViewDescriptor;
- (id)_tracklistEntityViewDescriptor;
- (id)completeOfferLocalizedTitle;
- (void)configureWithTintInformation:(id)arg1;
- (id)copyrightSourceEntityProvider;
- (id)entityProvider;
- (int)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithEntityProvider:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)newViewController;
- (void)setCompleteOfferLocalizedTitle:(id)arg1;
- (void)setCopyrightSourceEntityProvider:(id)arg1;
- (void)setWantsArtistName:(BOOL)arg1;
- (void)setWantsArtwork:(BOOL)arg1;
- (void)setWantsCompleteOffer:(BOOL)arg1;
- (void)setWantsCopyrightText:(BOOL)arg1;
- (id)tracklistEntityViewDescriptor;
- (BOOL)wantsArtistName;
- (BOOL)wantsArtwork;
- (BOOL)wantsCompleteOffer;
- (BOOL)wantsCopyrightText;

@end
