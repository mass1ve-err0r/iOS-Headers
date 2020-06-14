//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOClientMetrics;

@interface GEOTileUsageInfo : NSObject
{
    double _startTime;
    double _endTime;
    int _tileStyle;
    _Bool _hasTileStyle;
    unsigned long long _tileSize;
    unsigned long long _requestSize;
    double _queuedTime;
    double _decodingTime;
    int _httpResponseStatusCode;
    GEOClientMetrics *_metrics;
}

@property(readonly, nonatomic) GEOClientMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) int httpResponseStatusCode; // @synthesize httpResponseStatusCode=_httpResponseStatusCode;
@property(nonatomic) double decodingTime; // @synthesize decodingTime=_decodingTime;
@property(nonatomic) double queuedTime; // @synthesize queuedTime=_queuedTime;
@property(nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(nonatomic) unsigned long long tileSize; // @synthesize tileSize=_tileSize;
@property(readonly, nonatomic) _Bool hasTileStyle; // @synthesize hasTileStyle=_hasTileStyle;
@property(readonly, nonatomic) int tileStyle; // @synthesize tileStyle=_tileStyle;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)description;
- (int)resourceFetchType;
- (int)protocolType;
- (id)transactionMetrics;
- (id)initWithTileKey:(const struct _GEOTileKey *)arg1 withTileUsageData:(id)arg2 andMetrics:(id)arg3;

@end

