/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

@interface CPMessageListItem : NSObject <CPListItemPrivate, CPListTemplateItem, NSSecureCoding> {
    NSString * _conversationIdentifier;
    NSString * _detailText;
    NSUUID * _identifier;
    CPMessageListItemLeadingConfiguration * _leadingConfiguration;
    CPListTemplate * _listTemplate;
    NSString * _phoneOrEmailAddress;
    NSString * _text;
    CPMessageListItemTrailingConfiguration * _trailingConfiguration;
    NSString * _trailingText;
    id  _userInfo;
}

@property (nonatomic, copy) NSString *conversationIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) CPMessageListItemLeadingConfiguration *leadingConfiguration;
@property (nonatomic) CPListTemplate *listTemplate;
@property (nonatomic, copy) NSString *phoneOrEmailAddress;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) CPMessageListItemTrailingConfiguration *trailingConfiguration;
@property (nonatomic, copy) NSString *trailingText;
@property (nonatomic, retain) id userInfo;

// Image: /System/Library/Frameworks/CarPlay.framework/CarPlay

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (id)conversationIdentifier;
- (id)description;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithConversationIdentifier:(id)arg1 text:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6;
- (id)initWithFullName:(id)arg1 phoneOrEmailAddress:(id)arg2 leadingConfiguration:(id)arg3 trailingConfiguration:(id)arg4 detailText:(id)arg5 trailingText:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)leadingConfiguration;
- (id)listTemplate;
- (id)phoneOrEmailAddress;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setLeadingConfiguration:(id)arg1;
- (void)setListTemplate:(id)arg1;
- (void)setPhoneOrEmailAddress:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTrailingConfiguration:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)text;
- (id)trailingConfiguration;
- (id)trailingText;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)_conversation;
- (id)_dateStringFromDate:(id)arg1 dateFormatter:(id)arg2 timeFormatter:(id)arg3;
- (id)initWithConversation:(id)arg1 dateFormatter:(id)arg2 timeFormatter:(id)arg3;

@end
