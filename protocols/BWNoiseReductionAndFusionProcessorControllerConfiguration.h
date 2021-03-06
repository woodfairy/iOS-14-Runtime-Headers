/* Generated by RuntimeBrowser.
 */

@protocol BWNoiseReductionAndFusionProcessorControllerConfiguration <NSObject>

@required

- (bool)alwaysAllowModifyingInputBuffers;
- (bool)deepFusionEnabled;
- (bool)deepFusionWaitForProcessingToFinish;
- (bool)deferredProcessingEnabled;
- (bool)depthDataDeliveryEnabled;
- (unsigned int)figThreadPriority;
- (bool)fusionEnabled;
- (float)gainMapMainImageDownscalingFactor;
- (BWVideoFormat *)inputFormat;
- (bool)lowLightFusionEnabled;
- (<MTLCommandQueue> *)metalCommandQueue;
- (BWVideoFormat *)outputFormat;
- (bool)semanticRenderingEnabled;
- (NSArray *)sensorConfigurations;
- (void)setAlwaysAllowModifyingInputBuffers:(bool)arg1;
- (void)setDeepFusionEnabled:(bool)arg1;
- (void)setDeepFusionWaitForProcessingToFinish:(bool)arg1;
- (void)setDeferredProcessingEnabled:(bool)arg1;
- (void)setDepthDataDeliveryEnabled:(bool)arg1;
- (void)setFigThreadPriority:(unsigned int)arg1;
- (void)setFusionEnabled:(bool)arg1;
- (void)setGainMapMainImageDownscalingFactor:(float)arg1;
- (void)setInputFormat:(BWVideoFormat *)arg1;
- (void)setLowLightFusionEnabled:(bool)arg1;
- (void)setMetalCommandQueue:(id <MTLCommandQueue>)arg1;
- (void)setOutputFormat:(BWVideoFormat *)arg1;
- (void)setSemanticRenderingEnabled:(bool)arg1;
- (void)setSensorConfigurations:(NSArray *)arg1;
- (void)setSharedResources:(FigStillImageSharedProcessingResources *)arg1;
- (FigStillImageSharedProcessingResources *)sharedResources;

@end
