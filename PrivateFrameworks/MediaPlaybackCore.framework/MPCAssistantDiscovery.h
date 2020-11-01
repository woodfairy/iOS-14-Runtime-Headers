/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCAssistantDiscovery : NSObject {
    void * _reconSession;
}

- (void)_discoverAirplayDevices:(id /* block */)arg1;
- (void)dealloc;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)arg1 expectedCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)stopDiscovery;

@end