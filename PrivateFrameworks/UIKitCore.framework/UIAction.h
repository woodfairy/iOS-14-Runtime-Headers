/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAction : UIMenuElement <_UIMenuLeaf> {
    unsigned long long  _attributes;
    NSString * _discoverabilityTitle;
    id /* block */  _handler;
    NSString * _identifier;
    bool  _requiresAuthenticatedInput;
    id  _sender;
    long long  _state;
}

@property (nonatomic) unsigned long long attributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *discoverabilityTitle;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) UIImage *image;
@property (nonatomic, readonly) bool requiresAuthenticatedInput;
@property (nonatomic, readonly) id sender;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)actionWithHandler:(id /* block */)arg1;
+ (id)actionWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 handler:(id /* block */)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3;
- (bool)_acceptBoolMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (void)_acceptMenuVisit:(id /* block */)arg1 commandVisit:(id /* block */)arg2 actionVisit:(id /* block */)arg3 deferredElementVisit:(id /* block */)arg4;
- (void)_acceptMenuVisit:(id /* block */)arg1 leafVisit:(id /* block */)arg2;
- (id)_immutableCopy;
- (bool)_isDefaultCommand;
- (id)_leafAlternates;
- (id)_leafKeyInput;
- (long long)_leafKeyModifierFlags;
- (void)_performActionWithSender:(id)arg1;
- (void)_performWithTarget:(id)arg1;
- (id)_resolvedTargetFromFirstTarget:(id)arg1;
- (id)_spiRepresentation;
- (id)_validatedLeafWithAlternate:(id)arg1 target:(id)arg2 validation:(id)arg3;
- (unsigned long long)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discoverabilityTitle;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2 identifier:(id)arg3 discoverabilityTitle:(id)arg4 attributes:(unsigned long long)arg5 state:(long long)arg6 handler:(id /* block */)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isLeaf;
- (bool)requiresAuthenticatedInput;
- (id)sender;
- (void)setAttributes:(unsigned long long)arg1;
- (void)setDiscoverabilityTitle:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setImage:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)state;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

+ (id)_sf_openInNewTabActionWithHandler:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 attributes:(unsigned long long)arg3 handler:(id /* block */)arg4;
+ (id)ic_actionWithTitle:(id)arg1 imageName:(id)arg2 handler:(id /* block */)arg3;
+ (id)ic_collaborateActionWithCloudSyncingObject:(id)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_deleteActionWithHandler:(id /* block */)arg1;
+ (id)ic_exportArchiveActionWithHandler:(id /* block */)arg1;
+ (id)ic_importArchiveActionWithHandler:(id /* block */)arg1;
+ (id)ic_lockNoteActionLocked:(bool)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_moveActionWithHandler:(id /* block */)arg1;
+ (id)ic_pinNoteActionPinned:(bool)arg1 withHandler:(id /* block */)arg2;
+ (id)ic_renameActionWithHandler:(id /* block */)arg1;
+ (id)ic_sendActionWithHandler:(id /* block */)arg1;

@end