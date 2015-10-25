/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIViewElementLayoutContext : NSObject {
    float _activePageWidth;
    NSMutableDictionary *_aggregateValues;
    <SKUIArtworkRequestDelegate> *_artworkRequestDelegate;
    NSString *_backdropGroupName;
    SKUIBadgeTextAttachmentLoader *_badgeImageLoader;
    NSMapTable *_blurColors;
    MPUBorderDrawingCache *_borderDrawingCache;
    SKUIClientContext *_clientContext;
    unsigned int _containerViewElementType;
    float _displayScale;
    NSMapTable *_editorialLayouts;
    NSHashTable *_expandedEditorialLayouts;
    SKUIItemOfferButton *_itemOfferButton;
    NSMutableDictionary *_itemOfferButtonSizes;
    SKUIViewElementTextLayoutCache *_labelLayoutCache;
    NSMutableSet *_observedArtworkRequestIDs;
    UIViewController *_parentViewController;
    UIColor *_placeholderColor;
    NSMapTable *_placeholderImages;
    SKUIResourceLoader *_resourceLoader;
    UIColor *_tintColor;
}

@property (nonatomic) float activePageWidth;
@property (nonatomic) <SKUIArtworkRequestDelegate> *artworkRequestDelegate;
@property (nonatomic, copy) NSString *backdropGroupName;
@property (nonatomic, readonly) SKUIBadgeTextAttachmentLoader *badgeImageLoader;
@property (nonatomic, readonly) MPUBorderDrawingCache *borderDrawingCache;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic) unsigned int containerViewElementType;
@property (nonatomic) float displayScale;
@property (nonatomic, retain) SKUIViewElementTextLayoutCache *labelLayoutCache;
@property (nonatomic) UIViewController *parentViewController;
@property (nonatomic, retain) UIColor *placeholderColor;
@property (nonatomic, retain) SKUIResourceLoader *resourceLoader;
@property (nonatomic, retain) UIColor *tintColor;

+ (float)_calculateValueFromString:(id)arg1 withDefault:(float)arg2 coefficent:(float)arg3;
+ (float)itemWidthForElement:(id)arg1 withDefaultWidth:(float)arg2 fitWidth:(float)arg3;

- (void).cxx_destruct;
- (void)_artworkRequestDidLoadImageNotification:(id)arg1;
- (id)_initSKUIViewElementLayoutContext;
- (BOOL)_loadImageForURL:(id)arg1 cacheKey:(id)arg2 dataConsumer:(id)arg3 reason:(int)arg4;
- (struct CGSize { float x1; float x2; })_sizeForImageElement:(id)arg1 applyTransform:(BOOL)arg2;
- (float)activePageWidth;
- (id)aggregateValueForKey:(id)arg1;
- (id)artworkRequestDelegate;
- (id)backdropGroupName;
- (id)badgeImageLoader;
- (id)blurColorForCacheKey:(id)arg1;
- (id)borderDrawingCache;
- (id)clientContext;
- (unsigned int)containerViewElementType;
- (void)dealloc;
- (float)defaultItemWidthForViewElement:(id)arg1;
- (float)displayScale;
- (id)editorialLayoutForLabelElement:(id)arg1 width:(float)arg2;
- (void)expandEditorialForLabelElement:(id)arg1;
- (id)imageResourceCacheKeyForArtwork:(id)arg1;
- (id)imageResourceCacheKeyForViewElement:(id)arg1;
- (id)init;
- (id)initWithStorePageSectionContext:(id)arg1;
- (id)initWithStorePageSectionContext:(id)arg1 previousLayoutContext:(id)arg2;
- (void)invalidateAllEditorialLayouts;
- (BOOL)isEditorialLayoutExpanded:(id)arg1;
- (id)labelLayoutCache;
- (BOOL)loadImageForArtwork:(id)arg1 dataConsumer:(id)arg2 reason:(int)arg3;
- (BOOL)loadImageForArtwork:(id)arg1 reason:(int)arg2;
- (BOOL)loadImageForBadgeElement:(id)arg1 reason:(int)arg2;
- (BOOL)loadImageForImageElement:(id)arg1 reason:(int)arg2;
- (BOOL)loadTemplatedImageForBadgeElement:(id)arg1 reason:(int)arg2;
- (int)maxWidthForElement:(id)arg1 withDefaultWidth:(int)arg2;
- (id)parentViewController;
- (id)placeholderColor;
- (id)placeholderImageForImageElement:(id)arg1;
- (id)placeholderImageForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2;
- (id)requestIdentifierForArtwork:(id)arg1;
- (id)requestIdentifierForResourceCacheKey:(id)arg1;
- (id)requestIdentifierForViewElement:(id)arg1;
- (id)resourceLoader;
- (void)setActivePageWidth:(float)arg1;
- (void)setAggregateValue:(id)arg1 forKey:(id)arg2;
- (void)setArtworkRequestDelegate:(id)arg1;
- (void)setBackdropGroupName:(id)arg1;
- (void)setBlurColor:(id)arg1 cacheKey:(id)arg2;
- (void)setClientContext:(id)arg1;
- (void)setContainerViewElementType:(unsigned int)arg1;
- (void)setDisplayScale:(float)arg1;
- (void)setLabelLayoutCache:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setPlaceholderColor:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForBadgeElement:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForImageElement:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForItemOfferButton:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForViewElement:(id)arg1 width:(float)arg2;
- (id)textPropertiesForViewElement:(id)arg1 width:(float)arg2;
- (id)tintColor;
- (id)transientRequestIdentifierForViewElement:(id)arg1;

@end
