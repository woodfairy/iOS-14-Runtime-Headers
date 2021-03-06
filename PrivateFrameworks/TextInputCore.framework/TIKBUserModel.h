/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKBUserModel : TIUserModel <TIKBMetricProviding, TIKBUserModeling, TIUserModelConfigurationDelegate>

@property (nonatomic, readonly) NSArray *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *kbContexts;
@property (readonly) Class superclass;

+ (id)userModelWithInputMode:(id)arg1 userModelDataStore:(id)arg2;

- (id)dictForPowerLog;
- (id)durableCounterKeys;
- (id)initWithInputMode:(id)arg1 userModelDataStore:(id)arg2;
- (id)kbContexts;
- (void)sessionDidEnd:(id)arg1 aligned:(id)arg2;
- (id)settingsDictionary;
- (void)trackPowerLogIfNecessary;
- (Class)userModelValuesClass;
- (id)valueForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3;
- (id)valuesByBucketedWordLengthForMetricWithName:(id)arg1 withContext:(id)arg2 fromRegistry:(id)arg3;

@end
