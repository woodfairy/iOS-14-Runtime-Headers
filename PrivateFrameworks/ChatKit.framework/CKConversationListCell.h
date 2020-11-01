/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKConversationListCell : UITableViewCell <CKConversationListCell> {
    bool  __editingPins;
    UIImageView * _chevronImageView;
    UIButton * _closeButton;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _containerBounds;
    CKConversation * _conversation;
    UIDateLabel * _dateLabel;
    NSObject<CKConversationListCellDelegate> * _delegate;
    bool  _freezeSummaryText;
    CKLabel * _fromLabel;
    CAGradientLayer * _gradient;
    bool  _isPlaceholder;
    NSDate * _searchMessageDate;
    NSString * _searchMessageGUID;
    NSString * _searchSummaryText;
    bool  _shouldHidePreviewSummary;
    bool  _shouldLabelsBeHighlighted;
    UILabel * _summaryBlockedLabel;
    UILabel * _summaryLabel;
    CKConversationListTypingIndicatorView * _typingIndicatorView;
    bool  _verified;
    double  _widthForDeterminingAvatarVisibility;
}

@property (nonatomic) bool _editingPins;
@property (nonatomic, readonly) CKAvatarView *avatarView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } containerBounds;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKConversationListCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool freezeSummaryText;
@property (nonatomic, readonly) CKLabel *fromLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *searchMessageDate;
@property (nonatomic, copy) NSString *searchMessageGUID;
@property (nonatomic, copy) NSString *searchSummaryText;
@property (nonatomic) bool shouldHidePreviewSummary;
@property (nonatomic) bool shouldLabelsBeHighlighted;
@property (readonly) Class superclass;
@property (nonatomic) bool verified;
@property (nonatomic) double widthForDeterminingAvatarVisibility;

+ (double)cellHeightForDisplayScale:(double)arg1;
+ (id)identifierForConversation:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (bool)_editingPins;
- (void)_increaseContrastDidChange:(id)arg1;
- (id)_makeSummaryAttributedStringWithText:(id)arg1 multiwayConversation:(id)arg2;
- (void)_performBlock:(id /* block */)arg1 animated:(bool)arg2;
- (id)avatarView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (void)contentSizeCategoryDidChange;
- (id)conversation;
- (id)dateLabel;
- (void)dealloc;
- (id)delegate;
- (void)deleteButtonTapped;
- (void)didHoverOverCell:(id)arg1;
- (bool)freezeSummaryText;
- (id)fromLabel;
- (void)increaseContrastDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)lastMessageIsTypingIndicator;
- (void)prepareForReuse;
- (id)searchMessageDate;
- (id)searchMessageGUID;
- (id)searchSummaryText;
- (void)setContainerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditingPins:(bool)arg1 animated:(bool)arg2;
- (void)setFreezeSummaryText:(bool)arg1;
- (void)setSearchMessageDate:(id)arg1;
- (void)setSearchMessageGUID:(id)arg1;
- (void)setSearchSummaryText:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)setShouldHidePreviewSummary:(bool)arg1;
- (void)setShouldLabelsBeHighlighted:(bool)arg1;
- (void)setVerified:(bool)arg1;
- (void)setWidthForDeterminingAvatarVisibility:(double)arg1;
- (void)set_editingPins:(bool)arg1;
- (bool)shouldHidePreviewSummary;
- (bool)shouldLabelsBeHighlighted;
- (bool)showingEditControl;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)summaryAttributedTextForBlockedConversationWithIcon:(bool)arg1;
- (id)summaryLabel;
- (id)summaryLabelTextColor;
- (id)unreadIndicatorColorForVisibility:(bool)arg1;
- (id)unreadIndicatorImageForVisibility:(bool)arg1 withMuteState:(bool)arg2;
- (unsigned long long)unreadMessageCount;
- (void)updateBlockedSummaryLabelIfNeeded;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateContentsForConversation:(id)arg1 fastPreview:(bool)arg2;
- (void)updateForEditing:(bool)arg1;
- (void)updateFromLabelWithText:(id)arg1;
- (void)updateLabelTextColors;
- (void)updateSummaryTextForConversation:(id)arg1 fastPreview:(bool)arg2;
- (void)updateUnreadIndicatorForCurrentConversation;
- (void)updateUnreadIndicatorWithImage:(id)arg1 tintColor:(id)arg2;
- (void)updateWithForwardedConfigurationState:(unsigned long long)arg1;
- (void)updateWithSearchResult:(id)arg1;
- (bool)verified;
- (double)widthForDeterminingAvatarVisibility;

@end