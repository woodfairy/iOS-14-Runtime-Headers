/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitMetadataModel : NSObject <_PFAncillaryModelFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_invalidateStaticCaches;
+ (id)_newMetadataModelV1;
+ (id)_newMetadataModelV10;
+ (id)_newMetadataModelV2;
+ (id)_newMetadataModelV3;
+ (id)_newMetadataModelV4;
+ (id)_newMetadataModelV5;
+ (id)_newMetadataModelV6;
+ (id)_newMetadataModelV7;
+ (id)_newMetadataModelV8;
+ (id)_newMetadataModelV9;
+ (id)allMetadataModels;
+ (unsigned long long)ancillaryEntityCount;
+ (unsigned long long)ancillaryEntityOffset;
+ (id)ancillaryModelNamespace;
+ (bool)checkAndRepairSchemaOfStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id*)arg3;
+ (bool)currentMetadataVersionHashesMatchCachedMetadataVersionHashes:(id)arg1;
+ (bool)doesMetadataModel:(id)arg1 matchConnection:(id)arg2 hasOldMetadataTables:(bool*)arg3;
+ (id)identifyModelForStore:(id)arg1 withConnection:(id)arg2 hasOldMetadataTables:(bool*)arg3;
+ (void)initialize;
+ (id)newMetadataModelForFrameworkVersion:(id)arg1;

@end
