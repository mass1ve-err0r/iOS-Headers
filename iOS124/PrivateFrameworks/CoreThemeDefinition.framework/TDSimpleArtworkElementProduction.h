//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDElementProduction.h>

@class TDTemplateRenderingMode;

@interface TDSimpleArtworkElementProduction : TDElementProduction
{
}

- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(_Bool)arg2;

// Remaining properties
@property(nonatomic) short autoscalingType; // @dynamic autoscalingType;
@property(nonatomic) _Bool isFlippable; // @dynamic isFlippable;
@property(nonatomic) _Bool optOutOfThinning; // @dynamic optOutOfThinning;
@property(nonatomic) _Bool preservesVectorRepresentation; // @dynamic preservesVectorRepresentation;
@property(nonatomic) _Bool recognitionImage; // @dynamic recognitionImage;
@property(retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

@end

