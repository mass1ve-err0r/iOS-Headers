//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOUtilityServiceProxy-Protocol.h>

@class NSString;
@protocol GEOUtilityServiceProxy;

@interface GEOUtilityService : NSObject <GEOUtilityServiceProxy>
{
    id <GEOUtilityServiceProxy> _proxy;
}

+ (id)sharedService;
+ (void)useProxy:(Class)arg1;
- (void).cxx_destruct;
- (void)getCurrentGeoServicesState:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getGeoServicesCacheDirectoryPath;
- (id)getHomeDirectoryPath;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

