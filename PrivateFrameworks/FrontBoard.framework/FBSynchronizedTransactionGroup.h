/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBSynchronizedTransactionGroup : FBTransaction <FBSynchronizedTransaction, FBSynchronizedTransactionDelegate> {
    bool  _commitAllowed;
    bool  _didCommit;
    bool  _readyForCommit;
    <FBSynchronizedTransactionGroupDelegate> * _synchronizationDelegate;
    NSMutableSet * _synchronizedTransactions;
    NSMutableSet * _synchronizedTransactionsAwaitingCommitReadiness;
    NSMutableSet * _synchronizedTransactionsReadyToCommit;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) <FBSynchronizedTransactionDelegate> *synchronizationDelegate;

- (void).cxx_destruct;
- (bool)_canBeInterrupted;
- (void)_checkPreconditionsAndCommitIfReady;
- (void)_childTransactionDidComplete:(id)arg1;
- (void)_didComplete;
- (void)_performSynchronizedCommit:(id)arg1;
- (void)_performSynchronizedCommitIfReady;
- (bool)_shouldFailForChildTransaction:(id)arg1;
- (void)addSynchronizedTransaction:(id)arg1;
- (id)init;
- (bool)isReadyForSynchronizedCommit;
- (void)performSynchronizedCommit;
- (void)setSynchronizationDelegate:(id)arg1;
- (id)synchronizationDelegate;
- (void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2;
- (void)synchronizedTransactionReadyToCommit:(id)arg1;
- (id)synchronizedTransactions;

@end