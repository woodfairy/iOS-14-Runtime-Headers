/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingDeviceOptionsAdapterUtility : NSObject {
    NAFuture * _accessoryCompanionDevicesIDFuture;
    NAFuture * _accessoryCompanionLinkDeviceFuture;
    RPCompanionLinkClient * _client;
    <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> * _delegate;
    NSMutableArray * _deviceIDArray;
    <HFHomeKitSettingsVendor> * _homeKitSettingsVendor;
    NAFuture * _inProgressSysdiagnoseCollectionFuture;
    bool  _isAccessoryGrouped;
    bool  _isAccessoryReachableOverRapport;
    NAFuture * _linkIsActivatedFuture;
    unsigned long long  _mode;
}

@property (nonatomic, readonly) NAFuture *accessoryCompanionDevicesIDFuture;
@property (nonatomic, readonly) NAFuture *accessoryCompanionLinkDeviceFuture;
@property (nonatomic, readonly) RPCompanionLinkClient *client;
@property (nonatomic) <HFAccessorySettingDeviceOptionsAdapterUtilityDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *deviceIDArray;
@property (nonatomic, retain) <HFHomeKitSettingsVendor> *homeKitSettingsVendor;
@property (nonatomic, retain) NAFuture *inProgressSysdiagnoseCollectionFuture;
@property (nonatomic) bool isAccessoryGrouped;
@property (nonatomic) bool isAccessoryReachableOverRapport;
@property (nonatomic, readonly) NAFuture *linkIsActivatedFuture;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (id)_home;
- (id)_homeKitAccessoryUniqueIdentifier;
- (id)_mediaSessionAccessoryUniqueIdentifier;
- (void)_resetRapportClientWithInvalidation:(bool)arg1;
- (id)_sendRapportMessageToGroupedAccessoryWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (id)_sendRapportMessageWithIdentifier:(id)arg1 request:(id)arg2 options:(id)arg3;
- (void)_setupRapportClient;
- (void)_updateDevice;
- (void)_updateDeviceForGroupedAccessory;
- (id)accessoryCompanionDevicesIDFuture;
- (id)accessoryCompanionLinkDeviceFuture;
- (id)client;
- (id)delegate;
- (id)deviceIDArray;
- (id)homeKitSettingsVendor;
- (id)identifyAccessory;
- (id)inProgressSysdiagnoseCollectionFuture;
- (id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 groupedAccessory:(bool)arg3 delegate:(id)arg4;
- (bool)isAccessoryGrouped;
- (bool)isAccessoryReachableOverRapport;
- (id)linkIsActivatedFuture;
- (id)mediaProfileContainer;
- (unsigned long long)mode;
- (id)requestAirDrop:(id)arg1 options:(id)arg2;
- (id)requestSysdiagnose:(id)arg1 options:(id)arg2;
- (id)restartAccessories;
- (id)restartAccessory;
- (void)setDelegate:(id)arg1;
- (void)setDeviceIDArray:(id)arg1;
- (void)setHomeKitSettingsVendor:(id)arg1;
- (void)setInProgressSysdiagnoseCollectionFuture:(id)arg1;
- (void)setIsAccessoryGrouped:(bool)arg1;
- (void)setIsAccessoryReachableOverRapport:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;

@end