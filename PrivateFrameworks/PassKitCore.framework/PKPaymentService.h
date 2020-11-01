/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentService : NSObject <PKPaymentServiceExportedInterface, PKTapToRadarDelegate, PKXPCServiceDelegate> {
    _Atomic bool  _cachedFieldPropertiesValid;
    <PKPaymentServiceDelegate> * _delegate;
    bool  _forceConnectionOnResume;
    bool  _hasPaymentDeviceFieldProperties;
    unsigned long long  _interfaceType;
    NSMutableArray * _pendingInvitationRequests;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _pendingInvitationRequestsLock;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSString *defaultPaymentPassUniqueIdentifier;
@property (nonatomic) <PKPaymentServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPaymentDeviceFieldProperties;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKExpressTransactionState *outstandingExpressTransactionState;
@property (nonatomic, readonly) PKFieldProperties *paymentDeviceFieldProperties;
@property (nonatomic, retain) PKPaymentWebServiceContext *sharedPaymentWebServiceContext;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessDelegate:(id /* block */)arg1;
- (id)_existingRemoteObjectProxy;
- (id)_extendedRemoteObjectProxy;
- (id)_extendedRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_extendedRemoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_extendedSynchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)_hasInterfaceOfType:(unsigned long long)arg1;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (void)_sharedPaymentWebServiceContextUsingSynchronousProxy:(bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 usingSynchronousProxy:(bool)arg4 completion:(id /* block */)arg5;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)accountAttestationAnonymizationSaltWithCompletion:(id /* block */)arg1;
- (void)addPlaceholderPassWithConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)addSharingInvitationReceipts:(id)arg1 onCredentialWithIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)addSubcredential:(id)arg1 fromSharingInvitation:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)ambiguousPassUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)ambiguousTransactionWithServiceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6;
- (void)approvedTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)archiveMessageWithIdentifier:(id)arg1;
- (void)balanceReminderThresholdForBalance:(id)arg1 pass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)balancesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)canAcceptInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)cashbackByPeriodForTransactionSourceIdentifiers:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 calendar:(id)arg4 calendarUnit:(unsigned long long)arg5 type:(long long)arg6 completion:(id /* block */)arg7;
- (id)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1;
- (void)categoryVisualizationMagnitudesForPassUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)commutePlanReminderForCommputePlan:(id)arg1 pass:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)conflictingExpressPassIdentifiersForPassInformation:(id)arg1 withReferenceExpressState:(id)arg2 completion:(id /* block */)arg3;
- (void)consistencyCheck;
- (void)credentialWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (void)declineRelatedSharingInvitationsIfNecessary:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)defaultExpressFelicaTransitPassIdentifier;
- (id)defaultExpressTransitPassIdentifier;
- (id)defaultPaymentApplicationForPassUniqueIdentifier:(id)arg1;
- (void)defaultPaymentPassIngestionSpecificIdentifier:(id /* block */)arg1;
- (id)defaultPaymentPassUniqueIdentifier;
- (id)delegate;
- (void)deleteAllTransactionsForTransactionSourceIdentifiers:(id)arg1;
- (void)deleteMessagesForPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)deletePaymentTransactionWithIdentifier:(id)arg1;
- (void)deleteTransactionReceiptWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)didReceiveSharingInvitationRequest:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)didReceiveSharingInvitationWithIdentifier:(id)arg1 fromOriginatorIDSHandle:(id)arg2 sharingSessionIdentifier:(id)arg3 metadata:(id)arg4 completion:(id /* block */)arg5;
- (void)didRecieveCredentialInvitation:(id)arg1;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1;
- (void)didUpdateSharingInvitationWithIdentifier:(id)arg1 reason:(long long)arg2 completion:(id /* block */)arg3;
- (void)disbursementVoucherWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 bundleIdentifier:(id)arg3 teamIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (void)displayTapToRadarAlertForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAllPaymentPasses;
- (void)enforceUpgradedPasscodePolicyWithCompletion:(id /* block */)arg1;
- (id)expressPassInformationForMode:(id)arg1;
- (id)expressPassInformationWithPassUniqueIdentifier:(id)arg1;
- (id)expressPassesInformation;
- (id)expressPassesInformationWithAutomaticSelectionTechnologyType:(long long)arg1;
- (id)expressPassesInformationWithCardType:(long long)arg1;
- (void)familyMembersIgnoringCache:(bool)arg1 completion:(id /* block */)arg2;
- (void)familyMembersWithCompletion:(id /* block */)arg1;
- (void)featureApplicationAdded:(id)arg1;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (void)featureApplicationWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)featureApplicationsForProvisioningWithCompletion:(id /* block */)arg1;
- (void)featureApplicationsWithCompletion:(id /* block */)arg1;
- (void)fetchBarcodesForPassUniqueIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)finishedKeyExchangeForCredential:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)hasPaymentDeviceFieldProperties;
- (void)hasTransactionsForTransactionSourceIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)initializeSecureElement:(id /* block */)arg1;
- (void)initializeSecureElementIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 completion:(id /* block */)arg4;
- (void)insertOrUpdatePaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)insertOrUpdateValueAddedServiceTransaction:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentTransaction:(id)arg3 completion:(id /* block */)arg4;
- (void)installmentPlanTransactionsForTransactionSourceIdentifiers:(id)arg1 accountIdentifier:(id)arg2 withRedemptionType:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 completion:(id /* block */)arg6;
- (void)installmentPlansWithTransactionReferennceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)installmentTransactionsForInstallmentPlanIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)isPassExpressWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)logoImageDataForTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)mapsMerchantsWithCompletion:(id /* block */)arg1;
- (void)markAuthenticationCompleteForTransactionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)matchingInvitationOnDevice:(id)arg1 withTimeout:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)messagesAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)messagesForPaymentPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)noteAccountDeleted;
- (id)outstandingExpressTransactionState;
- (void)passOwnershipTokenWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)passUniqueIdentifierForTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)passUniqueIdentifierForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)passWithUniqueIdentifier:(id)arg1 didReceiveValueAddedServiceTransaction:(id)arg2;
- (void)passbookUIServiceDidLaunch;
- (void)paymentDeviceDidEnterFieldWithProperties:(id)arg1;
- (void)paymentDeviceDidExitField;
- (id)paymentDeviceFieldProperties;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableMessageService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didEnableTransactionService:(bool)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveBalanceUpdate:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didReceiveMessage:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateBalanceReminder:(id)arg2 forBalanceWithIdentifier:(id)arg3;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCategoryVisualizationWithStyle:(long long)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateCredential:(id)arg2;
- (void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithTransitPassProperties:(id)arg2;
- (void)pendingTransactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)performDeviceCheckInWithCompletion:(id /* block */)arg1;
- (void)performProductActionRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)photosForFamilyMembersWithDSIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)prepareProvisioningTarget:(id)arg1 checkFamilyCircle:(bool)arg2 completion:(id /* block */)arg3;
- (void)processTransitTransactionEventWithHistory:(id)arg1 transactionDate:(id)arg2 forPaymentApplication:(id)arg3 withPassUniqueIdentifier:(id)arg4 expressTransactionState:(id)arg5;
- (void)processedAuthenticationMechanism:(unsigned long long)arg1 forTransactionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)productsWithCompletion:(id /* block */)arg1;
- (void)provideEncryptedPushProvisioningTarget:(id)arg1 sharingInstanceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)pushProvisioningSharingIdentifiers:(id /* block */)arg1;
- (void)recomputeCategoryVisualizationMangitudesForPassUniqueID:(id)arg1 style:(long long)arg2;
- (void)redeemEncryptedProvisioningTarget:(id)arg1 completion:(id /* block */)arg2;
- (void)redeemProvisioningSharingIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)registerAuxiliaryCapabilityForPassUniqueIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)registerCredentialsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteServiceDidSuspend:(id)arg1;
- (void)removeExpressPassWithUniqueIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)removeExpressPassesWithCardType:(long long)arg1 completion:(id /* block */)arg2;
- (void)removeMapsDataForTransactionWithIdentifier:(id)arg1 forTransactionSourceIdentifier:(id)arg2 issueReportIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)removeProductsCache;
- (void)removeSharingInvitation:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeSharingInvitationReceiptWithIdentifiers:(id)arg1 onCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)requestBackgroundRegistrationForCredentialWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)requiresUpgradedPasscodeWithCompletion:(id /* block */)arg1;
- (void)retrieveDecryptedBarcodeCredentialForPassUniqueIdentifier:(id)arg1 authorization:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)retrievePINEncryptionCertificateForPassUniqueIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)revokeCredentialsWithIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)sanitizeExpressPasses;
- (void)scheduleAutomaticPresentationAvailableNotificationForPassWithUniqueIdentifier:(id)arg1 handler:(id /* block */)arg2;
- (void)scheduleDeviceCheckInWithStartTimeOffset:(double)arg1;
- (void)scheduleDeviceUpgradeTasksIfNecessaryWithRandomizeStartDate:(bool)arg1;
- (void)scheduleSetupReminders;
- (void)sendAllPassTransactions;
- (void)setAccountAttestationAnonymizationSalt:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setBalanceReminder:(id)arg1 forBalance:(id)arg2 pass:(id)arg3 completion:(id /* block */)arg4;
- (void)setCommutePlanReminder:(id)arg1 forCommutePlan:(id)arg2 pass:(id)arg3 completion:(id /* block */)arg4;
- (void)setDefaultExpressFelicaTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultExpressTransitPassIdentifier:(id)arg1 withCredential:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentApplication:(id)arg1 forPassUniqueIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)setDefaultPaymentPassUniqueIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceCheckInContextBuildVersion:(id)arg1 outstandingAction:(long long)arg2 forRegion:(id)arg3;
- (void)setDeviceUpgradeTasksContextBuildVersion:(id)arg1 upgradeTaskVersion:(long long)arg2 retryCount:(long long)arg3;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)setExpressWithPassInformation:(id)arg1 credential:(id)arg2 handler:(id /* block */)arg3;
- (void)setSharedPaymentWebServiceContext:(id)arg1;
- (id)sharedPaymentWebServiceContext;
- (void)sharedPaymentWebServiceContextWithCompletion:(id /* block */)arg1;
- (void)sharingInvitationWasInvalidated:(id)arg1 withCredentialIdentifier:(id)arg2 error:(id)arg3 completion:(id /* block */)arg4;
- (void)simulateDefaultExpressTransitPassIdentifier:(id)arg1 forExpressMode:(id)arg2;
- (void)simulatePaymentPush;
- (void)simulatePaymentPushTopic:(id)arg1;
- (void)startBackgroundVerificationObserverForPass:(id)arg1 verificationMethod:(id)arg2;
- (void)statusForShareableCredentials:(id)arg1 completion:(id /* block */)arg2;
- (void)storePassOwnershipToken:(id)arg1 withIdentifier:(id)arg2;
- (void)storeTransactionReceiptData:(id)arg1 completion:(id /* block */)arg2;
- (void)subcredentialInvitationsWithCompletion:(id /* block */)arg1;
- (void)submitApplyRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)submitBarcodePaymentEvent:(id)arg1 forPassUniqueIdentifier:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)submitDeleteRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)submitDocumentRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)submitEncryptedPIN:(id)arg1 forTransactionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)submitTermsRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)submitTransactionAnswerForTransaction:(id)arg1 questionType:(unsigned long long)arg2 answer:(id)arg3 completion:(id /* block */)arg4;
- (void)submitUserConfirmation:(bool)arg1 forTransactionIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3;
- (void)submitVerificationCode:(id)arg1 verificationData:(id)arg2 forDPANIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (void)transactionBatch:(id)arg1 moreComing:(bool)arg2 readyForNextBatch:(id /* block */)arg3;
- (void)transactionCountByPeriodForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 calendar:(id)arg4 unit:(unsigned long long)arg5 includePurchaseTotal:(bool)arg6 completion:(id /* block */)arg7;
- (void)transactionReceiptForTransactionWithIdentifier:(id)arg1 updateIfNecessary:(bool)arg2 completion:(id /* block */)arg3;
- (void)transactionReceiptWithUniqueID:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didReceiveTransaction:(id)arg2;
- (void)transactionSourceIdentifier:(id)arg1 didRemoveTransactionWithIdentifier:(id)arg2;
- (void)transactionSourceTypeForTransactionSourceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionWithIdentifier:(id)arg1 didDownloadTransactionReceipt:(id)arg2;
- (void)transactionWithReferenceIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)transactionWithTransactionIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)transactionsAppLaunchTokenForPassWithUniqueIdentifier:(id)arg1;
- (void)transactionsForRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 matchingMerchant:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(id /* block */)arg6;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withMerchantCategory:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(id /* block */)arg8;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withPeerPaymentCounterpartHandles:(id)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 limit:(long long)arg5 completion:(id /* block */)arg6;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 limit:(long long)arg4 completion:(id /* block */)arg5;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 limit:(long long)arg6 completion:(id /* block */)arg7;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionSource:(unsigned long long)arg2 withBackingData:(unsigned long long)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(long long)arg7 completion:(id /* block */)arg8;
- (void)transactionsForTransactionSourceIdentifiers:(id)arg1 withTransactionType:(long long)arg2 withTransactionSource:(unsigned long long)arg3 withBackingData:(unsigned long long)arg4 startDate:(id)arg5 endDate:(id)arg6 limit:(long long)arg7 completion:(id /* block */)arg8;
- (void)transactionsRequiringReviewForAccountWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)transactionsWithTransactionSource:(unsigned long long)arg1 withBackingData:(unsigned long long)arg2 limit:(long long)arg3 completion:(id /* block */)arg4;
- (void)transitStateWithPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 completion:(id /* block */)arg3;
- (void)unscheduleDeviceCheckIn;
- (void)unscheduleDeviceUpgradeTaskActivity;
- (void)updateMetadataOnPassWithIdentifier:(id)arg1 credential:(id)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)valueAddedServiceTransactionsForPassWithUniqueIdentifier:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (void)valueAddedServiceTransactionsForPaymentTransaction:(id)arg1 limit:(long long)arg2 completion:(id /* block */)arg3;
- (bool)willPassWithUniqueIdentifierAutomaticallyBecomeDefault:(id)arg1;

@end