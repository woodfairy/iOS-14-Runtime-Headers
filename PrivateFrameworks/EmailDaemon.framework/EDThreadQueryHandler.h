/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDThreadQueryHandler : NSObject <EDMessageRepositoryQueryHandler, EDThreadMigratorDelegate, EFLoggable, EMMessageListItemQueryResultsObserver> {
    <EDThreadQueryHandlerDelegate> * _delegate;
    EDPersistenceHookRegistry * _hookRegistry;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _isRunning;
    EDMessagePersistence * _messagePersistence;
    EMObjectID * _observationIdentifier;
    <EDResumable> * _observerResumer;
    EFQuery * _query;
    <EDRemoteSearchProvider> * _remoteSearchProvider;
    <EMMessageListItemQueryResultsObserver> * _resultsObserver;
    _Atomic BOOL  _state;
    EDThreadPersistence * _threadPersistence;
    EMThreadScope * _threadScope;
    EFLocked * _underlyingHandler;
    EDVIPManager * _vipManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <EDThreadQueryHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EDPersistenceHookRegistry *hookRegistry;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EMObjectID *observationIdentifier;
@property (nonatomic, readonly) <EDResumable> *observerResumer;
@property (nonatomic, readonly, copy) EFQuery *query;
@property (nonatomic, readonly) <EDRemoteSearchProvider> *remoteSearchProvider;
@property (nonatomic, readonly) <EMMessageListItemQueryResultsObserver> *resultsObserver;
@property (readonly) Class superclass;
@property (nonatomic, readonly) EDThreadPersistence *threadPersistence;
@property (nonatomic, readonly) EMThreadScope *threadScope;
@property (nonatomic, readonly) EFLocked *underlyingHandler;
@property (nonatomic, readonly) EDVIPManager *vipManager;

+ (id)log;

- (void).cxx_destruct;
- (void)_createUnderlyingHandlerIfNeededAndStart;
- (void)_tearDownWithQueryHandlerBlock:(id /* block */)arg1;
- (void)cancel;
- (void)checkIfPrecomputedStateIsAvailable;
- (id)delegate;
- (id)hookRegistry;
- (id)inMemoryMessageObjectIDsForThread:(id)arg1;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2 threadPersistence:(id)arg3 hookRegistry:(id)arg4 vipManager:(id)arg5 remoteSearchProvider:(id)arg6 observer:(id)arg7 observationIdentifier:(id)arg8 delegate:(id)arg9 observationResumer:(id)arg10;
- (bool)isStarted;
- (id)messagePersistence;
- (id)messageReconciliationQueries;
- (id)observationIdentifier;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 after:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedAddedObjectIDs:(id)arg2 before:(id)arg3 extraInfo:(id)arg4;
- (void)observer:(id)arg1 matchedChangesForObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedDeletedObjectIDs:(id)arg2;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 after:(id)arg3;
- (void)observer:(id)arg1 matchedMovedObjectIDs:(id)arg2 before:(id)arg3;
- (void)observer:(id)arg1 matchedOldestItemsUpdatedForMailboxes:(id)arg2;
- (void)observer:(id)arg1 replacedExistingObjectID:(id)arg2 withNewObjectID:(id)arg3;
- (void)observer:(id)arg1 wasUpdated:(id)arg2;
- (void)observerDidFinishInitialLoad:(id)arg1;
- (void)observerDidFinishRemoteSearch:(id)arg1;
- (id)observerResumer;
- (void)observerWillRestart:(id)arg1;
- (id)query;
- (id)remoteSearchProvider;
- (void)requestSummaryForMessageObjectID:(id)arg1;
- (id)resultsObserver;
- (void)start;
- (void)tearDown;
- (void)test_tearDown;
- (id)threadForObjectID:(id)arg1 isPersisted:(bool*)arg2 error:(id*)arg3;
- (void)threadMigratorDidComplete:(id)arg1;
- (id)threadPersistence;
- (id)threadReconciliationQueries;
- (id)threadScope;
- (void)triggerMigration;
- (id)underlyingHandler;
- (id)vipManager;

@end