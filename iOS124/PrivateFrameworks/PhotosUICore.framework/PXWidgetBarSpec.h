//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class UIColor, UIFont;

@interface PXWidgetBarSpec : NSObject <NSCopying>
{
    _Bool _shouldUseSingleLine;
    struct UIColor *_textColor;
    struct UIFont *_primaryFont;
    struct UIFont *_secondaryFont;
    double _distanceBetweenTopAndFirstBaseline;
    double _distanceBetweenLastBaselineAndBottom;
    double _minimumDistanceBetweenTopAndFirstAscender;
    double _minimumDistanceBetweenLastDescenderAndBottom;
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;
    double _horizontalSpacingBetweenTitleAndSubtitle;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double horizontalSpacingBetweenTitleAndSubtitle; // @synthesize horizontalSpacingBetweenTitleAndSubtitle=_horizontalSpacingBetweenTitleAndSubtitle;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double minimumDistanceBetweenLastDescenderAndBottom; // @synthesize minimumDistanceBetweenLastDescenderAndBottom=_minimumDistanceBetweenLastDescenderAndBottom;
@property(nonatomic) double minimumDistanceBetweenTopAndFirstAscender; // @synthesize minimumDistanceBetweenTopAndFirstAscender=_minimumDistanceBetweenTopAndFirstAscender;
@property(nonatomic) double distanceBetweenLastBaselineAndBottom; // @synthesize distanceBetweenLastBaselineAndBottom=_distanceBetweenLastBaselineAndBottom;
@property(nonatomic) double distanceBetweenTopAndFirstBaseline; // @synthesize distanceBetweenTopAndFirstBaseline=_distanceBetweenTopAndFirstBaseline;
@property(nonatomic) _Bool shouldUseSingleLine; // @synthesize shouldUseSingleLine=_shouldUseSingleLine;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIFont *secondaryFont; // @synthesize secondaryFont=_secondaryFont;
@property(retain, nonatomic) UIFont *primaryFont; // @synthesize primaryFont=_primaryFont;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

