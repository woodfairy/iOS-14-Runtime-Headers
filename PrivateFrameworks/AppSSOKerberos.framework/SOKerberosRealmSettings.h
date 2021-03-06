/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSSOKerberos.framework/AppSSOKerberos
 */

@interface SOKerberosRealmSettings : NSObject <NSSecureCoding> {
    NSString * _cacheName;
    NSUUID * _credentialUUID;
    NSDate * _dateLastLogin;
    NSString * _dateLocalPasswordLastChanged;
    NSString * _datePasswordExpires;
    NSString * _datePasswordLastChanged;
    NSNumber * _delayUserSetupCleared;
    NSNumber * _networkAvailable;
    NSString * _networkHomeDirectory;
    NSMutableArray * _siteCodeCache;
    NSData * _smartCardIssuer;
    NSData * _smartCardSerialNumber;
    NSString * _smartCardTokenID;
    NSNumber * _userCancelledLogin;
    NSString * _userName;
    NSString * _userPrincipalName;
}

@property (nonatomic, retain) NSString *cacheName;
@property (nonatomic, retain) NSUUID *credentialUUID;
@property (nonatomic, retain) NSDate *dateLastLogin;
@property (nonatomic, retain) NSString *dateLocalPasswordLastChanged;
@property (nonatomic, retain) NSString *datePasswordExpires;
@property (nonatomic, retain) NSString *datePasswordLastChanged;
@property (nonatomic, retain) NSNumber *delayUserSetupCleared;
@property (nonatomic, retain) NSNumber *networkAvailable;
@property (nonatomic, retain) NSString *networkHomeDirectory;
@property (nonatomic, retain) NSMutableArray *siteCodeCache;
@property (nonatomic, retain) NSData *smartCardIssuer;
@property (nonatomic, retain) NSData *smartCardSerialNumber;
@property (nonatomic, retain) NSString *smartCardTokenID;
@property (nonatomic, retain) NSNumber *userCancelledLogin;
@property (nonatomic, retain) NSString *userName;
@property (nonatomic, retain) NSString *userPrincipalName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheName;
- (void)cacheSiteCode:(id)arg1;
- (id)credentialUUID;
- (id)dateLastLogin;
- (id)dateLocalPasswordLastChanged;
- (id)datePasswordExpires;
- (id)datePasswordLastChanged;
- (id)delayUserSetupCleared;
- (id)dumpSiteCodeCache;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)networkAvailable;
- (id)networkHomeDirectory;
- (void)setCacheName:(id)arg1;
- (void)setCredentialUUID:(id)arg1;
- (void)setDateLastLogin:(id)arg1;
- (void)setDateLocalPasswordLastChanged:(id)arg1;
- (void)setDatePasswordExpires:(id)arg1;
- (void)setDatePasswordLastChanged:(id)arg1;
- (void)setDelayUserSetupCleared:(id)arg1;
- (void)setNetworkAvailable:(id)arg1;
- (void)setNetworkHomeDirectory:(id)arg1;
- (void)setSiteCodeCache:(id)arg1;
- (void)setSmartCardIssuer:(id)arg1;
- (void)setSmartCardSerialNumber:(id)arg1;
- (void)setSmartCardTokenID:(id)arg1;
- (void)setUserCancelledLogin:(id)arg1;
- (void)setUserName:(id)arg1;
- (void)setUserPrincipalName:(id)arg1;
- (id)siteCodeCache;
- (id)siteCodeForNetworkFingerprint:(id)arg1;
- (id)smartCardIssuer;
- (id)smartCardSerialNumber;
- (id)smartCardTokenID;
- (id)userCancelledLogin;
- (id)userName;
- (id)userPrincipalName;

@end
