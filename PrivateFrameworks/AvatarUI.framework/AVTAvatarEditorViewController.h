/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarEditorViewController : UIViewController <AVTAvatarAttributeEditorViewControllerDelegate, AVTSplashScreenViewControllerDelegate, AVTToolBarDelegate, UIAdaptivePresentationControllerDelegate> {
    AVTAvatarAttributeEditorViewController * _attributeEditorViewController;
    AVTViewSessionProvider * _avtViewSessionProvider;
    UIBarButtonItem * _cancelButtonItem;
    <AVTAvatarEditorViewControllerDelegate> * _delegate;
    UIBarButtonItem * _doneButtonItem;
    AVTUIEnvironment * _environment;
    bool  _hasChanges;
    AVTAvatarRecord * _initialAvatarRecord;
    bool  _isCreating;
    <AVTUILogger> * _logger;
    AVTSplashScreenViewController * _splashScreenViewController;
    <AVTAvatarStoreInternal> * _store;
    AVTToolBar * _toolbar;
}

@property (nonatomic, readonly) AVTAvatarAttributeEditorViewController *attributeEditorViewController;
@property (nonatomic, readonly) AVTViewSessionProvider *avtViewSessionProvider;
@property (nonatomic, retain) UIBarButtonItem *cancelButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarEditorViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButtonItem;
@property (nonatomic, readonly) AVTUIEnvironment *environment;
@property (nonatomic) bool hasChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTAvatarRecord *initialAvatarRecord;
@property (nonatomic, readonly) bool isCreating;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) AVTSplashScreenViewController *splashScreenViewController;
@property (nonatomic, readonly) <AVTAvatarStoreInternal> *store;
@property (readonly) Class superclass;
@property (nonatomic, retain) AVTToolBar *toolbar;

+ (id)defaultSessionProvider;
+ (bool)shouldShowSplashScreen;
+ (id)viewControllerForCreatingAvatarInStore:(id)arg1;
+ (id)viewControllerForCreatingAvatarInStore:(id)arg1 avtViewSessionProvider:(id)arg2;
+ (id)viewControllerForEditingAvatar:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3;
+ (id)viewControllerForEditingAvatar:(id)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })additionalSafeAreaInsets;
- (void)applyLayout:(id)arg1;
- (id)appropriatePresentationController;
- (void)attributeEditor:(id)arg1 didUpdateVisibleLayout:(id)arg2;
- (void)attributeEditorDidMakeFirstSelection:(id)arg1;
- (id)attributeEditorViewController;
- (id)avtViewSessionProvider;
- (void)cancel:(id)arg1;
- (id)cancelButtonItem;
- (void)configureNavigationItems;
- (void)configurePPTMemoji;
- (void)confirmCancel:(id)arg1;
- (void)controllerPresentationWillObstructView:(id)arg1;
- (id)delegate;
- (bool)disableAvatarSnapshotting;
- (id)doneButtonItem;
- (void)enableDoneButton:(bool)arg1;
- (id)environment;
- (void)finish:(id)arg1;
- (void)handleDiscardAttempt;
- (bool)hasChanges;
- (id)initWithAvatarRecord:(id)arg1 avtViewSessionProvider:(id)arg2 store:(id)arg3 enviroment:(id)arg4 isCreating:(bool)arg5;
- (id)initialAvatarRecord;
- (bool)isCreating;
- (bool)isModalInPresentation;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)arg1;
- (void)loadSplashScreen;
- (id)logger;
- (void)prepareForAnimatedTransitionWithLayout:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)prepareForPresetsScrollTestOnCategory:(id)arg1 readyHandler:(id /* block */)arg2;
- (void)presentationControllerDidAttemptToDismiss:(id)arg1;
- (bool)presentationControllerShouldDismiss:(id)arg1;
- (void)setCancelButtonItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableAvatarSnapshotting:(bool)arg1;
- (void)setDoneButtonItem:(id)arg1;
- (void)setHasChanges:(bool)arg1;
- (void)setInitialAvatarRecord:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setupInitialViewState;
- (id)splashScreenViewController;
- (void)splashScreenViewControllerDidFinish:(id)arg1;
- (id)store;
- (id)toolbar;
- (void)toolbar:(id)arg1 didSelectButton:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)updateToolBarForLayout:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (id)visibleLayout;

@end
