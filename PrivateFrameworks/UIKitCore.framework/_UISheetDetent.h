/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISheetDetent : NSObject <NSSecureCoding> {
    double  __constant;
    long long  __identifier;
    id /* block */  __internalBlock;
}

@property (nonatomic, readonly) double _constant;
@property (nonatomic, readonly) long long _identifier;
@property (nonatomic, readonly) id /* block */ _internalBlock;

+ (id)_constantDetent:(double)arg1;
+ (id)_detentWithContainerViewBlock:(id /* block */)arg1;
+ (id)_largeDetent;
+ (id)_mediumDetent;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_constant;
- (long long)_identifier;
- (id /* block */)_internalBlock;
- (double)_resolvedOffsetInContainerView:(id)arg1 fullHeightFrameOfPresentedView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bottomAttached:(bool)arg3;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1 internalBlock:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;

@end