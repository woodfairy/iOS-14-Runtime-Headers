/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle> {
    <STStatusDomainPublisherServerHandle> * _serverHandle;
}

@property (nonatomic, copy) <STStatusDomainData> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <STStatusDomainPublisherServerHandle> *serverHandle;
@property (readonly) Class superclass;
@property (nonatomic, copy) <STStatusDomainData> *volatileData;

+ (id)emptyData;
+ (unsigned long long)statusDomainName;

- (void).cxx_destruct;
- (void)_setData:(id)arg1 completion:(id /* block */)arg2;
- (void)_setVolatileData:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)_updateVolatileDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)data;
- (void)dealloc;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)init;
- (id)initWithServerHandle:(id)arg1;
- (id)serverHandle;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 completion:(id /* block */)arg2;
- (void)setVolatileData:(id)arg1;
- (void)setVolatileData:(id)arg1 completion:(id /* block */)arg2;
- (void)updateDataWithBlock:(id /* block */)arg1;
- (void)updateDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)updateVolatileDataWithBlock:(id /* block */)arg1;
- (void)updateVolatileDataWithBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)volatileData;

@end
