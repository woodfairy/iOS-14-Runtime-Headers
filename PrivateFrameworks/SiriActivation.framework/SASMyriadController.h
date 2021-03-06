/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SASMyriadController : NSObject <AFMyriadDelegate, SASLockStateMonitorDelegate> {
    CMMotionActivityManager * _activityManager;
    bool  _canceledByMyriad;
    <SASMyriadControllerDelegate> * _delegate;
    FBSDisplayLayoutMonitor * _displayMonitor;
    bool  _isLifted;
    bool  _isLocked;
    double  _liftEndTime;
    SASLockStateMonitor * _lockStateMonitor;
    AFMyriadCoordinator * _myriadCoordinator;
    NSObject<OS_dispatch_semaphore> * _myriadFinishedSemaphore;
    double  _raiseToWakeTime;
    id /* block */  _shoudAbortAnotherDeviceBetterBlock;
    id /* block */  _shouldContinueBlock;
}

@property (nonatomic) bool canceledByMyriad;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleCMMotionActivity:(id)arg1;
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;
- (void)activateForInTaskRequest:(bool)arg1 isVisible:(bool)arg2;
- (bool)activateForRequest:(id)arg1 visible:(bool)arg2;
- (bool)canceledByMyriad;
- (void)dealloc;
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setCanceledByMyriad:(bool)arg1;
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;
- (void)shouldContinue:(id)arg1;

@end
