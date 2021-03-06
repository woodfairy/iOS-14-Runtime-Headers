/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVStyleSheet : NSObject {
    double  _additionalInlinePaddingForDodgingSafeArea;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _defaultItemInlineSize;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doubleRowLayoutMargins;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doubleRowLayoutMarginsWhenShowingScrubInstructions;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _doublerowLayoutMarginsWhenShowingCustomContentInfo;
    UIFont * _infoLabelFont;
    double  _liveBroadcastLabelTopToBackdropTopDistance;
    double  _maximumMultiRowTransportControlsWidth;
    double  _maximumProminentPlayButtonDimension;
    double  _maximumTransportControlsWidth;
    double  _minimumProminentPlayButtonDimension;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumScrubberSize;
    double  _minimumSingleButtonTransportControlsWidth;
    double  _minimumTransportControlsWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonFullScreenSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _routePickerButtonInlineSize;
    UIFont * _scrubberInfoLabelFont;
    UIFont * _scrubberTimeLabelFont;
    bool  _shouldUseCompactFullScreenSize;
    double  _spacingBetweenScrubInstructionsAndScrubber;
    double  _standardInteritemPadding;
    double  _standardPaddingFullScreen;
    double  _standardPaddingInline;
    UITraitCollection * _traitCollection;
    double  _volumeSliderCompactFullScreenWidth;
    double  _volumeSliderInlineWidth;
    double  _volumeSliderPadding;
    double  _volumeSliderRegularFullScreenWidth;
}

@property (nonatomic, readonly) double additionalInlinePaddingForDodgingSafeArea;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultItemInlineSize;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doubleRowLayoutMargins;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doubleRowLayoutMarginsWhenShowingScrubInstructions;
@property (nonatomic, readonly) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } doublerowLayoutMarginsWhenShowingCustomContentInfo;
@property (nonatomic, readonly) UIFont *infoLabelFont;
@property (nonatomic, readonly) double liveBroadcastLabelTopToBackdropTopDistance;
@property (nonatomic, readonly) double maximumMultiRowTransportControlsWidth;
@property (nonatomic, readonly) double maximumProminentPlayButtonDimension;
@property (nonatomic, readonly) double maximumTransportControlsWidth;
@property (nonatomic, readonly) double minimumProminentPlayButtonDimension;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } minimumScrubberSize;
@property (nonatomic, readonly) double minimumSingleButtonTransportControlsWidth;
@property (nonatomic, readonly) double minimumTransportControlsWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonFullScreenSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } routePickerButtonInlineSize;
@property (nonatomic, readonly) UIFont *scrubberInfoLabelFont;
@property (nonatomic, readonly) UIFont *scrubberTimeLabelFont;
@property (nonatomic) bool shouldUseCompactFullScreenSize;
@property (getter=shouldUseMacStyle, readonly) bool shouldUseMacStyle;
@property (getter=shouldUsePadStyle, readonly) bool shouldUsePadStyle;
@property (nonatomic, readonly) double spacingBetweenScrubInstructionsAndScrubber;
@property (nonatomic, readonly) double standardInteritemPadding;
@property (nonatomic, readonly) double standardPaddingFullScreen;
@property (nonatomic, readonly) double standardPaddingInline;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic, readonly) double volumeSliderCompactFullScreenWidth;
@property (nonatomic, readonly) double volumeSliderInlineWidth;
@property (nonatomic, readonly) double volumeSliderPadding;
@property (nonatomic, readonly) double volumeSliderRegularFullScreenWidth;

- (void).cxx_destruct;
- (void)_loadFontsIfNeeded;
- (double)additionalInlinePaddingForDodgingSafeArea;
- (struct CGSize { double x1; double x2; })defaultItemFullScreenSize;
- (struct CGSize { double x1; double x2; })defaultItemInlineSize;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doubleRowLayoutMargins;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doubleRowLayoutMarginsWhenShowingScrubInstructions;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })doublerowLayoutMarginsWhenShowingCustomContentInfo;
- (id)infoLabelFont;
- (id)initWithTraitCollection:(id)arg1 shouldUseCompactFullScreenSize:(bool)arg2;
- (double)liveBroadcastLabelTopToBackdropTopDistance;
- (double)maximumMultiRowTransportControlsWidth;
- (double)maximumProminentPlayButtonDimension;
- (double)maximumTransportControlsWidth;
- (double)minimumProminentPlayButtonDimension;
- (struct CGSize { double x1; double x2; })minimumScrubberSize;
- (double)minimumSingleButtonTransportControlsWidth;
- (double)minimumTransportControlsWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })playbackControlsViewLayoutMarginsForView:(id)arg1 keyboardHeight:(double)arg2 isFullScreen:(bool)arg3;
- (struct CGSize { double x1; double x2; })routePickerButtonFullScreenSize;
- (struct CGSize { double x1; double x2; })routePickerButtonInlineSize;
- (id)scrubberInfoLabelFont;
- (id)scrubberTimeLabelFont;
- (void)setShouldUseCompactFullScreenSize:(bool)arg1;
- (void)setTraitCollection:(id)arg1;
- (bool)shouldUseCompactFullScreenSize;
- (bool)shouldUseMacStyle;
- (bool)shouldUsePadStyle;
- (double)spacingBetweenScrubInstructionsAndScrubber;
- (double)standardInteritemPadding;
- (double)standardPaddingFullScreen;
- (double)standardPaddingInline;
- (id)traitCollection;
- (double)volumeSliderCompactFullScreenWidth;
- (double)volumeSliderInlineWidth;
- (double)volumeSliderPadding;
- (double)volumeSliderRegularFullScreenWidth;

@end
