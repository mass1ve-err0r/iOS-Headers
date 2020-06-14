//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBDiagnosticRequestAlertItem : SBAlertItem
{
    CDUnknownBlockType _completionBlock;
    NSString *_title;
    NSString *_message;
}

@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_fileRadar;
- (id)_noButtonTitle;
- (id)_yesButtonTitle;
- (void)performUnlockAction;
- (_Bool)reappearsAfterLock;
- (_Bool)reappearsAfterUnlock;
- (_Bool)shouldShowInLockScreen;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;

@end

