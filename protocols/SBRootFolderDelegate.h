/* Generated by RuntimeBrowser.
 */

@protocol SBRootFolderDelegate <NSObject>

@required

- (bool)rootFolder:(SBRootFolder *)arg1 canAddIcon:(SBIcon *)arg2 toIconList:(SBIconListModel *)arg3 inFolder:(SBFolder *)arg4;
- (bool)rootFolder:(SBRootFolder *)arg1 canBounceIcon:(SBIcon *)arg2;
- (bool)rootFolder:(SBRootFolder *)arg1 shouldAllowBadgingForIcon:(SBIcon *)arg2;

@optional

- (void)rootFolder:(void *)arg1 wantsToDoPageHidingEducationWithCompletion:(void *)arg2; // needs 2 arg types, found 7: SBRootFolder *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end
