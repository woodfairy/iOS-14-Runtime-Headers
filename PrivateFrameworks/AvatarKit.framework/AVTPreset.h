/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

@interface AVTPreset : NSObject {
    NSDictionary * _assetSpecificImageVariantDependencies;
    NSDictionary * _assetSpecificMaterialVariantDependencies;
    NSDictionary * _assetSpecificMorphVariantDependencies;
    NSArray * _assets;
    long long  _category;
    NSArray * _dependencies;
    NSString * _identifier;
    NSString * _imageVariant;
    NSString * _materialVariant;
    bool  _mirrored;
    NSString * _morphVariant;
    float  _morphVariantIntensity;
    NSDictionary * _presetSpecificPresetDependencies;
    NSDictionary * _specializationSettings;
    NSDictionary * _tags;
    float  _textureAssetPresence;
}

@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly) NSString *displayableName;
@property (nonatomic, readonly) bool hasComponent;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (readonly) NSDictionary *specializationSettings;
@property (nonatomic, readonly) NSDictionary *tags;

+ (id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2;
+ (id)availablePresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1;
+ (id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2;
+ (id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2;
+ (void)loadPresets;
+ (id)presetWithCategory:(long long)arg1 identifier:(id)arg2;
+ (id)secondaryColorPresetsForCategory:(long long)arg1;

- (void).cxx_destruct;
- (void)applyPresetByChangingComponentsOfMemoji:(id)arg1;
- (id)assets;
- (id)cache;
- (long long)category;
- (id)colorPresets;
- (id)description;
- (id)displayableName;
- (void)enumerateAssetSpecificVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)enumeratePresetDependencies:(id /* block */)arg1;
- (void)enumeratePresetSpecificPresetDependencies:(id /* block */)arg1;
- (void)enumerateVariantDependenciesOfKind:(unsigned long long)arg1 block:(id /* block */)arg2;
- (bool)hasComponent;
- (id)identifier;
- (id)localizedName;
- (void)rebuildSpecializationSettings;
- (id)specializationSettings;
- (id)tags;

@end
