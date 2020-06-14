//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDismissOnlyAlertItem : SBAlertItem
{
    NSString *_title;
    NSString *_body;
}

- (void).cxx_destruct;
- (_Bool)suppressForKeynote;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)dismissButtonText;
- (void)performUnlockAction;
- (id)bodyText;
- (id)title;
- (void)setBodyText:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 body:(id)arg2;

@end

