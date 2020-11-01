/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroVideoStabilizerController : NSObject <Memories.VideoStabilizerTestable> {
    Project * _project;
}

@property (nonatomic, retain) Project *project;

+ (void)load;
+ (id)stabilizerFactory;
+ (bool)testStabilizationAgainWith:(id)arg1;

- (void).cxx_destruct;
- (bool)canGenerateTestMADRecipesForAssets:(id)arg1;
- (id)candidateAssetsFromAssetCollection:(id)arg1;
- (id)candidateAssetsforStabilizationFromProject;
- (id)computeInertiaCamL1Stabilization;
- (id)fetchAndFormatStabilizationMetadata;
- (id)generateTestMADRecipesForAssets:(id)arg1;
- (id)proVideoTimedObjectMapFromRecipes:(id)arg1;
- (id)project;
- (id)requestMediaAnalysisStabilizationService;
- (id)requestStablizationFromInertiaCam:(id)arg1 assetFPS:(float)arg2 cropFraction:(float)arg3 clip:(id)arg4;
- (void)setProject:(id)arg1;
- (bool)test_applyHomographyTransformForAssets:(id)arg1;
- (bool)test_cleanApertureRectBasisMatchesPhotosForAssets:(id)arg1;
- (bool)test_deNormalizedCropRect;
- (bool)test_inputMADRecipeToPVTimedStabilizationConfigForAssets:(id)arg1;
- (id)timedMetadataFromFrameInstructions:(id)arg1 withClip:(id)arg2;
- (void)writeStabilizationDataMovie:(id)arg1 timedStabConfigs:(id)arg2 completion:(id /* block */)arg3;
- (void)writeStabilizationDataMoviesToFolder:(id)arg1 assetIDMetadataTimedObjects:(id)arg2 completion:(id /* block */)arg3;

@end