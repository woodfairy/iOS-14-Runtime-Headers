/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExposureNotificationUI.framework/HealthExposureNotificationUI
 */

@interface HealthExposureNotificationUI.ENUIPublicHealthAgencyModel : NSObject {
    void appBundleId;
    void consentStatus;
    void header;
    void introductoryText;
    void isAuthorized;
    void legalese;
    void name;
    void region;
    void regionVersion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  regionWebsiteURL;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  verificationCodeHelpURL;
    void verificationIntroductoryText;
    void verificationSymptomOnsetText;
    void verificationTravelStatusText;
}

@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus *consentStatus;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header;
@property (nonatomic, readonly) UIImage *installedAppIcon;
@property (nonatomic, readonly) NSString *installedAppName;
@property (nonatomic, readonly) NSString *introductoryText;
@property (nonatomic, readonly) bool isAppInstalled;
@property (nonatomic, readonly) bool isAuthorized;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isRegionUsingApp;
@property (nonatomic, readonly) bool isSymptomOnsetNeeded;
@property (nonatomic, readonly) bool isTravelStatusNeeded;
@property (nonatomic, readonly) _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument *legalese;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) ENRegion *region;
@property (nonatomic, readonly) bool regionIsPlaceholder;
@property (nonatomic, readonly) long long regionVersion;
@property (nonatomic, readonly) NSURL *regionWebsiteURL;
@property (nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property (nonatomic, readonly) NSString *verificationIntroductoryText;
@property (nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property (nonatomic, readonly) NSString *verificationTravelStatusText;

+ (id)activeRegion;
+ (id)allRegions;
+ (id)authorizedRegions;
+ (id)availableRegions;
+ (id)defaultModelWithBundleId:(id)arg1 isAuthorized:(bool)arg2;
+ (id)dummyRegionCountryCode;
+ (void)refreshRegionsWithCompletion:(id /* block */)arg1;
+ (id)regionForRegionCode:(id)arg1;
+ (void)setActiveRegion:(id)arg1;
+ (void)setAuthorizedRegions:(id)arg1;
+ (void)setAvailableRegions:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)consentStatus;
- (id)header;
- (id)init;
- (id)initWithRegion:(id)arg1 name:(id)arg2 appBundleId:(id)arg3 introductoryText:(id)arg4 header:(id)arg5 legalese:(id)arg6 consentStatus:(id)arg7 isAuthorized:(bool)arg8 regionVersion:(long long)arg9 regionWebsiteURL:(id)arg10 verificationIntroductoryText:(id)arg11 verificationCodeHelpURL:(id)arg12 verificationSymptomOnsetText:(id)arg13 verificationTravelStatusText:(id)arg14;
- (id)installedAppIcon;
- (id)installedAppName;
- (id)introductoryText;
- (bool)isAppInstalled;
- (bool)isAuthorized;
- (bool)isPlaceholder;
- (bool)isRegionUsingApp;
- (bool)isSymptomOnsetNeeded;
- (bool)isTravelStatusNeeded;
- (id)legalese;
- (id)name;
- (id)region;
- (bool)regionIsPlaceholder;
- (long long)regionVersion;
- (id)regionWebsiteURL;
- (id)verificationCodeHelpURL;
- (id)verificationIntroductoryText;
- (id)verificationSymptomOnsetText;
- (id)verificationTravelStatusText;

@end