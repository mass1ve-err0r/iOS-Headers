//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubbleControl.h>

@class NSArray;

@interface GKBaseBubbleWithTextControl : GKBubbleControl
{
    double _referenceZPosition;
    NSArray *_labels;
    id _updateRasterizationScaleToken;
}

@property(retain, nonatomic) id updateRasterizationScaleToken; // @synthesize updateRasterizationScaleToken=_updateRasterizationScaleToken;
@property(retain, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(nonatomic) double referenceZPosition; // @synthesize referenceZPosition=_referenceZPosition;
- (void)didMoveToSuperview;
- (void)updateLabelRasterizationScaleForLabels;
- (void)updateTextFieldsFor3DScaling;
- (id)_scaledTextStyle:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isFlipped;

@end

