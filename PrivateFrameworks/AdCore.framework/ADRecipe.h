/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADRecipe : NSObject {
    NSString * _experimentID;
    bool  _isMissingRequiredData;
    NSNumber * _scalingRatio;
    NSArray * _testWeights;
    NSDictionary * _translationMap;
}

@property (nonatomic, retain) NSString *experimentID;
@property (nonatomic) bool isMissingRequiredData;
@property (nonatomic, retain) NSNumber *scalingRatio;
@property (nonatomic, retain) NSArray *testWeights;
@property (nonatomic, retain) NSDictionary *translationMap;

- (void).cxx_destruct;
- (id)experimentID;
- (id)initWithDictionary:(id)arg1;
- (bool)isMissingRequiredData;
- (id)scalingRatio;
- (void)setExperimentID:(id)arg1;
- (void)setIsMissingRequiredData:(bool)arg1;
- (void)setScalingRatio:(id)arg1;
- (void)setTestWeights:(id)arg1;
- (void)setTranslationMap:(id)arg1;
- (id)testWeights;
- (id)translationMap;
- (id)translationWeights:(id)arg1;

@end