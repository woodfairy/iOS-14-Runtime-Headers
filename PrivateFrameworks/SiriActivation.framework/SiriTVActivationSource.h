/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
 */

@interface SiriTVActivationSource : SiriLongPressButtonSource {
    SiriLongPressButtonContext * _context;
    NSString * _deviceIdentifier;
    double  _longPressInterval;
}

@property (nonatomic, retain) SiriLongPressButtonContext *context;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic) double longPressInterval;

+ (id)activationSourceForIdentifier:(long long)arg1;

- (void).cxx_destruct;
- (id)_deviceIdentifier;
- (id)context;
- (id)deviceIdentifier;
- (double)longPressInterval;
- (void)setContext:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setLongPressInterval:(double)arg1;

@end