/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKTranscriptLabelCell : CKTranscriptCell <CKTranscriptCollectionViewCellProtocol> {
    UILabel * _label;
    bool  _wantsContactImageLayout;
    bool  _wantsOffsetForReplyLine;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsContactImageLayout;
@property (nonatomic) bool wantsOffsetForReplyLine;

+ (id)label;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_fadeInLabelAtStartTime:(double)arg1 completion:(id /* block */)arg2;
- (void)addFilter:(id)arg1;
- (id)animationWithKeyPath:(id)arg1 beginTime:(double)arg2 duration:(double)arg3 fromValue:(id)arg4 toValue:(id)arg5;
- (id)attributedText;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentAlignmentRect;
- (bool)hidesCheckmark;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviewsForAlignmentContents;
- (void)layoutSubviewsForContents;
- (void)performInsertion:(id /* block */)arg1;
- (void)prepareForReuse;
- (void)setAttributedText:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOrientation:(BOOL)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (void)setWantsOffsetForReplyLine:(bool)arg1;
- (bool)wantsContactImageLayout;
- (bool)wantsOffsetForReplyLine;

@end
