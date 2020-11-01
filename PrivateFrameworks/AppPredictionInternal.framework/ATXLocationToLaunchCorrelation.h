/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXLocationToLaunchCorrelation : NSObject <NSCopying, NSSecureCoding> {
    _PASLock * _lock;
}

+ (double)_launchProbabilityForEvent:(id)arg1 atLocation:(id)arg2 correlationMatrix:(id)arg3 locationTotals:(id)arg4;
+ (double)_totalLaunchesAtLocation:(id)arg1 locationTotals:(id)arg2;
+ (double)_totalLaunchesForEvent:(id)arg1 atLocation:(id)arg2 correlationMatrix:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addVisitForLocation:(id)arg1 event:(id)arg2 value:(double)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCorrelationMatrix:(id)arg1 locationTotals:(id)arg2;
- (double)launchProbabilityForEvent:(id)arg1 atLocation:(id)arg2;
- (double)launchProbabilityForEvent:(id)arg1 atLocationsWithProbabilities:(id)arg2;
- (double)totalLaunches;
- (double)totalLaunchesAtLocation:(id)arg1;
- (double)totalLaunchesForEvent:(id)arg1 atLocation:(id)arg2;

@end