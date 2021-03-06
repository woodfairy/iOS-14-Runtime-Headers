/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputLanguageSpec : NSObject {
    long long  __currentLanguage;
    NSLocale * __locale;
}

@property (nonatomic, readonly) long long _currentLanguage;
@property (nonatomic, readonly) NSLocale *_locale;
@property (nonatomic, readonly) NSString *debugLocaleDescription;
@property (nonatomic, readonly) double singleCharacterCommitDelay;
@property (nonatomic, readonly) double standardCommitDelay;
@property (nonatomic, readonly) double strokeFadeOutDuration;
@property (nonatomic, readonly) long long uncommittedTokenColumnCount;

- (void).cxx_destruct;
- (long long)_currentLanguage;
- (id)_locale;
- (void)configureLocaleForRecognitionManager:(id)arg1;
- (id)debugLocaleDescription;
- (id)initWithLocale:(id)arg1;
- (double)singleCharacterCommitDelay;
- (double)standardCommitDelay;
- (double)strokeFadeOutDuration;
- (long long)uncommittedTokenColumnCount;

@end
