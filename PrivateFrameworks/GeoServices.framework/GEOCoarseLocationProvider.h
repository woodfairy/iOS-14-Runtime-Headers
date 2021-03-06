/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCoarseLocationProvider : NSObject {
    unsigned long long  _inFlightTileLoadsCount;
    GEOLocationShifter * _locationShifter;
    NSObject<OS_dispatch_queue> * _workQueue;
}

- (void).cxx_destruct;
- (void)_fetchBasicCoarseEquivalentForLocation:(id)arg1 fallbackIsPermanent:(bool)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (void)_fetchRepresentativePointFromData:(id)arg1 location:(id)arg2 callbackQueue:(id)arg3 callback:(id /* block */)arg4;
- (bool)_snapNonMercatorCoordinateIfNecessary:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)fetchCoarseEquivalentForLocation:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (id)init;

@end
