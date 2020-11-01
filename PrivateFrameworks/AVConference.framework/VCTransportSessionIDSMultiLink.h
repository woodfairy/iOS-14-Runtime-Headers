/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCTransportSessionIDSMultiLink : VCTransportSessionIDS <VCConnectionManagerDelegate, VCIDSSessionInfoSynchronizerDelegate> {
    bool  _isWiFiAssistActive;
    VCIDSSessionInfoSynchronizer * _sessionInfoSynchronizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) VCIDSSessionInfoSynchronizer *sessionInfoSynchronizer;
@property (readonly) Class superclass;

- (void)VCIDSSessionInfoSynchronizer:(void*)arg1 sendVCIDSSessionInfoRequest:(id)arg2;
- (void)connectionCallback:(id)arg1 isInitialConnection:(bool)arg2;
- (void)dealloc;
- (void)didEnableDuplication:(bool)arg1 activeConnection:(id)arg2;
- (void)discardConnection:(id)arg1;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (void)handleLinkConnectedWithInfo:(id)arg1;
- (void)handleLinkDisconnectedWithInfo:(id)arg1;
- (void)handleProbingResponse:(id)arg1;
- (void)handleUpdateRemoteSessionInfo:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 reportingAgent:(id)arg2;
- (id)initWithCallID:(unsigned int)arg1 requireEncryptionInfo:(bool)arg2 reportingAgent:(id)arg3 notificationQueue:(id)arg4 isMultiwaySession:(bool)arg5;
- (int)onStart;
- (void)onStop;
- (void)optOutAllStreamsForConnection:(id)arg1;
- (void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)resetParticipantGenerationCounter;
- (id)sessionInfoSynchronizer;
- (void)setDefaultLink:(id)arg1;
- (void)setQuickRelayServerProvider:(int)arg1;
- (void)setWiFiAssist:(bool)arg1;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)updateParticipantGenerationCounter:(unsigned char)arg1;

@end