/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKEditableSearchResultCell : UICollectionViewCell {
    bool  __ck_editing;
    UIImageView * _checkmarkView;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) UIImageView *checkmarkView;

- (void).cxx_destruct;
- (bool)_ck_isEditing;
- (void)_ck_setEditing:(bool)arg1;
- (id)checkmarkView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setCheckmarkView:(id)arg1;
- (void)setSelected:(bool)arg1;

@end
