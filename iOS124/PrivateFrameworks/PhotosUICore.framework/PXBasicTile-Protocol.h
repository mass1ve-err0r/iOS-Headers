//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXBasicTileAnimationOptions;
@protocol NSObject;

@protocol PXBasicTile <NSObject>
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id <NSObject>)arg2;

@optional
- (void)didAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id <NSObject>)arg2 withOptions:(PXBasicTileAnimationOptions *)arg3;
- (void)willAnimateToGeometry:(struct PXTileGeometry)arg1 toUserData:(id <NSObject>)arg2 withOptions:(PXBasicTileAnimationOptions *)arg3;
@end

