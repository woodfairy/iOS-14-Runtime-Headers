/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
 */

@interface BMFrameStore : NSObject {
    NSFileHandle * _backingFile;
    unsigned int  _datastoreVersion;
    BMMemoryMapping * _frames;
    BMMemoryMapping * _header;
    double  _lastAbsoluteTimestamp;
    unsigned long long  _permission;
    NSString * _segmentName;
    unsigned int  _usedBytes;
}

@property (nonatomic, retain) NSFileHandle *backingFile;
@property (nonatomic, copy) NSString *segmentName;
@property (readonly) unsigned int usedBytes;

+ (struct { unsigned long long x1; double x2; unsigned int x3; BOOL x4[32]; BOOL x5[4]; })segmentHeaderFromFile:(id)arg1 withVersion:(unsigned int)arg2;

- (unsigned char)appendFrameHeader:(struct { union { struct { unsigned int x_1_2_1; unsigned int x_1_2_2; } x_1_1_1; unsigned long long x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; } x2; }*)arg1 offset:(unsigned long long*)arg2;
- (id)backingFile;
- (void)dealloc;
- (void)enumerateFromOffset:(unsigned long long)arg1 withCallback:(id /* block */)arg2;
- (id)init;
- (id)initWithFileHandle:(id)arg1 maxSize:(unsigned long long)arg2 permission:(unsigned long long)arg3 datastoreVersion:(unsigned long long)arg4;
- (void)markFrameAsRemoved:(id)arg1;
- (bool)resizeBackingFileTo:(unsigned long long)arg1;
- (id)segmentName;
- (void)setBackingFile:(id)arg1;
- (void)setSegmentName:(id)arg1;
- (void)sync;
- (void)updateHeader;
- (unsigned int)usedBytes;
- (unsigned char)writeFrameForBytes:(const void*)arg1 length:(unsigned long long)arg2 dataVersion:(unsigned int)arg3 timestamp:(double)arg4;

@end