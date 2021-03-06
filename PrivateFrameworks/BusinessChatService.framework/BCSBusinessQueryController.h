/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBusinessQueryController : NSObject <BCSLinkQueryChopperDelegate, BCSXPCDaemonProtocol> {
    <BCSCacheClearing> * _cacheClearer;
    <BCSConfigResolving> * _chatSuggestConfigResolver;
    <BCSChatSuggestControllerProtocol> * _chatSuggestController;
    <BCSItemResolving> * _chatSuggestItemResolver;
    <BCSShardResolving> * _chatSuggestShardResolver;
    <BCSEntitlementVerifying> * _entitlementVerifier;
    <BCSIconControllerProtocol> * _iconController;
    <BCSIdentityServiceProtocol> * _identityService;
    <BCSConfigResolving> * _linkConfigResolver;
    <BCSItemResolving> * _linkItemResolver;
    <BCSShardResolving> * _linkShardResolver;
    <BCSMetricFactoryProtocol> * _metricFactory;
    <BCSPrefetchTrigger> * _prefetchBloomFilterAndConfigTrigger;
    <BCSPrefetchTrigger> * _prefetchConfigTrigger;
    <BCSQueryChopperProtocol> * _queryChopper;
    NSObject<OS_dispatch_queue> * _serialDispatchQueue;
}

@property (nonatomic, retain) <BCSCacheClearing> *cacheClearer;
@property (nonatomic, retain) <BCSConfigResolving> *chatSuggestConfigResolver;
@property (nonatomic, retain) <BCSChatSuggestControllerProtocol> *chatSuggestController;
@property (nonatomic, retain) <BCSItemResolving> *chatSuggestItemResolver;
@property (nonatomic, retain) <BCSShardResolving> *chatSuggestShardResolver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BCSEntitlementVerifying> *entitlementVerifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <BCSIconControllerProtocol> *iconController;
@property (nonatomic, retain) <BCSIdentityServiceProtocol> *identityService;
@property (nonatomic, retain) <BCSConfigResolving> *linkConfigResolver;
@property (nonatomic, retain) <BCSItemResolving> *linkItemResolver;
@property (nonatomic, retain) <BCSShardResolving> *linkShardResolver;
@property (nonatomic, readonly) <BCSMetricFactoryProtocol> *metricFactory;
@property (nonatomic, retain) <BCSPrefetchTrigger> *prefetchBloomFilterAndConfigTrigger;
@property (nonatomic, retain) <BCSPrefetchTrigger> *prefetchConfigTrigger;
@property (nonatomic, retain) <BCSQueryChopperProtocol> *queryChopper;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialDispatchQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configForItemWithIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)_configResolverForType:(long long)arg1;
- (void)_deleteInMemoryCache;
- (void)_isBusinessRegisteredWithItemIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)_itemResolverForType:(long long)arg1;
- (void)_itemWithIdentifier:(id)arg1 config:(id)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)_itemWithIdentifier:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)_shardForItemWithIdentifier:(id)arg1 configItem:(id)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (id)_shardResolverForType:(long long)arg1;
- (long long)_shardStartIndexForItemIdentifier:(id)arg1 shardCount:(long long)arg2;
- (id)cacheClearer;
- (id)chatSuggestConfigResolver;
- (id)chatSuggestController;
- (id)chatSuggestItemResolver;
- (id)chatSuggestShardResolver;
- (void)clearCachesForLinkItemsAssociatedWithBundleID:(id)arg1 completion:(id /* block */)arg2;
- (void)clearCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (void)clearExpiredCachesForType:(long long)arg1 completion:(id /* block */)arg2;
- (id)entitlementVerifier;
- (void)fetchBusinessItemWithBizID:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithDetailsForPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchBusinessItemWithPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchIsBusinessPhoneNumber:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLinkItemModelWithHash:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchLinkItemModelWithURL:(id)arg1 chopURL:(bool)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (void)fetchSquareIconDataForBusinessItem:(id)arg1 forClientBundleID:(id)arg2 completion:(id /* block */)arg3;
- (id)iconController;
- (id)identityService;
- (id)initWithBloomFilterAndConfigPrefetcher:(id)arg1 configPrefetcher:(id)arg2 shardCache:(id)arg3 cacheManager:(id)arg4 chatSuggestRemoteFetcher:(id)arg5 businessLinkRemoteFetcher:(id)arg6 userDefaults:(id)arg7 metricFactory:(id)arg8;
- (id)initWithPrefetchBloomFilterAndConfigTrigger:(id)arg1 prefetchConfigTrigger:(id)arg2 entitlementVerifier:(id)arg3 identityService:(id)arg4 chatSuggestController:(id)arg5 iconController:(id)arg6 cacheClearer:(id)arg7 chatSuggestConfigResolver:(id)arg8 linkConfigResolver:(id)arg9 chatSuggestShardResolver:(id)arg10 linkShardResolver:(id)arg11 chatSuggestItemResolver:(id)arg12 linkItemResolver:(id)arg13 queryChopper:(id)arg14 metricFactory:(id)arg15;
- (void)isBusinessRegisteredForURL:(id)arg1 chopURL:(bool)arg2 forClientBundleID:(id)arg3 completion:(id /* block */)arg4;
- (id)linkConfigResolver;
- (id)linkItemResolver;
- (id)linkShardResolver;
- (id)metricFactory;
- (id)prefetchBloomFilterAndConfigTrigger;
- (void)prefetchBloomFilterAndConfigsWithCompletion:(id /* block */)arg1;
- (id)prefetchConfigTrigger;
- (void)prefetchConfigsWithCompletion:(id /* block */)arg1;
- (id)queryChopper;
- (id)serialDispatchQueue;
- (void)setCacheClearer:(id)arg1;
- (void)setChatSuggestConfigResolver:(id)arg1;
- (void)setChatSuggestController:(id)arg1;
- (void)setChatSuggestItemResolver:(id)arg1;
- (void)setChatSuggestShardResolver:(id)arg1;
- (void)setEntitlementVerifier:(id)arg1;
- (void)setIconController:(id)arg1;
- (void)setIdentityService:(id)arg1;
- (void)setLinkConfigResolver:(id)arg1;
- (void)setLinkItemResolver:(id)arg1;
- (void)setLinkShardResolver:(id)arg1;
- (void)setPrefetchBloomFilterAndConfigTrigger:(id)arg1;
- (void)setPrefetchConfigTrigger:(id)arg1;
- (void)setQueryChopper:(id)arg1;
- (void)setSerialDispatchQueue:(id)arg1;
- (void)warmCacheIfNecessaryForPhoneNumbers:(id)arg1 forClientBundleID:(id)arg2;

@end
