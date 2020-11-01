/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPIPContainerViewController : UIViewController <PGPictureInPictureViewControllerContentContainer, SBPIPInteractionControllerDelegate> {
    bool  _animateSafeAreaInsetsChanges;
    UIView * _contentView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentViewPadding;
    FBDisplayLayoutElement * _displayLayoutElement;
    double  _displayLayoutElementLevel;
    SBPIPInteractionController * _interactionController;
    SBFFluidBehaviorSettings * _interactiveAnimationSettings;
    bool  _interfaceOrientationLockAcquired;
    NSHashTable * _observerHashTable;
    PGPictureInPictureViewController * _pictureInPictureViewController;
    long long  _requiredInterfaceOrientation;
    SBFFluidBehaviorSettings * _stashTabFluidBehavior;
    BSTimer * _stashedStateReduceResourcesUsageTimer;
    unsigned int  _updateContentViewLayoutSettingsAndLayoutIfNeeded;
}

@property (nonatomic) bool animateSafeAreaInsetsChanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double displayLayoutElementLevel;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PGPictureInPictureViewController *pictureInPictureViewController;
@property (nonatomic, readonly) long long requiredInterfaceOrientation;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)SB_accessibilityContentViewScale;
- (void)SB_accessibilitySetContentViewScale:(double)arg1;
- (void)_acquireInterfaceOrientationLock;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrameFromInterfaceOrientation:(long long)arg1 frameInFixedCoordinateSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentViewFrameInDisplayReferenceSpace;
- (long long)_currentInterfaceOrientation;
- (bool)_isContentFromFillGravityWithInitialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_relinquishInterfaceOrientationLock;
- (void)_requireInterfaceOrientation:(long long)arg1;
- (void)_setStashState:(long long)arg1;
- (void)_updateContentPadding;
- (void)_updateContentViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 reason:(id)arg2;
- (void)_updateDisplayLayoutElementReferenceFrame;
- (void)acquireInterfaceOrientationLock;
- (void)addObserver:(id)arg1;
- (bool)animateSafeAreaInsetsChanges;
- (void)dealloc;
- (double)displayLayoutElementLevel;
- (void)forcePictureInPictureToFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)handleDoubleTapGesture;
- (bool)handleTapWhileStashedGesture;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithPictureInPictureViewController:(id)arg1;
- (void)interactionController:(id)arg1 didSettleOnStashState:(bool)arg2;
- (void)interactionController:(id)arg1 didUpdateStashProgress:(double)arg2;
- (void)interactionController:(id)arg1 wantsStashTabHidden:(bool)arg2 left:(bool)arg3;
- (void)interactionControllerDidBeginSizeChange:(id)arg1 behavior:(int)arg2;
- (void)interactionControllerDidEndAllInteractions:(id)arg1;
- (void)interactionControllerDidEndSizeChange:(id)arg1;
- (void)interactionControllerDidUpdateEdgeInsets:(id)arg1;
- (void)loadView;
- (void)performRotateAnimationWithRotation:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)performStartAnimationWithCompletionHandler:(id /* block */)arg1;
- (void)performStopAnimationWithFinalInterfaceOrientation:(long long)arg1 finalLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (id)pictureInPictureViewController;
- (void)preferredContentSizeDidChangeForPictureInPictureViewController;
- (void)prepareStartAnimationWithInitialInterfaceOrientation:(long long)arg1 initialLayerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)relinquishInterfaceOrientationLock;
- (void)removeObserver:(id)arg1;
- (long long)requiredInterfaceOrientation;
- (void)setAnimateSafeAreaInsetsChanges:(bool)arg1;
- (void)setContentViewPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDisplayLayoutElementLevel:(double)arg1;
- (void)setInteractionControllerEnabled:(bool)arg1;
- (void)setNeedsLayoutForInteractionController:(id)arg1 traits:(unsigned long long)arg2 withReason:(unsigned long long)arg3 behavior:(int)arg4 completion:(id /* block */)arg5;
- (void)setStashState:(long long)arg1;
- (void)startResourcesUsageReductionAfterTimeout:(double)arg1;
- (void)stopResourcesUsageReduction;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end