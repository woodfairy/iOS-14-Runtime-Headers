/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSScheduleManager : NSObject {
    DNDSScheduleSettings * _currentScheduleSettings;
    <DNDSScheduleManagerDataSource> * _dataSource;
    DNDSModeAssertionManager * _modeAssertionManager;
}

@property (nonatomic) <DNDSScheduleManagerDataSource> *dataSource;

- (void).cxx_destruct;
- (void)_refreshWithScheduleSettings:(id)arg1 context:(id)arg2;
- (id)dataSource;
- (id)initWithModeAssertionManager:(id)arg1;
- (void)refresh;
- (void)setDataSource:(id)arg1;

@end
