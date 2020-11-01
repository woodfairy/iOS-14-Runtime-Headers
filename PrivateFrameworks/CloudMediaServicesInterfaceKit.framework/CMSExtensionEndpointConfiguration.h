/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
 */

@interface CMSExtensionEndpointConfiguration : NSObject {
    NSURL * _endpointURL;
    NSDictionary * _groupHeaders;
    NSDictionary * _headers;
    NSMutableSet * _optionalMethods;
    NSMutableURLRequest * _request;
}

@property (nonatomic, retain) NSURL *endpointURL;
@property (nonatomic, readonly) NSDictionary *groupHeaders;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, retain) NSMutableSet *optionalMethods;
@property (nonatomic, retain) NSMutableURLRequest *request;

- (void).cxx_destruct;
- (id)description;
- (id)endpointURL;
- (id)groupHeaders;
- (id)headers;
- (id)init;
- (id)initWithDictionary:(id)arg1 endpoint:(id)arg2 baseURL:(id)arg3 groupHeaders:(id)arg4;
- (id)optionalMethods;
- (id)request;
- (void)setEndpointURL:(id)arg1;
- (void)setOptionalMethods:(id)arg1;
- (void)setRequest:(id)arg1;

@end