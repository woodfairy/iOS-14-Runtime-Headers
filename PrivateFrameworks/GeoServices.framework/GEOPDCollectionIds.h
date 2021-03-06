/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCollectionIds : PBCodable <NSCopying> {
    NSMutableArray * _collectionIds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *collectionIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)collectionIdComponentForPlaceData:(id)arg1;
+ (Class)collectionIdType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCollectionId:(id)arg1;
- (void)clearCollectionIds;
- (void)clearUnknownFields:(bool)arg1;
- (id)collectionIdAtIndex:(unsigned long long)arg1;
- (id)collectionIds;
- (unsigned long long)collectionIdsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCollectionIds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
