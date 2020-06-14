//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FIUIChartAxisDescriptor-Protocol.h>

@class FIUIChartDateAnchorRule, NSArray, NSDateComponents, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface FIUIChartTimeAxisDescriptor : NSObject <FIUIChartAxisDescriptor>
{
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableArray *_cachedAxisLabelColors;
    NSMutableDictionary *_hourMinuteFormatters;
    NSMutableDictionary *_hourFormatters;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_dayFormatters;
    NSMutableDictionary *_monthFormatters;
    NSMutableDictionary *_yearFormatters;
    _Bool _hideClippedLabels;
    _Bool _forceAMPMOnFirstLabel;
    _Bool _useMinMaxLabelPlacement;
    _Bool _generateSubAxisDescriptorOnlyForNoonMidnight;
    _Bool _subAxisCapitalize;
    id _minValue;
    id _maxValue;
    unsigned long long _labelAlignment;
    unsigned long long _subLabelAlignment;
    UIFont *_labelFont;
    UIColor *_highlightedLabelColor;
    UIColor *_unhighlightedLabelColor;
    UIColor *_selectedLabelColor;
    double _axisDescriptorPadding;
    double _subAxisDescriptorPadding;
    UIFont *_subLabelFont;
    UIColor *_highlightedSubLabelColor;
    UIColor *_unhighlightedSubLabelColor;
    unsigned long long _textStyle;
    NSDateComponents *_axisSpacing;
    FIUIChartDateAnchorRule *_anchorRule;
    unsigned long long _timeInterval;
    unsigned long long _subTextStyle;
    NSDateComponents *_subAxisSpacing;
    FIUIChartDateAnchorRule *_subAnchorRule;
    unsigned long long _subTimeInterval;
    double _subAxisVerticalPadding;
}

+ (unsigned long long)_spacingIntervalFromAxisSpacing:(id)arg1;
@property(nonatomic) double subAxisVerticalPadding; // @synthesize subAxisVerticalPadding=_subAxisVerticalPadding;
@property(nonatomic) _Bool subAxisCapitalize; // @synthesize subAxisCapitalize=_subAxisCapitalize;
@property(nonatomic) _Bool generateSubAxisDescriptorOnlyForNoonMidnight; // @synthesize generateSubAxisDescriptorOnlyForNoonMidnight=_generateSubAxisDescriptorOnlyForNoonMidnight;
@property(nonatomic) unsigned long long subTimeInterval; // @synthesize subTimeInterval=_subTimeInterval;
@property(retain, nonatomic) FIUIChartDateAnchorRule *subAnchorRule; // @synthesize subAnchorRule=_subAnchorRule;
@property(retain, nonatomic) NSDateComponents *subAxisSpacing; // @synthesize subAxisSpacing=_subAxisSpacing;
@property(nonatomic) unsigned long long subTextStyle; // @synthesize subTextStyle=_subTextStyle;
@property(nonatomic) _Bool useMinMaxLabelPlacement; // @synthesize useMinMaxLabelPlacement=_useMinMaxLabelPlacement;
@property(nonatomic) _Bool forceAMPMOnFirstLabel; // @synthesize forceAMPMOnFirstLabel=_forceAMPMOnFirstLabel;
@property(nonatomic) unsigned long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property(retain, nonatomic) FIUIChartDateAnchorRule *anchorRule; // @synthesize anchorRule=_anchorRule;
@property(retain, nonatomic) NSDateComponents *axisSpacing; // @synthesize axisSpacing=_axisSpacing;
@property(nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property(retain, nonatomic) UIColor *unhighlightedSubLabelColor; // @synthesize unhighlightedSubLabelColor=_unhighlightedSubLabelColor;
@property(retain, nonatomic) UIColor *highlightedSubLabelColor; // @synthesize highlightedSubLabelColor=_highlightedSubLabelColor;
@property(retain, nonatomic) UIFont *subLabelFont; // @synthesize subLabelFont=_subLabelFont;
@property(nonatomic) _Bool hideClippedLabels; // @synthesize hideClippedLabels=_hideClippedLabels;
@property(nonatomic) double subAxisDescriptorPadding; // @synthesize subAxisDescriptorPadding=_subAxisDescriptorPadding;
@property(nonatomic) double axisDescriptorPadding; // @synthesize axisDescriptorPadding=_axisDescriptorPadding;
@property(retain, nonatomic) UIColor *selectedLabelColor; // @synthesize selectedLabelColor=_selectedLabelColor;
@property(retain, nonatomic) UIColor *unhighlightedLabelColor; // @synthesize unhighlightedLabelColor=_unhighlightedLabelColor;
@property(retain, nonatomic) UIColor *highlightedLabelColor; // @synthesize highlightedLabelColor=_highlightedLabelColor;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(nonatomic) unsigned long long subLabelAlignment; // @synthesize subLabelAlignment=_subLabelAlignment;
@property(nonatomic) unsigned long long labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(retain, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property(retain, nonatomic) id minValue; // @synthesize minValue=_minValue;
- (void).cxx_destruct;
- (Class)expectedDataType;
- (id)textForSubLabelAtIndex:(unsigned long long)arg1;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)numSubLabels;
- (id)axisSubLabels;
- (id)_subLabelAtIndex:(unsigned long long)arg1;
- (void)selectLabel:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (id)textForLabelAtIndex:(unsigned long long)arg1;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)numLabels;
- (id)axisLabels;
- (id)_labelAtIndex:(unsigned long long)arg1;
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3 forceAMPM:(_Bool)arg4;
- (id)_startDateFromTimeInterval:(unsigned long long)arg1;
- (id)_subLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (long long)_hourComponentFromDate:(id)arg1;
- (id)_labelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (_Bool)_validateProperties;
- (void)_generateAxisSubLabels;
- (void)_generateAxisLabels;
- (void)_clearFormatters;
- (void)_clearCache;
- (void)invalidateCaches;
- (id)yearFormatter:(unsigned long long)arg1;
- (id)monthFormatter:(unsigned long long)arg1;
- (id)weekdayFormatter:(unsigned long long)arg1;
- (id)dayFormatter:(unsigned long long)arg1;
- (id)hourFormatter:(unsigned long long)arg1;
- (id)_hourMinuteFormatterWithTextStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id highlightedValue;
@property(nonatomic) double shadowBlur;
@property(retain, nonatomic) UIColor *shadowColor;
@property(nonatomic) struct CGSize shadowOffset;
@property(readonly) Class superclass;

@end

