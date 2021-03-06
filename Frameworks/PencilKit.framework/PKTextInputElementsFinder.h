/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKTextInputElementsFinder : NSObject {
    bool  __currentlyCollectingViews;
    id /* block */  __finderCompletionHandler;
    long long  __finderState;
    NSMutableSet * __foundElements;
    NSMutableSet * __pendingElementContainerReplies;
    NSArray * __reusableElements;
    NSArray * _windowsToSearch;
}

@property (nonatomic) bool _currentlyCollectingViews;
@property (nonatomic, copy) id /* block */ _finderCompletionHandler;
@property (setter=_setFinderState:, nonatomic) long long _finderState;
@property (nonatomic, retain) NSMutableSet *_foundElements;
@property (nonatomic, retain) NSMutableSet *_pendingElementContainerReplies;
@property (nonatomic, retain) NSArray *_reusableElements;
@property (nonatomic, readonly, copy) NSArray *windowsToSearch;

+ (bool)_anyOtherWindowAboveWindow:(id)arg1 position:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)_isReachableHitTestView:(id)arg1 nearPoint:(struct CGPoint { double x1; double x2; })arg2 coordSpace:(id)arg3;
+ (long long)_shouldConsiderTextInputSearchForView:(id)arg1 referenceHitPoint:(struct CGPoint { double x1; double x2; })arg2 referenceCoordSpace:(id)arg3 nearPointOnly:(bool)arg4;
+ (id)_uniqueElements:(id)arg1 reusingElements:(id)arg2;
+ (bool)isResponderEditableTextInput:(id)arg1;
+ (bool)responderSupportsPencilTextInput:(id)arg1;
+ (id)scribbleElementContainerInteractionInView:(id)arg1;
+ (bool)shouldConsiderTextInputSearchForView:(id)arg1 referenceHitPoint:(struct CGPoint { double x1; double x2; })arg2 referenceCoordSpace:(id)arg3;
+ (bool)shouldDisableInputAssistantForTextInput:(id)arg1;

- (void).cxx_destruct;
- (void)_collectTextInputs:(id)arg1 asyncElementContainers:(id)arg2 underView:(id)arg3 referenceHitPoint:(struct CGPoint { double x1; double x2; })arg4 referenceSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 referenceCoordSpace:(id)arg6 nearPointOnly:(bool)arg7 firstResponderTextInputView:(id)arg8 elementContainerCompletion:(id /* block */)arg9;
- (bool)_currentlyCollectingViews;
- (void)_findAvailableTextInputElementsWithReusableElements:(id)arg1 referenceHitPoint:(struct CGPoint { double x1; double x2; })arg2 referenceSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 referenceCoordSpace:(id)arg4 nearPointOnly:(bool)arg5 completion:(id /* block */)arg6;
- (id /* block */)_finderCompletionHandler;
- (long long)_finderState;
- (void)_finishFindIfReadyTimedOut:(bool)arg1;
- (id)_foundElements;
- (void)_handleRequestTimeoutExpired;
- (bool)_isViewForFocusedElement:(id)arg1;
- (id)_pendingElementContainerReplies;
- (id)_reusableElements;
- (void)_setFinderState:(long long)arg1;
- (void)findAvailableTextInputElementsWithReusableElements:(id)arg1 referenceHitPoint:(struct CGPoint { double x1; double x2; })arg2 referenceSearchArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 referenceCoordSpace:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithWindowsToSearch:(id)arg1;
- (void)set_currentlyCollectingViews:(bool)arg1;
- (void)set_finderCompletionHandler:(id /* block */)arg1;
- (void)set_foundElements:(id)arg1;
- (void)set_pendingElementContainerReplies:(id)arg1;
- (void)set_reusableElements:(id)arg1;
- (id)windowsToSearch;

@end
