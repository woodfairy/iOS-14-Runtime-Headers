/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRMediaRemoteServiceClient : NSObject {
    MRPlayerPath * _activePlayerPath;
    MRNotificationClient * _notificationClient;
    MRNotificationServiceClient * _notificationService;
    NSObject<OS_dispatch_queue> * _playbackQueueDispatchQueue;
    NSMutableSet * _playerPathInvalidationHandlers;
    NSMutableArray * _registeredOrigins;
    MRAVRoutingClientController * _routingClientController;
    NSObject<OS_dispatch_queue> * _serialQueue;
    MRMediaRemoteService * _service;
}

@property (nonatomic, retain) MRPlayerPath *activePlayerPath;
@property (nonatomic, readonly) MRNotificationClient *notificationClient;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (nonatomic, readonly) NSArray *registeredOrigins;
@property (nonatomic, readonly) MRMediaRemoteService *service;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workerQueue;

+ (id)sharedServiceClient;

- (void).cxx_destruct;
- (id)activePlayerPath;
- (id)addPlayerPathInvalidationHandler:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)fetchPickableRoutesWithCategory:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (bool)isOriginRegistered:(id)arg1;
- (id)notificationClient;
- (id)playbackQueueDispatchQueue;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)arg1;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)arg1;
- (void)registerOrigin:(id)arg1 withDeviceInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)registeredOrigins;
- (void)removeInvalidationHandler:(id)arg1;
- (id)service;
- (void)setActivePlayerPath:(id)arg1;
- (void)setPlaybackQueueDispatchQueue:(id)arg1;
- (void)unregisterAllOriginsWithCompletion:(id /* block */)arg1;
- (void)unregisterOrigin:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)workerQueue;

@end