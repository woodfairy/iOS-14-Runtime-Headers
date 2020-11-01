/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryDiagnosticsSession : HMFObject <HMDAccessoryDataStreamAdapterDelegate, HMFLogging> {
    HMDHAPAccessory * _accessory;
    HMDAccessoryDataStreamAdapter * _dataStream;
    NSNumber * _expectedDataSequenceNumber;
    NSFileHandle * _fileHandle;
    NSString * _filePath;
    id /* block */  _pendingCompletionHandler;
    bool  _readyForDataTransfer;
    NSString * _reason;
    HMDAccessoryDiagnosticsSettings * _settings;
    NSDictionary * _urlParameters;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMDHAPAccessory *accessory;
@property (retain) HMDAccessoryDataStreamAdapter *dataStream;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSNumber *expectedDataSequenceNumber;
@property (retain) NSFileHandle *fileHandle;
@property (copy) NSString *filePath;
@property (readonly) unsigned long long hash;
@property (copy) id /* block */ pendingCompletionHandler;
@property bool readyForDataTransfer;
@property (readonly) NSString *reason;
@property (readonly) HMDAccessoryDiagnosticsSettings *settings;
@property (readonly) Class superclass;
@property (copy) NSDictionary *urlParameters;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_callCompletionHandlerWithError:(id)arg1;
- (id)_createLogFile;
- (bool)_handleReceivedData:(id)arg1;
- (bool)_validDataSequenceNumber:(id)arg1;
- (id)accessory;
- (id)attributeDescriptions;
- (id)dataStream;
- (bool)dataStreamAdapter:(id)arg1 didReceiveData:(id)arg2;
- (void)dataStreamAdapterDidCompleteDataRead:(id)arg1;
- (void)dataStreamAdapterDidFailDataRead:(id)arg1;
- (void)dealloc;
- (id)expectedDataSequenceNumber;
- (id)fileExtension;
- (id)fileHandle;
- (id)filePath;
- (id)initWithAccessory:(id)arg1 workQueue:(id)arg2 settings:(id)arg3;
- (id)logIdentifier;
- (id /* block */)pendingCompletionHandler;
- (void)readDataWithCompletion:(id /* block */)arg1;
- (bool)readyForDataTransfer;
- (id)reason;
- (void)setDataStream:(id)arg1;
- (void)setExpectedDataSequenceNumber:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (void)setFilePath:(id)arg1;
- (void)setPendingCompletionHandler:(id /* block */)arg1;
- (void)setReadyForDataTransfer:(bool)arg1;
- (void)setUpWithCompletion:(id /* block */)arg1;
- (void)setUrlParameters:(id)arg1;
- (id)settings;
- (void)shutDown;
- (id)urlParameters;
- (id)workQueue;

@end