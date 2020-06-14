//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKLegibilityLabel.h>

#import <NanoTimeKitCompanion/CLKUILabel-Protocol.h>
#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravelState-Protocol.h>

@class CLKDevice, CLKFont, CLKTextProvider, NSAttributedString, NSParagraphStyle, NSString, UIColor, UIFont, _NTKColorManager;

@interface NTKColoringLabel : NTKLegibilityLabel <NTKColoringView, CLKUILabel, NTKTimeTravelState>
{
    CLKDevice *_device;
    unsigned long long _options;
    _NTKColorManager *_colorManager;
    struct NSNumber *_updateToken;
    _Bool _updatedAfterTimeTravelStateChange;
    CLKFont *_preTimeTravelFont;
    _Bool _inTimeTravel;
    _Bool _uppercase;
    _Bool _usesTextProviderTintColoring;
    _Bool _cachedSizeIsValid;
    _Bool _cachedOpticalEdgeInsetsIsValid;
    _Bool _usesTextProviderSize;
    UIColor *_overrideColor;
    CLKTextProvider *_textProvider;
    CLKFont *_textProviderFont;
    CLKFont *_textProviderSmallCapsBaseFont;
    double _maxWidth;
    NSParagraphStyle *_paragraphStyle;
    double _tracking;
    CDUnknownBlockType _nowProvider;
    CDUnknownBlockType _needsResizeHandler;
    struct CGSize _cachedSingleLineSize;
    struct UIEdgeInsets _cachedOpticalEdgeInsets;
}

+ (id)labelWithOptions:(unsigned long long)arg1;
@property(nonatomic) _Bool usesTextProviderSize; // @synthesize usesTextProviderSize=_usesTextProviderSize;
@property(nonatomic) _Bool cachedOpticalEdgeInsetsIsValid; // @synthesize cachedOpticalEdgeInsetsIsValid=_cachedOpticalEdgeInsetsIsValid;
@property(readonly, nonatomic) struct UIEdgeInsets cachedOpticalEdgeInsets; // @synthesize cachedOpticalEdgeInsets=_cachedOpticalEdgeInsets;
@property(nonatomic) _Bool cachedSizeIsValid; // @synthesize cachedSizeIsValid=_cachedSizeIsValid;
@property(nonatomic) struct CGSize cachedSingleLineSize; // @synthesize cachedSingleLineSize=_cachedSingleLineSize;
@property(copy, nonatomic) CDUnknownBlockType needsResizeHandler; // @synthesize needsResizeHandler=_needsResizeHandler;
@property(copy, nonatomic) CDUnknownBlockType nowProvider; // @synthesize nowProvider=_nowProvider;
@property(nonatomic) double tracking; // @synthesize tracking=_tracking;
@property(copy, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(nonatomic) _Bool usesTextProviderTintColoring; // @synthesize usesTextProviderTintColoring=_usesTextProviderTintColoring;
@property(nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) CLKFont *textProviderSmallCapsBaseFont; // @synthesize textProviderSmallCapsBaseFont=_textProviderSmallCapsBaseFont;
@property(retain, nonatomic) CLKFont *textProviderFont; // @synthesize textProviderFont=_textProviderFont;
@property(retain, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) _Bool inTimeTravel; // @synthesize inTimeTravel=_inTimeTravel;
- (void).cxx_destruct;
- (id)_fontWithMonospaceNumbers:(id)arg1;
- (void)_updateDynamicTracking;
- (void)setShadowOffset:(struct CGSize)arg1;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *text;
@property(retain, nonatomic) UIFont *font;
- (id)_activeFont;
- (id)_font;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)invalidateCachedSize;
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
- (double)minimumWithFont:(id)arg1 smallCapsBaseFont:(id)arg2;
- (double)minimumWithFont:(id)arg1;
- (double)minimumWidth;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2 smallCapsBaseFont:(id)arg3;
- (double)widthForMaxWidth:(double)arg1 withFont:(id)arg2;
- (double)widthForMaxWidth:(double)arg1;
- (void)_requeryTextProviderAndNotify:(_Bool)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setusesTextProviderTintColoring:(_Bool)arg1;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
- (_Bool)usesLegibility:(_Bool)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)sizeToFit;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (double)_firstLineBaseline;
@property(readonly, nonatomic) double _lastLineBaseline;
@property(retain, nonatomic) UIColor *color;
- (id)initWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIColor *textColor;

@end

