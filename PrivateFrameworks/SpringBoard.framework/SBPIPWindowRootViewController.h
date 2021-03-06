/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBPIPWindowRootViewController : UIViewController <SBPIPContainerViewControllerObserver, SBUIActiveOrientationObserver> {
    long long  _activeInterfaceOrientation;
    NSMapTable * _containerViewControllerRequiredInterfaceOrientationMapTable;
    NSMutableArray * _containerViewControllers;
    NSHashTable * _interfaceOrientationLockHashTable;
}

@property (nonatomic) long long activeInterfaceOrientation;
@property (nonatomic, readonly) NSArray *containerViewControllers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_hasOngoingMorphRestore;
- (long long)_interfaceOrientationForContainerViewController:(id)arg1;
- (void)_layoutContainerViewControllers:(id)arg1;
- (void)_layoutInterfaceOrientationUnlockedContainerViewControllers;
- (long long)_overrideInterfaceOrientationMechanics;
- (long long)_overrideWindowActiveInterfaceOrientation;
- (long long)_requiredInterfaceOrientationForContainerViewController:(id)arg1;
- (long long)activeInterfaceOrientation;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)addContainerViewController:(id)arg1;
- (void)containerViewControllerAcquireInterfaceOrientationLock:(id)arg1;
- (id)containerViewControllerForPictureInPictureViewController:(id)arg1;
- (void)containerViewControllerRelinquishInterfaceOrientationLock:(id)arg1;
- (void)containerViewControllerRequiredInterfaceOrientationDidChange:(id)arg1;
- (id)containerViewControllers;
- (void)dealloc;
- (id)init;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)setActiveInterfaceOrientation:(long long)arg1;
- (bool)shouldAutorotate;
- (void)viewDidLayoutSubviews;

@end
