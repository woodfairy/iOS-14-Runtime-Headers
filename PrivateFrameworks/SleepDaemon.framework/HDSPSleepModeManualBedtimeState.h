/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
 */

@interface HDSPSleepModeManualBedtimeState : HDSPSleepModeBedtimeState

- (bool)isUserRequested;
- (void)sleepScheduleStateChangedToBedtimeFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToDisabledFromState:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWakeUp:(unsigned long long)arg1;
- (void)sleepScheduleStateChangedToWindDownFromState:(unsigned long long)arg1;
- (id)stateName;
- (void)updateState;

@end