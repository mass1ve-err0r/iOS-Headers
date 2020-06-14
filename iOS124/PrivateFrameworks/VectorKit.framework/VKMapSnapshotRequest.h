//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResourceManifestConfiguration, NSLocale;

@interface VKMapSnapshotRequest : NSObject
{
    unsigned int _scale;
    long long _mapType;
    NSLocale *_locale;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    struct CGSize _size;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _region;
}

@property(retain, nonatomic) GEOResourceManifestConfiguration *manifestConfiguration; // @synthesize manifestConfiguration=_manifestConfiguration;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned int scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
@property(nonatomic) CDStruct_90e2a262 region; // @synthesize region=_region;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct VKRequestKey)_requestKey;

@end

