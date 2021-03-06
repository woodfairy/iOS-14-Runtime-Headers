/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUDashboardNavigationButton : UIControl {
    UIView * _backgroundBlurView;
    UIView * _backgroundContainerView;
    NSNumber * _badgeValue;
    UIView * _badgeView;
    double  _blurAlpha;
    HFWallpaperSlice * _blurredWallpaperSlice;
    NSArray * _constraints;
    UIMenu * _contextMenu;
    <HUDashboardNavigationButtonDelegate> * _delegate;
    CALayer * _filterLayer;
    bool  _hidesWhenCollapsed;
    NSString * _identifier;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _imageOffset;
    UIImageView * _imageView;
    HUNavigationButtonLayoutOptions * _layoutOptions;
    NSLayoutConstraint * _minWidthConstraint;
    unsigned long long  _style;
    UILabel * _titleLabel;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _touchInsets;
}

@property (nonatomic, readonly) UIView *backgroundBlurView;
@property (nonatomic, readonly) UIView *backgroundContainerView;
@property (nonatomic, copy) NSNumber *badgeValue;
@property (nonatomic, retain) UIView *badgeView;
@property (nonatomic) double blurAlpha;
@property (nonatomic, retain) HFWallpaperSlice *blurredWallpaperSlice;
@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UIMenu *contextMenu;
@property (nonatomic) <HUDashboardNavigationButtonDelegate> *delegate;
@property (nonatomic, retain) CALayer *filterLayer;
@property (nonatomic) bool hidesWhenCollapsed;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic) struct UIOffset { double x1; double x2; } imageOffset;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) HUNavigationButtonLayoutOptions *layoutOptions;
@property (nonatomic, retain) NSLayoutConstraint *minWidthConstraint;
@property (nonatomic, readonly) unsigned long long style;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchInsets;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_didTap:(id)arg1;
- (void)_updateWallpaperContentsRectAndScale;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)backgroundBlurView;
- (id)backgroundContainerView;
- (id)badgeValue;
- (id)badgeView;
- (double)blurAlpha;
- (id)blurredWallpaperSlice;
- (id)constraints;
- (id)contextMenu;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (id)description;
- (id)filterLayer;
- (bool)hidesWhenCollapsed;
- (id)identifier;
- (id)image;
- (struct UIOffset { double x1; double x2; })imageOffset;
- (id)imageView;
- (id)initWithStyle:(unsigned long long)arg1;
- (id)layoutOptions;
- (void)layoutSubviews;
- (id)minWidthConstraint;
- (void)normalizedWallpaperRectDidChange;
- (void)setBadgeValue:(id)arg1;
- (void)setBadgeView:(id)arg1;
- (void)setBlurAlpha:(double)arg1;
- (void)setBlurredWallpaperSlice:(id)arg1;
- (void)setConstraints:(id)arg1;
- (void)setContextMenu:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilterLayer:(id)arg1;
- (void)setHidesWhenCollapsed:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setImageView:(id)arg1;
- (void)setLayoutOptions:(id)arg1;
- (void)setMinWidthConstraint:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (unsigned long long)style;
- (id)title;
- (id)titleLabel;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchInsets;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
