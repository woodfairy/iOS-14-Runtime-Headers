/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBAssistantActiveInterfaceOrientationWindow : SBSecureMainScreenActiveInterfaceOrientationWindow {
    bool  _touchesPassThroughToSpringBoard;
}

@property (nonatomic, readonly) SBAssistantRootViewController *assistantRootViewController;
@property (nonatomic) bool touchesPassThroughToSpringBoard;

+ (bool)_isSecure;
+ (id)defaultLayoutStrategy;
+ (bool)sb_autorotates;

- (bool)_canBecomeKeyWindow;
- (id)_hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (bool)_usesWindowServerHitTesting;
- (id)assistantRootViewController;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDebugName:(id)arg1;
- (bool)isOpaque;
- (void)setTouchesPassThroughToSpringBoard:(bool)arg1;
- (bool)touchesPassThroughToSpringBoard;

@end
