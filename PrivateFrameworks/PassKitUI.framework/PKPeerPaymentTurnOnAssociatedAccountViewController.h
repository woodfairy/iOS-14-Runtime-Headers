/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {
    long long  _context;
    <PKPeerPaymentAssociatedAccountSetupDelegate> * _delegate;
    PKFamilyMember * _familyMember;
    PKFamilyMember * _viewer;
}

@property (nonatomic) <PKPeerPaymentAssociatedAccountSetupDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFamilyMember:(id)arg1 viewer:(id)arg2 delegate:(id)arg3 context:(long long)arg4;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
