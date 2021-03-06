/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
 */

@interface ARGeoTrackingTechnique : ARTechnique <ARGeoTrackingTechniqueProtocol> {
    bool  _VLPoseEstimationExecuting;
    VLTraceRecorder * _VLTraceRecorder;
    GEOApplicationAuditToken * _auditToken;
    bool  _deterministic;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _deviceMotionLock;
    CLSimulationManager * _locationSimulationManager;
    double  _maxHorizontalAccuracy;
    double  _posteriorVisualLocalizationCallInterval;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resetLock;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resultLock;
    ARGeoTrackingTechniqueState * _state;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _statusLock;
    unsigned long long  _supportEnablementOptions;
    bool  _useCLCMFusion;
    bool  _useGradualCorrection;
    bool  _useVLTraceRecorder;
    double  _visualLocalizationCallInterval;
    double  _visualLocalizationCallIntervalTimeThreshold;
    NSObject<OS_dispatch_queue> * _visualLocalizationQueue;
    bool  _visualLocalizationUpdatesRequested;
}

@property bool VLPoseEstimationExecuting;
@property (retain) VLTraceRecorder *VLTraceRecorder;
@property double bonusLatency;
@property <ARTechniqueDelegate> *delegate;
@property (nonatomic, retain) CLSimulationManager *locationSimulationManager;
@property double posteriorVisualLocalizationCallInterval;
@property unsigned long long powerUsage;
@property (retain) <ARTechniqueForwardingStrategy> *splitTechniqueFowardingStrategy;
@property (retain) NSArray *splitTechniques;
@property unsigned long long supportEnablementOptions;
@property (readonly) NSNumber *traceKey;
@property double visualLocalizationCallInterval;
@property double visualLocalizationCallIntervalTimeThreshold;
@property bool visualLocalizationUpdatesRequested;

+ (long long)getFailureReasonFromVLError:(long long)arg1;
+ (bool)isSupported;
+ (bool)isSupportedWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)VLPoseEstimationExecuting;
- (id)VLTraceRecorder;
- (void)_estimateEnuFromVioFromCLCM:(id)arg1 startState:(id)arg2;
- (void)_estimatePose:(id)arg1 pose:(id)arg2;
- (id)_findClosestDataFromBuffer:(id)arg1 toTimestamp:(double)arg2;
- (long long)_getHighestPriorityFailureWithTechniqueStateObject:(id)arg1;
- (void)_setTrackingState:(long long)arg1 techniqueStateObject:(id)arg2;
- (void)_simulateReplayLocationUpdates:(id)arg1;
- (void)_updateVLStateData:(double)arg1;
- (long long)captureBehavior;
- (void)dealloc;
- (void)getLocationFromWorldPosition:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 1: id*
- (id)init;
- (id)initWithAuditToken:(id)arg1;
- (id)locationSimulationManager;
- (double)posteriorVisualLocalizationCallInterval;
- (void)prepare:(bool)arg1;
- (id)processData:(id)arg1;
- (bool)reconfigurableFrom:(id)arg1;
- (void)reconfigureFrom:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;
- (unsigned long long)requiredSensorDataTypes;
- (id)resultDataClasses;
- (void)setLocationSimulationManager:(id)arg1;
- (void)setPosteriorVisualLocalizationCallInterval:(double)arg1;
- (void)setSupportEnablementOptions:(unsigned long long)arg1;
- (void)setVLPoseEstimationExecuting:(bool)arg1;
- (void)setVLTraceRecorder:(id)arg1;
- (void)setVisualLocalizationCallInterval:(double)arg1;
- (void)setVisualLocalizationCallIntervalTimeThreshold:(double)arg1;
- (void)setVisualLocalizationUpdatesRequested:(bool)arg1;
- (unsigned long long)supportEnablementOptions;
- (double)visualLocalizationCallInterval;
- (double)visualLocalizationCallIntervalTimeThreshold;
- (bool)visualLocalizationUpdatesRequested;

@end
