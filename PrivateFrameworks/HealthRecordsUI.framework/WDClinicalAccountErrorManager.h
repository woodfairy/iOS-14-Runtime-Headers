/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
 */

@interface WDClinicalAccountErrorManager : NSObject {
    SFSafariViewController * _activeLoginViewController;
}

@property (nonatomic) SFSafariViewController *activeLoginViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_dismissReloginViewController:(id)arg1;
- (void)_handleMultipleAccountsNeedReloginFromPresenter:(id)arg1;
- (void)_handleSingleAccountNeedsRelogin:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;
- (id)activeLoginViewController;
- (void)presentErrorsIfNecessaryForAccounts:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3;
- (void)reloginAccount:(id)arg1 fromPresenter:(id)arg2 profile:(id)arg3 completion:(id /* block */)arg4;
- (void)setActiveLoginViewController:(id)arg1;

@end