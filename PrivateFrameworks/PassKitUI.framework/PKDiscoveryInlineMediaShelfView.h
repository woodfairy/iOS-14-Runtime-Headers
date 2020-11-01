/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDiscoveryInlineMediaShelfView : PKDiscoveryShelfView {
    PKDiscoveryInlineMediaCaptionView * _captionView;
    UIView * _imageContainerView;
    UIImageView * _imageView;
    bool  _isInline;
    double  _leadingSpace;
    PKDiscoveryMedia * _media;
    PKDiscoveryInlineMediaShelf * _shelf;
}

- (void).cxx_destruct;
- (void)_loadImageFromBundle;
- (void)_loadImageFromFileURL;
- (id)initWithShelf:(id)arg1;
- (void)layoutSubviews;
- (void)setContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setImage:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end