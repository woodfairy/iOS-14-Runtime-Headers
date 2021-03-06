/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
 */

@interface WFTagFieldComponent : CKStatefulViewComponent {
    struct WFTagFieldAttributes { 
        bool editable; 
        bool allowsTextEntry; 
        NSString *placeholder; 
        long long keyboardType; 
        long long textAlignment; 
        long long autocorrectionType; 
        long long autocapitalizationType; 
        NSString *tags; 
        NSString *fieldTitle; 
        <WFTagFieldSuggestionsProvider> *suggestionsProvider; 
        <WFVariableProvider> *variableProvider; 
        <WFVariableUIDelegate> *variableUIDelegate; 
        NSSet *allowedVariableTypes; 
        bool variablesDisabled; 
    }  _attributes;
    <WFComponentNavigationContext> * _navigationContext;
    id /* block */  _updateBlock;
    id /* block */  _variableBlock;
}

@property (nonatomic, readonly) struct WFTagFieldAttributes { bool x1; bool x2; id x3; long long x4; long long x5; long long x6; long long x7; id x8; id x9; id x10; id x11; id x12; id x13; bool x14; } attributes;
@property (nonatomic, readonly) <WFComponentNavigationContext> *navigationContext;
@property (nonatomic, readonly) id /* block */ updateBlock;
@property (nonatomic, readonly) id /* block */ variableBlock;

+ (id)newWithAttributes:(const struct WFTagFieldAttributes { bool x1; bool x2; id x3; long long x4; long long x5; long long x6; long long x7; id x8; id x9; id x10; id x11; id x12; id x13; bool x14; }*)arg1 updateBlock:(id /* block */)arg2 variableBlock:(id /* block */)arg3 navigationContext:(id)arg4 size:(const struct CKComponentSize { struct CKRelativeDimension { int x_1_1_1; double x_1_1_2; } x1; struct CKRelativeDimension { int x_2_1_1; double x_2_1_2; } x2; struct CKRelativeDimension { int x_3_1_1; double x_3_1_2; } x3; struct CKRelativeDimension { int x_4_1_1; double x_4_1_2; } x4; struct CKRelativeDimension { int x_5_1_1; double x_5_1_2; } x5; struct CKRelativeDimension { int x_6_1_1; double x_6_1_2; } x6; }*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct WFTagFieldAttributes { bool x1; bool x2; id x3; long long x4; long long x5; long long x6; long long x7; id x8; id x9; id x10; id x11; id x12; id x13; bool x14; })attributes;
- (id)navigationContext;
- (id /* block */)updateBlock;
- (id /* block */)variableBlock;

@end
