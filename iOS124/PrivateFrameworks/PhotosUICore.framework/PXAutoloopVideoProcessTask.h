//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAutoloopVideoTask.h>

@class PXAutoloopVideoRecipe;

@interface PXAutoloopVideoProcessTask : PXAutoloopVideoTask
{
    _Bool _shouldExtractGateFeatures;
    PXAutoloopVideoRecipe *_outputRecipe;
}

@property(nonatomic) _Bool shouldExtractGateFeatures; // @synthesize shouldExtractGateFeatures=_shouldExtractGateFeatures;
@property(retain) PXAutoloopVideoRecipe *outputRecipe; // @synthesize outputRecipe=_outputRecipe;
- (void).cxx_destruct;
- (void)performTaskWithInput:(id)arg1;

@end

