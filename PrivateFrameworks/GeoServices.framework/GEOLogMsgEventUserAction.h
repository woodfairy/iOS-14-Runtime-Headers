/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEventUserAction : PBCodable <NSCopying> {
    struct { 
        unsigned int has_userActionEventAction : 1; 
        unsigned int has_userActionEventTarget : 1; 
        unsigned int read_userActionEventKey : 1; 
        unsigned int read_userActionEventValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _userActionEventAction;
    NSString * _userActionEventKey;
    int  _userActionEventTarget;
    NSString * _userActionEventValue;
}

@property (nonatomic) bool hasUserActionEventAction;
@property (nonatomic, readonly) bool hasUserActionEventKey;
@property (nonatomic) bool hasUserActionEventTarget;
@property (nonatomic, readonly) bool hasUserActionEventValue;
@property (nonatomic) int userActionEventAction;
@property (nonatomic, retain) NSString *userActionEventKey;
@property (nonatomic) int userActionEventTarget;
@property (nonatomic, retain) NSString *userActionEventValue;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsUserActionEventAction:(id)arg1;
- (int)StringAsUserActionEventTarget:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserActionEventAction;
- (bool)hasUserActionEventKey;
- (bool)hasUserActionEventTarget;
- (bool)hasUserActionEventValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasUserActionEventAction:(bool)arg1;
- (void)setHasUserActionEventTarget:(bool)arg1;
- (void)setUserActionEventAction:(int)arg1;
- (void)setUserActionEventKey:(id)arg1;
- (void)setUserActionEventTarget:(int)arg1;
- (void)setUserActionEventValue:(id)arg1;
- (int)userActionEventAction;
- (id)userActionEventActionAsString:(int)arg1;
- (id)userActionEventKey;
- (int)userActionEventTarget;
- (id)userActionEventTargetAsString:(int)arg1;
- (id)userActionEventValue;
- (void)writeTo:(id)arg1;

@end