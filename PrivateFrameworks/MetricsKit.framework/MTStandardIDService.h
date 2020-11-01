/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

@interface MTStandardIDService : NSObject <MTIDObserverDelegate, MTIDService> {
    MTIDCache * _cache;
    MTPromise * _configPromise;
    MTNonretainedCache * _observers;
    <MTIDSecretStore> * _secretStore;
}

@property (nonatomic, retain) MTIDCache *cache;
@property (nonatomic, retain) MTPromise *configPromise;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MTNonretainedCache *observers;
@property (nonatomic, retain) <MTIDSecretStore> *secretStore;
@property (readonly) Class superclass;

+ (id)dateFilledOptions:(id)arg1;
+ (id)localCachePath;
+ (void)registerInterprocessChangeNotifier:(id)arg1;
+ (void)setLocalCachePath:(id)arg1;
+ (void)triggerInterprocessChangeNotifier:(id)arg1;
+ (id)writeDebugData:(id)arg1 toFileWithNameFormat:(id)arg2;

- (void).cxx_destruct;
- (id)IDFieldsForTopic:(id)arg1 date:(id)arg2;
- (id)IDFieldsForTopic:(id)arg1 options:(id)arg2;
- (id)IDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3;
- (id)IDInfoForNamespace:(id)arg1 options:(id)arg2;
- (id)IDInfoForNamespace:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;
- (id)IDsForNamespaces:(id)arg1 options:(id)arg2 fromConfig:(id)arg3;
- (void)_clearLocalData;
- (void)_getIDs;
- (void)_getSecrets;
- (void)_resetIDs;
- (void)addIDObserver:(id)arg1;
- (id)cache;
- (id)configPromise;
- (void)dealloc;
- (id)generateAndCacheIDInfo:(id)arg1 secret:(id)arg2 correlationIDs:(id)arg3 date:(id)arg4;
- (void)handleAccountNotification:(id)arg1;
- (void)handleApplicationStateChange:(id)arg1;
- (void)handleResetNotification:(id)arg1;
- (id)init;
- (id)initWithAMSBag:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithConfigPromise:(id)arg1;
- (void)maybeSubscribeToDarwinNotifications;
- (id)observeIDForTopic:(id)arg1 type:(long long)arg2 usingBlock:(id /* block */)arg3;
- (id)observers;
- (void)performMaintenanceWithCompletion:(id /* block */)arg1;
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 date:(id)arg3 completion:(id /* block */)arg4;
- (void)queryIDForTopic:(id)arg1 type:(long long)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (void)refreshedIDWithID:(id)arg1 completion:(id /* block */)arg2;
- (void)removeIDObserver:(id)arg1;
- (id)resetIDForNamespace:(id)arg1 options:(id)arg2;
- (id)secretStore;
- (void)setCache:(id)arg1;
- (void)setConfig:(id)arg1;
- (void)setConfigPromise:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setSecretStore:(id)arg1;

@end