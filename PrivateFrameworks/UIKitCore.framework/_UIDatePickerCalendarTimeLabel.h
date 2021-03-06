/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDatePickerCalendarTimeLabel : UIView <UIIndirectScribbleInteractionDelegate, UIKeyInput, UIPointerInteractionDelegate> {
    bool  _allowsTextInput;
    <_UIDatePickerCalendarTimeLabelDelegate> * _delegate;
    UITextField * _hiddenField;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _hourRect;
    _UIDatePickerCalendarTimeWheel * _hourWheel;
    NSNumberFormatter * _inputFormatter;
    long long  _inputScope;
    _UIDatePickerCalendarTimeValueStore * _inputValue;
    UIView * _inputView;
    unsigned long long  _insertedDigitCount;
    UILabel * _label;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastSize;
    long long  _minuteInterval;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _minuteRect;
    _UIDatePickerCalendarTimeWheel * _minuteWheel;
    UIPointerInteraction * _pointerInteraction;
    UIIndirectScribbleInteraction * _scribbleInteraction;
    _UIDatePickerCalendarTimeLabelStateMachineContext * _stateContext;
    _UIDatePickerCalendarTimeFormat * _timeFormat;
}

@property (nonatomic) bool allowsTextInput;
@property (nonatomic, readonly) NSAttributedString *attributedText;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIDatePickerCalendarTimeLabelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, copy) UIFont *font;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hourText;
@property (nonatomic, readonly) _UIDatePickerCalendarTimeWheel *hourWheel;
@property (nonatomic, retain) NSNumberFormatter *inputFormatter;
@property (nonatomic) long long inputScope;
@property (nonatomic, retain) _UIDatePickerCalendarTimeValueStore *inputValue;
@property (nonatomic) unsigned long long insertedDigitCount;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic) long long minuteInterval;
@property (nonatomic, copy) NSString *minuteText;
@property (nonatomic, readonly) _UIDatePickerCalendarTimeWheel *minuteWheel;
@property (nonatomic, copy) UITextInputPasswordRules *passwordRules;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic, readonly) _UIDatePickerCalendarTimeLabelStateMachineContext *stateContext;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, copy) NSString *textContentType;
@property (nonatomic, retain) _UIDatePickerCalendarTimeFormat *timeFormat;

- (void).cxx_destruct;
- (id)_attributedTextWithHourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 minuteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (void)_beginEditingHoursFromWheelsOfTime:(id)arg1;
- (void)_beginEditingMinutesFromWheelsOfTime:(id)arg1;
- (bool)_canChangeFirstResponder:(id)arg1 toResponder:(id)arg2;
- (void)_didTap:(id)arg1;
- (bool)_digits:(unsigned long long*)arg1 fromText:(id)arg2 count:(long long*)arg3;
- (void)_endEditingHoursFromWheelsOfTime:(id)arg1;
- (void)_endEditingMinutesFromWheelsOfTime:(id)arg1;
- (void)_pushCurrentStateIntoUI;
- (void)_pushCurrentStateIntoUIAndNotify;
- (void)_recreateWheelsOfTime;
- (void)_resetTextInput;
- (void)_stateMachineSendEvent:(unsigned long long)arg1;
- (void)_stateMachineUpdateFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (bool)_suppressSoftwareKeyboard;
- (void)_updateHoursFromWheelsOfTime:(id)arg1;
- (void)_updateLayoutRectsForHourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 minuteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)_updateMinutesFromWheelsOfTime:(id)arg1;
- (void)_updateWheelsOfTimePosition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (bool)allowsTextInput;
- (id)attributedText;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (id)delegate;
- (void)deleteBackward;
- (id)font;
- (bool)hasText;
- (id)hourText;
- (id)hourWheel;
- (void)indirectScribbleInteraction:(id)arg1 didFinishWritingInElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 focusElementIfNeeded:(id)arg2 referencePoint:(struct CGPoint { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })indirectScribbleInteraction:(id)arg1 frameForElement:(id)arg2;
- (bool)indirectScribbleInteraction:(id)arg1 isElementFocused:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 requestElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 completion:(id /* block */)arg3;
- (bool)indirectScribbleInteraction:(id)arg1 shouldDelayFocusForElement:(id)arg2;
- (void)indirectScribbleInteraction:(id)arg1 willBeginWritingInElement:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithTimeFormat:(id)arg1 minuteInterval:(long long)arg2;
- (id)inputFormatter;
- (long long)inputScope;
- (id)inputValue;
- (id)inputView;
- (void)insertText:(id)arg1;
- (unsigned long long)insertedDigitCount;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)keyboardType;
- (id)label;
- (void)layoutSubviews;
- (long long)minuteInterval;
- (id)minuteText;
- (id)minuteWheel;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (bool)processTapOutside;
- (bool)resignFirstResponder;
- (void)setAllowsTextInput:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHourText:(id)arg1;
- (void)setInputFormatter:(id)arg1;
- (void)setInputScope:(long long)arg1;
- (void)setInputValue:(id)arg1;
- (void)setInsertedDigitCount:(unsigned long long)arg1;
- (void)setMinuteInterval:(long long)arg1;
- (void)setMinuteText:(id)arg1;
- (void)setTimeFormat:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stateContext;
- (id)text;
- (id)timeFormat;
- (void)tintColorDidChange;

@end
