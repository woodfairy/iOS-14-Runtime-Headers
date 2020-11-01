/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorModelManager : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal> {
    AVTMemoji * _avatar;
    AVTAvatarConfiguration * _avatarConfiguration;
    AVTAvatarRecord * _avatarRecord;
    AVTColorLayerProvider * _colorLayerProvider;
    AVTCoreModel * _coreModel;
    <AVTAvatarAttributeEditorModelManagerDelegate> * _delegate;
    AVTAvatarAttributeEditorState * _editorState;
    AVTUIEnvironment * _environment;
    AVTPresetImageProvider * _imageProvider;
    <AVTUILogger> * _logger;
    AVTAvatarAttributeEditorPreloader * _preloader;
    AVTAvatarConfiguration * _presetOverriddenConfiguration;
}

@property (nonatomic, retain) AVTMemoji *avatar;
@property (nonatomic, readonly) AVTAvatarConfiguration *avatarConfiguration;
@property (nonatomic, readonly, copy) AVTAvatarRecord *avatarRecord;
@property (nonatomic, readonly) AVTColorLayerProvider *colorLayerProvider;
@property (nonatomic, readonly) AVTCoreModel *coreModel;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorModelManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) AVTAvatarAttributeEditorState *editorState;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) AVTPresetImageProvider *imageProvider;
@property (nonatomic, retain) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTAvatarAttributeEditorPreloader *preloader;
@property (nonatomic, retain) AVTAvatarConfiguration *presetOverriddenConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyConfigurationToAvatar:(id)arg1 animated:(bool)arg2;
- (void)applyEarringColorUpdateIfNeeded:(id)arg1;
- (id)avatar;
- (id)avatarConfiguration;
- (id)avatarRecord;
- (id)buildInitialEditorState;
- (id)buildUIModel;
- (id)buildUIModelWithSelectedCategory:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)colorLayerProvider;
- (id)coreModel;
- (id)delegate;
- (id)editorState;
- (id)environment;
- (void)flushResourcesForEnteringBackground;
- (id)imageProvider;
- (id)initWithAvatarRecord:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1 coreModel:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 preloader:(id)arg5 environment:(id)arg6;
- (void)loadResourcesIfNeeded;
- (id)logger;
- (id)preloader;
- (id)presetOverriddenConfiguration;
- (void)setAvatar:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setPresetOverriddenConfiguration:(id)arg1;
- (bool)shouldDisplaySectionForCategory:(long long)arg1;
- (bool)shouldDisplaySectionWithDisplayCondition:(id)arg1 inCategoryAtIndex:(unsigned long long)arg2;
- (void)updateAvatarByApplyingPresetOverrides:(id)arg1 animated:(bool)arg2;
- (void)updateAvatarBySelectingSectionItem:(id)arg1 animated:(bool)arg2;
- (void)updateAvatarBySelectingSupplementalPickerItem:(id)arg1 animated:(bool)arg2;
- (void)updateAvatarRecordFromAvatar;
- (void)updateAvatarWithAvatarUpdater:(id /* block */)arg1 animated:(bool)arg2;

@end