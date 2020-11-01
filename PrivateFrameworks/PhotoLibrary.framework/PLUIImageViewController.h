/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIImageViewController : UIViewController <PLCropOverlayDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate> {
    unsigned int  _allowEditing;
    PLCropOverlay * _cropOverlay;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRect;
    UIImage * _image;
    struct CGImage { } * _imageRef;
    PLPhotoTileViewController * _imageTile;
    unsigned int  _isDisappearing;
    unsigned int  _isVideo;
    long long  _newStatusBarStyle;
    PLManagedAsset * _photo;
    long long  _previousStatusBarStyle;
    PLProgressView * _progressView;
    PLVideoRemaker * _remaker;
    unsigned int  _remaking;
    unsigned int  _statusBarWasHidden;
    NSURL * _videoURL;
    PLVideoView * _videoView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedUseButtonTitle;
@property (readonly) Class superclass;

- (unsigned long long)_contentAutoresizingMask;
- (bool)_displaysFullScreen;
- (void)_editabilityChanged:(id)arg1;
- (void)_enableCropOverlay;
- (void)_enableCropOverlayIfNecessary;
- (void)_handleVideoSelected;
- (long long)_imagePickerStatusBarStyle;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_removedAsTopViewController;
- (unsigned long long)_tileAutoresizingMask;
- (id)_trimMessage;
- (void)_updateGestureSettings;
- (Class)_viewClass;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_viewFrame;
- (void)attachScrubberPalette;
- (void)beginDisplayingProgress;
- (id)cancelButtonTitle;
- (id)chooseButtonTitle;
- (bool)clientIsWallpaper;
- (id)cropOverlay;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (int)cropOverlayMode;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (id)customBackgroundColor;
- (void)dealloc;
- (long long)desiredStatusBarAnimation;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (bool)disableVideoTrimMessage;
- (bool)doNotTranscode;
- (id)exportPreset;
- (bool)force1XCroppedImage;
- (bool)forceNativeScreenScale;
- (void)handleAutoloopSelected;
- (void)handleMediaSelectionUsingTile:(id)arg1 managedAsset:(id)arg2 args:(id)arg3 includeEditing:(bool)arg4;
- (void)handleVideoSelectionWithURL:(id)arg1 args:(id)arg2;
- (unsigned short)imageFormat;
- (bool)imagePickerAllowsEditing;
- (unsigned long long)imagePickerSavingOptions;
- (id)initWithImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithPhoto:(id)arg1;
- (id)initWithUIImage:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)initWithVideoURL:(id)arg1;
- (bool)isDisplayedInPhotoPicker;
- (void)loadView;
- (id)localizedTitle;
- (id)localizedUseButtonTitle;
- (id)maxZoomScaleOverride;
- (void)photoTileViewController:(id)arg1 didAppear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 didDisappear:(bool)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(bool)arg2;
- (bool)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDoubleTap:(id)arg1;
- (bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (long long)preferredStatusBarUpdateAnimation;
- (bool)prefersStatusBarHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrame;
- (void)setAllowsEditing:(bool)arg1;
- (void)setCropOverlayDone;
- (void)setupNavigationItem;
- (void)traitCollectionDidChange:(id)arg1;
- (id)videoMaximumDuration;
- (id)videoQuality;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2 slalomRegionEditor:(id)arg3;
- (bool)videoViewCanBeginPlayback:(id)arg1;
- (bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewDidPausePlayback:(id)arg1 didFinish:(bool)arg2;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (bool)viewImageBeforeSelecting;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (bool)wantsAutoloopUI;
- (bool)wantsLegacyImageUI;
- (bool)wantsStatusBarVisible;

@end