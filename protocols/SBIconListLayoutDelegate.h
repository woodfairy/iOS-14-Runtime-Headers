/* Generated by RuntimeBrowser.
 */

@protocol SBIconListLayoutDelegate <NSObject>

@optional

- (<SBIconListLayoutAnimating> *)iconListView:(SBIconListView *)arg1 animatorForRemovingIcons:(NSArray *)arg2 proposedAnimator:(id <SBIconListLayoutAnimating>)arg3;
- (struct CGPoint { double x1; double x2; })iconListView:(SBIconListView *)arg1 originForIconCoordinate:(struct SBIconCoordinate { long long x1; long long x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedOrigin:(struct CGPoint { double x1; double x2; })arg4;
- (unsigned long long)iconListView:(SBIconListView *)arg1 rowAtPoint:(struct CGPoint { double x1; double x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedRow:(unsigned long long)arg4;
- (struct CGSize { double x1; double x2; })iconListView:(SBIconListView *)arg1 sizeThatFits:(struct CGSize { double x1; double x2; })arg2 metrics:(SBIconListViewLayoutMetrics *)arg3 proposedSize:(struct CGSize { double x1; double x2; })arg4;
- (void)iconListView:(SBIconListView *)arg1 willLayoutIconView:(SBIconView *)arg2;
- (void)iconListViewDidLayoutIcons:(SBIconListView *)arg1;

@end