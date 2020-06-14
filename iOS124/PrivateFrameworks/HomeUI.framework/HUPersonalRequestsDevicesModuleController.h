//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUSwitchCellDelegate-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HUPersonalRequestsDevicesItemModule, NSString;
@protocol HUPersonalRequestsDevicesModuleControllerDelegate;

@interface HUPersonalRequestsDevicesModuleController : HUItemTableModuleController <HUSwitchCellDelegate, UITextViewDelegate>
{
    id <HUPersonalRequestsDevicesModuleControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <HUPersonalRequestsDevicesModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_togglePersonalRequestStateForItem:(id)arg1;
- (id)_promptToChangeLocationDeviceFromCurrentDevice:(id)arg1;
- (id)_promptToChangeLocationDeviceIfNecessary;
- (id)_promptToEnableSiriIfNecessary;
- (id)_preflightEnablingPersonalRequests;
- (_Bool)_isCurrentDeviceCandidateForLocationDevice;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(_Bool)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (Class)cellClassForItem:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)initWithModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HUPersonalRequestsDevicesItemModule *module; // @dynamic module;
@property(readonly) Class superclass;

@end

