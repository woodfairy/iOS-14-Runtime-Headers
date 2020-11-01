/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STDynamicActivityAttributionXPCClientHandle : NSObject <STDynamicAttributionXPCServerProtocol> {
    NSXPCConnection * _clientXPCConnection;
    <STDynamicActivityAttributionServerHandle> * _serverHandle;
}

@property (nonatomic, readonly) NSXPCConnection *clientXPCConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <STDynamicActivityAttributionServerHandle> *serverHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)clientXPCConnection;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (id)serverHandle;
- (void)setCurrentAttributionKey:(id)arg1 application:(id)arg2 reply:(id /* block */)arg3;

@end