/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoReceiverDefault : VCVideoReceiverBase {
    void * _controlInfoGenerator;
    VCDisplayLink * _displayLink;
    unsigned short  _lastKeyFrameRequestStreamID;
    double  _lastKeyFrameRequestTime;
    VCVideoStreamRateAdaptationFeedbackOnly * _rateAdaptation;
    bool  _shouldEnableFaceZoom;
    long long  _streamToken;
    struct tagVCVideoReceiverConfig { 
        unsigned int streamCount; 
        struct tagVCVideoReceiverStreamConfig { 
            struct tagHANDLE {} *rtpHandle; 
            struct __CFDictionary {} *featureListStrings; 
            unsigned short streamID; 
            unsigned short repairStreamID; 
            bool onDemandIDR; 
            unsigned int subStreamCount; 
            unsigned short subStreamIDs[9]; 
            unsigned short subStreamRepairIDs[9]; 
            unsigned short framerate; 
            unsigned char tileIndex; 
            bool isOneToOne; 
        } streamConfigs[9]; 
        int mode; 
        int jitterBufferMode; 
        long long streamToken; 
        int audioTSRate; 
        int videoTSRate; 
        int enableVPBLogging; 
        unsigned int dumpID; 
        int enableControlByte; 
        int enableBitstreamCapture; 
        int enable2vuyCapture; 
        int enableUEP; 
        int enableRecvBitstreamDump; 
        int reportingParentID; 
        bool shouldEnableFaceZoom; 
        bool useDisplayLink; 
        void *callbackContext; 
        int (*remoteFrameCallback)(); 
        int (*streamSwitchCallback)(); 
        int (*keyFrameGenerationCallback)(); 
        unsigned long long idsParticipantID; 
        bool triggerSoundAlarmOnRTPReceive; 
        unsigned short decoderNumOfTiles; 
        bool useInternalRTPThreading; 
        struct tagWRMMetricsInfo {} *wrmInfo; 
        unsigned int maxDisplayRefreshRate; 
        bool enableJitterBufferInReceiver; 
        bool enableJitterBufferInPlayer; 
        bool enableImmediateDecode; 
        bool isLTRPEnabled; 
        bool isRTCPForLTRPAckEnabled; 
        bool isAsyncDecodingEnabled; 
        bool isReceiverSideVCRCFeedbackEnabled; 
        bool isVCRCStatsCollectionEnabled; 
        bool fecHeaderV1Enabled; 
        bool enableQueueAlarmForDisplay; 
        bool useRTCPForFIR; 
        bool enableJBDynamicModeSwitch; 
        unsigned char mediaControlInfoVersion; 
        void *mediaControlInfoGenerator; 
    }  _videoReceiverConfig;
    struct tagHANDLE { int x1; } * _videoReceiverHandle;
    struct tagHANDLE { int x1; } * _videoTransmitterHandle;
    bool  receivedFirstRemoteFrame;
    unsigned int  remoteFrameHeight;
    unsigned int  remoteFrameWidth;
    VideoAttributes * remoteVideoAttributes;
}

@property (retain) VideoAttributes *remoteVideoAttributes;
@property (nonatomic) bool shouldEnableFaceZoom;

- (void)cleanUpDisplayLink;
- (void)collectChannelMetrics:(struct { unsigned int x1; unsigned int x2; double x3; }*)arg1 interval:(float)arg2;
- (void)dealloc;
- (void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2;
- (void)displayLinkTick:(id)arg1;
- (void)handleActiveConnectionChange:(id)arg1;
- (void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short*)arg1 count:(int)arg2 didReceiveRTCPFB:(bool)arg3 didReceiveFIR:(bool)arg4;
- (void)handleRemoteFrame:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1;
- (id)initWithConfig:(struct tagVCVideoReceiverConfig { unsigned int x1; struct tagVCVideoReceiverStreamConfig { struct tagHANDLE {} *x_2_1_1; struct __CFDictionary {} *x_2_1_2; unsigned short x_2_1_3; unsigned short x_2_1_4; bool x_2_1_5; unsigned int x_2_1_6; unsigned short x_2_1_7[9]; unsigned short x_2_1_8[9]; unsigned short x_2_1_9; unsigned char x_2_1_10; bool x_2_1_11; } x2[9]; int x3; int x4; long long x5; int x6; int x7; int x8; unsigned int x9; int x10; int x11; int x12; int x13; int x14; int x15; bool x16; bool x17; void *x18; int (*x19)(); int (*x20)(); int (*x21)(); unsigned long long x22; bool x23; unsigned short x24; bool x25; struct tagWRMMetricsInfo {} *x26; unsigned int x27; bool x28; bool x29; bool x30; bool x31; bool x32; bool x33; bool x34; bool x35; bool x36; bool x37; bool x38; bool x39; unsigned char x40; void *x41; }*)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting { }*)arg3 statisticsCollector:(id)arg4 transmitterHandle:(struct tagHANDLE { int x1; }*)arg5;
- (bool)initializeDisplayLink;
- (unsigned int)lastDisplayedFrameRTPTimestamp;
- (double)lastReceivedVideoRTCPPacketTime;
- (double)lastReceivedVideoRTPPacketTime;
- (void)pauseVideo;
- (id)remoteVideoAttributes;
- (double)roundTripTime;
- (void)rtcpSendIntervalElapsed;
- (void)setEnableCVO:(bool)arg1 cvoExtensionID:(unsigned long long)arg2;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setRemoteVideoAttributes:(id)arg1;
- (void)setRoundTripTime:(double)arg1;
- (void)setShouldEnableFaceZoom:(bool)arg1;
- (void)setTargetStreamID:(unsigned short)arg1;
- (bool)shouldEnableFaceZoom;
- (void)startVideo;
- (void)stopVideo;
- (void)updateSourcePlayoutTimestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1;

@end