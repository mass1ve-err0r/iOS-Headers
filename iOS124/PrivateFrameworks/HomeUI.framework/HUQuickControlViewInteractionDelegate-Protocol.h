//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@protocol HUQuickControlInteractiveView;

@protocol HUQuickControlViewInteractionDelegate <NSObject>
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 valueDidChange:(id)arg2;
- (void)controlView:(id <HUQuickControlInteractiveView>)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
@end

