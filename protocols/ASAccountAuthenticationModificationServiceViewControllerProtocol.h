/* Generated by RuntimeBrowser.
 */

@protocol ASAccountAuthenticationModificationServiceViewControllerProtocol

@required

- (void)updateCredential:(ASPasswordCredential *)arg1 forServiceIdentifier:(ASCredentialServiceIdentifier *)arg2 userInfo:(NSDictionary *)arg3 extension:(NSUUID *)arg4;
- (void)upgradeCredentialToSignInWithApple:(ASPasswordCredential *)arg1 forServiceIdentifier:(ASCredentialServiceIdentifier *)arg2 userInfo:(NSDictionary *)arg3 extension:(NSUUID *)arg4;

@end