/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKLegacyWallpaperBundleLoader : NSObject {
    NSFileManager * __fileManager;
    NSObject<OS_dispatch_queue> * __loadingQueue;
    NSDictionary * __wallpaperBundleLookup;
}

@property (nonatomic, retain) NSFileManager *_fileManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *_loadingQueue;
@property (nonatomic, retain) NSDictionary *_wallpaperBundleLookup;

+ (id)defaultWallpaperBundleLoader;
+ (id)legacyWallpaperDirectories;

- (void).cxx_destruct;
- (id)_fileManager;
- (void)_loadAllValidWallpaperBundlesFromLegacyLocation;
- (id)_loadingQueue;
- (id)_wallpaperBundleLookup;
- (id)init;
- (void)set_fileManager:(id)arg1;
- (void)set_loadingQueue:(id)arg1;
- (void)set_wallpaperBundleLookup:(id)arg1;
- (id)wallpaperBundleForIdentifier:(long long)arg1;

@end
