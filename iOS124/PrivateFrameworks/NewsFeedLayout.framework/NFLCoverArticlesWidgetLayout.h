//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFLCoverArticlesWidgetLayout : NSObject
{
    _Bool _isCompact;
    double _widgetWidth;
    double _widgetHeight;
    double _footerHeight;
    double _portraitCoverMargin;
    double _landscapeCoverMargin;
    double _sideCoverMargin;
    double _focusedShadowRadius;
    double _focusedShadowOffset;
    double _sideCoverShadowRadius;
    double _sideCoverShadowOffset;
    double _sideCoverBleed;
    struct CGSize _bounds;
}

+ (id)layoutForDevice;
+ (id)layoutForFeedSettings:(id)arg1;
@property(readonly, nonatomic) _Bool isCompact; // @synthesize isCompact=_isCompact;
@property(readonly, nonatomic) struct CGSize bounds; // @synthesize bounds=_bounds;
@property(nonatomic) double sideCoverBleed; // @synthesize sideCoverBleed=_sideCoverBleed;
@property(nonatomic) double sideCoverShadowOffset; // @synthesize sideCoverShadowOffset=_sideCoverShadowOffset;
@property(nonatomic) double sideCoverShadowRadius; // @synthesize sideCoverShadowRadius=_sideCoverShadowRadius;
@property(nonatomic) double focusedShadowOffset; // @synthesize focusedShadowOffset=_focusedShadowOffset;
@property(nonatomic) double focusedShadowRadius; // @synthesize focusedShadowRadius=_focusedShadowRadius;
@property(nonatomic) double sideCoverMargin; // @synthesize sideCoverMargin=_sideCoverMargin;
@property(nonatomic) double landscapeCoverMargin; // @synthesize landscapeCoverMargin=_landscapeCoverMargin;
@property(nonatomic) double portraitCoverMargin; // @synthesize portraitCoverMargin=_portraitCoverMargin;
@property(nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(nonatomic) double widgetHeight; // @synthesize widgetHeight=_widgetHeight;
@property(nonatomic) double widgetWidth; // @synthesize widgetWidth=_widgetWidth;
- (double)calculateWidgetHeight;
- (void)setupRegularLayout;
- (void)setupCompactLayout;
- (struct CGSize)coverBoundsConstrainedToSize:(struct CGSize)arg1;
- (id)initWithBounds:(struct CGSize)arg1 compactLayout:(_Bool)arg2;

@end

