/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Translation.framework/Translation
 */

@interface _LTLanguageManager : NSObject {
    _LTOfflineAssetManager * _assetManager;
    NSMutableDictionary * _assetStatusDictionary;
    id /* block */  _completionHandler;
    NSArray * _localeIdentifierList;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _useCellular;
}

+ (void)initialize;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_setInstalledLocales:(id)arg1;
- (id)assetNamesForPairNames:(id)arg1;
- (id)assetWithName:(id)arg1 inAssets:(id)arg2;
- (id)assetsNamesForLocale:(id)arg1;
- (id)description;
- (void)downloadAsset:(id)arg1 withStatus:(id)arg2;
- (id)identifiersInIdentifiers:(id)arg1 forAssetName:(id)arg2;
- (id)identifiersInIdentifiers:(id)arg1 forLanguageName:(id)arg2;
- (id)init;
- (id)installationStatusArray;
- (void)installedLocales:(id /* block */)arg1;
- (id)languageToStatusDictionary;
- (id)pairNamesForLocales:(id)arg1;
- (void)setInstalledLocales:(id)arg1 useCellular:(bool)arg2 completion:(id /* block */)arg3;
- (void)updateProgress;

@end