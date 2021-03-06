/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCOfflineArticleManager : NSObject <FCKeyedOperationQueueDelegate, FCNetworkReachabilityObserving, FCOfflineArticleManagerType, FCOperationThrottlerDelegate> {
    NSObject<OS_dispatch_group> * _articleContentDownloadGroup;
    FCKeyedOperationQueue * _articleContentDownloadKeyQueue;
    FCThreadSafeMutableSet * _articleIDsAvailableForOfflineReading;
    NSOrderedSet * _articleIDsOfInterest;
    NSHashTable * _contributors;
    NSObject<OS_dispatch_group> * _contributorsReadyGroup;
    <FCArticleDownloadServiceType> * _downloadService;
    NSOrderedSet * _downloadableArticleIDs;
    NSMutableSet * _fetchResults;
    bool  _hasBeenEnabled;
    NSDictionary * _holdInterestTokensByArticleID;
    <FCOperationThrottler> * _updateHoldInterestTokensThrottler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *articleContentDownloadGroup;
@property (nonatomic, retain) FCKeyedOperationQueue *articleContentDownloadKeyQueue;
@property (nonatomic, retain) FCThreadSafeMutableSet *articleIDsAvailableForOfflineReading;
@property (nonatomic, copy) NSOrderedSet *articleIDsOfInterest;
@property (nonatomic, readonly) NSHashTable *contributors;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *contributorsReadyGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <FCArticleDownloadServiceType> *downloadService;
@property (nonatomic, copy) NSOrderedSet *downloadableArticleIDs;
@property (nonatomic, readonly) NSSet *downloadedArticleIDs;
@property (nonatomic, retain) NSMutableSet *fetchResults;
@property (nonatomic) bool hasBeenEnabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *holdInterestTokensByArticleID;
@property (readonly) Class superclass;
@property (nonatomic, retain) <FCOperationThrottler> *updateHoldInterestTokensThrottler;

- (void).cxx_destruct;
- (void)_fetchHoldInterestTokensForArticleIDs:(id)arg1 completion:(id /* block */)arg2;
- (id)_latestArticleIDsOfInterest;
- (id)_latestDownloadableArticleIDs;
- (void)_updateInterestsIfNeeded;
- (void)addContributor:(id)arg1;
- (id)articleContentDownloadGroup;
- (id)articleContentDownloadKeyQueue;
- (id)articleIDsAvailableForOfflineReading;
- (id)articleIDsOfInterest;
- (id)contributors;
- (id)contributorsReadyGroup;
- (void)dealloc;
- (id)downloadService;
- (id)downloadableArticleIDs;
- (id)downloadedArticleIDs;
- (void)enableDownloading;
- (void)expressInterestInArticlesWithCompletionHandler:(id /* block */)arg1;
- (id)fetchResults;
- (bool)hasBeenEnabled;
- (id)holdInterestTokensByArticleID;
- (id)init;
- (id)initWithDownloadService:(id)arg1;
- (id)keyedOperationQueue:(id)arg1 performAsyncOperationForKey:(id)arg2 completion:(id /* block */)arg3;
- (void)networkReachabilityDidChange:(id)arg1;
- (void)notifyWhenFinishedDownloadingWithBlock:(id /* block */)arg1;
- (void)operationThrottler:(id)arg1 performAsyncOperationWithCompletion:(id /* block */)arg2;
- (void)powerStateDidChange;
- (void)setArticleContentDownloadGroup:(id)arg1;
- (void)setArticleContentDownloadKeyQueue:(id)arg1;
- (void)setArticleIDsAvailableForOfflineReading:(id)arg1;
- (void)setArticleIDsOfInterest:(id)arg1;
- (void)setContributorsReadyGroup:(id)arg1;
- (void)setDownloadService:(id)arg1;
- (void)setDownloadableArticleIDs:(id)arg1;
- (void)setFetchResults:(id)arg1;
- (void)setHasBeenEnabled:(bool)arg1;
- (void)setHoldInterestTokensByArticleID:(id)arg1;
- (void)setUpdateHoldInterestTokensThrottler:(id)arg1;
- (id)updateHoldInterestTokensThrottler;

@end
