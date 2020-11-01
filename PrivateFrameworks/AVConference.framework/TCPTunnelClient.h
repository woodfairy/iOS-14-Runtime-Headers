/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {
    NSData * _allocateReq;
    id /* block */  _allocationResponseHandler;
    double  _allocationTimestamp;
    id /* block */  _bindingResponseHandler;
    TCPBufferPool * _bufferPool;
    NSData * _channelBReq;
    unsigned short  _channelNumber;
    int  _connectState;
    int  _connectedFD;
    unsigned short  _currentMsgType;
    long long  _currentPadding;
    long long  _currentlyReadingDataGoalLength;
    NSMutableData * _currentlyReadingMessage;
    id /* block */  _destroyHandler;
    float  _fTimeout;
    id /* block */  _handler;
    int  _head;
    int  _isChannelBound;
    NSString * _participantID;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    NSDictionary * _relayUpdateDict;
    NSMutableDictionary * _reqRespDict;
    struct tagIPPORT { 
        int iFlags; 
        BOOL szIfName[16]; 
        union { 
            unsigned int dwIPv4; 
            unsigned char abIPv6[16]; 
        } IP; 
        unsigned short wPort; 
    }  _serverIPPort;
    int  _tail;
    id /* block */  _terminationHandler;
    NSObject<OS_dispatch_source> * _timer;
    char * _writeBuf;
    NSObject<OS_dispatch_source> * _writeSource;
    unsigned char  _writeSourceSuspended;
}

@property (copy) id /* block */ allocationResponseHandler;
@property (copy) id /* block */ bindingResponseHandler;
@property (copy) id /* block */ destroyHandler;
@property (copy) NSString *participantID;
@property (copy) id /* block */ receiveHandler;
@property (copy) id /* block */ terminationHandler;

- (id /* block */)allocationResponseHandler;
- (id /* block */)bindingResponseHandler;
- (void)closeTunnelSocket;
- (unsigned int)connectionType;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(long long)arg2;
- (void)dealloc;
- (void)destroyDispatchTimer;
- (id /* block */)destroyHandler;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned int)arg2 relayType:(unsigned char)arg3 errorCode:(int*)arg4;
- (bool)isTunnelSocketClosed;
- (id)participantID;
- (void)processSocketRead;
- (void)processSocketReadSSL;
- (void)processSocketWrite:(unsigned char)arg1;
- (id /* block */)receiveHandler;
- (void)receivedControlData:(id)arg1;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (void)reportErrorAndTerminate:(long long)arg1 detail:(long long)arg2 returnCode:(long long)arg3 description:(id)arg4 reason:(id)arg5;
- (void)resetConnection;
- (bool)sendAllocateMsg:(id*)arg1;
- (bool)sendChannelBindingMsgWithDict:(id)arg1 error:(id*)arg2;
- (bool)sendRefreshMsg:(unsigned int)arg1 error:(id*)arg2;
- (void)sendTCPData:(const void*)arg1 bufSize:(int)arg2;
- (void)setAllocationResponseHandler:(id /* block */)arg1;
- (void)setBindingResponseHandler:(id /* block */)arg1;
- (void)setDestroyHandler:(id /* block */)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setReceiveHandler:(id /* block */)arg1;
- (void)setTerminationHandler:(id /* block */)arg1;
- (id /* block */)terminationHandler;
- (void)unbindChannel;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(bool)arg3 withTimeout:(float)arg4 withDetail:(long long)arg5;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

@end