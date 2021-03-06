/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
 */

@interface DIAttachedDeviceInfo : NSObject {
    NSString * _BSDname;
    NSURL * _imageURL;
}

@property (readonly) NSString *BSDname;
@property (readonly) NSURL *imageURL;

+ (id)copyImageURLFromDevice:(id)arg1 error:(id*)arg2;
+ (id)newDevicesArrayWithError:(id*)arg1;

- (void).cxx_destruct;
- (id)BSDname;
- (id)description;
- (id)imageURL;
- (id)initWithService:(unsigned int)arg1 error:(id*)arg2;

@end
