//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOBatchOpportunisticTileDownloader, NSData, NSDictionary, NSString;

@protocol GEOBatchOpportunisticTileDownloaderDelegate <NSObject>
- (void)batchOpportunisticTileDownloaderDidFinish:(GEOBatchOpportunisticTileDownloader *)arg1;
- (_Bool)batchOpportunisticTileDownloaderShouldPause:(GEOBatchOpportunisticTileDownloader *)arg1;
- (void)batchOpportunisticTileDownloader:(GEOBatchOpportunisticTileDownloader *)arg1 receivedData:(NSData *)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(NSString *)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(NSDictionary *)arg7;
@end

