/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
 */

@interface REUIRelevanceEngineController : NSObject <RERelevanceEngineObserver, _REUIControllerTrainingContextDelegate> {
    bool  _allowsLocationUse;
    NSMutableDictionary * _currentElementStates;
    <REUIRelevanceEngineControllerDelegate> * _delegate;
    struct { 
        unsigned int implementsPerformBatchUpdate : 1; 
        unsigned int implementsReloadElement : 1; 
        unsigned int implementsRemoveElement : 1; 
        unsigned int implementsInsertElement : 1; 
        unsigned int implementsMoveElement : 1; 
        unsigned int implementsIndexPathVisibility : 1; 
        unsigned int implementsBeginRelevanceUpdate : 1; 
        unsigned int implementsFinishedRelevanceUpdate : 1; 
        unsigned int implementsIdentifierBasedReloadElement : 1; 
    }  _delegateCallbacks;
    RERelevanceEngine * _engine;
    NSMutableSet * _hiddenBundleIdentifiers;
    NSArray * _hiddenIndices;
    bool  _isShowingContentElements;
    NSMutableArray * _pendingOperations;
    bool  _performingBatch;
    RERelevanceEnginePreferences * _preferences;
    NSMutableDictionary * _sectionNameOrdering;
    NSArray * _sectionOrder;
    _REUIControllerTrainingContext * _trainingContext;
    bool  _wantsIdealizedContent;
    bool  _wantsLiveDataSources;
}

@property (nonatomic) bool allowsLocationUse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <REUIRelevanceEngineControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *disabledDataSources;
@property (nonatomic, readonly) RERelevanceEngine *engine;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumNegativeDwellTime;
@property (nonatomic) double minimumPositiveDwellTime;
@property (nonatomic) unsigned long long onScreenElementCount;
@property (nonatomic, readonly) NSArray *sectionOrder;
@property (readonly) Class superclass;
@property (nonatomic, readonly) REUITrainingContext *trainingContext;
@property (nonatomic) bool wantsIdealizedContent;
@property (nonatomic) bool wantsLiveDataSources;

- (void).cxx_destruct;
- (id)_contentAtIndexPath:(id)arg1;
- (id)_contentForElement:(id)arg1;
- (id)_controllerIndexPathForEngineIndexPath:(id)arg1;
- (id)_elementAtIndexPath:(id)arg1;
- (id)_engineIndexPathForControllerIndexPath:(id)arg1;
- (void)_enumerateEngineElementsInSection:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)_enumerateEngineElementsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (long long)_indexForSection:(id)arg1;
- (id)_indexPathForElementWithIdentifier:(id)arg1;
- (id)_indexPathForSectionPath:(id)arg1;
- (bool)_isElementHidden:(id)arg1;
- (void)_loadNewRelevanceEngine:(id)arg1 withCompletion:(id /* block */)arg2;
- (unsigned long long)_numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (void)_performBatchUpdateUsingBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_performOperations:(id)arg1 toSection:(unsigned long long)arg2;
- (void)_performOrEnqueueOperation:(id)arg1;
- (id)_sectionAtIndex:(long long)arg1;
- (bool)_sectionHasContent:(id)arg1;
- (id)_sectionPathForIndexPath:(id)arg1;
- (id)_sectionSupportingNoContentElements;
- (void)_setElement:(id)arg1 atIndexPath:(id)arg2 hidden:(bool)arg3;
- (id)actionAtIndexPath:(id)arg1;
- (bool)allowsLocationUse;
- (id)contentAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)disabledDataSources;
- (void)elemenAtIndexPathDidDisplay:(id)arg1;
- (id)elementAtIndexPath:(id)arg1;
- (void)elementAtIndexPathDidEndDisplay:(id)arg1;
- (void)elementAtIndexPathWasSelected:(id)arg1;
- (id)elementIdentifierAtIndexPath:(id)arg1;
- (bool)elementIsAvailable:(id)arg1;
- (id)elementsOrdered:(unsigned long long)arg1 relativeToElement:(id)arg2;
- (id)engine;
- (id)generateDiffableSnapshot;
- (id)identifierForElementAtIndexPath:(id)arg1;
- (id)indexPathForElementWithIdentifier:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1;
- (id)initWithRelevanceEngine:(id)arg1 sectionOrder:(id)arg2;
- (id)interactionTypeForElement:(id)arg1;
- (bool)isDataSourceEnabled:(id)arg1;
- (void)makeCurrent;
- (double)maximumNegativeDwellTime;
- (id)metadataForElementWithIdentifier:(id)arg1;
- (double)minimumPositiveDwellTime;
- (unsigned long long)numberOfItemsInSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)onScreenElementCount;
- (id)predictedContentForSectionAtIndex:(unsigned long long)arg1 atDate:(id)arg2 limit:(long long)arg3;
- (id)predictionForElementAtIndexPath:(id)arg1;
- (void)relevanceEngine:(id)arg1 didInsertElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didMoveElement:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4;
- (void)relevanceEngine:(id)arg1 didReloadElement:(id)arg2 atPath:(id)arg3;
- (void)relevanceEngine:(id)arg1 didRemoveElement:(id)arg2 atPath:(id)arg3;
- (bool)relevanceEngine:(id)arg1 isElementAtPathVisible:(id)arg2;
- (void)relevanceEngine:(id)arg1 performBatchUpdateBlock:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)relevanceEngineDidBeginUpdatingRelevance:(id)arg1;
- (void)relevanceEngineDidFinishUpdatingRelevance:(id)arg1;
- (void)resignCurrent;
- (id)sectionOrder;
- (void)setAllowsLocationUse:(bool)arg1;
- (void)setDataSource:(id)arg1 enabled:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setMaximumNegativeDwellTime:(double)arg1;
- (void)setMinimumPositiveDwellTime:(double)arg1;
- (void)setOnScreenElementCount:(unsigned long long)arg1;
- (void)setWantsIdealizedContent:(bool)arg1;
- (void)setWantsLiveDataSources:(bool)arg1;
- (id)trainingContext;
- (bool)wantsIdealizedContent;
- (bool)wantsLiveDataSources;

@end