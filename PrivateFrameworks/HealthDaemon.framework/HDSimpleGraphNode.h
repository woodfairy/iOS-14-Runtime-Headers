/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSimpleGraphNode : HDSimpleGraphObject {
    bool  _areAllRelationshipsLoaded;
    bool  _areAttributesLoaded;
    NSMutableArray * _attributes;
    NSString * _name;
    NSArray * _relationships;
}

@property (nonatomic, readonly) bool areAllRelationshipsLoaded;
@property (nonatomic, readonly) NSArray *attributes;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSArray *relationships;

+ (id)nodeWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 loadAttributes:(bool)arg4 loadRelationshipsWithDepth:(long long)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (bool)_work_loadRelatedNodesRecursiveForRelationships:(id)arg1 maxDepth:(long long)arg2 currentDepth:(long long)arg3 fetchType:(long long)arg4 error:(id*)arg5;
- (bool)areAllRelationshipsLoaded;
- (id)attributes;
- (id)description;
- (id)init;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2 name:(id)arg3 attributes:(id)arg4 relationships:(id)arg5;
- (id)name;
- (id)relationships;
- (bool)work_addAttribute:(id)arg1 ofType:(id)arg2 forKey:(id)arg3 error:(id*)arg4;
- (bool)work_addAttribute:(id)arg1 ofType:(id)arg2 forKeyID:(long long)arg3 error:(id*)arg4;
- (id)work_attributesWithError:(id*)arg1;
- (bool)work_loadAllRelationshipsWithMaxDepth:(long long)arg1 error:(id*)arg2;
- (bool)work_loadAttributesWithError:(id*)arg1;
- (bool)work_loadRelationships:(id)arg1 maxDepth:(long long)arg2 fetchType:(long long)arg3 error:(id*)arg4;

@end