/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBInteractiveScreenshotGestureManager : NSObject <BSTransactionObserver, SBInteractiveScreenshotCommitWorkspaceTransactionDelegate, SBInteractiveScreenshotGestureRootViewControllerDelegate, SBMainDisplayWorkspaceAppInteractionEventSourceObserving, SBSystemGestureRecognizerDelegate> {
    NSUUID * _activeGestureSessionID;
    SBMainDisplayWorkspaceAppInteractionEventSource * _appInteractionEventSource;
    SBAsynchronousRenderingAssertion * _asynchronousRenderingAssertion;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer * _bottomLeftGestureRecognizer;
    SBInteractiveScreenshotScreenEdgePanGestureRecognizer * _bottomRightGestureRecognizer;
    SBInteractiveScreenshotCommitWorkspaceTransaction * _commitTransaction;
    <BSInvalidatable> * _commitTransactionDisableGestureAssertion;
    <SBInteractiveScreenshotGestureManagerDelegate> * _delegate;
    NSMutableSet * _disableGestureAssertions;
    bool  _hasInitiatedCommit;
    bool  _isCapturingScreenshot;
    BSMonotonicReferenceTime * _lastApplicationTouchReferenceTime;
    NSMutableArray * _pendingCommitWorkspaceTransactionBlocks;
    UIScreen * _screen;
    NSMutableDictionary * _sessionIDToSession;
    SBInteractiveScreenshotSettings * _settings;
    FBScene * _sourceScene;
    SBSystemGestureManager * _systemGestureManager;
    NSHashTable * _weakReusableGestureRootWindows;
    SBMainWorkspace * _workspace;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBInteractiveScreenshotGestureManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleInteractiveScreenshotGesture:(id)arg1;
- (void)_invalidateSessionID:(id)arg1;
- (void)_performCommitWorkspaceTransactionBlock:(id /* block */)arg1;
- (void)_performPendingCommitWorkspaceTransactionBlocksWithTransaction:(id)arg1;
- (id)_screenshotPresentationOptions;
- (id)acquireDisableGestureAssertionWithReason:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)eventSource:(id)arg1 userTouchedApplication:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)handleRemoteTransientOverlayPresentationRequest:(id)arg1 forSession:(id)arg2;
- (id)initWithScreen:(id)arg1 sourceScene:(id)arg2 workspace:(id)arg3 systemGestureManager:(id)arg4 appInteractionEventSource:(id)arg5;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsGestureWindowInvalidation:(id)arg1;
- (void)interactiveScreenshotCommitWorkspaceTransactionRequestsPlaceholderChromeRemoval:(id)arg1;
- (void)interactiveScreenshotGestureRootViewController:(id)arg1 gestureDidCompleteWithIntent:(long long)arg2;
- (void)interactiveScreenshotGestureRootViewControllerRequestsGestureRecognizerCancellation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)transactionDidComplete:(id)arg1;
- (id)viewForSystemGestureRecognizer:(id)arg1;

@end