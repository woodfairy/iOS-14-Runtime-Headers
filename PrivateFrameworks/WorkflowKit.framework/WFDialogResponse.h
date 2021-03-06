/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFDialogResponse : NSObject <NSSecureCoding> {
    long long  _responseCode;
}

@property (getter=isCancelled, nonatomic, readonly) bool cancelled;
@property (nonatomic, readonly) long long responseCode;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCancelled:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseCode:(long long)arg1;
- (bool)isCancelled;
- (long long)responseCode;
- (bool)shouldDismissDialogInTransientMode;

@end
