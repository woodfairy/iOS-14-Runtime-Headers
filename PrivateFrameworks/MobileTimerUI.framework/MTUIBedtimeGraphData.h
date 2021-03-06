/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIBedtimeGraphData : NSObject {
    NSArray * _allColumnData;
    NSCalendar * _calendar;
    NSDateInterval * _firstSleepAlarmInterval;
    MTAlarm * _sleepAlarm;
    bool  _useTrailingWeek;
}

@property (nonatomic, retain) NSArray *allColumnData;
@property (nonatomic, retain) NSCalendar *calendar;
@property (nonatomic, readonly) long long columnCount;
@property (nonatomic, readonly) NSDate *earliestStartOnFirstDay;
@property (nonatomic, readonly) NSDateInterval *firstSleepAlarmInterval;
@property (nonatomic, readonly) NSDate *latestEndOnFirstDay;
@property (nonatomic, retain) MTAlarm *sleepAlarm;
@property (nonatomic) bool useTrailingWeek;

- (void).cxx_destruct;
- (long long)_earliestDay;
- (id)allColumnData;
- (id)calendar;
- (long long)columnCount;
- (id)earliestStartOnFirstDay;
- (id)firstSleepAlarmInterval;
- (id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2;
- (id)initWithSleepData:(id)arg1 sleepAlarm:(id)arg2 useTrailingWeek:(bool)arg3;
- (id)latestEndOnFirstDay;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (void)setAllColumnData:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setSleepAlarm:(id)arg1;
- (void)setUseTrailingWeek:(bool)arg1;
- (id)sleepAlarm;
- (id)sleepAlarmIntervalForDay:(long long)arg1;
- (bool)useTrailingWeek;

@end
