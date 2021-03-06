/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
 */

@interface NFContainerRegistry : NSObject <NFContainerRegistry> {
    id  _bridgedContainer;
    <NFCallbackRegistration> * _callback;
    <NFRegistrationContainer> * _privateContainer;
    <NFRegistrationContainer> * _publicContainer;
    id  _swiftContainer;
}

@property (nonatomic, readonly) id bridgedContainer;
@property (nonatomic, readonly) <NFCallbackRegistration> *callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NFRegistrationContainer> *privateContainer;
@property (nonatomic, readonly) <NFRegistrationContainer> *publicContainer;
@property (readonly) Class superclass;
@property (nonatomic, readonly) id swiftContainer;

- (void).cxx_destruct;
- (id)bridgedContainer;
- (id)callback;
- (id)initWithPublicContainer:(id)arg1 privateContainer:(id)arg2 bridgedContainer:(id)arg3 callback:(id)arg4;
- (id)privateContainer;
- (id)publicContainer;
- (id)swiftContainer;

@end
