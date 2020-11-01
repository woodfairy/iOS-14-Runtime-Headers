/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADAppUsageVectorManager : NSObject {
    NSMutableDictionary * _adamIDtoBundleID;
    NSDictionary * _appUsageEvents;
    NSMutableDictionary * _appUsageVectors;
    NSArray * _lookbackPeriods;
    NSNumber * _maxQueryElements;
    ADBackgroundTaskRequest * _task;
    NSMutableDictionary * _vectorWeightTotals;
    NSString * _version;
}

@property (nonatomic, retain) NSMutableDictionary *adamIDtoBundleID;
@property (nonatomic, retain) NSDictionary *appUsageEvents;
@property (nonatomic, retain) NSMutableDictionary *appUsageVectors;
@property (nonatomic, retain) NSArray *lookbackPeriods;
@property (nonatomic, retain) NSNumber *maxQueryElements;
@property (nonatomic, retain) ADBackgroundTaskRequest *task;
@property (nonatomic, retain) NSMutableDictionary *vectorWeightTotals;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)adamIDForBundleID:(id)arg1;
- (id)adamIDtoBundleID;
- (id)appUsageEvents;
- (id)appUsageEventsBetween:(id)arg1 and:(id)arg2 withLimit:(unsigned long long)arg3;
- (id)appUsageEventsForLookbackPeriod:(double)arg1;
- (id)appUsageVectors;
- (void)buildBundleIDtoAdamIDCache:(id)arg1;
- (id)bundleIdForAdamId:(id)arg1;
- (id)initWithAppUsageVectors:(id)arg1 weightTotals:(id)arg2 maxQueryElements:(id)arg3;
- (id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3;
- (id)initWithVersion:(id)arg1 lookbackPeriods:(id)arg2 maxQueryElements:(id)arg3 bgTask:(id)arg4;
- (id)lookbackPeriods;
- (id)maxQueryElements;
- (id)normalizedAppUsageVectors;
- (id)pullUsageEvents;
- (void)setAdamIDtoBundleID:(id)arg1;
- (void)setAppUsageEvents:(id)arg1;
- (void)setAppUsageVectors:(id)arg1;
- (void)setLookbackPeriods:(id)arg1;
- (void)setMaxQueryElements:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setVectorWeightTotals:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)task;
- (void)updateUsageVectorsWithAppVector:(id)arg1;
- (id)updateVector:(id)arg1 withVector:(id)arg2 usingWeight:(float)arg3;
- (id)vectorWeightTotals;
- (id)version;
- (float)weightForEvents:(id)arg1 amongEvents:(id)arg2 inLookbackPeriod:(id)arg3;

@end