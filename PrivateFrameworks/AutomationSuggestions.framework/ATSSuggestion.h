/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
 */

@interface ATSSuggestion : NSObject <NSSecureCoding> {
    NSUserActivity * _activity;
    NSString * _activityString;
    NSString * _bundleID;
    INIntent * _intent;
    BMRule * _rule;
    NSString * _trialID;
    NSArray * _triggers;
}

@property (nonatomic, readonly) NSUserActivity *activity;
@property (nonatomic, retain) NSString *activityString;
@property (nonatomic, readonly, copy) NSString *bundleID;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) BMRule *rule;
@property (nonatomic, retain) NSString *trialID;
@property (nonatomic, readonly) NSArray *triggers;

+ (id)activityStringFromConsequentItem:(id)arg1 withActionRetriever:(id)arg2;
+ (id)bundleIDFromConsequentItem:(id)arg1;
+ (id)intentFromConsequentItem:(id)arg1 withActionRetriever:(id)arg2;
+ (id)suggestionFromRule:(id)arg1 withActionRetriever:(id)arg2 routineManager:(id)arg3;
+ (bool)supportsSecureCoding;
+ (id)triggerFromAntecedentItem:(id)arg1 timeRestrictionItem:(id)arg2 withRoutineManager:(id)arg3;

- (void).cxx_destruct;
- (id)actionTitle;
- (id)activity;
- (id)activityString;
- (id)bundleID;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTriggers:(id)arg1 intent:(id)arg2 activityString:(id)arg3 bundleID:(id)arg4 rule:(id)arg5;
- (id)intent;
- (id)rule;
- (void)setActivityString:(id)arg1;
- (void)setTrialID:(id)arg1;
- (id)trialID;
- (id)triggers;

@end
