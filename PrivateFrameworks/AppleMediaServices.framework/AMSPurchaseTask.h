/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchaseTask : AMSTask <AMSAuthenticateTaskDelegate, AMSBagConsumer, AMSURLProtocolDelegate, NSURLSessionDelegate> {
    <AMSBagProtocol> * _bag;
    AMSPurchaseInfo * _purchaseInfo;
    AMSURLSession * _session;
}

@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AMSPurchaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AMSPurchaseInfo *purchaseInfo;
@property (nonatomic, readonly) AMSURLSession *session;
@property (readonly) Class superclass;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_generateFraudScoreWithInfo:(id)arg1;
- (id)_performPreauthenticate;
- (id)_performPurchaseWithError:(id*)arg1;
- (id)_promptForAccount;
- (id)_recordEngagementEventWithInfo:(id)arg1 result:(id)arg2 error:(id)arg3;
- (id)_runAuthenticateRequest:(id)arg1;
- (id)_runDialogRequest:(id)arg1;
- (bool)_shouldPreauthenticatePurchase:(id)arg1;
- (void)authenticateTask:(id)arg1 handleDialogRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)bag;
- (id)delegate;
- (id)initWithPurchase:(id)arg1 bag:(id)arg2;
- (id)performPurchase;
- (id)purchaseInfo;
- (id)session;
- (void)setBag:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPurchaseInfo:(id)arg1;

@end