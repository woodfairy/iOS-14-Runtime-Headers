/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNOpticalFlowGenerator : VNDetector

+ (id)configurationOptionKeysForDetectorKey;

- (id)_calculateLKTVectorResult:(struct CVPixelBufferWrapper { struct __CVBuffer {} *x1; })arg1 fromPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer {} *x1; })arg2 toPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer {} *x1; })arg3 opticalFlowOptions:(const struct OpticalFlowOptions { id x1; unsigned int x2; unsigned long long x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; float x8; float x9; float x10; }*)arg4 error:(id*)arg5;
- (id)_createOpticalFlowForPixelBuffer:(struct CVPixelBufferWrapper { struct __CVBuffer {} *x1; })arg1 opticalFlowOptions:(const struct OpticalFlowOptions { id x1; unsigned int x2; unsigned long long x3; unsigned long long x4; bool x5; unsigned long long x6; unsigned long long x7; float x8; float x9; float x10; }*)arg2 error:(id*)arg3;
- (struct CVPixelBufferWrapper { struct __CVBuffer {} *x1; })_createVectorResultPixelBufferWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 error:(id*)arg4;
- (id)_initializedLKTMetalContextAndReturnError:(id*)arg1;
- (id)_validatedImageBuffersFromOptions:(id)arg1 error:(id*)arg2;
- (struct optional<OpticalFlowOptions> { union { BOOL x_1_1_1; struct OpticalFlowOptions { id x_2_2_1; unsigned int x_2_2_2; unsigned long long x_2_2_3; unsigned long long x_2_2_4; bool x_2_2_5; unsigned long long x_2_2_6; unsigned long long x_2_2_7; float x_2_2_8; float x_2_2_9; float x_2_2_10; } x_1_1_2; } x1; bool x2; })_validatedOpticalFlowOptions:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 error:(id*)arg4;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end