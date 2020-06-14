//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWindow.h>

#import "SBMainDisplayInterfaceOrientationSource-Protocol.h"

@class NSString, SBRecycledViewsContainer;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource>
{
    SBRecycledViewsContainer *_recycledViewsContainerView;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}

+ (_Bool)sb_autorotates;
+ (_Bool)sb_disableStatusBarHeightChanges;
+ (id)defaultLayoutStrategy;
@property(readonly, nonatomic) id <SBWindowLayoutStrategy> layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;
@property(readonly, copy) NSString *description;
- (id)recycledViewsContainer;
- (void)setAutorotates:(_Bool)arg1 forceUpdateInterfaceOrientation:(_Bool)arg2;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;
- (_Bool)_shouldResizeWithScene;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2 rootViewController:(id)arg3;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3;
- (id)initWithScreen:(id)arg1 debugName:(id)arg2;
- (void)setAlphaAndObeyBecauseIAmTheWindowManager:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

