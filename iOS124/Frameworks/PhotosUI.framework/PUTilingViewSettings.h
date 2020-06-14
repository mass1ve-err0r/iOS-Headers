//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PUTilingViewSettings : PXSettings
{
    _Bool _useSpringAnimations;
    _Bool _useSystemSpringAnimations;
    _Bool _useOvershootingSpringAnimations;
    _Bool _allowPaging;
    _Bool _allowPreheating;
    _Bool _allowTileReuse;
    _Bool _allowsEdgeAntialiasing;
    _Bool _carryOverVelocities;
    _Bool _tintTiles;
    _Bool _showVisibleRects;
    _Bool _rotateDisappearingTiles;
    _Bool _showSnapshottableTiles;
    double _animationDragCoefficient;
    double _springAnimationDuration;
    double _defaultAnimationDuration;
    double _transitionDuration;
    long long _transitionProgressBehavior;
    double _interactiveTransitionBackgroundDimming;
    double _transitionChromeDelay;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
@property(nonatomic) _Bool showSnapshottableTiles; // @synthesize showSnapshottableTiles=_showSnapshottableTiles;
@property(nonatomic) _Bool rotateDisappearingTiles; // @synthesize rotateDisappearingTiles=_rotateDisappearingTiles;
@property(nonatomic) _Bool showVisibleRects; // @synthesize showVisibleRects=_showVisibleRects;
@property(nonatomic) _Bool tintTiles; // @synthesize tintTiles=_tintTiles;
@property(nonatomic) _Bool carryOverVelocities; // @synthesize carryOverVelocities=_carryOverVelocities;
@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing=_allowsEdgeAntialiasing;
@property(nonatomic) _Bool allowTileReuse; // @synthesize allowTileReuse=_allowTileReuse;
@property(nonatomic) _Bool allowPreheating; // @synthesize allowPreheating=_allowPreheating;
@property(nonatomic) _Bool allowPaging; // @synthesize allowPaging=_allowPaging;
@property(nonatomic) double transitionChromeDelay; // @synthesize transitionChromeDelay=_transitionChromeDelay;
@property(nonatomic) double interactiveTransitionBackgroundDimming; // @synthesize interactiveTransitionBackgroundDimming=_interactiveTransitionBackgroundDimming;
@property(nonatomic) long long transitionProgressBehavior; // @synthesize transitionProgressBehavior=_transitionProgressBehavior;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) _Bool useOvershootingSpringAnimations; // @synthesize useOvershootingSpringAnimations=_useOvershootingSpringAnimations;
@property(nonatomic) double defaultAnimationDuration; // @synthesize defaultAnimationDuration=_defaultAnimationDuration;
@property(nonatomic) double springAnimationDuration; // @synthesize springAnimationDuration=_springAnimationDuration;
@property(nonatomic) _Bool useSystemSpringAnimations; // @synthesize useSystemSpringAnimations=_useSystemSpringAnimations;
@property(nonatomic) _Bool useSpringAnimations; // @synthesize useSpringAnimations=_useSpringAnimations;
@property(nonatomic) double animationDragCoefficient; // @synthesize animationDragCoefficient=_animationDragCoefficient;
- (void)setDefaultValues;
- (id)parentSettings;

@end

