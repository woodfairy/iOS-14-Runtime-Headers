/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDSystemAvailabilityMonitor : NSObject {
    unsigned long long  _availabilityState;
    unsigned long long  _simulatedAvailablityState;
    NSMutableSet * _watcherWrappers;
}

@property unsigned long long availabilityState;
@property unsigned long long simulatedAvailablityState;
@property (nonatomic, retain) NSMutableSet *watcherWrappers;

+ (void)initialize;
+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_clearVanishedWatchers;
- (id)_init;
- (void)_logAvailabilityDescription;
- (void)_systemMayNowBeReady;
- (unsigned long long)availabilityState;
- (unsigned long long)currentAvailabilityState;
- (void)dealloc;
- (bool)registerWatcher:(id)arg1;
- (void)removeNotifications;
- (void)resetToUnavailableForUnitTests;
- (void)setAvailabilityState:(unsigned long long)arg1;
- (void)setSimulatedAvailablityState:(unsigned long long)arg1;
- (void)setWatcherWrappers:(id)arg1;
- (void)simulateBuddyCompletedForUnitTests;
- (void)simulateFirstUnlockForUnitTests;
- (unsigned long long)simulatedAvailablityState;
- (id)watcherWrappers;

@end