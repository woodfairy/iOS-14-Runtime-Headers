/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAgentTunnelExtension : NEAgentExtension <NEExtensionTunnelProviderHostDelegate, NEVPNPluginDriver> {
    bool  _cancelCalled;
}

@property bool cancelCalled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)attachIPCWithCompletionHandler:(id /* block */)arg1;
- (bool)cancelCalled;
- (void)connectWithParameters:(id)arg1;
- (void)disconnectWithReason:(int)arg1;
- (id)driverInterface;
- (void)extension:(id)arg1 didRequestSocket:(bool)arg2 interface:(id)arg3 local:(id)arg4 remote:(id)arg5 effectivePID:(int)arg6 completionHandler:(id /* block */)arg7;
- (void)extension:(id)arg1 didSetStatus:(long long)arg2;
- (void)extension:(id)arg1 didSetTunnelConfiguration:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)extension:(id)arg1 didStartWithError:(id)arg2;
- (void)extensionDidDetachIPC:(id)arg1;
- (void)handleAppsUninstalled:(id)arg1;
- (void)handleAppsUpdateBegins:(id)arg1;
- (void)handleAppsUpdateEnding:(id)arg1;
- (void)handleAppsUpdateEnds:(id)arg1;
- (void)handleCancel;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)arg1;
- (id)managerInterface;
- (void)sendExtensionFailed;
- (void)sendStatus:(long long)arg1 withDisconnectError:(id)arg2;
- (void)setAppUUIDMap:(id)arg1;
- (void)setCancelCalled:(bool)arg1;

@end