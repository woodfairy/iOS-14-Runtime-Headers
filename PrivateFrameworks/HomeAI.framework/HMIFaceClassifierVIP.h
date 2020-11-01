/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIFaceClassifierVIP : HMFObject <HMFLogging, HMIFaceClassifier> {
    double  _classificationThresholdKnown;
    double  _classificationThresholdUnknown;
    HMIFaceQualityFilterSVM * _faceQualityFilter;
    HMIFaceprinter * _faceprinter;
}

@property (readonly) double classificationThresholdKnown;
@property (readonly) double classificationThresholdUnknown;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceQualityFilterSVM *faceQualityFilter;
@property (readonly) HMIFaceprinter *faceprinter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (double)classificationThresholdKnown;
- (double)classificationThresholdUnknown;
- (id)classifyFaceEvent:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 fastMode:(bool)arg3 homeUUID:(id)arg4 error:(id*)arg5;
- (id)faceQualityFilter;
- (id)faceprinter;
- (id)initWithError:(id*)arg1;
- (id)qualityPredictionFromSVMUsingDetectorConfidence:(double)arg1 laplacian:(double)arg2 yaw:(double)arg3 boxSize:(double)arg4 error:(id*)arg5;

@end