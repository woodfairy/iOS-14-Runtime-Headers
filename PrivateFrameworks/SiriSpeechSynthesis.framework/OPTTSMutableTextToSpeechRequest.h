/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
 */

@interface OPTTSMutableTextToSpeechRequest : OPTTSTextToSpeechRequest

@property (nonatomic) long long audio_type;
@property (nonatomic, copy) NSArray *context_info;
@property (nonatomic) bool enable_word_timing_info;
@property (nonatomic, copy) NSString *gender;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) OPTTSTextToSpeechRequestMeta *meta_info;
@property (nonatomic) long long preferred_voice_type;
@property (nonatomic, copy) NSString *session_id;
@property (nonatomic, copy) NSString *speech_id;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *voice_name;

- (long long)audio_type;
- (id)context_info;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable_word_timing_info;
- (id)gender;
- (id)init;
- (id)language;
- (id)meta_info;
- (long long)preferred_voice_type;
- (id)session_id;
- (void)setAudio_type:(long long)arg1;
- (void)setContext_info:(id)arg1;
- (void)setEnable_word_timing_info:(bool)arg1;
- (void)setGender:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMeta_info:(id)arg1;
- (void)setPreferred_voice_type:(long long)arg1;
- (void)setSession_id:(id)arg1;
- (void)setSpeech_id:(id)arg1;
- (void)setText:(id)arg1;
- (void)setVoice_name:(id)arg1;
- (id)speech_id;
- (id)text;
- (id)voice_name;

@end