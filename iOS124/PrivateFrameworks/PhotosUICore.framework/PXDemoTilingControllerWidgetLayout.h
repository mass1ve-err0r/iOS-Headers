//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsTilingLayout.h>

@interface PXDemoTilingControllerWidgetLayout : PXAssetsTilingLayout
{
}

+ (struct PXTileIdentifier)backgroundTileIdentifier;
- (_Bool)getGeometry:(out struct PXTileGeometry *)arg1 group:(out unsigned long long *)arg2 userData:(out id *)arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(struct CGRect)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)contentBounds;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setReferenceSize:(struct CGSize)arg1;

@end

