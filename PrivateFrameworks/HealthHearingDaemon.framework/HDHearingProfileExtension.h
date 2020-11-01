/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthHearingDaemon.framework/HealthHearingDaemon
 */

@interface HDHearingProfileExtension : NSObject <HDProfileExtension> {
    HDAudioAnalyticsManager * _analyticsManager;
    HDHeadphoneDoseManager * _headphoneDoseManager;
    HDHeadphoneDoseMetadataStore * _headphoneKeyValueStore;
    HDHeadphoneAudioExposureStatisticsManager * _headphoneStatisticsManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDHeadphoneDoseManager *headphoneDoseManager;
@property (nonatomic, readonly) HDHeadphoneDoseMetadataStore *headphoneKeyValueStore;
@property (nonatomic, readonly) HDHeadphoneAudioExposureStatisticsManager *headphoneStatisticsManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)headphoneDoseManager;
- (id)headphoneKeyValueStore;
- (id)headphoneStatisticsManager;
- (id)initWithProfile:(id)arg1;

@end