//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTileDecoder-Protocol.h>

@class NSString;

@interface GEORegionalResourceTileDecoder : NSObject <GEOTileDecoder>
{
}

- (id)decodeTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (_Bool)canDecodeTile:(const struct _GEOTileKey *)arg1 quickly:(_Bool *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

