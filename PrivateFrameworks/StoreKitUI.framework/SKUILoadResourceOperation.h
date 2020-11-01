/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILoadResourceOperation : NSOperation {
    long long  __loadReason;
    SKUIClientContext * _clientContext;
    NSLock * _lock;
    id /* block */  _outputBlock;
    SKUIResourceRequest * _request;
}

@property (setter=_setLoadReason:, nonatomic) long long _loadReason;
@property (retain) SKUIClientContext *clientContext;
@property (copy) id /* block */ outputBlock;
@property (readonly, copy) SKUIResourceRequest *resourceRequest;

- (void).cxx_destruct;
- (id)_initSKUILoadResourceOperation;
- (long long)_loadReason;
- (void)_setLoadReason:(long long)arg1;
- (void)cancel;
- (id)clientContext;
- (id)init;
- (id)initWithResourceRequest:(id)arg1;
- (void)main;
- (id /* block */)outputBlock;
- (id)resourceRequest;
- (void)setClientContext:(id)arg1;
- (void)setOutputBlock:(id /* block */)arg1;

@end