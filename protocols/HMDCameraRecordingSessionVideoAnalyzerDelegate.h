/* Generated by RuntimeBrowser.
 */

@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate <NSObject>

@required

- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;
- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didFailAnalysisForFragment:(HMICameraVideoFragment *)arg2 withError:(NSError *)arg3;
- (void)analyzer:(id <HMDCameraRecordingSessionVideoAnalyzer>)arg1 didNotAnalyzeFragment:(HMICameraVideoFragment *)arg2 withResult:(HMICameraVideoAnalyzerResult *)arg3;

@end