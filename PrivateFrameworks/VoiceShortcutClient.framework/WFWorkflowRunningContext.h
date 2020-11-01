/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _automationType;
    NSDate * _creationDate;
    NSString * _identifier;
    bool  _isShortcutsApp;
    NSString * _progressCategory;
    NSData * _serializedWorkflowControllerState;
    NSString * _workflowIdentifier;
}

@property (nonatomic, retain) NSString *automationType;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isShortcutsApp;
@property (nonatomic, readonly, copy) NSString *progressCategory;
@property (nonatomic, retain) NSData *serializedWorkflowControllerState;
@property (nonatomic, copy) NSString *workflowIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addProgressSubscriberUsingPublishingHandler:(id /* block */)arg1;
- (id)automationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithWorkflowIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isShortcutsApp;
- (id)progressCategory;
- (id)progressForPublishingWithTotalUnitCount:(long long)arg1 cancellationHandler:(id /* block */)arg2;
- (void)removeProgressSubscriber:(id)arg1;
- (id)serializedWorkflowControllerState;
- (void)setAutomationType:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsShortcutsApp:(bool)arg1;
- (void)setSerializedWorkflowControllerState:(id)arg1;
- (void)setWorkflowIdentifier:(id)arg1;
- (id)workflowIdentifier;

@end