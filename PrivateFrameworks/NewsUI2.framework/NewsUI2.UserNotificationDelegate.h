/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NewsUI2.UserNotificationDelegate : NSObject <UNUserNotificationCenterDelegate> {
    void bootstrapper;
    void navigator;
    void notificationHandlerManager;
    void notificationOpenSettingsHandler;
}

- (void).cxx_destruct;
- (id)init;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)userNotificationCenter:(id)arg1 openSettingsForNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
