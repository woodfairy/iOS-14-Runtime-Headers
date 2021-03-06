/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCredentialIdentityMatch : WBSFormAutoFillItem {
    SFPasswordCredentialIdentity * _credentialIdentity;
    NSExtension * _extension;
    SFSafariCredential * _resolvedCredential;
}

@property (nonatomic, readonly) SFPasswordCredentialIdentity *credentialIdentity;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) SFSafariCredential *resolvedCredential;

- (void).cxx_destruct;
- (id)completion;
- (id)credentialIdentity;
- (id)extension;
- (id)initWithCredentialIdentity:(id)arg1 extension:(id)arg2;
- (id)resolvedCredential;
- (id)resolvedMatchWithCredential:(id)arg1;

@end
