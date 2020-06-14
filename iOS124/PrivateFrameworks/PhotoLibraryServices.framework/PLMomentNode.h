//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLRegionsClusteringItem-Protocol.h>

@class CLLocation, NSDate, NSNumber, NSString, PLMomentCluster;
@protocol NSCopying;

@interface PLMomentNode : NSObject <PLRegionsClusteringItem>
{
    _Bool _marked;
    _Bool _visited;
    NSObject<NSCopying> *__objectID;
    CLLocation *__location;
    NSDate *__creationDate;
    PLMomentCluster *__cluster;
    unsigned long long __userTagType;
    NSString *__userTag;
    NSNumber *_cacheInsertionIndex;
}

@property(retain, nonatomic) NSNumber *cacheInsertionIndex; // @synthesize cacheInsertionIndex=_cacheInsertionIndex;
@property(nonatomic, getter=isVisited) _Bool visited; // @synthesize visited=_visited;
@property(nonatomic, getter=isMarked) _Bool marked; // @synthesize marked=_marked;
@property(readonly, nonatomic) NSString *userTag; // @synthesize userTag=__userTag;
@property(readonly, nonatomic) unsigned long long userTagType; // @synthesize userTagType=__userTagType;
@property(nonatomic) PLMomentCluster *cluster; // @synthesize cluster=__cluster;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=__creationDate;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=__location;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
@property(readonly, nonatomic) NSDate *pl_date; // @dynamic pl_date;
@property(readonly, nonatomic) CLLocation *pl_location; // @dynamic pl_location;
- (_Bool)isTagged;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

