/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleUtilities : NSObject

+ (id)_daysDictionary;
+ (bool)_hasRecentlyHandledBootstrapForPerson:(id)arg1;
+ (id /* block */)_manualOrderComparator;
+ (void)_peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (id)_peopleHomeFetchResultForPersonType:(long long)arg1;
+ (void)_setDaysDictionary:(id)arg1;
+ (id)_titleStringForPeople:(id)arg1 singlePersonFallback:(id)arg2 groupFallback:(id)arg3;
+ (id)alertControllerForBlockingPerson:(id)arg1 completion:(id /* block */)arg2;
+ (id)alertControllerForRemovingNumberOfPeople:(long long)arg1 completionBlock:(id /* block */)arg2;
+ (id)alertControllerForResettingPeopleWithCompletion:(id /* block */)arg1;
+ (id)assetCollectionListFetchResultForPerson:(id)arg1;
+ (id)bootstrapViewControllerForContext:(id)arg1 delegate:(id)arg2;
+ (bool)changePeople:(id)arg1 toPersonType:(long long)arg2 error:(id*)arg3;
+ (id)changePerson:(id)arg1 toPersonType:(long long)arg2;
+ (id /* block */)comparatorForFetchType:(unsigned long long)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceRectForPeopleFaceTile:(id)arg1;
+ (id)facesForPerson:(id)arg1 inAssets:(id)arg2;
+ (id)generateNewFaceTileFromFaceTile:(id)arg1;
+ (id)identifiersForPeople:(id)arg1;
+ (bool)isFavoritePerson:(id)arg1;
+ (bool)isPersonHiddenFromPeopleHome:(id)arg1;
+ (long long)manualOrderForInsertingAtEndOfSectionWithType:(long long)arg1;
+ (void)markHandledBootstrapForPerson:(id)arg1;
+ (id)memoryTitleStringFromPeople:(id)arg1;
+ (void)mergePersons:(id)arg1 withPerson:(id)arg2;
+ (void)peopleFaceTilesForAsset:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
+ (void)peopleFaceTilesForFaces:(id)arg1 asset:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
+ (id)peopleWithPersonUris:(id)arg1;
+ (id)personFaceTileByPersonIdForPersons:(id)arg1;
+ (id)personWithLocalIdentifier:(id)arg1;
+ (id)personWithPersonUri:(id)arg1;
+ (id)sharedContactStore;
+ (bool)shouldShowBootstrapForPerson:(id)arg1;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 delegate:(id)arg3;
+ (bool)showBootstrapIfNeededWithContext:(id)arg1 fromParentVC:(id)arg2 force:(bool)arg3 delegate:(id)arg4;
+ (id)slideshowTitleStringForPeople:(id)arg1;
+ (id)sortDescriptorsForManualSort;
+ (id)titleStringForPeople:(id)arg1;

@end