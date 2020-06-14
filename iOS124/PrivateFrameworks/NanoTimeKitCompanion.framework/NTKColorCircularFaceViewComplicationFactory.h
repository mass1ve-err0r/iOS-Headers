//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKFaceViewComplicationFactory.h>

@interface NTKColorCircularFaceViewComplicationFactory : NTKFaceViewComplicationFactory
{
}

- (long long)keylineStyleForComplicationSlot:(id)arg1;
- (double)_colorCircularLisaGapForState:(long long)arg1;
- (double)_colorCircularKeylinePaddingForState:(long long)arg1;
- (double)_colorCircularEdgeGapForState:(long long)arg1;
- (unsigned long long)keylineLabelAlignmentForComplicationSlot:(id)arg1 faceView:(id)arg2;
- (void)configureComplicationView:(id)arg1 forSlot:(id)arg2 faceView:(id)arg3;
- (id)newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 faceView:(id)arg4;
- (void)loadLayoutRulesForFaceView:(id)arg1;
- (id)initForDevice:(id)arg1;

@end

