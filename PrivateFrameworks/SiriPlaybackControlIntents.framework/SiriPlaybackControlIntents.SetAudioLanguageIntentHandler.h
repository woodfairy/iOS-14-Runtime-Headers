/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
 */

@interface SiriPlaybackControlIntents.SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling> {
    void analyticsService;
    void deviceSelector;
    void playbackController;
}

- (void).cxx_destruct;
- (void)confirmSetAudioLanguage:(id)arg1 completion:(id /* block */)arg2;
- (void)handleSetAudioLanguage:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)resolveDeviceForSetAudioLanguage:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)resolveLanguageForSetAudioLanguage:(id)arg1 withCompletion:(id /* block */)arg2;

@end