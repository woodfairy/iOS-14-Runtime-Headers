/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
 */

@interface HDAudioAnalyticsManager : NSObject <HDAudioAnalyticsDataProvider, HDHealthDaemonReadyObserver, HDPeriodicActivityDelegate> {
    double  _calculationPeriod;
    HDAudioAnalyticsCalculator * _calculator;
    HDPeriodicActivity * _periodicActivity;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    double  _retryPeriod;
}

@property (nonatomic, readonly) double calculationPeriod;
@property (nonatomic, readonly) HDAudioAnalyticsCalculator *calculator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HDPeriodicActivity *periodicActivity;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) double retryPeriod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_booleanPreferenceForAudioKey:(id)arg1 defaultIfNoValue:(bool)arg2;
- (bool)_hasEligibleWatchPaired;
- (id)_numberForValue:(double)arg1;
- (id)audioAverageAndDurationForExposureType:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 error:(id*)arg4;
- (id)audioExposureEventsBetweenStartDate:(id)arg1 endDate:(id)arg2 error:(id*)arg3;
- (double)calculationPeriod;
- (id)calculator;
- (void)captureHeadphoneAudioExposure:(double)arg1 headphoneDuration:(double)arg2 headphoneDose:(double)arg3 environmentExposure:(double)arg4 environmentDuration:(double)arg5 environmentAlerts:(long long)arg6;
- (void)daemonReady:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (id)lastSuccessfulCalculation;
- (void)performPeriodicActivity:(id)arg1 completion:(id /* block */)arg2;
- (id)periodicActivity;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (bool)periodicActivityRequiresProtectedData:(id)arg1;
- (id)profile;
- (id)queue;
- (double)retryPeriod;
- (void)setPeriodicActivity:(id)arg1;

@end