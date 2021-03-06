/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding> {
    NSDictionary * _context;
    NSArray * _destinations;
    NSString * _logKey;
    double  _timeout;
}

@property (nonatomic, retain) NSDictionary *context;
@property (nonatomic, retain) NSArray *destinations;
@property (nonatomic, retain) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logKey;
- (void)setContext:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setLogKey:(id)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;

@end
