/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFRoundProgressView : UIView {
    CAShapeLayer * _circleLayer;
    UIView * _contentView;
    double  _increaseRate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pieCenter;
    double  _pieRadius;
    NSDate * _prevUpdateTime;
    double  _progress;
    NSTimer * _progressTimer;
    double  _realProgress;
    CAShapeLayer * _sliceLayer;
    double  _uiProgress;
}

@property (nonatomic) double progress;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (void)_updateUIProgress;
- (void)dealloc;
- (void)increaseUIProgress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)progress;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)resetProgress;
- (void)setPieRadius:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)startProgressTimer;
- (void)stopProgressTimer;
- (double)toRadian:(double)arg1;

@end
