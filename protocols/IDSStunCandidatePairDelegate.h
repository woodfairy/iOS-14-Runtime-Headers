/* Generated by RuntimeBrowser.
 */

@protocol IDSStunCandidatePairDelegate <NSObject>

@required

- (void)candidatePair:(IDSStunCandidatePair *)arg1 didAddQREvent:(NSDictionary *)arg2;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveSessionInfo:(NSDictionary *)arg2 success:(bool)arg3;
- (void)candidatePair:(IDSStunCandidatePair *)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
- (void)disconnectCandidatePair:(IDSStunCandidatePair *)arg1;
- (void)sendAllocbindRequest:(IDSStunCandidatePair *)arg1 isRealloc:(bool)arg2 inResponseToNoSessionState:(bool)arg3;
- (void)sendProbingRequestWithoptions:(NSDictionary *)arg1 candidatePairToken:(NSString *)arg2;

@end
