/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
 */

@interface BMStreamDatastoreWriter : NSObject {
    BMStreamDatastore * _inner;
}

- (void)dealloc;
- (id)initWithStream:(id)arg1 config:(id)arg2;
- (id)streamIdentifier;
- (void)syncMappedFiles;
- (bool)writeEventWithEventBody:(id)arg1;
- (bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2;

@end
