/* Generated by RuntimeBrowser.
 */

@protocol MTIDService <NSObject>

@required

- (MTPromise *)IDFieldsForTopic:(NSString *)arg1 date:(NSDate *)arg2;
- (MTPromise *)IDFieldsForTopic:(NSString *)arg1 options:(NSDictionary *)arg2;
- (<NSObject> *)observeIDForTopic:(void *)arg1 type:(void *)arg2 usingBlock:(void *)arg3; // needs 3 arg types, found 11: NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, long long, <MTID> *, NSError *, void*
- (void)queryIDForTopic:(void *)arg1 type:(void *)arg2 date:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTID> *, NSError *, void*
- (void)queryIDForTopic:(void *)arg1 type:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTID> *, NSError *, void*
- (void)removeIDObserver:(id <NSObject>)arg1;

@end