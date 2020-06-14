//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKNavigatorViewController.h>

#import <OpusKit/OKNavigatorScrollViewControllerProxyExport-Protocol.h>
#import <OpusKit/UIScrollViewDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSTimer, OKPageViewController, OKTimerAnimation, UIScrollView;

@interface OKNavigatorScrollViewControllerProxy : OKNavigatorViewController <OKNavigatorScrollViewControllerProxyExport, UIScrollViewDelegate>
{
    OKPageViewController *_pageViewController;
    UIScrollView *_scrollView;
    double _velocityTimestamp;
    double _currentVelocity;
    double _currentTilt;
    double _currentRotationZ;
    NSTimer *_autopanningTimer;
    double _velocity2;
    NSMutableArray *_registeredObjects;
    NSMutableDictionary *_registeredActions;
    NSString *_viewDidScrollActionScript;
    struct CGPoint _lastOffset;
    OKTimerAnimation *_scrollingAnimation;
    double _velocity;
    double _tilt;
    double _rotationZ;
}

+ (void)setupJavascriptContext:(id)arg1;
+ (id)supportedSettings;
@property(nonatomic) double rotationZ; // @synthesize rotationZ=_rotationZ;
@property(nonatomic) double tilt; // @synthesize tilt=_tilt;
@property(nonatomic) double velocity; // @synthesize velocity=_velocity;
- (void)doPanAction:(id)arg1;
- (void)doSwipeAction:(id)arg1;
- (void)doMotionAction:(id)arg1;
- (void)doApplyMotion:(id)arg1;
- (void)setSettingViewDidScrollActionScript:(id)arg1;
- (id)settingViewDidScrollActionScript;
- (void)setSettingContentSize:(struct CGSize)arg1;
- (struct CGSize)contentSize;
- (struct CGRect)contentBounds;
- (struct CGPoint)contentOffset;
- (_Bool)prepareForUnload;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForDisplay;
- (struct CGRect)visiblePageRect;
- (void)updatePageViewController;
- (struct CGSize)layoutFactor;
- (void)updateParallax;
- (void)applySettings;
- (void)removeRegisteredObject:(id)arg1 forActionAtOffset:(struct CGPoint)arg2 continuous:(_Bool)arg3;
- (void)registerObject:(id)arg1 forActionAtOffset:(struct CGPoint)arg2 probability:(unsigned long long)arg3 andLimit:(unsigned long long)arg4;
- (void)registerObjectOnScrollingEvent:(id)arg1;
- (id)keyForOffset:(struct CGPoint)arg1;
- (id)sectorKeysForRect:(struct CGRect)arg1;
- (void)triggerAction;
- (void)scrollViewDidScrollProxy;
- (void)cleanupScrollEvents;
- (struct _OKEventList *)createList;
- (struct _OKEventElement *)createElementWithObject:(id)arg1 atOffset:(struct CGPoint)arg2 withProbability:(unsigned long long)arg3 withLimit:(unsigned long long)arg4;
- (void)deleteElement:(struct _OKEventElement *)arg1 inList:(struct _OKEventList *)arg2;
- (void)insertElement:(struct _OKEventElement *)arg1 inList:(struct _OKEventList *)arg2;
- (void)cancelCouchPotatoPlayback;
- (void)navigateToOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 duration:(double)arg3 timingFunctionName:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)navigateToWidgetWithName:(id)arg1 animated:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)navigateToItemAtKeyPath:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

