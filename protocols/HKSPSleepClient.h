/* Generated by RuntimeBrowser.
 */

@protocol HKSPSleepClient <HKSPClient>

@required

- (void)sleepEventOccurred:(HKSPSleepEvent *)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;
- (void)sleepEventRecordChanged:(HKSPSleepEventRecord *)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;
- (void)sleepModeChanged:(long long)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;
- (void)sleepScheduleChanged:(HKSPSleepSchedule *)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;
- (void)sleepScheduleStateChanged:(unsigned long long)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;
- (void)sleepSettingsChanged:(HKSPSleepSettings *)arg1 syncAnchor:(id <HKSPSyncAnchor>)arg2;

@end