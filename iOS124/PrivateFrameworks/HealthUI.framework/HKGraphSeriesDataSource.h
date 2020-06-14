//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKGraphSeriesDataSourceDelegate;

@interface HKGraphSeriesDataSource : NSObject
{
    id <HKGraphSeriesDataSourceDelegate> _delegate;
    long long _minimumZoom;
    long long _maximumZoom;
}

@property(nonatomic) long long maximumZoom; // @synthesize maximumZoom=_maximumZoom;
@property(nonatomic) long long minimumZoom; // @synthesize minimumZoom=_minimumZoom;
@property(nonatomic) __weak id <HKGraphSeriesDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (CDStruct_6ca94699)blockPathForX:(id)arg1 zoom:(long long)arg2;
- (void)invalidateCache;
- (_Bool)hasAvailableBlocksBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (_Bool)hasPendingQueriesBetweenStartPath:(CDStruct_6ca94699)arg1 endPath:(CDStruct_6ca94699)arg2;
- (void)blocksRequestedFromPath:(CDStruct_6ca94699)arg1 toPath:(CDStruct_6ca94699)arg2;
- (id)cachedBlockForPath:(CDStruct_6ca94699)arg1 context:(id)arg2;
- (id)init;

@end

