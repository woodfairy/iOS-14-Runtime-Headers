/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface _PSContactSuggestion : NSObject <NSSecureCoding> {
    NSString * _contactIdentifier;
    NSSet * _daysInteracted;
    NSDictionary * _handleAndAppFrequencies;
    NSDictionary * _handleAndAppRegularityScores;
    double  _regularityScore;
    unsigned long long  _totalFrequency;
}

@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSSet *daysInteracted;
@property (nonatomic, copy) NSDictionary *handleAndAppFrequencies;
@property (nonatomic, copy) NSDictionary *handleAndAppRegularityScores;
@property (nonatomic) double regularityScore;
@property (nonatomic) unsigned long long totalFrequency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactIdentifier;
- (id)daysInteracted;
- (void)encodeWithCoder:(id)arg1;
- (id)handleAndAppFrequencies;
- (id)handleAndAppRegularityScores;
- (id)initWithCoder:(id)arg1;
- (double)regularityScore;
- (void)setContactIdentifier:(id)arg1;
- (void)setDaysInteracted:(id)arg1;
- (void)setHandleAndAppFrequencies:(id)arg1;
- (void)setHandleAndAppRegularityScores:(id)arg1;
- (void)setRegularityScore:(double)arg1;
- (void)setTotalFrequency:(unsigned long long)arg1;
- (unsigned long long)totalFrequency;

@end
