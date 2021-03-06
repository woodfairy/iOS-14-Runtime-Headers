/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCRapportDeviceQuery : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    <_TVRCRapportDeviceQueryDelegate> * _delegate;
    NSMutableDictionary * _deviceRecords;
    _TVRCExpiringStore * _expiringStore;
    bool  _unpairedBLEDevicesReported;
    NSMutableDictionary * _wrapperToIdentifierMapping;
}

@property (nonatomic) <_TVRCRapportDeviceQueryDelegate> *delegate;

- (void).cxx_destruct;
- (void)_deviceFound:(id)arg1 unpairedBLE:(bool)arg2;
- (void)_deviceLost:(id)arg1;
- (void)_disconnectAllDevices;
- (bool)_recordExistsForIDS:(id)arg1;
- (bool)_shouldReportDevice:(id)arg1;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)arg1;
- (void)_updateRecordForIDS:(id)arg1 addTransportForFlag:(unsigned long long)arg2;
- (void)_updateRecordForIDS:(id)arg1 removeTransportForFlag:(unsigned long long)arg2;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)start;
- (void)stop;

@end
