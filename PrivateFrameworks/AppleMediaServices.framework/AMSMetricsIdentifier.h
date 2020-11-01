/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMetricsIdentifier : NSObject {
    ACAccount * _account;
    AMSProcessInfo * _clientInfo;
    double  _duration;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic) double duration;

+ (id)_accountIdentifierForAccount:(id)arg1;
+ (id)_database;
+ (id)_sharedQueue;
+ (void)cleanupIdentifiers;
+ (void)removeIdentifiersForAccount:(id)arg1;

- (void).cxx_destruct;
- (id)_generateCacheKey;
- (id)account;
- (id)clientInfo;
- (double)duration;
- (id)generateEventFields;
- (id)generateIdentifier;
- (id)init;
- (void)setAccount:(id)arg1;
- (void)setClientInfo:(id)arg1;
- (void)setDuration:(double)arg1;

@end