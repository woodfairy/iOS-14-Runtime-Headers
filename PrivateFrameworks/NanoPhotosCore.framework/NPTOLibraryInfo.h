/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoPhotosCore.framework/NanoPhotosCore
 */

@interface NPTOLibraryInfo : NSObject {
    NPTOPreferencesAccessor * _legacyPreferencesAccessor;
    NSURL * _libraryURL;
    NPTONotificationCenter * _notificationCenter;
}

@property (nonatomic, retain) NSDictionary *collectionTargetMap;
@property (getter=isSyncing, nonatomic) bool syncing;

- (void).cxx_destruct;
- (id)_collectionTargetMapFileURL;
- (void)_createLibraryDirectoryIfNeeded;
- (id)_syncingFileURL;
- (id)collectionTargetMap;
- (id)collectionTargetMapChangeObserverWithQueue:(id)arg1 block:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;
- (bool)isSyncing;
- (void)setCollectionTargetMap:(id)arg1;
- (void)setSyncing:(bool)arg1;
- (id)syncingChangeObserverWithQueue:(id)arg1 block:(id /* block */)arg2;

@end