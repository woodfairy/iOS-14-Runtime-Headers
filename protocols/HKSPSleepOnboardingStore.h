/* Generated by RuntimeBrowser.
 */

@protocol HKSPSleepOnboardingStore

@required

- (void)addObserver:(id <HKSPSleepStoreObserver>)arg1;
- (void)currentSleepEventRecordWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, HKSPSleepEventRecord *, NSError *, void*
- (HKSPSleepEventRecord *)currentSleepEventRecordWithError:(id*)arg1;
- (HKSPSleepSettings *)currentSleepSettingsWithError:(id*)arg1;
- (void)removeObserver:(id <HKSPSleepStoreObserver>)arg1;
- (void)saveCurrentSleepEventRecord:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: HKSPMutableSleepEventRecord *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSleepCoachingOnboardingCompletedVersion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSleepTrackingOnboardingCompletedVersion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setSleepWindDownShortcutsOnboardingCompletedVersion:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end