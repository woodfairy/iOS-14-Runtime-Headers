/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHLiveMatcher : NSObject <SHLocalStoreDelegate, SHMatcher> {
    SHLocalStore * _localStore;
    SHMRESignatureMatcher * _mreMatcher;
    SHMutableSignature * _mutableSignature;
    NSMutableArray * _referenceSignagures;
    <SHMatcherDelegate> * delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SHLocalStore *localStore;
@property (nonatomic, retain) SHMRESignatureMatcher *mreMatcher;
@property (nonatomic, retain) SHMutableSignature *mutableSignature;
@property (nonatomic, retain) NSMutableArray *referenceSignagures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)bufferProduced:(id)arg1 atTime:(id)arg2;
- (void)buildMREForSignatures:(id)arg1;
- (id)buildRollingSignature;
- (id)delegate;
- (id)initWithLiveStore:(id)arg1;
- (id)localStore;
- (void)matchSignature:(id)arg1;
- (id)mreMatcher;
- (id)mutableSignature;
- (id)referenceSignagures;
- (void)setDelegate:(id)arg1;
- (void)setLocalStore:(id)arg1;
- (void)setMreMatcher:(id)arg1;
- (void)setMutableSignature:(id)arg1;
- (void)setReferenceSignagures:(id)arg1;

@end
