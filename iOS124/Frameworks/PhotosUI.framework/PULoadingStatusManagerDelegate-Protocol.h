//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PULoadingStatusManager, PUOperationStatus;

@protocol PULoadingStatusManagerDelegate <NSObject>

@optional
- (void)loadingStatusManager:(PULoadingStatusManager *)arg1 didUpdateLoadingStatus:(PUOperationStatus *)arg2 forItem:(id)arg3;
@end

