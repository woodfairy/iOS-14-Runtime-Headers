/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroFeaturedMusicMenuCell : MiroMusicMenuCell {
    UIImageView * _cloudStatus;
    bool  _observingSong;
    MiroSongPreviewButton * _previewSongButton;
    float  _progress;
    UIView * _progressBackgroundView;
    MiroCircularProgressBar * _progressIndicator;
    Reachability * _reachability;
}

@property (nonatomic) UIImageView *cloudStatus;
@property (nonatomic) bool observingSong;
@property (nonatomic) MiroSongPreviewButton *previewSongButton;
@property (nonatomic) float progress;
@property (nonatomic) UIView *progressBackgroundView;
@property (nonatomic) MiroCircularProgressBar *progressIndicator;
@property (nonatomic, retain) Reachability *reachability;

- (void).cxx_destruct;
- (void)_setProgress:(float)arg1;
- (void)_setupReachabiliy;
- (void)_songAssetChanged:(id)arg1;
- (void)_updateCloudStatus;
- (void)_updateDownload:(id)arg1;
- (void)_updateProgressIndicator:(float)arg1;
- (void)_updateTextColors;
- (void)awakeFromNib;
- (id)cloudStatus;
- (void)dealloc;
- (long long)networkStatus;
- (void)networkStatusChanged:(id)arg1;
- (bool)observingSong;
- (void)prepareForReuse;
- (id)previewSongButton;
- (float)progress;
- (id)progressBackgroundView;
- (id)progressIndicator;
- (id)reachability;
- (void)setCloudStatus:(id)arg1;
- (void)setObservingSong:(bool)arg1;
- (void)setPreviewSongButton:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressBackgroundView:(id)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setReachability:(id)arg1;
- (void)setSong:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)updateArtwork;
- (void)updateSongNameForSong:(id)arg1;

@end
