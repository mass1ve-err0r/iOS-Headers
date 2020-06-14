//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface VNCluster : NSObject
{
    _Bool _shouldUpdateRepresentative;
    NSArray *_objects;
    unsigned long long _clusterId;
    unsigned long long _totalObjectCount;
    NSArray *_suggestedIdsForRepresentative;
    NSDictionary *_representativenessById;
}

@property(retain, nonatomic) NSDictionary *representativenessById; // @synthesize representativenessById=_representativenessById;
@property(retain, nonatomic) NSArray *suggestedIdsForRepresentative; // @synthesize suggestedIdsForRepresentative=_suggestedIdsForRepresentative;
@property(nonatomic) _Bool shouldUpdateRepresentative; // @synthesize shouldUpdateRepresentative=_shouldUpdateRepresentative;
@property(nonatomic) unsigned long long totalObjectCount; // @synthesize totalObjectCount=_totalObjectCount;
@property(nonatomic) unsigned long long clusterId; // @synthesize clusterId=_clusterId;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

