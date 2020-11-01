/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIMPMediaItemAssetController : NSObject <MPStoreDownloadManagerObserver, VUIMPMediaItemDownloadControllerObserver, VUIMediaEntityAssetController> {
    NSObject<OS_dispatch_queue> * _completionDispatchQueue;
    <VUIMediaEntityAssetControllerDelegate> * _delegate;
    VUIMPMediaItemDownloadController * _downloadController;
    NSObject<VUIMediaEntityIdentifier> * _mediaEntityIdentifier;
    MPMediaItem * _mediaItem;
    bool  _requestingPermissionToDownload;
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
    VUIMediaEntityAssetControllerState * _state;
    bool  _supportsStartingDownload;
    NSTimer * _waitForDeletionTimer;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionDispatchQueue;
@property (nonatomic, readonly) bool contentAllowsCellularDownload;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUIMediaEntityAssetControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) VUIMPMediaItemDownloadController *downloadController;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSObject<VUIMediaEntityIdentifier> *mediaEntityIdentifier;
@property (nonatomic, readonly, copy) VUIMediaEntityType *mediaEntityType;
@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (getter=isRequestingPermissionToDownload, nonatomic) bool requestingPermissionToDownload;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (nonatomic, readonly, copy) VUIMediaEntityAssetControllerState *state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsRedownloadingContent;
@property (nonatomic, readonly) bool supportsStartingDownload;
@property (nonatomic, retain) NSTimer *waitForDeletionTimer;

+ (unsigned long long)_assetControllerStatusFromDownloadControllerState:(id)arg1;
+ (bool)_supportsStartingDownloadWithMediaItem:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_enqueueAsyncProcessingQueueStrongSelfBlock:(id /* block */)arg1;
- (void)_enqueueCompletionQueueBlock:(id /* block */)arg1;
- (void)_handleMediaLibraryContentsDidChangeNotification:(id)arg1;
- (bool)_isDownloaded;
- (void)_notifyDelegateStateDidChange:(id)arg1;
- (void)_onProcessingQueue_calculateStateAndNotify:(bool)arg1;
- (void)_onProcessingQueue_cancelAndRemoveDownloadWithCompletion:(id /* block */)arg1;
- (id)_onProcessingQueue_downloadController;
- (void)_onProcessingQueue_invalidate;
- (void)_onProcessingQueue_invalidateAndSetState;
- (void)_onProcessingQueue_setDownloadController:(id)arg1;
- (void)_onProcessingQueue_startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 completion:(id /* block */)arg3;
- (void)_onProcessingQueue_startMonitoringDownload;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 downloadProgress:(double)arg2 bytesDownloaded:(unsigned long long)arg3 bytesToDownload:(unsigned long long)arg4 supportsPausing:(bool)arg5 supportsCancellation:(bool)arg6 notify:(bool)arg7;
- (void)_onProcessingQueue_updateStateWithStatus:(unsigned long long)arg1 notify:(bool)arg2;
- (void)cancelAndRemoveDownload;
- (void)cancelKeyFetch;
- (id)completionDispatchQueue;
- (bool)contentAllowsCellularDownload;
- (void)dealloc;
- (id)delegate;
- (void)deleteAndRedownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (id)downloadController;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)fetchNewKeysForDownloadedVideo;
- (id)init;
- (id)initWithMediaItem:(id)arg1 mediaEntityIdentifier:(id)arg2 serialProcessingDispatchQueue:(id)arg3;
- (void)invalidate;
- (bool)isRequestingPermissionToDownload;
- (id)mediaEntityIdentifier;
- (id)mediaEntityType;
- (id)mediaItem;
- (void)mediaItemDownloadController:(id)arg1 stateDidChange:(id)arg2;
- (void)pauseDownload;
- (void)resumeDownload;
- (id)serialProcessingDispatchQueue;
- (void)setCompletionDispatchQueue:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadController:(id)arg1;
- (void)setMediaEntityIdentifier:(id)arg1;
- (void)setRequestingPermissionToDownload:(bool)arg1;
- (void)setSerialProcessingDispatchQueue:(id)arg1;
- (void)setWaitForDeletionTimer:(id)arg1;
- (void)startDownloadAllowingCellular:(bool)arg1 quality:(long long)arg2 shouldMarkAsDeletedOnCancellationOrFailure:(bool)arg3 completion:(id /* block */)arg4;
- (id)state;
- (bool)supportsRedownloadingContent;
- (bool)supportsStartingDownload;
- (id)waitForDeletionTimer;

@end