/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

@interface SBRootFolderViewPageManagementLayoutManager : NSObject <SBIconListViewDominoPivotAnimatorDelegate, SBIconListViewDragDelegate, SBIconViewDelegate, SBIconViewProviding, SBPageManagementCellViewControllerDelegate, SBRootFolderViewLayoutManager, UIScrollViewDelegate> {
    UITapGestureRecognizer * _backgroundTapGestureRecognizer;
    <BSInvalidatable> * _dockBorrowedAssertion;
    <SBDockOffscreenFractionModifying> * _dockOffscreenAssertion;
    SBTitledHomeScreenButton * _doneButton;
    SBPageManagementIcon * _draggingIcon;
    NSMapTable * _iconViewControllersByIcon;
    NSMapTable * _iconViewControllersByListModel;
    long long  _layoutAction;
    long long  _layoutConfiguration;
    <BSInvalidatable> * _pageControlBorrowedAssertion;
    NSMapTable * _pageIconsByListModel;
    UIScrollView * _pageManagementScrollView;
    SBRootFolderView * _rootFolderView;
    SBIconListView * _rootListView;
    UILabel * _titleLabel;
    unsigned long long  _transitionCount;
}

@property (nonatomic, retain) UITapGestureRecognizer *backgroundTapGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <BSInvalidatable> *dockBorrowedAssertion;
@property (nonatomic, retain) <SBDockOffscreenFractionModifying> *dockOffscreenAssertion;
@property (nonatomic, retain) SBTitledHomeScreenButton *doneButton;
@property (nonatomic, retain) SBPageManagementIcon *draggingIcon;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutAction;
@property (nonatomic) long long layoutConfiguration;
@property (nonatomic, retain) <BSInvalidatable> *pageControlBorrowedAssertion;
@property (nonatomic, retain) UIScrollView *pageManagementScrollView;
@property (nonatomic) SBRootFolderView *rootFolderView;
@property (nonatomic, retain) SBIconListView *rootListView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic) unsigned long long transitionCount;

- (void).cxx_destruct;
- (id)backgroundTapGestureRecognizer;
- (void)backgroundTapped:(id)arg1;
- (void)cleanUpViewsInFolderView:(id)arg1;
- (void)configureIconView:(id)arg1 forIcon:(id)arg2;
- (id)customImageViewControllerForIconView:(id)arg1;
- (id)dequeueReusableIconViewOfClass:(Class)arg1;
- (id)dockBorrowedAssertion;
- (id)dockOffscreenAssertion;
- (void)dominoPivotAnimator:(id)arg1 didLayOutIconView:(id)arg2;
- (id)doneButton;
- (void)doneButtonTapped:(id)arg1;
- (id)draggingIcon;
- (id)firstNonHiddenAndValidIconListModelForFolderView:(id)arg1 outListIndex:(long long*)arg2 outPageIconListIndex:(long long*)arg3;
- (unsigned long long)folderListIndexToAnimateOutForList:(id)arg1 inFolder:(id)arg2 avoidingList:(id)arg3;
- (bool)iconListView:(id)arg1 canHandleIconDropSession:(id)arg2;
- (id)iconListView:(id)arg1 customSpringAnimationBehaviorForDroppingItem:(id)arg2;
- (void)iconListView:(id)arg1 iconDragItem:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (void)iconListView:(id)arg1 iconDropSession:(id)arg2 didPauseAtLocation:(struct CGPoint { double x1; double x2; })arg3;
- (void)iconListView:(id)arg1 iconDropSessionDidEnter:(id)arg2;
- (void)iconListView:(id)arg1 iconDropSessionDidExit:(id)arg2;
- (id)iconListView:(id)arg1 iconDropSessionDidUpdate:(id)arg2;
- (void)iconListView:(id)arg1 performIconDrop:(id)arg2;
- (id)iconListView:(id)arg1 previewForDroppingIconDragItem:(id)arg2 proposedPreview:(id)arg3;
- (bool)iconListView:(id)arg1 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg2 onIconView:(id)arg3;
- (void)iconListView:(id)arg1 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg2;
- (void)iconListView:(id)arg1 willUseIconView:(id)arg2 forDroppingIconDragItem:(id)arg3;
- (bool)iconView:(id)arg1 canAddDragItemsToSession:(id)arg2;
- (id)iconView:(id)arg1 dragPreviewForItem:(id)arg2 session:(id)arg3 previewParameters:(id)arg4;
- (void)iconView:(id)arg1 item:(id)arg2 willAnimateDragCancelWithAnimator:(id)arg3;
- (void)iconView:(id)arg1 willAnimateDragLiftWithAnimator:(id)arg2 session:(id)arg3;
- (bool)iconViewCanBeginDrags:(id)arg1;
- (void)iconViewWillBeginDrag:(id)arg1 session:(id)arg2;
- (bool)isIconViewRecycled:(id)arg1;
- (long long)layoutAction;
- (long long)layoutConfiguration;
- (void)layoutDoneButtonInFolderView:(id)arg1 metrics:(const struct SBRootFolderViewMetrics { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_6_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_6_1_2; } x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; double x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; }*)arg2;
- (void)layoutScrollViewAndRootListViewInFolderView:(id)arg1;
- (void)layoutSubviews;
- (void)layoutTitleLabelsInFolderView:(id)arg1;
- (void)makeRootListViewAnimated:(bool)arg1;
- (id)newCellBackgroundMaterialViewWithInitialWeighting:(double)arg1;
- (id)pageControlBorrowedAssertion;
- (void)pageManagementCellViewControllerDidReceiveTap:(id)arg1;
- (id)pageManagementScrollView;
- (void)recycleIconView:(id)arg1;
- (id)rootFolderView;
- (id)rootListView;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setBackgroundTapGestureRecognizer:(id)arg1;
- (void)setDockBorrowedAssertion:(id)arg1;
- (void)setDockOffscreenAssertion:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setDraggingIcon:(id)arg1;
- (void)setLayoutAction:(long long)arg1;
- (void)setLayoutConfiguration:(long long)arg1;
- (void)setPageControlBorrowedAssertion:(id)arg1;
- (void)setPageManagementScrollView:(id)arg1;
- (void)setRootFolderView:(id)arg1;
- (void)setRootListView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTransitionCount:(unsigned long long)arg1;
- (id)titleLabel;
- (unsigned long long)transitionCount;
- (void)transitionToActive:(bool)arg1 usingAnimator:(id)arg2;

@end
