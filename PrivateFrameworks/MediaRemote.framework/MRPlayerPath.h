/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRPlayerPath : NSObject <NSCopying, NSSecureCoding> {
    MRClient * _client;
    MROrigin * _origin;
    MRPlayer * _player;
}

@property (nonatomic, copy) MRClient *client;
@property (nonatomic, readonly, copy) NSData *data;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly) MRPlayerPath *localResolvedPlayerPath;
@property (nonatomic, copy) MROrigin *origin;
@property (nonatomic, copy) MRPlayer *player;
@property (nonatomic, readonly) _MRNowPlayingPlayerPathProtobuf *protobuf;
@property (getter=isResolved, nonatomic, readonly) bool resolved;
@property (nonatomic, readonly) MRPlayerPath *skeleton;
@property (getter=isSystemMediaApplication, nonatomic, readonly) bool systemMediaApplication;

+ (id)localPlayerPath;
+ (id)localResolvedPlayerPathFromPlayerPath:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithOrigin:(id)arg1 client:(id)arg2 player:(id)arg3;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isResolved;
- (bool)isSystemMediaApplication;
- (id)localResolvedPlayerPath;
- (id)origin;
- (id)player;
- (id)playerPathByRedirectingToOrigin:(id)arg1;
- (id)protobuf;
- (void)setClient:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPlayer:(id)arg1;
- (id)skeleton;

@end