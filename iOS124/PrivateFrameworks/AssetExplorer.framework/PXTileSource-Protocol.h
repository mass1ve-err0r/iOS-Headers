//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssetExplorer/NSObject-Protocol.h>

@class PXTilingLayout;

@protocol PXTileSource <NSObject>
- (void)checkInTile:(void *)arg1 withIdentifier:(struct PXTileIdentifier)arg2;
- (void *)checkOutTileForIdentifier:(struct PXTileIdentifier)arg1 layout:(PXTilingLayout *)arg2;
@end

