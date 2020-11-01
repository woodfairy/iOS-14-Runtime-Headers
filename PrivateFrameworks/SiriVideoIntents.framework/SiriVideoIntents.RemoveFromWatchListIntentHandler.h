/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriVideoIntents.framework/SiriVideoIntents
 */

@interface SiriVideoIntents.RemoveFromWatchListIntentHandler : NSObject <RemoveFromWatchListIntentHandling> {
    void analyticsService;
    void contentResolver;
    void watchListService;
}

- (void).cxx_destruct;
- (void)confirmRemoveFromWatchList:(id)arg1 completion:(id /* block */)arg2;
- (void)handleRemoveFromWatchList:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveContentForRemoveFromWatchList:(id)arg1 withCompletion:(id /* block */)arg2;

@end