/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWL2Report : NSObject {
    unsigned char  _cellularBand;
    int  _cellularBandInfo;
    int  _cellularBandwidth;
    int  _cellularBars;
    NSString * _cellularCellType;
    bool  _cellularKnownGood;
    int  _cellularLQM;
    int  _cellularMCC;
    int  _cellularMNC;
    unsigned int  _cellularMode;
    int  _cellularPID;
    unsigned char  _cellularRadioTechnology;
    int  _cellularTAC;
    int  _cellularUARFCN;
    bool  _wifiKnownGood;
    int  _wifiLQM;
    int  _wifiRSSI;
    unsigned char  _wifiRadioTechnology;
}

@property (nonatomic) unsigned char cellularBand;
@property (nonatomic) int cellularBandInfo;
@property (nonatomic) int cellularBandwidth;
@property (nonatomic) int cellularBars;
@property (nonatomic, retain) NSString *cellularCellType;
@property (nonatomic) bool cellularKnownGood;
@property (nonatomic) int cellularLQM;
@property (nonatomic) int cellularMCC;
@property (nonatomic) int cellularMNC;
@property (nonatomic) unsigned int cellularMode;
@property (nonatomic) int cellularPID;
@property (nonatomic) unsigned char cellularRadioTechnology;
@property (nonatomic) int cellularTAC;
@property (nonatomic) int cellularUARFCN;
@property (nonatomic) bool wifiKnownGood;
@property (nonatomic) int wifiLQM;
@property (nonatomic) int wifiRSSI;
@property (nonatomic) unsigned char wifiRadioTechnology;

- (void).cxx_destruct;
- (unsigned char)cellularBand;
- (int)cellularBandInfo;
- (int)cellularBandwidth;
- (int)cellularBars;
- (id)cellularCellType;
- (bool)cellularKnownGood;
- (int)cellularLQM;
- (int)cellularMCC;
- (int)cellularMNC;
- (unsigned int)cellularMode;
- (int)cellularPID;
- (unsigned char)cellularRadioTechnology;
- (int)cellularTAC;
- (int)cellularUARFCN;
- (id)createAWDReport;
- (id)description;
- (void)setCellularBand:(unsigned char)arg1;
- (void)setCellularBandInfo:(int)arg1;
- (void)setCellularBandwidth:(int)arg1;
- (void)setCellularBars:(int)arg1;
- (void)setCellularCellType:(id)arg1;
- (void)setCellularKnownGood:(bool)arg1;
- (void)setCellularLQM:(int)arg1;
- (void)setCellularMCC:(int)arg1;
- (void)setCellularMNC:(int)arg1;
- (void)setCellularMode:(unsigned int)arg1;
- (void)setCellularPID:(int)arg1;
- (void)setCellularRadioTechnology:(unsigned char)arg1;
- (void)setCellularTAC:(int)arg1;
- (void)setCellularUARFCN:(int)arg1;
- (void)setWifiKnownGood:(bool)arg1;
- (void)setWifiLQM:(int)arg1;
- (void)setWifiRSSI:(int)arg1;
- (void)setWifiRadioTechnology:(unsigned char)arg1;
- (bool)wifiKnownGood;
- (int)wifiLQM;
- (int)wifiRSSI;
- (unsigned char)wifiRadioTechnology;

@end