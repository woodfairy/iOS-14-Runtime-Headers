/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
 */

@interface BNBannerSource : NSObject <BNBannerClientContainerViewControllerDelegate, BNBannerSceneComponentProviderDelegate, BNBannerSourceHostToClientInterface, BNBannerSourceProviding, BNBannerSourceProvidingPrivate> {
    BNBannerClientContainerViewController * _bannerClientContainerVCDeferringFocus;
    BSServiceConnection * _connection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    <BNBannerSourceDelegate> * _delegate;
    long long  _destination;
    NSString * _machName;
    NSMutableArray * _presentables;
    NSString * _requesterIdentifier;
    bool  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BNBannerSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requesterIdentifier;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

+ (void)_invalidateBannerSource:(id)arg1;
+ (id)bannerSourceForDestination:(long long)arg1 forRequesterIdentifier:(id)arg2;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_activeConnectionWithError:(out id*)arg1;
- (void)_invalidateConnection;
- (id)_presentableForUniqueIdentifier:(id)arg1;
- (bool)bannerClientContainerViewControllerShouldDeferFocus:(id)arg1;
- (void)bannerClientContainerViewControllerStoppedDeferringFocus:(id)arg1;
- (id)containerViewControllerForBannerSceneComponentProvider:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (long long)destination;
- (id)initWithDestination:(long long)arg1 andRequesterIdentifier:(id)arg2;
- (id)initWithMachName:(id)arg1 andRequesterIdentifier:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)keyWindowForScreen:(id)arg1;
- (id)layoutDescriptionWithError:(out id*)arg1;
- (bool)postPresentable:(id)arg1 options:(unsigned long long)arg2 userInfo:(id)arg3 error:(out id*)arg4;
- (id)requesterIdentifier;
- (bool)revokeAllPresentablesWithReason:(id)arg1 userInfo:(id)arg2 error:(out id*)arg3;
- (bool)revokePresentableWithRequestIdentifier:(id)arg1 animated:(bool)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(out id*)arg5;
- (void)sceneWillInvalidateForBannerSceneComponentProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setSuspended:(bool)arg1 forReason:(id)arg2 revokingCurrent:(bool)arg3 error:(out id*)arg4;

@end
