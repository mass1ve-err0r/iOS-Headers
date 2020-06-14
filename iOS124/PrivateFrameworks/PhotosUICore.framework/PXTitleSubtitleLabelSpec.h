//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXViewSpec.h>

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec : PXViewSpec
{
    PXLabelSpec *_titleLabelSpec;
    PXLabelSpec *_subtitleLabelSpec;
    double _interLabelSpacing;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double interLabelSpacing; // @synthesize interLabelSpacing=_interLabelSpacing;
@property(retain, nonatomic) PXLabelSpec *subtitleLabelSpec; // @synthesize subtitleLabelSpec=_subtitleLabelSpec;
@property(retain, nonatomic) PXLabelSpec *titleLabelSpec; // @synthesize titleLabelSpec=_titleLabelSpec;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

