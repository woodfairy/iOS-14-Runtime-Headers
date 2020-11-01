/* Generated by RuntimeBrowser
   Image: /usr/lib/libMemoryResourceException.dylib
 */

@interface FPMemoryRegion : NSObject {
    unsigned long long  _cleanNonSpecSize;
    NSString * _detailedName;
    unsigned long long  _dirtySize;
    unsigned int  _inSharedCache;
    FPMemoryObject * _memoryObject;
    NSString * _name;
    unsigned long long  _object_id;
    unsigned long long  _offset;
    unsigned int  _ownedExclusivelyByParentProcess;
    unsigned long long  _reclaimableSize;
    unsigned char  _segment;
    unsigned char  _share_mode;
    unsigned long long  _size;
    unsigned long long  _start;
    FPRangeList * _subrangeList;
    unsigned long long  _swappedSize;
    unsigned int  _unusedSharedCacheRegion;
    unsigned int  _user_tag;
    unsigned int  _wired;
}

@property (nonatomic) unsigned long long cleanNonSpecSize;
@property (nonatomic, copy) NSString *detailedName;
@property (nonatomic) unsigned long long dirtySize;
@property (nonatomic, readonly) bool eligibleForProcessView;
@property (nonatomic) unsigned long long end;
@property (getter=isFake, nonatomic, readonly) bool fake;
@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic) bool inSharedCache;
@property (nonatomic) FPMemoryObject *memoryObject;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long object_id;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) bool ownedExclusivelyByParentProcess;
@property (nonatomic) unsigned long long reclaimableSize;
@property (nonatomic) unsigned char segment;
@property (nonatomic) unsigned char share_mode;
@property (nonatomic) unsigned long long size;
@property (nonatomic) unsigned long long start;
@property (nonatomic, retain) FPRangeList *subrangeList;
@property (nonatomic) unsigned long long swappedSize;
@property (nonatomic) bool unusedSharedCacheRegion;
@property (nonatomic) unsigned int user_tag;
@property (nonatomic) bool wired;
@property (nonatomic, readonly) unsigned long long wiredSize;

+ (id)categoryNameForTag:(unsigned int)arg1;
+ (id)vmLedgerNameForTag:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 memoryTotal:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; }*)arg2 pageSize:(unsigned long long)arg3;
- (unsigned long long)cleanNonSpecSize;
- (long long)compare:(id)arg1;
- (id)detailedName;
- (unsigned long long)dirtySize;
- (bool)eligibleForProcessView;
- (bool)eligibleForSubrangesUsingPageSize:(unsigned long long)arg1;
- (unsigned long long)end;
- (void)freeSubrangeList;
- (id)fullName;
- (bool)inSharedCache;
- (bool)isFake;
- (id)memoryObject;
- (id)name;
- (unsigned long long)object_id;
- (unsigned long long)offset;
- (bool)ownedExclusivelyByParentProcess;
- (unsigned long long)reclaimableSize;
- (unsigned char)segment;
- (void)setCleanNonSpecSize:(unsigned long long)arg1;
- (void)setDetailedName:(id)arg1;
- (void)setDirtySize:(unsigned long long)arg1;
- (void)setEnd:(unsigned long long)arg1;
- (void)setInSharedCache:(bool)arg1;
- (void)setMemoryObject:(id)arg1;
- (void)setName:(id)arg1;
- (void)setObject_id:(unsigned long long)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setOwnedExclusivelyByParentProcess:(bool)arg1;
- (void)setReclaimableSize:(unsigned long long)arg1;
- (void)setSegment:(unsigned char)arg1;
- (void)setShare_mode:(unsigned char)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setStart:(unsigned long long)arg1;
- (void)setSubrangeList:(id)arg1;
- (void)setSwappedSize:(unsigned long long)arg1;
- (void)setUnusedSharedCacheRegion:(bool)arg1;
- (void)setUser_tag:(unsigned int)arg1;
- (void)setWired:(bool)arg1;
- (unsigned char)share_mode;
- (unsigned long long)size;
- (unsigned long long)start;
- (id)subrangeList;
- (unsigned long long)swappedSize;
- (bool)unusedSharedCacheRegion;
- (unsigned int)user_tag;
- (bool)wired;
- (unsigned long long)wiredSize;

@end