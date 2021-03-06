/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject {
    _TVRCMediaRemoteLegacyKeyboardImpl * _legacyImpl;
    _TVRCMediaRemoteRemoteTextInputKeyboardImpl * _rtiImpl;
    _TVRCMRTelevisionWrapper * _television;
    NSString * _version;
}

@property (nonatomic, retain) _TVRCMRTelevisionWrapper *television;

- (void).cxx_destruct;
- (id)initWithTelevisionSystemVersion:(id)arg1;
- (id)keyboardImpl;
- (void)setTelevision:(id)arg1;
- (id)television;

@end
