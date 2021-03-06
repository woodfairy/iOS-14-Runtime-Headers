/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKWallpaperCollectionsManager : NSObject {
    NSFileManager * __fileManager;
    NSNotificationCenter * __notificationCenter;
    NSMapTable * __wallpaperCollectionLookupTable;
    NSMutableArray * __wallpaperCollections;
}

@property (nonatomic, retain) NSFileManager *_fileManager;
@property (nonatomic, retain) NSNotificationCenter *_notificationCenter;
@property (nonatomic, retain) NSMapTable *_wallpaperCollectionLookupTable;
@property (nonatomic, retain) NSMutableArray *_wallpaperCollections;
@property (nonatomic, readonly) long long numberOfWallpaperCollections;

+ (id)defaultWallpaperCollectionsManager;

- (void).cxx_destruct;
- (id)_fileManager;
- (void)_loadCollections;
- (void)_loadSystemWallpaperCollections;
- (id)_notificationCenter;
- (id)_wallpaperCollectionLookupTable;
- (id)_wallpaperCollections;
- (id)init;
- (long long)numberOfWallpaperCollections;
- (void)set_fileManager:(id)arg1;
- (void)set_notificationCenter:(id)arg1;
- (void)set_wallpaperCollectionLookupTable:(id)arg1;
- (void)set_wallpaperCollections:(id)arg1;
- (id)wallpaperCollectionAtIndex:(long long)arg1;
- (id)wallpaperCollectionWithIdentifier:(id)arg1;

@end
