//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol NSObject;

@protocol PXTileAnimator <NSObject>
- (void)animateTile:(void *)arg1 toGeometry:(struct PXTileGeometry)arg2 userData:(id <NSObject>)arg3 withOptions:(id <NSObject>)arg4 completionHandler:(void (^)(void))arg5;
- (void)prepareTile:(void *)arg1 withGeometry:(struct PXTileGeometry)arg2 userData:(id <NSObject>)arg3;
@end

