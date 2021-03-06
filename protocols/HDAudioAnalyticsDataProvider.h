/* Generated by RuntimeBrowser.
 */

@protocol HDAudioAnalyticsDataProvider

@required

- (HKStatistics *)audioAverageAndDurationForExposureType:(long long)arg1 startDate:(NSDate *)arg2 endDate:(NSDate *)arg3 error:(id*)arg4;
- (NSArray *)audioExposureEventsBetweenStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2 error:(id*)arg3;
- (void)captureHeadphoneAudioExposure:(double)arg1 headphoneDuration:(double)arg2 headphoneDose:(double)arg3 environmentExposure:(double)arg4 environmentDuration:(double)arg5 environmentAlerts:(long long)arg6;
- (NSDate *)lastSuccessfulCalculation;

@end
