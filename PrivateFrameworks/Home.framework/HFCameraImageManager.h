/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCameraImageManager : NSObject {
    HMCameraProfile * _cameraProfile;
    HFCameraClipVideoAssetOperationCache * _fetchCache;
    NSMutableDictionary * _generationObservers;
    HFCameraImageCache * _imageCache;
    NSMutableDictionary * _imageObservers;
    NSMutableDictionary * _inProgressOperations;
    NSOperationQueue * _posterFrameQueue;
    NSMutableDictionary * _requestedFaceCropCache;
    NSMutableDictionary * _requestedHeroFrameCache;
    NSMutableDictionary * _requestedPosterFrameCache;
}

@property (nonatomic) HMCameraProfile *cameraProfile;
@property (nonatomic, retain) HFCameraClipVideoAssetOperationCache *fetchCache;
@property (nonatomic, retain) NSMutableDictionary *generationObservers;
@property (nonatomic, retain) HFCameraImageCache *imageCache;
@property (nonatomic, retain) NSMutableDictionary *imageObservers;
@property (nonatomic, retain) NSMutableDictionary *inProgressOperations;
@property (nonatomic, retain) NSOperationQueue *posterFrameQueue;
@property (nonatomic, retain) NSMutableDictionary *requestedFaceCropCache;
@property (nonatomic, retain) NSMutableDictionary *requestedHeroFrameCache;
@property (nonatomic, retain) NSMutableDictionary *requestedPosterFrameCache;

+ (id)clipIdentifierStringFromDate:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3;
- (void)_addPosterFrameImage:(id)arg1 forClip:(id)arg2 withOffset:(double)arg3;
- (void)_fetchPosterFrameImageForObserver:(id)arg1 forClip:(id)arg2 offset:(double)arg3;
- (void)_generateImageUsingAsset:(id)arg1 clip:(id)arg2 offset:(double)arg3 observer:(id)arg4;
- (void)_generateImagesUsingAsset:(id)arg1 clip:(id)arg2 observer:(id)arg3;
- (void)_generateMissingPosterFrameImageForClip:(id)arg1 atOffset:(double)arg2 observer:(id)arg3;
- (id)_posterFrameForClip:(id)arg1 atOffset:(double)arg2;
- (double)_timeScaleAdjustedOffset:(double)arg1;
- (void)addDemoPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)addFaceCropImageObserver:(id)arg1 forClip:(id)arg2 usingSignificantEvent:(id)arg3;
- (void)addHeroFrameImageObserver:(id)arg1 forClip:(id)arg2;
- (void)addOperationForObserver:(id)arg1 clip:(id)arg2 posterFrame:(id)arg3 withKey:(id)arg4;
- (void)addPosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (void)cacheDemoPosterFramesForAsset:(id)arg1 forClip:(id)arg2;
- (id)cachedPosterFrameImageForClip:(id)arg1 offset:(double)arg2;
- (id)cameraProfile;
- (void)dealloc;
- (id)faceCropForClip:(id)arg1 atOffset:(double)arg2;
- (id)faceCropForPersonName:(id)arg1;
- (id)faceCropImagesForClip:(id)arg1 atOffset:(double)arg2;
- (void)failToFindHeroFrameForClip:(id)arg1;
- (void)failedToFindFaceCropForClip:(id)arg1 withKey:(id)arg2;
- (id)fetchCache;
- (id)generationObservers;
- (id)heroFrameImageForClip:(id)arg1;
- (id)imageCache;
- (id)imageObservers;
- (id)imageObserversForKey:(id)arg1;
- (id)inProgressOperations;
- (id)init;
- (id)keyForClip:(id)arg1;
- (id)keyForClip:(id)arg1 timeOffset:(double)arg2;
- (id)posterFrameQueue;
- (void)purgePosterFrames;
- (void)removeFaceCropImageObserver:(id)arg1 forPersonName:(id)arg2;
- (void)removeHeroFrameImageObserver:(id)arg1 forClip:(id)arg2;
- (void)removePosterFrameImageObserver:(id)arg1 forClip:(id)arg2 atOffset:(double)arg3;
- (id)representativeImageForClip:(id)arg1;
- (id)requestedFaceCropCache;
- (id)requestedHeroFrameCache;
- (id)requestedPosterFrameCache;
- (void)resetForCameraDismissal;
- (void)setCameraProfile:(id)arg1;
- (void)setFetchCache:(id)arg1;
- (void)setGenerationObservers:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageObservers:(id)arg1;
- (void)setInProgressOperations:(id)arg1;
- (void)setPosterFrameQueue:(id)arg1;
- (void)setRequestedFaceCropCache:(id)arg1;
- (void)setRequestedHeroFrameCache:(id)arg1;
- (void)setRequestedPosterFrameCache:(id)arg1;

@end
