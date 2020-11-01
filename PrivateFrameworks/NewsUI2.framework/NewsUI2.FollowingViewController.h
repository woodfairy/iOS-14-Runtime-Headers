/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.FollowingViewController : TUViewController <TSFollowingViewControllerType, TSTabBarSplitViewAutoObserver, TSViewControllerTabbable, UISearchBarDelegate> {
    void alertPresenter;
    void blueprintSelectionProvider;
    void blueprintViewController;
    void bundleSubscriptionManager;
    void commands;
    void eventHandler;
    void featureAvailability;
    void lazySearchResultsViewController;
    void lazySearchViewController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  previousSelectedIndexPath;
    void purchaseController;
    void searchProvider;
    void styler;
}

@property (nonatomic, readonly) UIView *contentView;

- (void).cxx_destruct;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (id)contentScrollView;
- (id)contentView;
- (void)delete:(id)arg1;
- (void)editButtonTapped;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)tabBarControllerDidDoubleTapBarButtonItem:(id)arg1;
- (void)tabBarSplitViewWillChangeDisplayModeToDisplayMode:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end