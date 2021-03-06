/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBLockHardwareButton : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonGestureParametersObserver, SBPressPrecedenceArbiter, UIGestureRecognizerDelegate> {
    unsigned long long  _aggdStartTime;
    SBLockHardwareButtonActions * _buttonActions;
    SBPressGestureRecognizer * _buttonDownGestureRecognizer;
    SBHardwareButtonGestureParameters * _buttonGestureParameters;
    unsigned long long  _configuredMaximumPressCount;
    unsigned long long  _currentPressCount;
    SBClickGestureRecognizer * _doublePressGestureRecognizer;
    long long  _homeButtonType;
    SBHomeHardwareButton * _homeHardwareButton;
    BSMonotonicReferenceTime * _lastPressDownReferenceTime;
    SBLongPressGestureRecognizer * _longPressGestureRecognizer;
    SBClickGestureRecognizer * _quadruplePressGestureRecognizer;
    UIGestureRecognizer * _screenshotGestureRecognizer;
    SBLongPressGestureRecognizer * _shutdownGestureRecognizer;
    SBClickGestureRecognizer * _singlePressGestureRecognizer;
    int  _sysdiagnoseDidBeginNotificationToken;
    SBClickGestureRecognizer * _triplePressGestureRecognizer;
    SBVolumeHardwareButton * _volumeHardwareButton;
}

@property (nonatomic, retain) SBLockHardwareButtonActions *buttonActions;
@property (nonatomic, retain) SBPressGestureRecognizer *buttonDownGestureRecognizer;
@property (nonatomic, retain) SBHardwareButtonGestureParameters *buttonGestureParameters;
@property (nonatomic) unsigned long long configuredMaximumPressCount;
@property (nonatomic) unsigned long long currentPressCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SBClickGestureRecognizer *doublePressGestureRecognizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long homeButtonType;
@property (nonatomic) SBHomeHardwareButton *homeHardwareButton;
@property (nonatomic, readonly) bool isButtonDown;
@property (nonatomic, retain) SBLongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, retain) SBClickGestureRecognizer *quadruplePressGestureRecognizer;
@property (nonatomic) UIGestureRecognizer *screenshotGestureRecognizer;
@property (nonatomic) SBLongPressGestureRecognizer *shutdownGestureRecognizer;
@property (nonatomic, retain) SBClickGestureRecognizer *singlePressGestureRecognizer;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBClickGestureRecognizer *triplePressGestureRecognizer;
@property (nonatomic) SBVolumeHardwareButton *volumeHardwareButton;

- (void).cxx_destruct;
- (void)SOSTriggerMechanismDidChange;
- (void)_createGestureRecognizers;
- (void)_gestureRecognizerFailed:(id)arg1;
- (void)_reconfigureButtonGestureRecognizers;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(bool)arg1;
- (void)_updatePressCountForDownEvent;
- (id)buttonActions;
- (void)buttonDown:(id)arg1;
- (id)buttonDownGestureRecognizer;
- (id)buttonGestureParameters;
- (void)cancelLongPress;
- (unsigned long long)configuredMaximumPressCount;
- (unsigned long long)currentPressCount;
- (void)dealloc;
- (void)doublePress:(id)arg1;
- (id)doublePressGestureRecognizer;
- (void)forceResetSequenceDidBegin;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hardwareButtonGestureParameters;
- (long long)homeButtonType;
- (id)homeHardwareButton;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 buttonActions:(id)arg6 homeButtonType:(long long)arg7 createGestures:(bool)arg8;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 proximitySensorManager:(id)arg3 homeHardwareButton:(id)arg4 volumeHardwareButton:(id)arg5 homeButtonType:(long long)arg6;
- (bool)isButtonDown;
- (void)longPress:(id)arg1;
- (id)longPressGestureRecognizer;
- (id)preemptablePressGestureRecognizers;
- (void)provider:(id)arg1 didUpdateButtonGestureParameters:(id)arg2;
- (void)quadruplePress:(id)arg1;
- (id)quadruplePressGestureRecognizer;
- (bool)reverseFadeOutIfNeeded;
- (id)screenshotGestureRecognizer;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (void)setButtonActions:(id)arg1;
- (void)setButtonDownGestureRecognizer:(id)arg1;
- (void)setButtonGestureParameters:(id)arg1;
- (void)setConfiguredMaximumPressCount:(unsigned long long)arg1;
- (void)setCurrentPressCount:(unsigned long long)arg1;
- (void)setDoublePressGestureRecognizer:(id)arg1;
- (void)setHomeButtonType:(long long)arg1;
- (void)setHomeHardwareButton:(id)arg1;
- (void)setLongPressGestureRecognizer:(id)arg1;
- (void)setQuadruplePressGestureRecognizer:(id)arg1;
- (void)setScreenshotGestureRecognizer:(id)arg1;
- (void)setShutdownGestureRecognizer:(id)arg1;
- (void)setSinglePressGestureRecognizer:(id)arg1;
- (void)setTriplePressGestureRecognizer:(id)arg1;
- (void)setVolumeHardwareButton:(id)arg1;
- (id)shutdownGestureRecognizer;
- (void)singlePress:(id)arg1;
- (id)singlePressGestureRecognizer;
- (void)triplePress:(id)arg1;
- (id)triplePressGestureRecognizer;
- (id)volumeHardwareButton;

@end
