/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
 */

@interface PPLocalNamedEntityStore : PPNamedEntityStore <PPFeedbackProcessing> {
    int  _bundleIdBlocklistNotificationToken;
    PPLocalContactStore * _contactStoreForMapsFeedback;
    _Atomic bool  _isCacheInvalidated;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _mapsPrefetchQueue;
    NSCache * _modelCache;
    PPNamedEntityStorage * _storage;
    PPLocalTopicStore * _topicStoreForNamedEntityMapping;
    PPTrialWrapper * _trialWrapper;
}

@property (nonatomic, readonly) PPNamedEntityStorage *storage;

+ (id)defaultStore;
+ (id)recordsForNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3;
+ (float)resolvedPerRecordDecayRateForFeatureProvider:(id)arg1 perRecordDecayRate:(float)arg2;
+ (void)sortAndTruncate:(id)arg1 queryLimit:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_coalesceScoredNamedEntities:(id)arg1;
- (id)_convertMapsContactFeedback:(id)arg1;
- (id)_defaultScoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8;
- (bool)_donateLocationNamedEntityToLocationStore:(id)arg1 source:(id)arg2 locationAlgorithm:(unsigned short)arg3 error:(id*)arg4;
- (bool)_donateTopicsFromEntities:(id)arg1 source:(id)arg2 cloudSync:(bool)arg3 sentimentScore:(double)arg4 error:(id*)arg5;
- (bool)_extractDonationsForFeedback:(id)arg1 pbFeedbackLog:(id)arg2 namedEntity:(id)arg3 error:(id*)arg4;
- (id)_feedbackItemToNamedEntityMapForFeedback:(id)arg1 error:(id*)arg2;
- (id)_feedbackItemsByItemString:(id)arg1;
- (id)_filterOutInvalidNamesFromEntities:(id)arg1;
- (id)_getScoredItemWithFeaturesWithNamedEntity:(id)arg1 featureRedactor:(id)arg2 excludingSourceBundleId:(id)arg3 error:(id*)arg4;
- (id)_getScoredItemWithFeaturesWithNamedEntity:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 scoreInterpreter:(id)arg4 error:(id*)arg5;
- (id)_getScoredNamedEntityFeaturesForCoreMLFromIdentifier:(id)arg1 excludingSourceBundleId:(id)arg2 decayedFeedbackCounts:(id)arg3 featurizer:(id)arg4 error:(id*)arg5;
- (id)_loadScoreInterpreter;
- (id)_loadScoringMLModel;
- (void)_logDifferentiallyPrivateExtractionsWithDpCategory:(id)arg1 extractions:(id)arg2;
- (void)_logDifferentiallyPrivateTaggerExtractions:(id)arg1;
- (bool)_logFeedbackSessionsWithFeedback:(id)arg1 error:(id*)arg2;
- (id)_mapsSearchQueryResultWithError:(id*)arg1;
- (void)_petLoggingForQuery:(id)arg1 resultCount:(unsigned long long)arg2 clientProcessName:(id)arg3 hasError:(bool)arg4;
- (void)_registerMapsQueryPrefetching;
- (bool)_shouldIgnoreHomeOrWorkAddress:(id)arg1;
- (bool)_shouldSuppressRepeatedImpressions:(id)arg1;
- (bool)_shouldUseScoringMLModel;
- (bool)_unlimitedNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (void)dealloc;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 documentIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupId:(id)arg2 olderThan:(id)arg3 deletedCount:(unsigned long long*)arg4 error:(id*)arg5;
- (bool)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)arg1 groupIds:(id)arg2 deletedCount:(unsigned long long*)arg3 error:(id*)arg4;
- (bool)deleteAllNamedEntitiesOlderThanDate:(id)arg1 deletedCount:(unsigned long long*)arg2 error:(id*)arg3;
- (bool)deleteAllNamedEntityFeedbackCountsOlderThanDate:(id)arg1;
- (void)disableSyncForBundleIds:(id)arg1;
- (bool)donateLocationNamedEntities:(id)arg1 bundleId:(id)arg2 groupId:(id)arg3 error:(id*)arg4;
- (bool)donateMapItem:(id)arg1 forPlaceName:(id)arg2 error:(id*)arg3;
- (bool)donateNamedEntities:(id)arg1 source:(id)arg2 algorithm:(unsigned long long)arg3 cloudSync:(bool)arg4 sentimentScore:(double)arg5 error:(id*)arg6;
- (bool)filterExistingNamedEntitiesWithShouldContinueBlock:(id /* block */)arg1;
- (double)finalScoreFromRecordsUsingHybrid:(id)arg1 streamingScorer:(id)arg2 mlModel:(id)arg3;
- (bool)flushDonationsWithError:(id*)arg1;
- (id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 excludingSourceBundleId:(id)arg2 decayRate:(double)arg3 error:(id*)arg4;
- (id)getScoredNamedEntityFeaturesWithNamedEntity:(id)arg1 scoringDate:(id)arg2 excludingSourceBundleId:(id)arg3 decayRate:(double)arg4 error:(id*)arg5 strictFiltering:(bool)arg6 scoreInterpreter:(id)arg7;
- (id)init;
- (id)initWithStorage:(id)arg1 topicStoreForNamedEntityMapping:(id)arg2 contactStoreForMapsFeedback:(id)arg3 trialWrapper:(id)arg4;
- (bool)iterNamedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (bool)iterRankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 block:(id /* block */)arg3;
- (id)mapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)monitorNamedEntityRecordChangesWithError:(id*)arg1 setup:(id /* block */)arg2 handler:(id /* block */)arg3 finish:(id /* block */)arg4;
- (id)namedEntityRecordsWithQuery:(id)arg1 error:(id*)arg2;
- (id)namedEntityToMatchedStringMappingForNamedEntities:(id)arg1 timestamp:(double)arg2 error:(id*)arg3;
- (void)processfeedbackItems:(id)arg1 scoringDate:(id)arg2 clientIdentifier:(id)arg3 clientBundleId:(id)arg4 mappingId:(id)arg5;
- (bool)pruneOrphanedNamedEntityFeedbackCountsWithLimit:(long long)arg1 rowOffset:(unsigned long long)arg2 deletedCount:(unsigned long long*)arg3 isComplete:(bool*)arg4;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2;
- (id)rankedNamedEntitiesWithQuery:(id)arg1 error:(id*)arg2 clientProcessName:(id)arg3;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (bool)removeMapItemForPlaceName:(id)arg1 error:(id*)arg2;
- (bool)removeMapItemsBeforeCutoffDate:(id)arg1 error:(id*)arg2;
- (id)scoredEntityFromRecords:(id)arg1 scoringDate:(id)arg2 perRecordDecayRate:(float)arg3 decayRate:(float)arg4 sourceStats:(id)arg5 decayedFeedbackCounts:(id)arg6 scoreInterpreter:(id)arg7 streamingScorer:(id*)arg8 mlModel:(id)arg9;
- (id)storage;

@end