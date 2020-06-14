//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlSimpleInteractionCoordinator.h>

#import <HomeUI/HUQuickControlColorViewInteractionDelegate-Protocol.h>

@class HFColorPalette, HUQuickControlColorView, NSString;
@protocol HUQuickControlColorInteractionCoordinatorDelegate;

@interface HUQuickControlColorInteractionCoordinator : HUQuickControlSimpleInteractionCoordinator <HUQuickControlColorViewInteractionDelegate>
{
    _Bool _hasPendingColorPaletteChangeDelegateNotification;
    HFColorPalette *_colorPalette;
}

@property(nonatomic) _Bool hasPendingColorPaletteChangeDelegateNotification; // @synthesize hasPendingColorPaletteChangeDelegateNotification=_hasPendingColorPaletteChangeDelegateNotification;
@property(retain, nonatomic) HFColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
- (void).cxx_destruct;
- (void)hideAuxiliaryViewForControlView:(id)arg1;
- (void)controlView:(id)arg1 showAuxiliaryView:(id)arg2;
- (void)controlView:(id)arg1 colorPaletteDidChange:(id)arg2;
- (void)controlView:(id)arg1 activeModeDidChange:(unsigned long long)arg2;
- (void)controlView:(id)arg1 interactionStateDidChange:(_Bool)arg2 forFirstTouch:(_Bool)arg3;
- (void)_notifyDelegateOfColorPaletteChangeIfNecessary;
- (id)initWithControlView:(id)arg1 colorPalette:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) HUQuickControlColorView *controlView; // @dynamic controlView;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <HUQuickControlColorInteractionCoordinatorDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

