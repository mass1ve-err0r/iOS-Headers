//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOSQLiteDB;

@interface GEORequestCounterPersistence : NSObject
{
    GEOSQLiteDB *_db;
    double _maxAge;
    _Bool _enabled;
    _Atomic long long _nextId;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)readCDSDiagsSince:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)finishedCDSStaleTileUpdateForID:(id)arg1 tilesConsidered:(unsigned int)arg2 tileDownloadAttempts:(unsigned int)arg3 successes:(unsigned int)arg4 failures:(unsigned int)arg5;
- (void)startedCDSStaleTileUpdateForID:(id)arg1;
- (void)finishedCDSDownloadForRegionId:(id)arg1;
- (void)finishedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 tilesAtZoom:(unsigned int)arg3 tileDownloadAttempts:(unsigned int)arg4 successes:(unsigned int)arg5 failures:(unsigned int)arg6 forCDSRegionId:(id)arg7;
- (void)startedCDSDownloadForTileSet:(id)arg1 zoom:(unsigned char)arg2 forCDSRegionId:(id)arg3;
- (void)receivedCDSRegions:(id)arg1 forCDSRegionId:(id)arg2;
- (void)_CDSDownloadAction:(unsigned long long)arg1 regionId:(id)arg2 tileSetName:(id)arg3 zoom:(unsigned char)arg4 totalTileCount:(unsigned int)arg5 attempts:(unsigned int)arg6 successes:(unsigned int)arg7 failures:(unsigned int)arg8 date:(id)arg9;
- (void)fetchTrafficProbeCollectionsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)recordTrafficProbeCollectionAt:(id)arg1 tripId:(id)arg2 locationCount:(int)arg3 result:(unsigned char)arg4;
- (void)purgeAllCounts;
- (void)_purgeOlderThan:(id)arg1;
- (void)logsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)countsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)incrementForApp:(id)arg1 time:(id)arg2 requestId:(long long)arg3 requestType:(unsigned char)arg4 requestMode:(unsigned char)arg5 result:(unsigned char)arg6 xmitBytes:(long long)arg7 recvBytes:(long long)arg8 withCompletion:(CDUnknownBlockType)arg9;
- (long long)nextRequestID;
- (void)_populateNextID:(struct sqlite3 *)arg1;
- (void)dealloc;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (id)init;

@end

