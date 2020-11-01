/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIVideoFrameSelector : HMIVideoProcessingNode <HMFLogging> {
    NSMutableArray * _candidates;
    <HMIVideoFrameSelectorDelegate> * _delegate;
    <HMIMotionDetector> * _detector;
    bool  _enabled;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _expirationInterval;
    struct opaqueCMSampleBuffer { } * _reference;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _referenceInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetInterval;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMIVideoFrameSelectorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_drainCandidatesThatExpiredBefore:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_ensureDetectorForPixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)_handleReference:(struct opaqueCMSampleBuffer { }*)arg1 target:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setSampleRate:(double)arg1;

@end