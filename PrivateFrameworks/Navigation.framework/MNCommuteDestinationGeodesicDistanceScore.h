/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteDestinationGeodesicDistanceScore : MNCommuteDestinationScore <MNCommuteDestinationLocationScore> {
    NSMutableArray * _geodesicDistances;
    int  _score;
    double  _slope;
}

@property (nonatomic, retain) NSMutableArray *geodesicDistances;
@property (nonatomic) double slope;

+ (double)weight;

- (void).cxx_destruct;
- (void)_updateScoreAndDestinationInvalid;
- (id)descriptionExtras;
- (bool)destinationInvalid;
- (id)geodesicDistances;
- (id)initWithDestination:(id)arg1;
- (int)score;
- (void)setGeodesicDistances:(id)arg1;
- (void)setSlope:(double)arg1;
- (double)slope;
- (void)updateForLocation:(id)arg1;
- (void)updateScoreIfPossible;

@end
