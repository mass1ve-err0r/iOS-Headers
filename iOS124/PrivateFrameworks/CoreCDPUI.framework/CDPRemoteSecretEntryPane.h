//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPUI/CDPPassphraseEntryPane.h>

@class CDPDevice, CDPRemoteValidationEscapeOffer, UIButton;

@interface CDPRemoteSecretEntryPane : CDPPassphraseEntryPane
{
    UIButton *_footerButton;
    _Bool _remoteAccountRecovery;
    CDPRemoteValidationEscapeOffer *_escapeOffer;
    unsigned long long _remoteSecretType;
    CDPDevice *_device;
}

@property _Bool remoteAccountRecovery; // @synthesize remoteAccountRecovery=_remoteAccountRecovery;
@property(retain, nonatomic) CDPDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long remoteSecretType; // @synthesize remoteSecretType=_remoteSecretType;
@property(retain, nonatomic) CDPRemoteValidationEscapeOffer *escapeOffer; // @synthesize escapeOffer=_escapeOffer;
- (void).cxx_destruct;
- (id)_headerStringForDevice:(id)arg1 localDeviceClass:(id)arg2;
- (void)didFinishResizingPinView;
- (void)didFinishResizingHeaderView;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

