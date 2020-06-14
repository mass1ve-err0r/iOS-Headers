//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAbstractMapServiceTicket.h>

@class GEOBatchRevGeocodeRequest;

__attribute__((visibility("hidden")))
@interface _GEOBatchReverseGeocodeTicket : GEOAbstractMapServiceTicket
{
    GEOBatchRevGeocodeRequest *_batchReverseGeocodeRequest;
    _Bool _shiftLocationsIfNeeded;
}

- (void).cxx_destruct;
- (_Bool)isEqualForHistoryToTicket:(id)arg1;
- (void)_batchReverseGeocodeWithRequest:(id)arg1 auditToken:(id)arg2 handler:(CDUnknownBlockType)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;
- (void)cancel;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(_Bool)arg2 traits:(id)arg3;

@end

