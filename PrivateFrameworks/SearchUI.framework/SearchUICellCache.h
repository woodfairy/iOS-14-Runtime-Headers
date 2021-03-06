/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUICellCache : NSObject {
    NSCache * _cellCache;
    NSDate * _lastCacheClearTime;
}

@property (nonatomic, retain) NSCache *cellCache;
@property (nonatomic, retain) NSDate *lastCacheClearTime;

+ (id)sharedCache;

- (void).cxx_destruct;
- (id)cellCache;
- (id)cellViewsForResults:(id)arg1;
- (id)identifierForResults:(id)arg1;
- (id)init;
- (id)lastCacheClearTime;
- (void)setCellCache:(id)arg1;
- (void)setCells:(id)arg1 forResults:(id)arg2;
- (void)setLastCacheClearTime:(id)arg1;

@end
