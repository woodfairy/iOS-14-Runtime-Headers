/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUAnnounceOnboardingFlow : NSObject <HUFeatureOnboardingFlow> {
    NSArray * _requiredSteps;
    HMHome * home;
    UIViewController<HUConfigurationViewController> * initialViewController;
    NAFuture * onboardingFuture;
    bool  shouldAbortAllOnboarding;
    bool  shouldAbortThisOnboardingFlowGroup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) UIViewController<HUConfigurationViewController> *initialViewController;
@property (nonatomic, retain) NAFuture *onboardingFuture;
@property (nonatomic, retain) NSArray *requiredSteps;
@property (nonatomic, readonly) bool shouldAbortAllOnboarding;
@property (nonatomic, readonly) bool shouldAbortThisOnboardingFlowGroup;
@property (readonly) Class superclass;

+ (id)allSteps;

- (void).cxx_destruct;
- (id)home;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;
- (id)initialViewController;
- (id)onboardingFuture;
- (id)processUserInput:(id)arg1;
- (id)requiredSteps;
- (void)setHome:(id)arg1;
- (void)setInitialViewController:(id)arg1;
- (void)setOnboardingFuture:(id)arg1;
- (void)setRequiredSteps:(id)arg1;
- (bool)shouldAbortAllOnboarding;
- (bool)shouldAbortThisOnboardingFlowGroup;
- (bool)shouldShowFlowWithOptions:(id)arg1;
- (id)viewControllerForStep:(unsigned long long)arg1;

@end
