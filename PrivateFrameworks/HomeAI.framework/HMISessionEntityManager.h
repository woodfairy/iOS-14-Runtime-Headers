/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMISessionEntityManager : HMFObject <HMFLogging> {
    HMIFaceTracker * _faceTracker;
    NSMutableDictionary * _sessionEntities;
    NSMutableDictionary * _sessionUUIDToPreviousFaceIndex;
    NSMutableDictionary * _sessionUUIDToPreviousFaceprints;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *sessionEntities;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)assignSessionEntitiesToPersonWithFaceEvents:(id)arg1 personWithoutFaceEvents:(id)arg2 personWithFilteredFaceEvents:(id)arg3 videoFrame:(id)arg4;
- (void)handleMotionDetection:(id)arg1 sessionPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithFrameDimensions:(struct CGSize { double x1; double x2; })arg1;
- (id)sessionEntities;

@end
