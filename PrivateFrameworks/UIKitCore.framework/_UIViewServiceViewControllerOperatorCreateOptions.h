/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIViewServiceViewControllerOperatorCreateOptions : NSObject <NSSecureCoding> {
    long long  _availableTextServices;
    NSUUID * _contextToken;
    NSArray * _displayConfigurations;
    BSMachPortSendRight * _hostAccessibilityServerPort;
    long long  _initialInterfaceOrientation;
    NSArray * _serializedAppearanceRepresentations;
    UITraitCollection * _traitCollection;
    long long  _userInterfaceIdiom;
    NSString * _viewControllerClassName;
}

@property (nonatomic) long long availableTextServices;
@property (nonatomic, retain) NSUUID *contextToken;
@property (nonatomic, copy) NSArray *displayConfigurations;
@property (nonatomic, retain) BSMachPortSendRight *hostAccessibilityServerPort;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic, copy) NSArray *serializedAppearanceRepresentations;
@property (nonatomic, retain) UITraitCollection *traitCollection;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic, copy) NSString *viewControllerClassName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)availableTextServices;
- (id)contextToken;
- (id)displayConfigurations;
- (void)encodeWithCoder:(id)arg1;
- (id)hostAccessibilityServerPort;
- (id)initWithCoder:(id)arg1;
- (long long)initialInterfaceOrientation;
- (id)serializedAppearanceRepresentations;
- (void)setAvailableTextServices:(long long)arg1;
- (void)setContextToken:(id)arg1;
- (void)setDisplayConfigurations:(id)arg1;
- (void)setHostAccessibilityServerPort:(id)arg1;
- (void)setInitialInterfaceOrientation:(long long)arg1;
- (void)setSerializedAppearanceRepresentations:(id)arg1;
- (void)setTraitCollection:(id)arg1;
- (void)setUserInterfaceIdiom:(long long)arg1;
- (void)setViewControllerClassName:(id)arg1;
- (id)traitCollection;
- (long long)userInterfaceIdiom;
- (id)viewControllerClassName;

@end