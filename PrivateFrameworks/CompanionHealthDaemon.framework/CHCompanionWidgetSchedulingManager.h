/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CompanionHealthDaemon.framework/CompanionHealthDaemon
 */

@interface CHCompanionWidgetSchedulingManager : NSObject <HDDataObserver, HDHealthDaemonReadyObserver, HDUserCharacteristicsProfileObserver> {
    HDProfile * _profile;
    long long  _wheelchairUse;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_currentWheelchairUse;
- (void)_reloadWidgetTimelines;
- (void)_startObservingUserCharacteristics;
- (void)_startObservingWorkouts;
- (void)_stopObservingUserCharacteristics;
- (void)_stopObservingWorkouts;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)userCharacteristicsManager:(id)arg1 didUpdateUserProfile:(id)arg2;

@end
