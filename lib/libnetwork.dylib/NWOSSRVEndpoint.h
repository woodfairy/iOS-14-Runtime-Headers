/* Generated by RuntimeBrowser
   Image: /usr/lib/libnetwork.dylib
 */

@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint {
    char * name;
}

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(bool)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (bool)isEqualToEndpoint:(id)arg1 matchInterface:(bool)arg2 matchParent:(bool)arg3;
- (unsigned int)type;

@end