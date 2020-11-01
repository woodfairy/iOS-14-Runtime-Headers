/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSContentBlockerStatisticsSQLiteStore : NSObject {
    WBSSQLiteDatabase * _database;
    NSObject<OS_dispatch_queue> * _databaseQueue;
    NSURL * _databaseURL;
}

+ (id)_defaultDatabaseURL;
+ (id)standardStore;

- (void).cxx_destruct;
- (void)_clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)_clearStatisticsForDomain:(id)arg1;
- (void)_closeDatabaseOnDatabaseQueue;
- (void)_configureDatabase;
- (void)_createDatabaseSchemaIfNeeded;
- (void)_deleteUnusedDomains;
- (long long)_idForFirstPartyWithHighLevelDomain:(id)arg1;
- (long long)_idForThirdPartyWithHighLevelDomain:(id)arg1;
- (void)_openDatabase;
- (void)_openDatabaseIfNeeded;
- (long long)_schemaVersion;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)blockedThirdPartiesAfter:(id)arg1 before:(id)arg2 onFirstParty:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)clearAllStatisticsWithCompletionHandler:(id /* block */)arg1;
- (void)clearStatisticsAfter:(id)arg1 before:(id)arg2;
- (void)clearStatisticsForDomains:(id)arg1;
- (void)closeDatabase;
- (id)initWithDatabaseURL:(id)arg1;
- (void)recordThirdPartyResourceBlocked:(id)arg1 onFirstParty:(id)arg2 completionHandler:(id /* block */)arg3;

@end