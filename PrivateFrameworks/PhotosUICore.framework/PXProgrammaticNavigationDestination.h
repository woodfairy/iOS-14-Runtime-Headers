/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXProgrammaticNavigationDestination : NSObject {
    <PXDisplayAsset> * _asset;
    <PXDisplayAssetCollection> * _assetCollection;
    long long  _assetCollectionSubtype;
    long long  _assetCollectionType;
    NSString * _assetCollectionUUID;
    NSString * _assetLocalIdentifier;
    NSString * _assetUUID;
    <PXDisplayCollection> * _collection;
    NSArray * _collectionHierarchy;
    <PXDisplayCollectionList> * _collectionList;
    long long  _collectionListSubtype;
    long long  _collectionListType;
    NSString * _collectionListUUID;
    NSString * _importSourceUUID;
    NSString * _keyboardInput;
    long long  _revealMode;
    PXProgrammaticNavigationDestination * _sidebarBackNavigationRootDestination;
    long long  _type;
}

@property (nonatomic, readonly) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) <PXDisplayAssetCollection> *assetCollection;
@property (nonatomic, readonly) long long assetCollectionSubtype;
@property (nonatomic, readonly) long long assetCollectionType;
@property (nonatomic, readonly, copy) NSString *assetCollectionUUID;
@property (nonatomic, readonly, copy) NSString *assetLocalIdentifier;
@property (nonatomic, readonly, copy) NSString *assetUUID;
@property (nonatomic, readonly) <PXDisplayCollection> *collection;
@property (nonatomic, readonly, copy) NSArray *collectionHierarchy;
@property (nonatomic, readonly) <PXDisplayCollectionList> *collectionList;
@property (nonatomic, readonly) long long collectionListSubtype;
@property (nonatomic, readonly) long long collectionListType;
@property (nonatomic, readonly, copy) NSString *collectionListUUID;
@property (nonatomic, readonly, copy) NSString *importSourceUUID;
@property (nonatomic, readonly, copy) NSString *keyboardInput;
@property (nonatomic, readonly) long long revealMode;
@property (nonatomic, readonly, copy) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)asset;
- (id)assetCollection;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)assetCollectionUUID;
- (id)assetLocalIdentifier;
- (id)assetUUID;
- (id)collection;
- (id)collectionHierarchy;
- (id)collectionList;
- (long long)collectionListSubtype;
- (long long)collectionListType;
- (id)collectionListUUID;
- (id)description;
- (id)importSourceUUID;
- (id)initWithImportSourceUUID:(id)arg1 revealMode:(long long)arg2;
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2;
- (id)initWithObject:(id)arg1 revealMode:(long long)arg2 sidebarNavigationBackButtonRootDestination:(id)arg3;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 asset:(id)arg3 assetCollection:(id)arg4;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 assetUUID:(id)arg3 assetCollectionUUID:(id)arg4;
- (id)initWithType:(long long)arg1 revealMode:(long long)arg2 keyboardInput:(id)arg3;
- (id)initWithURL:(id)arg1;
- (id)keyboardInput;
- (long long)revealMode;
- (id)sidebarBackNavigationRootDestination;
- (long long)type;

@end