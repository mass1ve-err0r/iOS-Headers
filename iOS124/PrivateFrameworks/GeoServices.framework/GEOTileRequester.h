//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestManager, GEOTileRequest, NSString, NSThread;
@protocol GEOTileRequesterDelegate, OS_dispatch_queue;

@interface GEOTileRequester : NSObject
{
    GEOTileRequest *_tileRequest;
    id <GEOTileRequesterDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id _context;
    NSThread *_thread;
    NSString *_deviceCountry;
    NSString *_deviceRegion;
}

+ (_Bool)skipNetworkForKeysWhenPreloading:(id)arg1;
+ (CDStruct_e4886f83 *)newExpiringTilesets;
+ (unsigned long long)expiringTilesetsCount;
+ (unsigned char)tileProviderIdentifier;
@property(retain, nonatomic) NSString *deviceRegion; // @synthesize deviceRegion=_deviceRegion;
@property(retain, nonatomic) NSString *deviceCountry; // @synthesize deviceCountry=_deviceCountry;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) GEOTileRequest *tileRequest; // @synthesize tileRequest=_tileRequest;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <GEOTileRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)reprioritizeKey:(const struct _GEOTileKey *)arg1 newPriority:(unsigned int)arg2;
- (void)cancelKey:(const struct _GEOTileKey *)arg1;
- (void)cancel;
- (void)tearDown;
- (void)start;
- (id)initWithTileRequest:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3;
@property(readonly, nonatomic) GEOResourceManifestManager *resourceManifestManager;

@end

