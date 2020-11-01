/* Generated by RuntimeBrowser
   Image: /usr/lib/libMemoryResourceException.dylib
 */

@interface FPProcessGroup : FPProcessGroupMinimal <NSCopying> {
    NSDictionary * _categories;
    unsigned int  _categoriesRefcount;
    NSMutableArray * _objects;
}

@property (nonatomic, retain) NSDictionary *categories;
@property (nonatomic) unsigned int categoriesRefcount;
@property (nonatomic, retain) NSMutableArray *objects;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addProcess:(id)arg1;
- (void)attachCachedCategories:(id)arg1 refcount:(unsigned int)arg2;
- (id)categories;
- (unsigned int)categoriesRefcount;
- (id)consumeCachedCategories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)objects;
- (void)setCategories:(id)arg1;
- (void)setCategoriesRefcount:(unsigned int)arg1;
- (void)setObjects:(id)arg1;

@end