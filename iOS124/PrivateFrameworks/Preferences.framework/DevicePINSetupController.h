//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController
{
    _Bool _success;
    _Bool _allowOptionsButton;
}

@property(nonatomic) _Bool allowOptionsButton; // @synthesize allowOptionsButton=_allowOptionsButton;
- (void)showController:(id)arg1 animate:(_Bool)arg2;
- (struct CGSize)preferredContentSize;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)popupStyleIsModal;
- (_Bool)usePopupStyle;
- (_Bool)success;
- (id)init;

@end

