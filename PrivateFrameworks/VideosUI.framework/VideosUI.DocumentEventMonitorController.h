/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VideosUI.DocumentEventMonitorController : NSObject <VUIAppDocumentUpdateEventMonitorObserving> {
    void $__lazy_storage_$_updateEventStore;
    void controllerName;
    void documentEventIterable;
    void eventEligibleViewModels;
    void hasRefreshEvents;
    void isDocumentDirty;
    void isDocumentDirtyForRefreshEvents;
    void isSuspended;
    void lastMonitoringReason;
    void templateViewModel;
}

- (void).cxx_destruct;
- (void)appDocumentDidReceiveEvent:(id)arg1;
- (void)appDocumentHasBecomeActive;
- (id)init;

@end