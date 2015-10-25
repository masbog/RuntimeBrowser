/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapterTimeMarker : MPTimeMarker {
    unsigned int _chapterIndex;
    NSArray *_chapters;
    BOOL _hasArtworkAtPlaybackTime;
}

@property (nonatomic) unsigned int chapterIndex;
@property (nonatomic, retain) NSArray *chapters;
@property (nonatomic) BOOL hasArtworkAtPlaybackTime;

- (void).cxx_destruct;
- (unsigned int)chapterIndex;
- (id)chapters;
- (BOOL)hasArtworkAtPlaybackTime;
- (void)setChapterIndex:(unsigned int)arg1;
- (void)setChapters:(id)arg1;
- (void)setHasArtworkAtPlaybackTime:(BOOL)arg1;

@end
