//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class PXTilingController, PXTilingLayout, PXTilingScrollInfo;

@protocol PXTilingControllerScrollDelegate <NSObject>

@optional
- (PXTilingScrollInfo *)tilingController:(PXTilingController *)arg1 scrollInfoForLayout:(PXTilingLayout *)arg2;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 targetVisibleOriginForLayout:(PXTilingLayout *)arg2 proposedVisibleOrigin:(struct CGPoint)arg3;
- (struct CGPoint)tilingController:(PXTilingController *)arg1 initialVisibleOriginForLayout:(PXTilingLayout *)arg2;
@end

