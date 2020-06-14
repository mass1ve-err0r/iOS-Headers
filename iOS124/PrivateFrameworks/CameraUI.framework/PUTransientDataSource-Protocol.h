//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class NSArray, NSDictionary;
@protocol PUTransientDataSourceChangeObserver;

@protocol PUTransientDataSource <NSObject>
- (void)unregisterChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (void)registerChangeObserver:(id <PUTransientDataSourceChangeObserver>)arg1;
- (NSDictionary *)transientBurstMapping;
- (NSDictionary *)transientAssetMapping;
- (NSArray *)uuids;
@end

