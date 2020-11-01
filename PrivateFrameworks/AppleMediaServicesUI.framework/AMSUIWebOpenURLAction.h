/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebOpenURLAction : NSObject <AMSUIWebActionRunnable> {
    NSURL * _URL;
    bool  _appLink;
    AMSUIWebClientContext * _context;
}

@property (nonatomic, retain) NSURL *URL;
@property (nonatomic) bool appLink;
@property (nonatomic, retain) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (bool)appLink;
- (id)context;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)runAction;
- (void)setAppLink:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setURL:(id)arg1;

@end