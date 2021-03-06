/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTextDetectionOptions : NSObject <NSSecureCoding> {
    bool  _correctSpelling;
    double  _normalizedMinimumTextHeightRatio;
    unsigned long long  _recognitionLevel;
    NSArray * _textDetectionLocales;
    bool  _usesLanguageCorrection;
}

@property (nonatomic) bool correctSpelling;
@property (nonatomic) double normalizedMinimumTextHeightRatio;
@property (nonatomic) unsigned long long recognitionLevel;
@property (nonatomic, retain) NSArray *textDetectionLocales;
@property (nonatomic) bool usesLanguageCorrection;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (bool)correctSpelling;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)normalizedMinimumTextHeightRatio;
- (unsigned long long)recognitionLevel;
- (void)setCorrectSpelling:(bool)arg1;
- (void)setNormalizedMinimumTextHeightRatio:(double)arg1;
- (void)setRecognitionLevel:(unsigned long long)arg1;
- (void)setTextDetectionLocales:(id)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (id)textDetectionLocales;
- (bool)usesLanguageCorrection;

@end
