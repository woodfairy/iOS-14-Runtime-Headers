/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDataObserver, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDHealthDaemonReadyObserver> {
    HDSmoothingTask * _currentSmoothingTask;
    id /* block */  _didCompleteAllPendingSmoothingTasksHandler;
    bool  _isFirstLaunchAndNotYetSmoothed;
    bool  _needToCheckForLocationSeriesOnUnlock;
    NSMutableArray * _pendingSmoothingTasks;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    CLLocationSmoother * _smoother;
    double  _smoothingTaskTimeout;
    NSObject<OS_dispatch_source> * _timeoutSource;
    id /* block */  _unitTest_wilTriggerSmoothing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ didCompleteAllPendingSmoothingTasksHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_wilTriggerSmoothing;

- (void).cxx_destruct;
- (void)_associationsSyncedForWorkout:(id)arg1;
- (bool)_containsWorkoutObject:(id)arg1 error:(id*)arg2;
- (id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id*)arg4;
- (bool)_deleteSample:(id)arg1 error:(id*)arg2;
- (void)_finishSmoothingSampleWithTask:(id)arg1;
- (id)_locationsForSampleUUID:(id)arg1 error:(id*)arg2;
- (void)_queue_cancelTimeout;
- (id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id*)arg3;
- (bool)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id*)arg3;
- (void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3;
- (void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1;
- (void)_queue_setupLocationObserversIfNeeded;
- (void)_queue_smoothAllUnsmoothedLocationSeries;
- (void)_queue_smoothNextSample;
- (void)_queue_smoothRouteSampleForTask:(id)arg1;
- (void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(bool)arg3;
- (void)_queue_startSmoothingTask:(id)arg1;
- (bool)_shouldObserveWorkouts;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id /* block */)didCompleteAllPendingSmoothingTasksHandler;
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;
- (id)initWithProfile:(id)arg1;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)setDidCompleteAllPendingSmoothingTasksHandler:(id /* block */)arg1;
- (void)setUnitTest_wilTriggerSmoothing:(id /* block */)arg1;
- (void)smoothRouteWithWorkoutUUID:(id)arg1 completion:(id /* block */)arg2;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)unitTest_wilTriggerSmoothing;

@end