//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PLDataCluster;

@interface CLSSummaryClusteringItem : NSObject
{
    PLDataCluster *_cluster;
    unsigned long long _numberOfItemsToElect;
}

@property(readonly) unsigned long long numberOfItemsToElect; // @synthesize numberOfItemsToElect=_numberOfItemsToElect;
@property(readonly) PLDataCluster *cluster; // @synthesize cluster=_cluster;
- (void).cxx_destruct;
- (id)initWithCluster:(id)arg1 numberOfItemsToElect:(unsigned long long)arg2;

@end

