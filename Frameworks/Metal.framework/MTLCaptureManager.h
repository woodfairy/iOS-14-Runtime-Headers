/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLCaptureManager : NSObject {
    <MTLCaptureScope> * _defaultCaptureScope;
    bool  _isCapturing;
}

@property (retain) <MTLCaptureScope> *defaultCaptureScope;
@property (readonly) bool isCapturing;

+ (id)sharedCaptureManager;

- (void)dealloc;
- (id)defaultCaptureScope;
- (bool)isCapturing;
- (id)newCaptureScopeWithCommandQueue:(id)arg1;
- (id)newCaptureScopeWithDevice:(id)arg1;
- (void)setDefaultCaptureScope:(id)arg1;
- (void)startCaptureWithCommandQueue:(id)arg1;
- (bool)startCaptureWithDescriptor:(id)arg1 error:(id*)arg2;
- (void)startCaptureWithDevice:(id)arg1;
- (void)startCaptureWithScope:(id)arg1;
- (void)stopCapture;
- (bool)supportsDestination:(long long)arg1;

@end