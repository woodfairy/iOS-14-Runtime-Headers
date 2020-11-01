/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFPhotoMediaContentItem : WFGenericFileContentItem <WFContentItemClass> {
    long long  _library;
    WFFileType * _preferredFileType;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic) long long library;
@property (nonatomic, retain) WFFileType *preferredFileType;

+ (id)contentCategories;
+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)fetchOptionsForLibrary:(long long)arg1;
+ (id)filterDescription;
+ (bool)hasLibrary;
+ (bool)isAvailableOnPlatform:(long long)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1;
+ (id)itemWithAssetIdentifier:(id)arg1 assetFile:(id)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3 nameIfKnown:(id)arg4;
+ (id)itemWithAssetIdentifier:(id)arg1 library:(long long)arg2 assetFile:(id)arg3 nameIfKnown:(id)arg4 attributionSet:(id)arg5;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
+ (id)itemsWithBurstIdentifier:(id)arg1;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)photoAlbums;
+ (id)pluralFilterDescription;
+ (id)pluralTypeDescription;
+ (id)propertyBuilders;
+ (id)remoteItemWithAssetIdentifier:(id)arg1 named:(id)arg2;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(id /* block */)arg3;
+ (bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+ (id)typeDescription;

- (void).cxx_destruct;
- (id)additionalRepresentationsForSerialization;
- (id)asset;
- (id)assetRepresentationTypes;
- (id)assetResourceManager;
- (bool)canGenerateRepresentationForType:(id)arg1;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)duration;
- (id)fullSizeAssetResourcesInResources:(id)arg1;
- (void)generateAVAsset:(id /* block */)arg1 networkAccessAllowed:(bool)arg2;
- (void)generateFileRepresentation:(id /* block */)arg1 options:(id)arg2 forType:(id)arg3;
- (void)generateObjectRepresentation:(id /* block */)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
- (void)getFrameRate:(id /* block */)arg1;
- (bool)getListSubtitle:(id /* block */)arg1;
- (bool)getListThumbnail:(id /* block */)arg1 forSize:(struct CGSize { double x1; double x2; })arg2;
- (void)getMetadata:(id /* block */)arg1;
- (void)getPreferredFileExtension:(id /* block */)arg1;
- (void)getPreferredFileSize:(id /* block */)arg1;
- (void)getThumbnail:(id /* block */)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)hash;
- (id)height;
- (id)imageManager;
- (id)intermediaryTypesForCoercionToItemClass:(Class)arg1;
- (id)isBurst;
- (bool)isEqual:(id)arg1;
- (id)isFavorite;
- (id)isHidden;
- (id)isLivePhoto;
- (bool)isPhotoType:(id)arg1;
- (bool)isScreenshot;
- (long long)library;
- (id)make;
- (id)mediaType;
- (id)metadataIfLocallyAvailable;
- (id)model;
- (id)orientation;
- (id)outputTypes;
- (id)photoTypes;
- (id)preferredAssetResourceForType:(id)arg1;
- (id)preferredFileType;
- (void)retrieveAssetResource:(id)arg1 withNetworkAccess:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)retrieveFileWithImageManager:(id /* block */)arg1 forType:(id)arg2;
- (void)setLibrary:(long long)arg1;
- (void)setPreferredFileType:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)width;

@end