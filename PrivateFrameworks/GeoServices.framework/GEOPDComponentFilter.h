/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDComponentFilter : PBCodable <NSCopying> {
    GEOPDRoadAccessInfoFilter * _accessInfoFilter;
    GEOPDAddressFilter * _addressFilter;
    GEOPDAddressObjectFilter * _addressObjectFilter;
    GEOPDAmenitiesFilter * _amenitiesFilter;
    GEOPDAnnotatedItemListFilter * _annotatedItemListFilter;
    GEOPDAssociatedAppFilter * _associatedAppFilter;
    GEOPDBoundsFilter * _boundsFilter;
    GEOPDBrowseCategoriesFilter * _browseCategoriesFilter;
    GEOPDBusinessClaimFilter * _businessClaimFilter;
    GEOPDBusinessHoursFilter * _businessHoursFilter;
    GEOPDCaptionedPhotoFilter * _captionedPhotoFilter;
    GEOPDCollectionIdsFilter * _collectionIdsFilter;
    GEOPDContainedPlaceFilter * _containedPlaceFilter;
    GEOPDEntityFilter * _entityFilter;
    GEOPDETAFilter * _etaFilter;
    GEOPDExternalActionFilter * _externalActionFilter;
    GEOPDFactoidFilter * _factoidFilter;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_accessInfoFilter : 1; 
        unsigned int read_addressFilter : 1; 
        unsigned int read_addressObjectFilter : 1; 
        unsigned int read_amenitiesFilter : 1; 
        unsigned int read_annotatedItemListFilter : 1; 
        unsigned int read_associatedAppFilter : 1; 
        unsigned int read_boundsFilter : 1; 
        unsigned int read_browseCategoriesFilter : 1; 
        unsigned int read_businessClaimFilter : 1; 
        unsigned int read_businessHoursFilter : 1; 
        unsigned int read_captionedPhotoFilter : 1; 
        unsigned int read_collectionIdsFilter : 1; 
        unsigned int read_containedPlaceFilter : 1; 
        unsigned int read_entityFilter : 1; 
        unsigned int read_etaFilter : 1; 
        unsigned int read_externalActionFilter : 1; 
        unsigned int read_factoidFilter : 1; 
        unsigned int read_flyoverFilter : 1; 
        unsigned int read_groundViewLabelFilter : 1; 
        unsigned int read_hoursFilter : 1; 
        unsigned int read_iconFilter : 1; 
        unsigned int read_iso3166CodeFilter : 1; 
        unsigned int read_linkedServiceFilter : 1; 
        unsigned int read_locationEventFilter : 1; 
        unsigned int read_messageLinkFilter : 1; 
        unsigned int read_photoFilter : 1; 
        unsigned int read_placeCollectionFilter : 1; 
        unsigned int read_placeCollectionItemFilter : 1; 
        unsigned int read_placeInfoFilter : 1; 
        unsigned int read_placeQuestionnaireFilter : 1; 
        unsigned int read_placecardLayoutConfigurationFilter : 1; 
        unsigned int read_placecardUrlFilter : 1; 
        unsigned int read_poiEventFilter : 1; 
        unsigned int read_priceDescriptionFilter : 1; 
        unsigned int read_protoTypeContainerFilter : 1; 
        unsigned int read_publisherFilter : 1; 
        unsigned int read_quickLinkFilter : 1; 
        unsigned int read_rapFilter : 1; 
        unsigned int read_ratingFilter : 1; 
        unsigned int read_rawAttributeFilter : 1; 
        unsigned int read_relatedPlaceFilter : 1; 
        unsigned int read_restaurantReservationLinkFilter : 1; 
        unsigned int read_resultSnippetFilter : 1; 
        unsigned int read_reviewFilter : 1; 
        unsigned int read_simpleRestaurantMenuTextFilter : 1; 
        unsigned int read_spatialLookupFilter : 1; 
        unsigned int read_storefrontFilter : 1; 
        unsigned int read_storefrontPresentationFilter : 1; 
        unsigned int read_styleAttributesFilter : 1; 
        unsigned int read_textBlockFilter : 1; 
        unsigned int read_tipFilter : 1; 
        unsigned int read_transitAttributionFilter : 1; 
        unsigned int read_transitIncidentFilter : 1; 
        unsigned int read_transitInfoFilter : 1; 
        unsigned int read_transitInfoSnippetFilter : 1; 
        unsigned int read_transitScheduleFilter : 1; 
        unsigned int read_transitTripGeometryFilter : 1; 
        unsigned int read_transitTripStopFilter : 1; 
        unsigned int read_transitTripStopTimeFilter : 1; 
        unsigned int read_transitVehiclePositionFilter : 1; 
        unsigned int read_vendorAmenitiesFilter : 1; 
        unsigned int read_venueInfoFilter : 1; 
        unsigned int read_walletCategoryInformationFilter : 1; 
        unsigned int read_wifiFingerprintFilter : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDFlyoverFilter * _flyoverFilter;
    GEOPDGroundViewLabelFilter * _groundViewLabelFilter;
    GEOPDHoursFilter * _hoursFilter;
    GEOPDIconFilter * _iconFilter;
    GEOPDISO3166CodeFilter * _iso3166CodeFilter;
    GEOPDLinkedServiceFilter * _linkedServiceFilter;
    GEOPDLocationEventFilter * _locationEventFilter;
    GEOPDMessageLinkFilter * _messageLinkFilter;
    GEOPDPhotoFilter * _photoFilter;
    GEOPDPlaceCollectionFilter * _placeCollectionFilter;
    GEOPDPlaceCollectionItemFilter * _placeCollectionItemFilter;
    GEOPDPlaceInfoFilter * _placeInfoFilter;
    GEOPDPlaceQuestionnaireFilter * _placeQuestionnaireFilter;
    GEOPDPlacecardLayoutConfigurationFilter * _placecardLayoutConfigurationFilter;
    GEOPDPlacecardURLFilter * _placecardUrlFilter;
    GEOPDPoiEventFilter * _poiEventFilter;
    GEOPDPriceDescriptionFilter * _priceDescriptionFilter;
    GEOPDPrototypeContainerFilter * _protoTypeContainerFilter;
    GEOPDPublisherFilter * _publisherFilter;
    GEOPDQuickLinkFilter * _quickLinkFilter;
    GEOPDRapFilter * _rapFilter;
    GEOPDRatingFilter * _ratingFilter;
    GEOPDRawAttributeFilter * _rawAttributeFilter;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOPDRelatedPlaceFilter * _relatedPlaceFilter;
    GEOPDRestaurantReservationLinkFilter * _restaurantReservationLinkFilter;
    GEOPDResultSnippetFilter * _resultSnippetFilter;
    GEOPDReviewFilter * _reviewFilter;
    GEOPDSimpleRestaurantMenuTextFilter * _simpleRestaurantMenuTextFilter;
    GEOPDSpatialLookupFilter * _spatialLookupFilter;
    GEOPDStorefrontFilter * _storefrontFilter;
    GEOPDStorefrontPresentationFilter * _storefrontPresentationFilter;
    GEOPDStyleAttributesFilter * _styleAttributesFilter;
    GEOPDTextBlockFilter * _textBlockFilter;
    GEOPDTipFilter * _tipFilter;
    GEOPDTransitAttributionFilter * _transitAttributionFilter;
    GEOPDTransitIncidentFilter * _transitIncidentFilter;
    GEOPDTransitInfoFilter * _transitInfoFilter;
    GEOPDTransitInfoSnippetFilter * _transitInfoSnippetFilter;
    GEOPDTransitScheduleFilter * _transitScheduleFilter;
    GEOPDTransitTripGeometryFilter * _transitTripGeometryFilter;
    GEOPDTransitTripStopFilter * _transitTripStopFilter;
    GEOPDTransitTripStopTimeFilter * _transitTripStopTimeFilter;
    GEOPDVehiclePositionFilter * _transitVehiclePositionFilter;
    PBUnknownFields * _unknownFields;
    GEOPDVendorAmenitiesFilter * _vendorAmenitiesFilter;
    GEOPDVenueInfoFilter * _venueInfoFilter;
    GEOPDWalletCategoryInformationFilter * _walletCategoryInformationFilter;
    GEOPDWifiFingerprintFilter * _wifiFingerprintFilter;
}

@property (nonatomic, retain) GEOPDRoadAccessInfoFilter *accessInfoFilter;
@property (nonatomic, retain) GEOPDAddressFilter *addressFilter;
@property (nonatomic, retain) GEOPDAddressObjectFilter *addressObjectFilter;
@property (nonatomic, retain) GEOPDAmenitiesFilter *amenitiesFilter;
@property (nonatomic, retain) GEOPDAnnotatedItemListFilter *annotatedItemListFilter;
@property (nonatomic, retain) GEOPDAssociatedAppFilter *associatedAppFilter;
@property (nonatomic, retain) GEOPDBoundsFilter *boundsFilter;
@property (nonatomic, retain) GEOPDBrowseCategoriesFilter *browseCategoriesFilter;
@property (nonatomic, retain) GEOPDBusinessClaimFilter *businessClaimFilter;
@property (nonatomic, retain) GEOPDBusinessHoursFilter *businessHoursFilter;
@property (nonatomic, retain) GEOPDCaptionedPhotoFilter *captionedPhotoFilter;
@property (nonatomic, retain) GEOPDCollectionIdsFilter *collectionIdsFilter;
@property (nonatomic, retain) GEOPDContainedPlaceFilter *containedPlaceFilter;
@property (nonatomic, retain) GEOPDEntityFilter *entityFilter;
@property (nonatomic, retain) GEOPDETAFilter *etaFilter;
@property (nonatomic, retain) GEOPDExternalActionFilter *externalActionFilter;
@property (nonatomic, retain) GEOPDFactoidFilter *factoidFilter;
@property (nonatomic, retain) GEOPDFlyoverFilter *flyoverFilter;
@property (nonatomic, retain) GEOPDGroundViewLabelFilter *groundViewLabelFilter;
@property (nonatomic, readonly) bool hasAccessInfoFilter;
@property (nonatomic, readonly) bool hasAddressFilter;
@property (nonatomic, readonly) bool hasAddressObjectFilter;
@property (nonatomic, readonly) bool hasAmenitiesFilter;
@property (nonatomic, readonly) bool hasAnnotatedItemListFilter;
@property (nonatomic, readonly) bool hasAssociatedAppFilter;
@property (nonatomic, readonly) bool hasBoundsFilter;
@property (nonatomic, readonly) bool hasBrowseCategoriesFilter;
@property (nonatomic, readonly) bool hasBusinessClaimFilter;
@property (nonatomic, readonly) bool hasBusinessHoursFilter;
@property (nonatomic, readonly) bool hasCaptionedPhotoFilter;
@property (nonatomic, readonly) bool hasCollectionIdsFilter;
@property (nonatomic, readonly) bool hasContainedPlaceFilter;
@property (nonatomic, readonly) bool hasEntityFilter;
@property (nonatomic, readonly) bool hasEtaFilter;
@property (nonatomic, readonly) bool hasExternalActionFilter;
@property (nonatomic, readonly) bool hasFactoidFilter;
@property (nonatomic, readonly) bool hasFlyoverFilter;
@property (nonatomic, readonly) bool hasGroundViewLabelFilter;
@property (nonatomic, readonly) bool hasHoursFilter;
@property (nonatomic, readonly) bool hasIconFilter;
@property (nonatomic, readonly) bool hasIso3166CodeFilter;
@property (nonatomic, readonly) bool hasLinkedServiceFilter;
@property (nonatomic, readonly) bool hasLocationEventFilter;
@property (nonatomic, readonly) bool hasMessageLinkFilter;
@property (nonatomic, readonly) bool hasPhotoFilter;
@property (nonatomic, readonly) bool hasPlaceCollectionFilter;
@property (nonatomic, readonly) bool hasPlaceCollectionItemFilter;
@property (nonatomic, readonly) bool hasPlaceInfoFilter;
@property (nonatomic, readonly) bool hasPlaceQuestionnaireFilter;
@property (nonatomic, readonly) bool hasPlacecardLayoutConfigurationFilter;
@property (nonatomic, readonly) bool hasPlacecardUrlFilter;
@property (nonatomic, readonly) bool hasPoiEventFilter;
@property (nonatomic, readonly) bool hasPriceDescriptionFilter;
@property (nonatomic, readonly) bool hasProtoTypeContainerFilter;
@property (nonatomic, readonly) bool hasPublisherFilter;
@property (nonatomic, readonly) bool hasQuickLinkFilter;
@property (nonatomic, readonly) bool hasRapFilter;
@property (nonatomic, readonly) bool hasRatingFilter;
@property (nonatomic, readonly) bool hasRawAttributeFilter;
@property (nonatomic, readonly) bool hasRelatedPlaceFilter;
@property (nonatomic, readonly) bool hasRestaurantReservationLinkFilter;
@property (nonatomic, readonly) bool hasResultSnippetFilter;
@property (nonatomic, readonly) bool hasReviewFilter;
@property (nonatomic, readonly) bool hasSimpleRestaurantMenuTextFilter;
@property (nonatomic, readonly) bool hasSpatialLookupFilter;
@property (nonatomic, readonly) bool hasStorefrontFilter;
@property (nonatomic, readonly) bool hasStorefrontPresentationFilter;
@property (nonatomic, readonly) bool hasStyleAttributesFilter;
@property (nonatomic, readonly) bool hasTextBlockFilter;
@property (nonatomic, readonly) bool hasTipFilter;
@property (nonatomic, readonly) bool hasTransitAttributionFilter;
@property (nonatomic, readonly) bool hasTransitIncidentFilter;
@property (nonatomic, readonly) bool hasTransitInfoFilter;
@property (nonatomic, readonly) bool hasTransitInfoSnippetFilter;
@property (nonatomic, readonly) bool hasTransitScheduleFilter;
@property (nonatomic, readonly) bool hasTransitTripGeometryFilter;
@property (nonatomic, readonly) bool hasTransitTripStopFilter;
@property (nonatomic, readonly) bool hasTransitTripStopTimeFilter;
@property (nonatomic, readonly) bool hasTransitVehiclePositionFilter;
@property (nonatomic, readonly) bool hasVendorAmenitiesFilter;
@property (nonatomic, readonly) bool hasVenueInfoFilter;
@property (nonatomic, readonly) bool hasWalletCategoryInformationFilter;
@property (nonatomic, readonly) bool hasWifiFingerprintFilter;
@property (nonatomic, retain) GEOPDHoursFilter *hoursFilter;
@property (nonatomic, retain) GEOPDIconFilter *iconFilter;
@property (nonatomic, retain) GEOPDISO3166CodeFilter *iso3166CodeFilter;
@property (nonatomic, retain) GEOPDLinkedServiceFilter *linkedServiceFilter;
@property (nonatomic, retain) GEOPDLocationEventFilter *locationEventFilter;
@property (nonatomic, retain) GEOPDMessageLinkFilter *messageLinkFilter;
@property (nonatomic, retain) GEOPDPhotoFilter *photoFilter;
@property (nonatomic, retain) GEOPDPlaceCollectionFilter *placeCollectionFilter;
@property (nonatomic, retain) GEOPDPlaceCollectionItemFilter *placeCollectionItemFilter;
@property (nonatomic, retain) GEOPDPlaceInfoFilter *placeInfoFilter;
@property (nonatomic, retain) GEOPDPlaceQuestionnaireFilter *placeQuestionnaireFilter;
@property (nonatomic, retain) GEOPDPlacecardLayoutConfigurationFilter *placecardLayoutConfigurationFilter;
@property (nonatomic, retain) GEOPDPlacecardURLFilter *placecardUrlFilter;
@property (nonatomic, retain) GEOPDPoiEventFilter *poiEventFilter;
@property (nonatomic, retain) GEOPDPriceDescriptionFilter *priceDescriptionFilter;
@property (nonatomic, retain) GEOPDPrototypeContainerFilter *protoTypeContainerFilter;
@property (nonatomic, retain) GEOPDPublisherFilter *publisherFilter;
@property (nonatomic, retain) GEOPDQuickLinkFilter *quickLinkFilter;
@property (nonatomic, retain) GEOPDRapFilter *rapFilter;
@property (nonatomic, retain) GEOPDRatingFilter *ratingFilter;
@property (nonatomic, retain) GEOPDRawAttributeFilter *rawAttributeFilter;
@property (nonatomic, retain) GEOPDRelatedPlaceFilter *relatedPlaceFilter;
@property (nonatomic, retain) GEOPDRestaurantReservationLinkFilter *restaurantReservationLinkFilter;
@property (nonatomic, retain) GEOPDResultSnippetFilter *resultSnippetFilter;
@property (nonatomic, retain) GEOPDReviewFilter *reviewFilter;
@property (nonatomic, retain) GEOPDSimpleRestaurantMenuTextFilter *simpleRestaurantMenuTextFilter;
@property (nonatomic, retain) GEOPDSpatialLookupFilter *spatialLookupFilter;
@property (nonatomic, retain) GEOPDStorefrontFilter *storefrontFilter;
@property (nonatomic, retain) GEOPDStorefrontPresentationFilter *storefrontPresentationFilter;
@property (nonatomic, retain) GEOPDStyleAttributesFilter *styleAttributesFilter;
@property (nonatomic, retain) GEOPDTextBlockFilter *textBlockFilter;
@property (nonatomic, retain) GEOPDTipFilter *tipFilter;
@property (nonatomic, retain) GEOPDTransitAttributionFilter *transitAttributionFilter;
@property (nonatomic, retain) GEOPDTransitIncidentFilter *transitIncidentFilter;
@property (nonatomic, retain) GEOPDTransitInfoFilter *transitInfoFilter;
@property (nonatomic, retain) GEOPDTransitInfoSnippetFilter *transitInfoSnippetFilter;
@property (nonatomic, retain) GEOPDTransitScheduleFilter *transitScheduleFilter;
@property (nonatomic, retain) GEOPDTransitTripGeometryFilter *transitTripGeometryFilter;
@property (nonatomic, retain) GEOPDTransitTripStopFilter *transitTripStopFilter;
@property (nonatomic, retain) GEOPDTransitTripStopTimeFilter *transitTripStopTimeFilter;
@property (nonatomic, retain) GEOPDVehiclePositionFilter *transitVehiclePositionFilter;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDVendorAmenitiesFilter *vendorAmenitiesFilter;
@property (nonatomic, retain) GEOPDVenueInfoFilter *venueInfoFilter;
@property (nonatomic, retain) GEOPDWalletCategoryInformationFilter *walletCategoryInformationFilter;
@property (nonatomic, retain) GEOPDWifiFingerprintFilter *wifiFingerprintFilter;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)accessInfoFilter;
- (id)addressFilter;
- (id)addressObjectFilter;
- (id)amenitiesFilter;
- (id)annotatedItemListFilter;
- (id)associatedAppFilter;
- (id)boundsFilter;
- (id)browseCategoriesFilter;
- (id)businessClaimFilter;
- (id)businessHoursFilter;
- (id)captionedPhotoFilter;
- (void)clearUnknownFields:(bool)arg1;
- (id)collectionIdsFilter;
- (id)containedPlaceFilter;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entityFilter;
- (id)etaFilter;
- (id)externalActionFilter;
- (id)factoidFilter;
- (id)flyoverFilter;
- (id)groundViewLabelFilter;
- (bool)hasAccessInfoFilter;
- (bool)hasAddressFilter;
- (bool)hasAddressObjectFilter;
- (bool)hasAmenitiesFilter;
- (bool)hasAnnotatedItemListFilter;
- (bool)hasAssociatedAppFilter;
- (bool)hasBoundsFilter;
- (bool)hasBrowseCategoriesFilter;
- (bool)hasBusinessClaimFilter;
- (bool)hasBusinessHoursFilter;
- (bool)hasCaptionedPhotoFilter;
- (bool)hasCollectionIdsFilter;
- (bool)hasContainedPlaceFilter;
- (bool)hasEntityFilter;
- (bool)hasEtaFilter;
- (bool)hasExternalActionFilter;
- (bool)hasFactoidFilter;
- (bool)hasFlyoverFilter;
- (bool)hasGroundViewLabelFilter;
- (bool)hasHoursFilter;
- (bool)hasIconFilter;
- (bool)hasIso3166CodeFilter;
- (bool)hasLinkedServiceFilter;
- (bool)hasLocationEventFilter;
- (bool)hasMessageLinkFilter;
- (bool)hasPhotoFilter;
- (bool)hasPlaceCollectionFilter;
- (bool)hasPlaceCollectionItemFilter;
- (bool)hasPlaceInfoFilter;
- (bool)hasPlaceQuestionnaireFilter;
- (bool)hasPlacecardLayoutConfigurationFilter;
- (bool)hasPlacecardUrlFilter;
- (bool)hasPoiEventFilter;
- (bool)hasPriceDescriptionFilter;
- (bool)hasProtoTypeContainerFilter;
- (bool)hasPublisherFilter;
- (bool)hasQuickLinkFilter;
- (bool)hasRapFilter;
- (bool)hasRatingFilter;
- (bool)hasRawAttributeFilter;
- (bool)hasRelatedPlaceFilter;
- (bool)hasRestaurantReservationLinkFilter;
- (bool)hasResultSnippetFilter;
- (bool)hasReviewFilter;
- (bool)hasSimpleRestaurantMenuTextFilter;
- (bool)hasSpatialLookupFilter;
- (bool)hasStorefrontFilter;
- (bool)hasStorefrontPresentationFilter;
- (bool)hasStyleAttributesFilter;
- (bool)hasTextBlockFilter;
- (bool)hasTipFilter;
- (bool)hasTransitAttributionFilter;
- (bool)hasTransitIncidentFilter;
- (bool)hasTransitInfoFilter;
- (bool)hasTransitInfoSnippetFilter;
- (bool)hasTransitScheduleFilter;
- (bool)hasTransitTripGeometryFilter;
- (bool)hasTransitTripStopFilter;
- (bool)hasTransitTripStopTimeFilter;
- (bool)hasTransitVehiclePositionFilter;
- (bool)hasVendorAmenitiesFilter;
- (bool)hasVenueInfoFilter;
- (bool)hasWalletCategoryInformationFilter;
- (bool)hasWifiFingerprintFilter;
- (unsigned long long)hash;
- (id)hoursFilter;
- (id)iconFilter;
- (id)init;
- (id)initAddressObjectFilterWithLibraryVersion:(id)arg1;
- (id)initAnnotatedItemListFilterWithTraits:(id)arg1;
- (id)initCaptionedPhotoFilterWithTraits:(id)arg1;
- (id)initEntityFilterWithSpokenNames;
- (id)initPhotoFilterWithTraits:(id)arg1;
- (id)initRestaurantReservationLinkFilterWithTraits:(id)arg1;
- (id)initResultSnippetFilterWithTraits:(id)arg1;
- (id)initReviewUserPhotoFilterWithTraits:(id)arg1;
- (id)initTipUserPhotoFilterWithTraits:(id)arg1;
- (id)initTransitScheduleFilterWithTraits:(id)arg1;
- (id)initTransitTripStopTimeFilterWithTraits:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)iso3166CodeFilter;
- (id)jsonRepresentation;
- (id)linkedServiceFilter;
- (id)locationEventFilter;
- (void)mergeFrom:(id)arg1;
- (id)messageLinkFilter;
- (id)photoFilter;
- (id)placeCollectionFilter;
- (id)placeCollectionItemFilter;
- (id)placeInfoFilter;
- (id)placeQuestionnaireFilter;
- (id)placecardLayoutConfigurationFilter;
- (id)placecardUrlFilter;
- (id)poiEventFilter;
- (id)priceDescriptionFilter;
- (id)protoTypeContainerFilter;
- (id)publisherFilter;
- (id)quickLinkFilter;
- (id)rapFilter;
- (id)ratingFilter;
- (id)rawAttributeFilter;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)relatedPlaceFilter;
- (id)restaurantReservationLinkFilter;
- (id)resultSnippetFilter;
- (id)reviewFilter;
- (void)setAccessInfoFilter:(id)arg1;
- (void)setAddressFilter:(id)arg1;
- (void)setAddressObjectFilter:(id)arg1;
- (void)setAmenitiesFilter:(id)arg1;
- (void)setAnnotatedItemListFilter:(id)arg1;
- (void)setAssociatedAppFilter:(id)arg1;
- (void)setBoundsFilter:(id)arg1;
- (void)setBrowseCategoriesFilter:(id)arg1;
- (void)setBusinessClaimFilter:(id)arg1;
- (void)setBusinessHoursFilter:(id)arg1;
- (void)setCaptionedPhotoFilter:(id)arg1;
- (void)setCollectionIdsFilter:(id)arg1;
- (void)setContainedPlaceFilter:(id)arg1;
- (void)setEntityFilter:(id)arg1;
- (void)setEtaFilter:(id)arg1;
- (void)setExternalActionFilter:(id)arg1;
- (void)setFactoidFilter:(id)arg1;
- (void)setFlyoverFilter:(id)arg1;
- (void)setGroundViewLabelFilter:(id)arg1;
- (void)setHoursFilter:(id)arg1;
- (void)setIconFilter:(id)arg1;
- (void)setIso3166CodeFilter:(id)arg1;
- (void)setLinkedServiceFilter:(id)arg1;
- (void)setLocationEventFilter:(id)arg1;
- (void)setMessageLinkFilter:(id)arg1;
- (void)setPhotoFilter:(id)arg1;
- (void)setPlaceCollectionFilter:(id)arg1;
- (void)setPlaceCollectionItemFilter:(id)arg1;
- (void)setPlaceInfoFilter:(id)arg1;
- (void)setPlaceQuestionnaireFilter:(id)arg1;
- (void)setPlacecardLayoutConfigurationFilter:(id)arg1;
- (void)setPlacecardUrlFilter:(id)arg1;
- (void)setPoiEventFilter:(id)arg1;
- (void)setPriceDescriptionFilter:(id)arg1;
- (void)setProtoTypeContainerFilter:(id)arg1;
- (void)setPublisherFilter:(id)arg1;
- (void)setQuickLinkFilter:(id)arg1;
- (void)setRapFilter:(id)arg1;
- (void)setRatingFilter:(id)arg1;
- (void)setRawAttributeFilter:(id)arg1;
- (void)setRelatedPlaceFilter:(id)arg1;
- (void)setRestaurantReservationLinkFilter:(id)arg1;
- (void)setResultSnippetFilter:(id)arg1;
- (void)setReviewFilter:(id)arg1;
- (void)setSimpleRestaurantMenuTextFilter:(id)arg1;
- (void)setSpatialLookupFilter:(id)arg1;
- (void)setStorefrontFilter:(id)arg1;
- (void)setStorefrontPresentationFilter:(id)arg1;
- (void)setStyleAttributesFilter:(id)arg1;
- (void)setTextBlockFilter:(id)arg1;
- (void)setTipFilter:(id)arg1;
- (void)setTransitAttributionFilter:(id)arg1;
- (void)setTransitIncidentFilter:(id)arg1;
- (void)setTransitInfoFilter:(id)arg1;
- (void)setTransitInfoSnippetFilter:(id)arg1;
- (void)setTransitScheduleFilter:(id)arg1;
- (void)setTransitTripGeometryFilter:(id)arg1;
- (void)setTransitTripStopFilter:(id)arg1;
- (void)setTransitTripStopTimeFilter:(id)arg1;
- (void)setTransitVehiclePositionFilter:(id)arg1;
- (void)setVendorAmenitiesFilter:(id)arg1;
- (void)setVenueInfoFilter:(id)arg1;
- (void)setWalletCategoryInformationFilter:(id)arg1;
- (void)setWifiFingerprintFilter:(id)arg1;
- (id)simpleRestaurantMenuTextFilter;
- (id)spatialLookupFilter;
- (id)storefrontFilter;
- (id)storefrontPresentationFilter;
- (id)styleAttributesFilter;
- (id)textBlockFilter;
- (id)tipFilter;
- (id)transitAttributionFilter;
- (id)transitIncidentFilter;
- (id)transitInfoFilter;
- (id)transitInfoSnippetFilter;
- (id)transitScheduleFilter;
- (id)transitTripGeometryFilter;
- (id)transitTripStopFilter;
- (id)transitTripStopTimeFilter;
- (id)transitVehiclePositionFilter;
- (id)unknownFields;
- (id)vendorAmenitiesFilter;
- (id)venueInfoFilter;
- (id)walletCategoryInformationFilter;
- (id)wifiFingerprintFilter;
- (void)writeTo:(id)arg1;

@end
