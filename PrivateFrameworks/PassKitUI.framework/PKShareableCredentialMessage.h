/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKShareableCredentialMessage : NSObject {
    PKProtobufShareableCredentialMessage * _protoMessage;
    MSMessage * _underlyingMessage;
}

@property (nonatomic, copy) NSString *caption;
@property (nonatomic, copy) NSString *dataString;
@property (nonatomic, copy) UIImage *passThumbnailImage;
@property (nonatomic, copy) NSString *policyIdentifier;
@property (nonatomic, copy) NSArray *shareableCredentials;
@property (nonatomic, readonly) MSMessage *underlyingMessage;

- (void).cxx_destruct;
- (id)_shareableCredentialMessageDataURLWithData:(id)arg1;
- (id)_shareableCredentialMessageDataWithDataURL:(id)arg1;
- (void)_updateDataURL;
- (void)_updateLayoutContents;
- (id)caption;
- (id)dataString;
- (id)description;
- (id)init;
- (id)initWithUnderlyingMessage:(id)arg1;
- (id)passThumbnailImage;
- (id)policyIdentifier;
- (void)setCaption:(id)arg1;
- (void)setDataString:(id)arg1;
- (void)setPassThumbnailImage:(id)arg1;
- (void)setPolicyIdentifier:(id)arg1;
- (void)setShareableCredentials:(id)arg1;
- (id)shareableCredentials;
- (id)underlyingMessage;

@end