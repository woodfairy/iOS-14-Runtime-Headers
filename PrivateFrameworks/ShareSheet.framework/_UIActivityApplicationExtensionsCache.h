/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIActivityApplicationExtensionsCache : NSObject {
    bool  _cacheEnabled;
    unsigned long long  _cacheHits;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cacheLock;
    unsigned long long  _cacheMisses;
    NSMutableDictionary * _cachedResults;
    NSMutableArray * _continuousDiscoveryRequests;
    NSMutableDictionary * _extensionMatchTokens;
    bool  _precached;
    bool  _primed;
    NSObject<OS_dispatch_queue> * _primedExtensionsQueue;
    _UIMatchingExtensionsResult * _primedExtensionsResult;
    NSObject<OS_dispatch_queue> * _registrationQueue;
}

@property (retain) NSMutableDictionary *cachedResults;
@property (retain) NSMutableArray *continuousDiscoveryRequests;
@property (retain) NSMutableDictionary *extensionMatchTokens;
@property (retain) NSObject<OS_dispatch_queue> *primedExtensionsQueue;
@property (retain) _UIMatchingExtensionsResult *primedExtensionsResult;

+ (id)sharedExtensionsCache;

- (void).cxx_destruct;
- (void)_cacheMatchingExtensions:(id)arg1 cacheKey:(id)arg2 error:(id)arg3;
- (void)_cacheMatchingExtensionsResult:(id)arg1 cacheKey:(id)arg2;
- (void)_clearCacheResults;
- (void)_delayContinuousExtensionsDiscoveryRequest:(id)arg1 cacheKey:(id)arg2;
- (id)_getCachedMatchingExtensionsResultWithCacheKey:(id)arg1;
- (void)_runContinuousExtensionDiscovery:(id)arg1 cacheKey:(id)arg2;
- (id)cachedResults;
- (id)continuousDiscoveryRequests;
- (id)extensionMatchTokens;
- (id)getExtensionsResultWithMatchingAttributes:(id)arg1;
- (id)init;
- (void)primeExtensionsResultWithMatchingAttributes:(id)arg1;
- (id)primedExtensionsQueue;
- (id)primedExtensionsResult;
- (void)registerPendingContinuousExtensionsDiscovery;
- (id)reportExtensionsCacheResult;
- (void)setCachedResults:(id)arg1;
- (void)setContinuousDiscoveryRequests:(id)arg1;
- (void)setExtensionMatchTokens:(id)arg1;
- (void)setPrimedExtensionsQueue:(id)arg1;
- (void)setPrimedExtensionsResult:(id)arg1;

@end