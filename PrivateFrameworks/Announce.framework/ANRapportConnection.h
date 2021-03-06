/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Announce.framework/Announce
 */

@interface ANRapportConnection : NSObject <ANRapportConnectionProvider> {
    NSArray * _activeDevices;
    NSMutableDictionary * _clients;
    RPCompanionLinkClient * _companionLinkClient;
    <ANConnectionDelegate> * _delegate;
    NSDate * _lastScanStartTimestamp;
    NSObject<OS_dispatch_queue> * _rapportQueue;
    NSObject<OS_dispatch_source> * _timer;
}

@property (retain) NSArray *activeDevices;
@property (retain) NSMutableDictionary *clients;
@property (nonatomic, retain) RPCompanionLinkClient *companionLinkClient;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *devices;
@property (readonly) unsigned long long hash;
@property (retain) NSDate *lastScanStartTimestamp;
@property (nonatomic, readonly) RPCompanionLinkDevice *localDevice;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *rapportQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timer;

+ (id)sharedConnection;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_decrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_handleTimerExpired;
- (void)_incrementMessageCountForCompanionLinkClient:(id)arg1;
- (void)_linkForDevice:(id)arg1 handler:(id /* block */)arg2;
- (bool)_needsScan;
- (void)_registerMessageID;
- (void)_registerMessageID:(id)arg1 handler:(id /* block */)arg2;
- (double)_remainingScanTimeInterval;
- (void)_sendDailyRequest:(id)arg1 handler:(id /* block */)arg2;
- (void)_sendMessage:(id)arg1 linkClient:(id)arg2 handler:(id /* block */)arg3;
- (void)_setupLink:(id /* block */)arg1;
- (void)_simulateDeliveryFailureForMessage:(id)arg1;
- (void)_startTimer;
- (void)_tearDownLink;
- (void)_updateDevices;
- (id)activateLinkWithOptions:(unsigned long long)arg1;
- (void)activateLinkWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)activeDevices;
- (id)clients;
- (id)companionLinkClient;
- (void)deactivateLink;
- (id)delegate;
- (id)devices;
- (id)init;
- (id)lastScanStartTimestamp;
- (id)localDevice;
- (id)rapportQueue;
- (void)registerDailyRequest:(id /* block */)arg1;
- (void)sendDailyRequest:(id)arg1 handler:(id /* block */)arg2;
- (id)sendMessage:(id)arg1 device:(id)arg2 responseHandler:(id /* block */)arg3;
- (void)setActiveDevices:(id)arg1;
- (void)setClients:(id)arg1;
- (void)setCompanionLinkClient:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLastScanStartTimestamp:(id)arg1;
- (void)setRapportQueue:(id)arg1;
- (void)setTimer:(id)arg1;
- (id)timer;

@end
