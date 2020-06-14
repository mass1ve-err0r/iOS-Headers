//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>

@class NSString;

@interface GEOReachability : NSObject <GEOResourceManifestTileGroupObserver>
{
    _Bool _networkReachable;
    unsigned long long _errorCount;
    int _symptomsAlternateAdviceToken;
}

+ (id)sharedReachability;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (_Bool)networkAvailable;
- (void)reportLoadFailure:(id)arg1;
- (_Bool)anyFailures;
- (void)reportTileLoadSuccess:(id)arg1;
- (void)_resetErrors;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

