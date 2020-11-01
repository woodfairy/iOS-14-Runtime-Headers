/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/OSLog.framework/OSLog
 */

@interface OSLogStore : NSObject {
    OSLogEventSource * _source;
}

+ (id)localStoreAndReturnError:(id*)arg1;
+ (id)storeWithURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)entriesEnumeratorAndReturnError:(id*)arg1;
- (id)entriesEnumeratorWithOptions:(unsigned long long)arg1 position:(id)arg2 predicate:(id)arg3 error:(id*)arg4;
- (id)positionWithDate:(id)arg1;
- (id)positionWithTimeIntervalSinceEnd:(double)arg1;
- (id)positionWithTimeIntervalSinceLatestBoot:(double)arg1;

@end