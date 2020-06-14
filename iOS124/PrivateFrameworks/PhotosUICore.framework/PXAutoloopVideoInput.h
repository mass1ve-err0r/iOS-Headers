//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSURL, PXAutoloopVideoRecipe;

@interface PXAutoloopVideoInput : NSObject
{
    AVAsset *_asset;
    NSURL *_imageURL;
    PXAutoloopVideoRecipe *_recipe;
}

+ (id)inputWithAsset:(id)arg1 imageURL:(id)arg2 recipe:(id)arg3;
@property(readonly, nonatomic) PXAutoloopVideoRecipe *recipe; // @synthesize recipe=_recipe;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 imageURL:(id)arg2 recipe:(id)arg3;

@end

