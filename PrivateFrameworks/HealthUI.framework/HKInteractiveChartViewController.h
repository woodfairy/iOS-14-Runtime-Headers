/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKInteractiveChartViewController : HKViewController <HKCurrentTimeViewDelegate, HKCurrentValueViewDataSourceDelegate, HKGraphViewDelegate, HKInteractiveChartAnnotationViewDelegate, HKInteractiveChartCurrentValueViewCallbacks, HKInteractiveChartCurrentValueViewHandler, HKLollipopDelegate, HKMonthViewControllerDelegate, HKSampleTypeDateRangeControllerObserver, UIGestureRecognizerDelegate> {
    NSArray * _allGraphSeriesConfigurationManagers;
    HKInteractiveChartAnnotationViewDataSource * _annotationDataSource;
    double  _bannerBottom;
    HKChartDataCacheController * _chartDataCacheController;
    NSDate * _creationDate;
    HKCurrentTimeView * _currentTimeView;
    UIView * _currentValueView;
    HKCurrentValueViewDataSource * _currentValueViewDataSource;
    <HKCurrentValueViewDataSourceDelegate> * _currentValueViewDataSourceDelegate;
    <HKInteractiveChartCurrentValueViewHandler> * _currentValueViewHandler;
    UILabel * _dashboardEmptyDescription;
    UILabel * _dashboardEmptyHeader;
    HKDateCache * _dateCache;
    long long  _delayedAutoscaleActualCount;
    long long  _delayedAutoscaleRequestCount;
    HKDisplayCategoryController * _displayCategoryController;
    long long  _displayState;
    HKDisplayTypeController * _displayTypeController;
    NSArray * _displayTypeStack;
    HKValueRange * _fixedRange;
    UIView * _graphBottomDividerView;
    UIView * _graphTopDividerView;
    HKHealthStore * _healthStore;
    UIImpactFeedbackGenerator * _impactFeedbackGenerator;
    id  _initialXValue;
    double  _lastDateValueRangeUpdate;
    double  _legendBottomLocation;
    HKLollipopController * _lollipopController;
    UIFont * _majorSelectedPointFont;
    UIFont * _minorSelectedPointFont;
    NSMutableArray * _observers;
    unsigned long long  _options;
    HKGraphViewController * _primaryGraphViewController;
    UIView * _primaryGraphViewWrapper;
    HKTimeScopeControl * _radioButtons;
    long long  _sampleDateRangeUpdateCount;
    HKSampleTypeDateRangeController * _sampleTypeDateRangeController;
    HKUIDateLabel * _selectedPointDateLabel;
    HKSelectedRangeFormatter * _selectedRangeFormatter;
    UILabel * _selectedSeriesLabel;
    UILabel * _selectedSeriesUnitLabel;
    HKSelectedTimeScopeController * _selectedTimeScopeController;
    <HKInteractiveChartCurrentValueViewCallbacks> * _standardCurrentValueViewCallbacks;
    id /* block */  _startupReportingBlock;
    HKUnitPreferenceController * _unitPreferenceController;
}

@property (nonatomic, retain) HKInteractiveChartAnnotationViewDataSource *annotationDataSource;
@property (readonly) UIColor *calendarDaySamplePresentColor;
@property (readonly) HKDisplayType *calendarQueryDisplayType;
@property (readonly) HKSampleType *calendarQuerySampleType;
@property (nonatomic, readonly) HKChartDataCacheController *chartDataCacheController;
@property (nonatomic, retain) HKCurrentValueViewDataSource *currentValueViewDataSource;
@property (nonatomic) <HKCurrentValueViewDataSourceDelegate> *currentValueViewDataSourceDelegate;
@property (nonatomic) <HKInteractiveChartCurrentValueViewHandler> *currentValueViewHandler;
@property (nonatomic, readonly) HKDateCache *dateCache;
@property (nonatomic, readonly) double dateSelectorHeight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long delayedAutoscaleActualCount;
@property (nonatomic) long long delayedAutoscaleRequestCount;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) HKDisplayCategoryController *displayCategoryController;
@property (nonatomic, readonly) HKDisplayTypeController *displayTypeController;
@property (nonatomic, retain) NSArray *displayTypeStack;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKHealthStore *healthStore;
@property (nonatomic, retain) id initialXValue;
@property (nonatomic) double legendBottomLocation;
@property (nonatomic, retain) HKLollipopController *lollipopController;
@property (nonatomic, readonly) HKGraphViewController *primaryGraphViewController;
@property (nonatomic) long long sampleDateRangeUpdateCount;
@property (nonatomic, readonly) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (nonatomic, retain) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (nonatomic, readonly) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (nonatomic) <HKInteractiveChartCurrentValueViewCallbacks> *standardCurrentValueViewCallbacks;
@property (nonatomic, copy) id /* block */ startupReportingBlock;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKUnitPreferenceController *unitPreferenceController;

+ (long long)_timeScopeForTimeScope:(long long)arg1 availableTimeScopes:(id)arg2;
+ (id)_timeScopesWithOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)_acceptSubclassRange:(id)arg1 proposedRange:(id)arg2 axisRange:(id)arg3;
- (void)_addDisplayTypeToConfiguration:(id)arg1 allDisplayTypes:(id)arg2 configurationManager:(id)arg3;
- (id)_addNoDataEntries:(id)arg1 timeScope:(long long)arg2;
- (void)_addSeriesForDisplayType:(id)arg1 updatingTimeScopeProperties:(id)arg2 configurationManager:(id)arg3;
- (id)_allDisplayTypes;
- (double)_annotationViewCenterY;
- (void)_automaticAutoScale;
- (id)_chartDataForPoint:(id)arg1;
- (bool)_chartHasDateAxis;
- (id)_colorForDisplayType:(id)arg1;
- (id)_configurationForDisplayType:(id)arg1;
- (id)_configurationForSeries:(id)arg1;
- (void)_configureCustomDisplayType:(id)arg1 graphSeries:(id)arg2 configurationManager:(id)arg3;
- (void)_configureSelectedRangeFormatterWithChartRangeProvider;
- (long long)_countOfHorizontalSectionsForConfigurationManager:(id)arg1 timeScope:(long long)arg2;
- (void)_createAndPrepareFeedbackGenerator;
- (void)_createDashboardEmptyLabelsIfNecessary;
- (id)_createGraphSeriesConfigurationFromDisplayType:(id)arg1 timeScope:(long long)arg2;
- (bool)_currentValueEnabled;
- (id)_customGraphSeriesForDisplayType:(id)arg1;
- (bool)_dashboardEmptyLabelsExist;
- (bool)_date:(id)arg1 closeToDate:(id)arg2 epsilonDateComponents:(id)arg3 calendar:(id)arg4;
- (id)_dateForBlockPoint:(id)arg1;
- (id)_dateForMostRecentData;
- (id)_dateForXCoordinate:(double)arg1 graphView:(id)arg2;
- (long long)_dateZoom;
- (id)_debugDateStringForPoint:(id)arg1;
- (long long)_defaultAlignmentForTimeScope:(long long)arg1;
- (id)_defaultAxisRangeIncludeToday:(bool)arg1;
- (long long)_defaultTimeScopeWithAvailableTimeScopes:(id)arg1;
- (id)_displayNameForDisplayType:(id)arg1;
- (id)_displayTypeForSeries:(id)arg1;
- (bool)_displayTypeIsHorizontalForTimeScope:(long long)arg1 displayType:(id)arg2;
- (id)_displayUnitForDisplayType:(id)arg1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (double)_effectiveHorizontalMargin;
- (id)_formatterForSeries:(id)arg1;
- (id)_graphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 fixedRange:(id)arg2;
- (void)_handleVisibleRangeChange;
- (bool)_headerLineEnabled;
- (void)_hideTimeDateControls;
- (bool)_inPointSelectionMode;
- (void)_layoutDashboardEmptyLabelsIfNecessary;
- (void)_layoutDividerViews;
- (void)_layoutHeader;
- (id)_midPointDateFromVisibleRange;
- (void)_moveSelectedDateInDirection:(long long)arg1;
- (void)_notifyObserversDidUpdateVisibleValueRange:(id)arg1 changeContext:(long long)arg2;
- (long long)_numHorizontalDisplayTypesForTimeScope:(long long)arg1 displayTypes:(id)arg2;
- (id)_numberForXCoordinate:(double)arg1 graphView:(id)arg2;
- (void)_omitLayoutHeader;
- (id)_pointSelectionInfo:(id)arg1;
- (id)_primaryDisplayType;
- (bool)_primaryDisplayTypeHasNoData;
- (void)_radioButtonsDidUpdate:(id)arg1;
- (id)_rangeValueAsNumber:(id)arg1;
- (void)_replacePrimaryGraphViewControllerWithScalarController;
- (void)_replacePrimaryGraphViewControllerWithTimeScope:(long long)arg1 anchorDate:(id)arg2 animated:(bool)arg3;
- (void)_scheduleDelayedAutoscale;
- (void)_scrollToAnchorDate:(id)arg1 graphView:(id)arg2 alignment:(long long)arg3;
- (void)_scrollToMostRecentDataWithAlignment:(long long)arg1;
- (bool)_selectedDateRangeLabelEnabled;
- (bool)_selectedSeriesWantsLastRecordedDate;
- (void)_setDateSelectorToVisibleRange;
- (void)_setGraphViewAxisAndVisibleDateRangeForTimeScope:(long long)arg1 anchorDate:(id)arg2 preserveScrollPosition:(bool)arg3;
- (void)_setSelectedGraphSeries:(id)arg1 animated:(bool)arg2;
- (void)_setVisibleDisplayTypes:(id)arg1;
- (void)_setVisibleRangeUsingDateFromDateSelector:(id)arg1;
- (bool)_shouldHideSeriesForDisplayType:(id)arg1;
- (bool)_shouldShowDateRangeForSelectedPointDateLabel;
- (void)_showHideNoGraphSeriesLabels;
- (void)_showTimeDateControls;
- (bool)_tilingDisabled;
- (bool)_timeScopeEnabled;
- (void)_unitPreferencesDidUpdate:(id)arg1;
- (void)_updateAfterConfigurationChangeIncludeDateAxis:(bool)arg1;
- (void)_updateAxisScalingRulesForUnitPreferenceChangesOfTypes:(id)arg1;
- (void)_updateCurrentValueViewWithVisibleRange;
- (void)_updateGraphViewAxisDateRange;
- (void)_updateSelectedSeriesLabel:(id)arg1;
- (long long)_userInfoSelectionCount:(id)arg1;
- (bool)_valueRange:(id)arg1 fitsInsideValueRange:(id)arg2;
- (bool)_viewHierarchyIsHidden:(id)arg1;
- (bool)_visibleRangeIsNowForTimeScope:(long long)arg1;
- (id)accessibilityDataForChart;
- (void)addChartViewObserver:(id)arg1;
- (void)addOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;
- (id)annotationDataSource;
- (id)calendarDaySamplePresentColor;
- (id)calendarQueryDisplayType;
- (id)calendarQuerySampleType;
- (id)chartDataCacheController;
- (id)currentDisplayTypesForStackOffset:(long long)arg1;
- (void)currentTimeViewDidTapOnDateSelector:(id)arg1;
- (void)currentTimeViewDidTapOnNextTimeButton:(id)arg1;
- (void)currentTimeViewDidTapOnPreviousTimeButton:(id)arg1;
- (id)currentValueViewDataSource;
- (id)currentValueViewDataSourceDelegate;
- (id)currentValueViewHandler;
- (id)dateCache;
- (double)dateSelectorHeight;
- (void)dealloc;
- (long long)delayedAutoscaleActualCount;
- (long long)delayedAutoscaleRequestCount;
- (id)descriptionForChartData:(id)arg1 timeScope:(long long)arg2;
- (id)descriptionForXCoordinate:(double)arg1 graphView:(id)arg2;
- (id)descriptionSeriesForGraphView:(id)arg1;
- (id)descriptionSpansForGraphView:(id)arg1;
- (void)didTapBackButtonForMonthViewController:(id)arg1;
- (void)didTapOnDateFromCurrentValueView:(id)arg1;
- (void)didTapOnInfoButtonFromCurrentValueView:(id)arg1;
- (id)displayCategoryController;
- (id)displayTypeController;
- (id)displayTypeStack;
- (id)graphSeriesForDisplayType:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphView:(id)arg1 didFinishUserScrollingToValueRange:(id)arg2;
- (void)graphView:(id)arg1 didUpdateFromDateZoom:(long long)arg2 toDateZoom:(long long)arg3 newVisibleRange:(id)arg4;
- (void)graphView:(id)arg1 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)graphView:(id)arg1 didUpdateSelectedPoint:(id)arg2;
- (void)graphView:(id)arg1 didUpdateSeries:(id)arg2 newDataArrived:(bool)arg3;
- (void)graphView:(id)arg1 didUpdateVisibleValueRange:(id)arg2 changeContext:(long long)arg3;
- (void)graphView:(id)arg1 didUpdateYAxisWidth:(double)arg2 toWidth:(double)arg3;
- (id)graphView:(id)arg1 graphSeriesForZoom:(long long)arg2 stackOffset:(long long)arg3;
- (void)graphView:(id)arg1 startupTime:(long long)arg2;
- (void)graphViewDidBeginSelection:(id)arg1;
- (void)graphViewDidEndSelection:(id)arg1;
- (void)graphViewDidTapYAxis:(id)arg1;
- (void)graphViewSizeChanged:(id)arg1;
- (id)healthStore;
- (bool)infographicSupportedForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)infographicViewControllerForDisplayType:(id)arg1 healthStore:(id)arg2;
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9;
- (id)initWithDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9 fixedRange:(id)arg10;
- (id)initWithStackedDisplayTypes:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8 options:(unsigned long long)arg9;
- (id)initialXValue;
- (double)legendBottomLocation;
- (void)loadView;
- (id)lollipopAnnotationColor;
- (id)lollipopController;
- (id)lollipopExtensionColor;
- (double)lollipopExtensionLength;
- (id)lollipopFieldColor;
- (id)makeAnchorDateFromPreviousAnchorDate:(id)arg1 previousEffectiveVisibleRange:(id)arg2 previousTimeScope:(long long)arg3 currentTimeScope:(long long)arg4;
- (id)makeAnnotationDataSource;
- (id)makeAnnotationDataSourceWithMetrics:(id)arg1;
- (id)makeCurrentValueView;
- (id)makeStandardCurrentValueViewDataSource;
- (double)minimumHeightForChart;
- (void)monthViewController:(id)arg1 didSelectDate:(id)arg2;
- (bool)prefersStatusBarHidden;
- (id)primaryGraphViewController;
- (void)primaryGraphViewControllerDidInitialize:(id)arg1;
- (void)removeChartViewObserver:(id)arg1;
- (void)removeOverlayDisplayType:(id)arg1 stackOffset:(long long)arg2;
- (void)replaceCurrentDisplayTypesWithTypes:(id)arg1 stackOffset:(long long)arg2 resetDateRange:(bool)arg3;
- (id)replaceRangeClause:(id)arg1;
- (void)reportStartupTime:(id /* block */)arg1;
- (long long)sampleDateRangeUpdateCount;
- (id)sampleTypeDateRangeController;
- (void)sampleTypeDateRangeController:(id)arg1 didUpdateDateRanges:(id)arg2;
- (void)scrollToMostRecentData;
- (void)selectTimeScope:(long long)arg1;
- (id)selectedRangeFormatter;
- (id)selectedTimeScopeController;
- (id)seriesSelectionLineColorForGraphView:(id)arg1;
- (void)setAnnotationDataSource:(id)arg1;
- (void)setCurrentValueViewCallbacks:(id)arg1;
- (void)setCurrentValueViewDataSource:(id)arg1;
- (void)setCurrentValueViewDataSourceDelegate:(id)arg1;
- (void)setCurrentValueViewHandler:(id)arg1;
- (void)setDelayedAutoscaleActualCount:(long long)arg1;
- (void)setDelayedAutoscaleRequestCount:(long long)arg1;
- (void)setDetailView:(id)arg1;
- (void)setDisplayTypeStack:(id)arg1;
- (void)setInitialXValue:(id)arg1;
- (void)setLegendBottomLocation:(double)arg1;
- (void)setLollipopController:(id)arg1;
- (void)setSampleDateRangeUpdateCount:(long long)arg1;
- (void)setSelectedRangeFormatter:(id)arg1;
- (void)setStandardCurrentValueViewCallbacks:(id)arg1;
- (void)setStartupReportingBlock:(id /* block */)arg1;
- (long long)stackCountForGraphView:(id)arg1;
- (long long)stackOffsetCount;
- (id)standardCurrentValueViewCallbacks;
- (id /* block */)startupReportingBlock;
- (id)stringForValueRange:(id)arg1 timeScope:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (id)unitPreferenceController;
- (void)unitPreferencesWillUpdate:(id)arg1;
- (void)updateAnnotationDataSource:(id)arg1 pointContexts:(id)arg2;
- (void)updateCurrentValueView:(id)arg1 graphView:(id)arg2 timeScope:(long long)arg3;
- (void)updateSelectionAnnotationDataSourceForContext:(id)arg1 displayType:(id)arg2 timeScope:(long long)arg3;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)visibleRangeForTimeScope:(long long)arg1 proposedRange:(id)arg2;

@end