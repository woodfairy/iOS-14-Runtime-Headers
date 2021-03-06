/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MapsSyncManagedReviewedPlace : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedAnonymousCredential *anonymousCredential;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) bool hasUserReviewed;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long muid;
@property (nonatomic) long long positionIndex;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
