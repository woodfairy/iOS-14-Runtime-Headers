/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiDPSSnapshot : PBCodable <NSCopying> {
    AWDWiFiDPSAWDLSnapshot * _awdlSnapshot;
    AWDWiFiDPSBTSnapshot * _btSnapshot;
    AWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotBE;
    AWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotBK;
    AWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotVI;
    AWDWiFiDPSPerACTxCompletionSnapshot * _txCompletionSnapshotVO;
}

@property (nonatomic, retain) AWDWiFiDPSAWDLSnapshot *awdlSnapshot;
@property (nonatomic, retain) AWDWiFiDPSBTSnapshot *btSnapshot;
@property (nonatomic, readonly) bool hasAwdlSnapshot;
@property (nonatomic, readonly) bool hasBtSnapshot;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotBE;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotBK;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotVI;
@property (nonatomic, readonly) bool hasTxCompletionSnapshotVO;
@property (nonatomic, retain) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBE;
@property (nonatomic, retain) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotBK;
@property (nonatomic, retain) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVI;
@property (nonatomic, retain) AWDWiFiDPSPerACTxCompletionSnapshot *txCompletionSnapshotVO;

- (id)awdlSnapshot;
- (id)btSnapshot;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAwdlSnapshot;
- (bool)hasBtSnapshot;
- (bool)hasTxCompletionSnapshotBE;
- (bool)hasTxCompletionSnapshotBK;
- (bool)hasTxCompletionSnapshotVI;
- (bool)hasTxCompletionSnapshotVO;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAwdlSnapshot:(id)arg1;
- (void)setBtSnapshot:(id)arg1;
- (void)setTxCompletionSnapshotBE:(id)arg1;
- (void)setTxCompletionSnapshotBK:(id)arg1;
- (void)setTxCompletionSnapshotVI:(id)arg1;
- (void)setTxCompletionSnapshotVO:(id)arg1;
- (id)txCompletionSnapshotBE;
- (id)txCompletionSnapshotBK;
- (id)txCompletionSnapshotVI;
- (id)txCompletionSnapshotVO;
- (void)writeTo:(id)arg1;

@end