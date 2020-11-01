/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

@interface WFChooseFromListDialogRequest : WFDialogRequest <NSSecureCoding, WFDialogRequestViewControllerSupport> {
    bool  _allowsMultipleSelection;
    WFDialogButton * _cancelButton;
    WFDialogButton * _doneButton;
    NSArray * _items;
    NSString * _message;
}

@property (nonatomic, readonly) bool allowsMultipleSelection;
@property (nonatomic, readonly, copy) WFDialogButton *cancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (nonatomic, readonly, copy) NSString *emptyStateMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *message;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsMultipleSelection;
- (id)cancelButton;
- (id)description;
- (id)doneButton;
- (id)emptyStateMessage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1 allowsMultipleSelection:(bool)arg2 message:(id)arg3 attribution:(id)arg4 prompt:(id)arg5;
- (id)items;
- (id)message;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (Class)wf_dialogViewControllerClass;

@end