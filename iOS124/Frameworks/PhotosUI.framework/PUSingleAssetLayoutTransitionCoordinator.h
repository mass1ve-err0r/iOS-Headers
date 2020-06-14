//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileTransitionCoordinator.h>

@protocol PUTilingCoordinateSystem;

__attribute__((visibility("hidden")))
@interface PUSingleAssetLayoutTransitionCoordinator : PUTileTransitionCoordinator
{
    id <PUTilingCoordinateSystem> _fixedCoordinateSystem;
}

@property(retain, nonatomic) id <PUTilingCoordinateSystem> fixedCoordinateSystem; // @synthesize fixedCoordinateSystem=_fixedCoordinateSystem;
- (void).cxx_destruct;
- (id)_layoutInfoWithDefaultDisappearance:(id)arg1;
- (id)finalLayoutInfoForDisappearingTileController:(id)arg1 fromLayoutInfo:(id)arg2;
- (id)initialLayoutInfoForAppearingTileController:(id)arg1 toLayoutInfo:(id)arg2;

@end

