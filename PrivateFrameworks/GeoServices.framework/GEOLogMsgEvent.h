/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgEvent : PBCodable <NSCopying> {
    GEOLogMsgEventId * _analyticTag;
    GEOLogMsgEventBatchTrafficProbe * _batchTrafficProbeCollection;
    GEOLogMsgEventClientACSuggestions * _clientAcSuggestions;
    GEOLogMsgEventCommuteWindow * _commuteWindow;
    GEOLogMsgEventCuratedCollectionStats * _curatedCollectionStats;
    GEOLogMsgEventCuratedCollectionUsage * _curatedCollectionUsage;
    GEOLogMsgEventDailyUseSummary * _dailyUseSummary;
    GEOLogMsgEventDirections * _directionsEvent;
    GEOLogMsgEventDirectionsRequestDetails * _directionsRequestDetails;
    GEOLogMsgEventDisplayAnalytic * _displayAnalytic;
    GEOLogMsgEventEVRoutingVehicleDetails * _evRoutingVehicleDetails;
    GEOLogMsgEventEVTrip * _evTrip;
    int  _eventType;
    struct { 
        unsigned int has_usageEventTime : 1; 
        unsigned int has_eventType : 1; 
        unsigned int read_analyticTag : 1; 
        unsigned int read_batchTrafficProbeCollection : 1; 
        unsigned int read_clientAcSuggestions : 1; 
        unsigned int read_commuteWindow : 1; 
        unsigned int read_curatedCollectionStats : 1; 
        unsigned int read_curatedCollectionUsage : 1; 
        unsigned int read_dailyUseSummary : 1; 
        unsigned int read_directionsEvent : 1; 
        unsigned int read_directionsRequestDetails : 1; 
        unsigned int read_displayAnalytic : 1; 
        unsigned int read_evRoutingVehicleDetails : 1; 
        unsigned int read_evTrip : 1; 
        unsigned int read_fullNavTrace : 1; 
        unsigned int read_genericAppErrorEvent : 1; 
        unsigned int read_gridDuration : 1; 
        unsigned int read_hardStop : 1; 
        unsigned int read_listInteractionSession : 1; 
        unsigned int read_logDiscard : 1; 
        unsigned int read_logFrameworkEvent : 1; 
        unsigned int read_logMsgStates : 1; 
        unsigned int read_mapKitCounts : 1; 
        unsigned int read_mapLaunchEvent : 1; 
        unsigned int read_mapsDeviceSettings : 1; 
        unsigned int read_mapsWidgetsInteractionSession : 1; 
        unsigned int read_marcoLiteUsage : 1; 
        unsigned int read_networkEvent : 1; 
        unsigned int read_parkedCar : 1; 
        unsigned int read_placeDataCacheEvent : 1; 
        unsigned int read_predExTrainingData : 1; 
        unsigned int read_proactiveSuggestionInteractionSessionEvent : 1; 
        unsigned int read_realtimeTrafficProbeCollection : 1; 
        unsigned int read_refineSearchSession : 1; 
        unsigned int read_rideBookedSession : 1; 
        unsigned int read_rideBookingSession : 1; 
        unsigned int read_stateTimingEvent : 1; 
        unsigned int read_tableBookedSession : 1; 
        unsigned int read_tableBookingSession : 1; 
        unsigned int read_telemetric : 1; 
        unsigned int read_throttleEvent : 1; 
        unsigned int read_tileCacheAnalytic : 1; 
        unsigned int read_tileSetStateEvent : 1; 
        unsigned int read_timeToLeaveHypothesisEvent : 1; 
        unsigned int read_timeToLeaveInitialTravelTimeEvent : 1; 
        unsigned int read_transitAppLaunchEvent : 1; 
        unsigned int read_tripDepartureFeedback : 1; 
        unsigned int read_userActionEvent : 1; 
        unsigned int read_vlfUsage : 1; 
        unsigned int read_wifiConnectionQualityProbeEvent : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOLogMsgEventFullNavTrace * _fullNavTrace;
    GEOLogMsgEventGenericAppError * _genericAppErrorEvent;
    GEOLogMsgEventGridDuration * _gridDuration;
    GEOLogMsgEventHardStop * _hardStop;
    GEOLogMsgEventListInteractionSession * _listInteractionSession;
    GEOLogMsgEventLogDiscard * _logDiscard;
    GEOLogMsgEventLogFramework * _logFrameworkEvent;
    NSMutableArray * _logMsgStates;
    GEOLogMsgEventMapKitCounts * _mapKitCounts;
    GEOLogMsgEventMapLaunch * _mapLaunchEvent;
    GEOLogMsgEventMapsDeviceSettings * _mapsDeviceSettings;
    GEOLogMsgEventMapsWidgetsInteractionSession * _mapsWidgetsInteractionSession;
    GEOLogMsgEventMarcoLiteUsage * _marcoLiteUsage;
    GEOLogMsgEventNetwork * _networkEvent;
    GEOLogMsgEventParkedCar * _parkedCar;
    GEOLogMsgEventPlaceDataCache * _placeDataCacheEvent;
    GEOLogMsgEventPredExTrainingData * _predExTrainingData;
    GEOLogMsgEventProactiveSuggestionInteractionSession * _proactiveSuggestionInteractionSessionEvent;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOLogMsgEventRealtimeTrafficProbe * _realtimeTrafficProbeCollection;
    GEOLogMsgEventRefineSearchSession * _refineSearchSession;
    LOGMSGEVENTLogMsgEventRideBookedSession * _rideBookedSession;
    LOGMSGEVENTLogMsgEventRideBookingSession * _rideBookingSession;
    GEOLogMsgEventStateTiming * _stateTimingEvent;
    LOGMSGEVENTLogMsgEventTableBookedSession * _tableBookedSession;
    LOGMSGEVENTLogMsgEventTableBookingSession * _tableBookingSession;
    GEOLogMsgEventTelemetric * _telemetric;
    GEOLogMsgEventThrottle * _throttleEvent;
    GEOLogMsgEventTileCacheAnalytic * _tileCacheAnalytic;
    GEOLogMsgEventTileSetState * _tileSetStateEvent;
    GEOLogMsgEventTimeToLeaveHypothesis * _timeToLeaveHypothesisEvent;
    GEOLogMsgEventTimeToLeaveInitialTravelTime * _timeToLeaveInitialTravelTimeEvent;
    GEOLogMsgEventTransitAppLaunch * _transitAppLaunchEvent;
    GEOLogMsgEventTripDepartureFeedback * _tripDepartureFeedback;
    double  _usageEventTime;
    GEOLogMsgEventUserAction * _userActionEvent;
    GEOLogMsgEventVLFUsage * _vlfUsage;
    GEOLogMsgEventWifiConnectionQualityProbe * _wifiConnectionQualityProbeEvent;
}

@property (nonatomic, retain) GEOLogMsgEventId *analyticTag;
@property (nonatomic, retain) GEOLogMsgEventBatchTrafficProbe *batchTrafficProbeCollection;
@property (nonatomic, retain) GEOLogMsgEventClientACSuggestions *clientAcSuggestions;
@property (nonatomic, retain) GEOLogMsgEventCommuteWindow *commuteWindow;
@property (nonatomic, retain) GEOLogMsgEventCuratedCollectionStats *curatedCollectionStats;
@property (nonatomic, retain) GEOLogMsgEventCuratedCollectionUsage *curatedCollectionUsage;
@property (nonatomic, retain) GEOLogMsgEventDailyUseSummary *dailyUseSummary;
@property (nonatomic, retain) GEOLogMsgEventDirections *directionsEvent;
@property (nonatomic, retain) GEOLogMsgEventDirectionsRequestDetails *directionsRequestDetails;
@property (nonatomic, retain) GEOLogMsgEventDisplayAnalytic *displayAnalytic;
@property (nonatomic, retain) GEOLogMsgEventEVRoutingVehicleDetails *evRoutingVehicleDetails;
@property (nonatomic, retain) GEOLogMsgEventEVTrip *evTrip;
@property (nonatomic) int eventType;
@property (nonatomic, retain) GEOLogMsgEventFullNavTrace *fullNavTrace;
@property (nonatomic, retain) GEOLogMsgEventGenericAppError *genericAppErrorEvent;
@property (nonatomic, retain) GEOLogMsgEventGridDuration *gridDuration;
@property (nonatomic, retain) GEOLogMsgEventHardStop *hardStop;
@property (nonatomic, readonly) bool hasAnalyticTag;
@property (nonatomic, readonly) bool hasBatchTrafficProbeCollection;
@property (nonatomic, readonly) bool hasClientAcSuggestions;
@property (nonatomic, readonly) bool hasCommuteWindow;
@property (nonatomic, readonly) bool hasCuratedCollectionStats;
@property (nonatomic, readonly) bool hasCuratedCollectionUsage;
@property (nonatomic, readonly) bool hasDailyUseSummary;
@property (nonatomic, readonly) bool hasDirectionsEvent;
@property (nonatomic, readonly) bool hasDirectionsRequestDetails;
@property (nonatomic, readonly) bool hasDisplayAnalytic;
@property (nonatomic, readonly) bool hasEvRoutingVehicleDetails;
@property (nonatomic, readonly) bool hasEvTrip;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasFullNavTrace;
@property (nonatomic, readonly) bool hasGenericAppErrorEvent;
@property (nonatomic, readonly) bool hasGridDuration;
@property (nonatomic, readonly) bool hasHardStop;
@property (nonatomic, readonly) bool hasListInteractionSession;
@property (nonatomic, readonly) bool hasLogDiscard;
@property (nonatomic, readonly) bool hasLogFrameworkEvent;
@property (nonatomic, readonly) bool hasMapKitCounts;
@property (nonatomic, readonly) bool hasMapLaunchEvent;
@property (nonatomic, readonly) bool hasMapsDeviceSettings;
@property (nonatomic, readonly) bool hasMapsWidgetsInteractionSession;
@property (nonatomic, readonly) bool hasMarcoLiteUsage;
@property (nonatomic, readonly) bool hasNetworkEvent;
@property (nonatomic, readonly) bool hasParkedCar;
@property (nonatomic, readonly) bool hasPlaceDataCacheEvent;
@property (nonatomic, readonly) bool hasPredExTrainingData;
@property (nonatomic, readonly) bool hasProactiveSuggestionInteractionSessionEvent;
@property (nonatomic, readonly) bool hasRealtimeTrafficProbeCollection;
@property (nonatomic, readonly) bool hasRefineSearchSession;
@property (nonatomic, readonly) bool hasRideBookedSession;
@property (nonatomic, readonly) bool hasRideBookingSession;
@property (nonatomic, readonly) bool hasStateTimingEvent;
@property (nonatomic, readonly) bool hasTableBookedSession;
@property (nonatomic, readonly) bool hasTableBookingSession;
@property (nonatomic, readonly) bool hasTelemetric;
@property (nonatomic, readonly) bool hasThrottleEvent;
@property (nonatomic, readonly) bool hasTileCacheAnalytic;
@property (nonatomic, readonly) bool hasTileSetStateEvent;
@property (nonatomic, readonly) bool hasTimeToLeaveHypothesisEvent;
@property (nonatomic, readonly) bool hasTimeToLeaveInitialTravelTimeEvent;
@property (nonatomic, readonly) bool hasTransitAppLaunchEvent;
@property (nonatomic, readonly) bool hasTripDepartureFeedback;
@property (nonatomic) bool hasUsageEventTime;
@property (nonatomic, readonly) bool hasUserActionEvent;
@property (nonatomic, readonly) bool hasVlfUsage;
@property (nonatomic, readonly) bool hasWifiConnectionQualityProbeEvent;
@property (nonatomic, retain) GEOLogMsgEventListInteractionSession *listInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventLogDiscard *logDiscard;
@property (nonatomic, retain) GEOLogMsgEventLogFramework *logFrameworkEvent;
@property (nonatomic, retain) NSMutableArray *logMsgStates;
@property (nonatomic, retain) GEOLogMsgEventMapKitCounts *mapKitCounts;
@property (nonatomic, retain) GEOLogMsgEventMapLaunch *mapLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventMapsDeviceSettings *mapsDeviceSettings;
@property (nonatomic, retain) GEOLogMsgEventMapsWidgetsInteractionSession *mapsWidgetsInteractionSession;
@property (nonatomic, retain) GEOLogMsgEventMarcoLiteUsage *marcoLiteUsage;
@property (nonatomic, retain) GEOLogMsgEventNetwork *networkEvent;
@property (nonatomic, retain) GEOLogMsgEventParkedCar *parkedCar;
@property (nonatomic, retain) GEOLogMsgEventPlaceDataCache *placeDataCacheEvent;
@property (nonatomic, retain) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property (nonatomic, retain) GEOLogMsgEventProactiveSuggestionInteractionSession *proactiveSuggestionInteractionSessionEvent;
@property (nonatomic, retain) GEOLogMsgEventRealtimeTrafficProbe *realtimeTrafficProbeCollection;
@property (nonatomic, retain) GEOLogMsgEventRefineSearchSession *refineSearchSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookedSession *rideBookedSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventRideBookingSession *rideBookingSession;
@property (nonatomic, retain) GEOLogMsgEventStateTiming *stateTimingEvent;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventTableBookedSession *tableBookedSession;
@property (nonatomic, retain) LOGMSGEVENTLogMsgEventTableBookingSession *tableBookingSession;
@property (nonatomic, retain) GEOLogMsgEventTelemetric *telemetric;
@property (nonatomic, retain) GEOLogMsgEventThrottle *throttleEvent;
@property (nonatomic, retain) GEOLogMsgEventTileCacheAnalytic *tileCacheAnalytic;
@property (nonatomic, retain) GEOLogMsgEventTileSetState *tileSetStateEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveHypothesis *timeToLeaveHypothesisEvent;
@property (nonatomic, retain) GEOLogMsgEventTimeToLeaveInitialTravelTime *timeToLeaveInitialTravelTimeEvent;
@property (nonatomic, retain) GEOLogMsgEventTransitAppLaunch *transitAppLaunchEvent;
@property (nonatomic, retain) GEOLogMsgEventTripDepartureFeedback *tripDepartureFeedback;
@property (nonatomic) double usageEventTime;
@property (nonatomic, retain) GEOLogMsgEventUserAction *userActionEvent;
@property (nonatomic, retain) GEOLogMsgEventVLFUsage *vlfUsage;
@property (nonatomic, retain) GEOLogMsgEventWifiConnectionQualityProbe *wifiConnectionQualityProbeEvent;

+ (bool)isValid:(id)arg1;
+ (Class)logMsgStateType;

- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)addLogMsgState:(id)arg1;
- (id)analyticTag;
- (id)batchTrafficProbeCollection;
- (void)clearLogMsgStates;
- (id)clientAcSuggestions;
- (id)commuteWindow;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)curatedCollectionStats;
- (id)curatedCollectionUsage;
- (id)dailyUseSummary;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsEvent;
- (id)directionsRequestDetails;
- (id)displayAnalytic;
- (id)evRoutingVehicleDetails;
- (id)evTrip;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (id)fullNavTrace;
- (id)genericAppErrorEvent;
- (id)gridDuration;
- (id)hardStop;
- (bool)hasAnalyticTag;
- (bool)hasBatchTrafficProbeCollection;
- (bool)hasClientAcSuggestions;
- (bool)hasCommuteWindow;
- (bool)hasCuratedCollectionStats;
- (bool)hasCuratedCollectionUsage;
- (bool)hasDailyUseSummary;
- (bool)hasDirectionsEvent;
- (bool)hasDirectionsRequestDetails;
- (bool)hasDisplayAnalytic;
- (bool)hasEvRoutingVehicleDetails;
- (bool)hasEvTrip;
- (bool)hasEventType;
- (bool)hasFullNavTrace;
- (bool)hasGenericAppErrorEvent;
- (bool)hasGridDuration;
- (bool)hasHardStop;
- (bool)hasListInteractionSession;
- (bool)hasLogDiscard;
- (bool)hasLogFrameworkEvent;
- (bool)hasMapKitCounts;
- (bool)hasMapLaunchEvent;
- (bool)hasMapsDeviceSettings;
- (bool)hasMapsWidgetsInteractionSession;
- (bool)hasMarcoLiteUsage;
- (bool)hasNetworkEvent;
- (bool)hasParkedCar;
- (bool)hasPlaceDataCacheEvent;
- (bool)hasPredExTrainingData;
- (bool)hasProactiveSuggestionInteractionSessionEvent;
- (bool)hasRealtimeTrafficProbeCollection;
- (bool)hasRefineSearchSession;
- (bool)hasRideBookedSession;
- (bool)hasRideBookingSession;
- (bool)hasStateTimingEvent;
- (bool)hasTableBookedSession;
- (bool)hasTableBookingSession;
- (bool)hasTelemetric;
- (bool)hasThrottleEvent;
- (bool)hasTileCacheAnalytic;
- (bool)hasTileSetStateEvent;
- (bool)hasTimeToLeaveHypothesisEvent;
- (bool)hasTimeToLeaveInitialTravelTimeEvent;
- (bool)hasTransitAppLaunchEvent;
- (bool)hasTripDepartureFeedback;
- (bool)hasUsageEventTime;
- (bool)hasUserActionEvent;
- (bool)hasVlfUsage;
- (bool)hasWifiConnectionQualityProbeEvent;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)listInteractionSession;
- (id)logDiscard;
- (id)logFrameworkEvent;
- (id)logMsgStateAtIndex:(unsigned long long)arg1;
- (id)logMsgStates;
- (unsigned long long)logMsgStatesCount;
- (id)mapKitCounts;
- (id)mapLaunchEvent;
- (id)mapsDeviceSettings;
- (id)mapsWidgetsInteractionSession;
- (id)marcoLiteUsage;
- (void)mergeFrom:(id)arg1;
- (id)networkEvent;
- (id)parkedCar;
- (id)placeDataCacheEvent;
- (id)predExTrainingData;
- (id)proactiveSuggestionInteractionSessionEvent;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)realtimeTrafficProbeCollection;
- (id)refineSearchSession;
- (id)rideBookedSession;
- (id)rideBookingSession;
- (void)setAnalyticTag:(id)arg1;
- (void)setBatchTrafficProbeCollection:(id)arg1;
- (void)setClientAcSuggestions:(id)arg1;
- (void)setCommuteWindow:(id)arg1;
- (void)setCuratedCollectionStats:(id)arg1;
- (void)setCuratedCollectionUsage:(id)arg1;
- (void)setDailyUseSummary:(id)arg1;
- (void)setDirectionsEvent:(id)arg1;
- (void)setDirectionsRequestDetails:(id)arg1;
- (void)setDisplayAnalytic:(id)arg1;
- (void)setEvRoutingVehicleDetails:(id)arg1;
- (void)setEvTrip:(id)arg1;
- (void)setEventType:(int)arg1;
- (void)setFullNavTrace:(id)arg1;
- (void)setGenericAppErrorEvent:(id)arg1;
- (void)setGridDuration:(id)arg1;
- (void)setHardStop:(id)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasUsageEventTime:(bool)arg1;
- (void)setListInteractionSession:(id)arg1;
- (void)setLogDiscard:(id)arg1;
- (void)setLogFrameworkEvent:(id)arg1;
- (void)setLogMsgStates:(id)arg1;
- (void)setMapKitCounts:(id)arg1;
- (void)setMapLaunchEvent:(id)arg1;
- (void)setMapsDeviceSettings:(id)arg1;
- (void)setMapsWidgetsInteractionSession:(id)arg1;
- (void)setMarcoLiteUsage:(id)arg1;
- (void)setNetworkEvent:(id)arg1;
- (void)setParkedCar:(id)arg1;
- (void)setPlaceDataCacheEvent:(id)arg1;
- (void)setPredExTrainingData:(id)arg1;
- (void)setProactiveSuggestionInteractionSessionEvent:(id)arg1;
- (void)setRealtimeTrafficProbeCollection:(id)arg1;
- (void)setRefineSearchSession:(id)arg1;
- (void)setRideBookedSession:(id)arg1;
- (void)setRideBookingSession:(id)arg1;
- (void)setStateTimingEvent:(id)arg1;
- (void)setTableBookedSession:(id)arg1;
- (void)setTableBookingSession:(id)arg1;
- (void)setTelemetric:(id)arg1;
- (void)setThrottleEvent:(id)arg1;
- (void)setTileCacheAnalytic:(id)arg1;
- (void)setTileSetStateEvent:(id)arg1;
- (void)setTimeToLeaveHypothesisEvent:(id)arg1;
- (void)setTimeToLeaveInitialTravelTimeEvent:(id)arg1;
- (void)setTransitAppLaunchEvent:(id)arg1;
- (void)setTripDepartureFeedback:(id)arg1;
- (void)setUsageEventTime:(double)arg1;
- (void)setUserActionEvent:(id)arg1;
- (void)setVlfUsage:(id)arg1;
- (void)setWifiConnectionQualityProbeEvent:(id)arg1;
- (id)stateTimingEvent;
- (id)tableBookedSession;
- (id)tableBookingSession;
- (id)telemetric;
- (id)throttleEvent;
- (id)tileCacheAnalytic;
- (id)tileSetStateEvent;
- (id)timeToLeaveHypothesisEvent;
- (id)timeToLeaveInitialTravelTimeEvent;
- (id)transitAppLaunchEvent;
- (id)tripDepartureFeedback;
- (double)usageEventTime;
- (id)userActionEvent;
- (id)vlfUsage;
- (id)wifiConnectionQualityProbeEvent;
- (void)writeTo:(id)arg1;

@end