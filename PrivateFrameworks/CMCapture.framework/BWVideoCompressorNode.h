/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWVideoCompressorNode : BWNode {
    bool  _attachThumbnailSourcePixelBuffer;
    bool  _bFrameEncodingAllowed;
    double  _bFrameEncodingAllowedAtHigherPressureStopTime;
    double  _bFrameEncodingAllowedAtHigherPressureTimeLimit;
    bool  _bFrameEncodingRequested;
    struct OpaqueVTCompressionSession { } * _compressionSession;
    bool  _compressionSessionCanBeReused;
    bool  _compressionSessionReuseEnabled;
    NSObject<OS_dispatch_queue> * _compressionSessionStateQueue;
    NSDictionary * _compressionSettings;
    NSDictionary * _compressionSettingsPreparedFor;
    bool  _delayedCompressorCleanupEnabled;
    bool  _didPrepareToEncode;
    bool  _emittedFirstVideoBuffer;
    NSObject<OS_dispatch_queue> * _emitterQueue;
    bool  _flushRequestReceived;
    BWLimitedGMErrorLogger * _limitedGMErrorLogger;
    float  _maxVideoFrameRate;
    bool  _nextFrameEncodeAsKeyFrame;
    int  _nonBFrameAverageBitRate;
    bool  _overCaptureEnabled;
    int  _pipelineTraceID;
    int  _powerPressureLevel;
    int  _powerPressureNotificationToken;
    bool  _prioritizeEncodingSpeedOverQuality;
    bool  _propagateStabilizedFacesToAVE;
    NSObject<OS_dispatch_source> * _reapCompressionSessionTimer;
    double  _reapCompressionSessionTimerDurationInSeconds;
    bool  _resetCodec;
    bool  _shouldAttachDebugSEI;
    bool  _shouldPassSerializedDepthImageBuffers;
    bool  _sourceIsHDResolution;
    unsigned int  _sourcePixelFormatType;
    NSObject<OS_dispatch_queue> * _thermalAndPowerNotificationQueue;
    int  _thermalPressureLevel;
    int  _thermalPressureNotificationToken;
    struct __CVBuffer { } * _thumbnailSourcePixelBuffer;
}

+ (id)_formatRequirementsForCompressionSettings:(id)arg1 maxVideoFrameRate:(float)arg2 retainedBufferCountHint:(int*)arg3;
+ (void)initialize;

- (id)_HDRImageStatisticsDictFromSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 metadata:(id)arg2;
- (void)_cleanCompressor:(bool)arg1;
- (struct OpaqueVTCompressionSession { }*)_compresessionSession;
- (void)_createCompressionSession;
- (struct OpaqueVTCompressionSession { }*)_createEncoderSessionWithWidth:(int)arg1 height:(int)arg2 inputPixelFormat:(unsigned int)arg3 isHDResolution:(unsigned char)arg4 videoCodec:(unsigned int)arg5 encoderSpecification:(id)arg6 compressionProperties:(id)arg7 compressorNodeRef:(void*)arg8;
- (void)_prepareForVideoCompression;
- (void)_registerForThermalAndPowerNotifications;
- (void)_releaseCompressionSession;
- (int)_setEncoderCompressionPropertiesWithCompressionSession:(struct OpaqueVTCompressionSession { }*)arg1 compressionProperties:(id)arg2 sourcePixelType:(unsigned int)arg3 isHDResolution:(unsigned char)arg4;
- (void)_updatePowerPressureLevel;
- (void)_updateThermalPressureLevel;
- (void)_validateBFrameEncodingAbility;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithCompressionSettings:(id)arg1 overCaptureEnabled:(bool)arg2 maxVideoFrameRate:(float)arg3 delayedCompressorCleanupEnabled:(bool)arg4;
- (void)insertKeyFrame;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (id)nodeType;
- (int)pipelineTraceID;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (bool)prioritizeEncodingSpeedOverQuality;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setPipelineTraceID:(int)arg1;
- (void)setPrioritizeEncodingSpeedOverQuality:(bool)arg1;
- (void)setReapCompressionSessionTimerDurationInSeconds:(double)arg1;

@end